#define CO_USE_UCONEXT


#include "pcl.h"
#include "gsoc_taskqueue.h"
#include <stdio.h>


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L

__thread gsoc_task* _current_task;
gsoc_task *co_outlined_func1, *co_scheduler_loop;
gsoc_taskqueue *taskq1, *taskq2;
unsigned int num_team_task;


void gsoc_task_scheduler_loop()
{
  while (1)
    {
      /* Never return from this function.
         So the caller of this function (task scheduling point ABI)
         doesn't have to think about context switch from this funciton. */
      gsoc_task* next_task;

      printf("gsoc_task_scheduler_loop: loop start\n");

      next_task = gsoc_taskqueue_pop(taskq1);
      if (__builtin_expect(next_task == NULL, 0))
        {
          next_task = gsoc_taskqueue_take(taskq2);
          if (!next_task)
            {
              if (num_team_task == 0)
                return; /* to main */

              continue; /* try again */
            }
        }

      _current_task = next_task;
      co_call(_current_task);
    }
}

void gsoc_encounter_task_directive(void(*func)(void*), void* args)
{
  gsoc_task* child_task;

  /* printf("gsoc_encounter_task_directive(): Start\n"); */
  child_task = co_create(func, args, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  child_task->num_children = 0;
  child_task->creator = _current_task; /* creator == parent */

  /* printf("gsoc_encounter_task_directive(): Before atomic inc to num_children: %d\n", _current_task->num_children); */
  __sync_add_and_fetch(&_current_task->num_children, 1);
  __sync_add_and_fetch(&num_team_task, 1);
  /* printf("gsoc_encounter_task_directive(): After atomic inc to num_children: %d\n", _current_task->num_children); */


  printf("gsoc_encounter_task_directive(): Created a task %p\n", child_task);

  gsoc_taskqueue_push(taskq1, child_task);
}

void gsoc_encounter_taskwait_directive()
{
  if (_current_task->num_children == 0)
    /* Skip taskwait directive */
    return;

  printf("gsoc_encounter_taskwait_directive: current_task %p has %d children\n", _current_task, _current_task->num_children);

  /* This task sleeps until the last child wakes it up */
  co_call(co_scheduler_loop);
}

void gsoc_encounter_taskexit_directive()
{
  /* printf("gsoc_encounter_taskexit_directive(): Start\n"); */

  /* printf("gsoc_encounter_taskexit_directive(): Before atomic dec to parent->num_children: %d\n", _current_task->creator->num_children); */
  __sync_sub_and_fetch(&_current_task->creator->num_children, 1);
  __sync_sub_and_fetch(&num_team_task, 1);
  /* printf("gsoc_encounter_taskexit_directive(): After atomic dec to parent->num_childbren: %d\n", _current_task->creator->num_children); */
}

void outlined_func2();

void outlined_func1()
{
  printf("outlined_func1(): Start\n");

  printf("outlined_func1(): task outlined_func2()\n");
  gsoc_encounter_task_directive(outlined_func2, NULL);

  printf("outlined_func1(): task outlined_func2()\n");
  gsoc_encounter_task_directive(outlined_func2, NULL);

  printf("outlined_func1(): taskwait\n");
  gsoc_encounter_taskwait_directive();

  printf("outlined_func1(): taskexit\n");
  gsoc_encounter_taskexit_directive();
}

void outlined_func2()
{
  printf("outlined_func2(): Start\n");
  gsoc_encounter_taskexit_directive();
}

int main()
{
  taskq1 = gsoc_taskqueue_new();
  taskq2 = gsoc_taskqueue_new();

  co_vp_init(); /* Necessary to set initial value for "co_curr__" in pcl.c.
                   Without this, SEGV would happen because
                   swapcontext(co_curr__->context, co_next->context)
                   is called in pcl.c internally. */
  _current_task = NULL;

  co_scheduler_loop = co_create(gsoc_task_scheduler_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);

  co_outlined_func1 = co_create(outlined_func1, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  _current_task = co_outlined_func1;
  printf("main(): Calling task %p bound to outlined_func1()\n", _current_task);
  co_call(co_outlined_func1);

  printf("returned to main\n");

  gsoc_taskqueue_delete(taskq1);
  gsoc_taskqueue_delete(taskq2);

  return 0;
}
