################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libhugetlbfs/tests/alloc-instantiate-race.c \
../osprey/libhugetlbfs/tests/brk_near_huge.c \
../osprey/libhugetlbfs/tests/chunk-overcommit.c \
../osprey/libhugetlbfs/tests/counters.c \
../osprey/libhugetlbfs/tests/direct.c \
../osprey/libhugetlbfs/tests/dummy.c \
../osprey/libhugetlbfs/tests/empty_mounts.c \
../osprey/libhugetlbfs/tests/find_path.c \
../osprey/libhugetlbfs/tests/get_hugetlbfs_path.c \
../osprey/libhugetlbfs/tests/gethugepagesize.c \
../osprey/libhugetlbfs/tests/heap-overflow.c \
../osprey/libhugetlbfs/tests/heapshrink-helper.c \
../osprey/libhugetlbfs/tests/heapshrink.c \
../osprey/libhugetlbfs/tests/huge_at_4GB_normal_below.c \
../osprey/libhugetlbfs/tests/huge_below_4GB_normal_above.c \
../osprey/libhugetlbfs/tests/icache-hygiene.c \
../osprey/libhugetlbfs/tests/linkhuge.c \
../osprey/libhugetlbfs/tests/linkhuge_nofd.c \
../osprey/libhugetlbfs/tests/linkshare.c \
../osprey/libhugetlbfs/tests/malloc.c \
../osprey/libhugetlbfs/tests/malloc_manysmall.c \
../osprey/libhugetlbfs/tests/map_high_truncate_2.c \
../osprey/libhugetlbfs/tests/meminfo_nohuge.c \
../osprey/libhugetlbfs/tests/misalign.c \
../osprey/libhugetlbfs/tests/misaligned_offset.c \
../osprey/libhugetlbfs/tests/mlock.c \
../osprey/libhugetlbfs/tests/mmap-cow.c \
../osprey/libhugetlbfs/tests/mmap-gettest.c \
../osprey/libhugetlbfs/tests/mprotect.c \
../osprey/libhugetlbfs/tests/private.c \
../osprey/libhugetlbfs/tests/ptrace-write-hugepage.c \
../osprey/libhugetlbfs/tests/quota.c \
../osprey/libhugetlbfs/tests/readback.c \
../osprey/libhugetlbfs/tests/shared.c \
../osprey/libhugetlbfs/tests/shm-fork.c \
../osprey/libhugetlbfs/tests/shm-getraw.c \
../osprey/libhugetlbfs/tests/shm-gettest.c \
../osprey/libhugetlbfs/tests/slbpacaflush.c \
../osprey/libhugetlbfs/tests/stack_grow_into_huge.c \
../osprey/libhugetlbfs/tests/straddle_4GB.c \
../osprey/libhugetlbfs/tests/task-size-overrun.c \
../osprey/libhugetlbfs/tests/test_root.c \
../osprey/libhugetlbfs/tests/testutils.c \
../osprey/libhugetlbfs/tests/truncate.c \
../osprey/libhugetlbfs/tests/truncate_above_4GB.c \
../osprey/libhugetlbfs/tests/truncate_reserve_wraparound.c \
../osprey/libhugetlbfs/tests/truncate_sigbus_versus_oom.c \
../osprey/libhugetlbfs/tests/unlinked_fd.c \
../osprey/libhugetlbfs/tests/zero_filesize_segment.c 

OBJS += \
./osprey/libhugetlbfs/tests/alloc-instantiate-race.o \
./osprey/libhugetlbfs/tests/brk_near_huge.o \
./osprey/libhugetlbfs/tests/chunk-overcommit.o \
./osprey/libhugetlbfs/tests/counters.o \
./osprey/libhugetlbfs/tests/direct.o \
./osprey/libhugetlbfs/tests/dummy.o \
./osprey/libhugetlbfs/tests/empty_mounts.o \
./osprey/libhugetlbfs/tests/find_path.o \
./osprey/libhugetlbfs/tests/get_hugetlbfs_path.o \
./osprey/libhugetlbfs/tests/gethugepagesize.o \
./osprey/libhugetlbfs/tests/heap-overflow.o \
./osprey/libhugetlbfs/tests/heapshrink-helper.o \
./osprey/libhugetlbfs/tests/heapshrink.o \
./osprey/libhugetlbfs/tests/huge_at_4GB_normal_below.o \
./osprey/libhugetlbfs/tests/huge_below_4GB_normal_above.o \
./osprey/libhugetlbfs/tests/icache-hygiene.o \
./osprey/libhugetlbfs/tests/linkhuge.o \
./osprey/libhugetlbfs/tests/linkhuge_nofd.o \
./osprey/libhugetlbfs/tests/linkshare.o \
./osprey/libhugetlbfs/tests/malloc.o \
./osprey/libhugetlbfs/tests/malloc_manysmall.o \
./osprey/libhugetlbfs/tests/map_high_truncate_2.o \
./osprey/libhugetlbfs/tests/meminfo_nohuge.o \
./osprey/libhugetlbfs/tests/misalign.o \
./osprey/libhugetlbfs/tests/misaligned_offset.o \
./osprey/libhugetlbfs/tests/mlock.o \
./osprey/libhugetlbfs/tests/mmap-cow.o \
./osprey/libhugetlbfs/tests/mmap-gettest.o \
./osprey/libhugetlbfs/tests/mprotect.o \
./osprey/libhugetlbfs/tests/private.o \
./osprey/libhugetlbfs/tests/ptrace-write-hugepage.o \
./osprey/libhugetlbfs/tests/quota.o \
./osprey/libhugetlbfs/tests/readback.o \
./osprey/libhugetlbfs/tests/shared.o \
./osprey/libhugetlbfs/tests/shm-fork.o \
./osprey/libhugetlbfs/tests/shm-getraw.o \
./osprey/libhugetlbfs/tests/shm-gettest.o \
./osprey/libhugetlbfs/tests/slbpacaflush.o \
./osprey/libhugetlbfs/tests/stack_grow_into_huge.o \
./osprey/libhugetlbfs/tests/straddle_4GB.o \
./osprey/libhugetlbfs/tests/task-size-overrun.o \
./osprey/libhugetlbfs/tests/test_root.o \
./osprey/libhugetlbfs/tests/testutils.o \
./osprey/libhugetlbfs/tests/truncate.o \
./osprey/libhugetlbfs/tests/truncate_above_4GB.o \
./osprey/libhugetlbfs/tests/truncate_reserve_wraparound.o \
./osprey/libhugetlbfs/tests/truncate_sigbus_versus_oom.o \
./osprey/libhugetlbfs/tests/unlinked_fd.o \
./osprey/libhugetlbfs/tests/zero_filesize_segment.o 

C_DEPS += \
./osprey/libhugetlbfs/tests/alloc-instantiate-race.d \
./osprey/libhugetlbfs/tests/brk_near_huge.d \
./osprey/libhugetlbfs/tests/chunk-overcommit.d \
./osprey/libhugetlbfs/tests/counters.d \
./osprey/libhugetlbfs/tests/direct.d \
./osprey/libhugetlbfs/tests/dummy.d \
./osprey/libhugetlbfs/tests/empty_mounts.d \
./osprey/libhugetlbfs/tests/find_path.d \
./osprey/libhugetlbfs/tests/get_hugetlbfs_path.d \
./osprey/libhugetlbfs/tests/gethugepagesize.d \
./osprey/libhugetlbfs/tests/heap-overflow.d \
./osprey/libhugetlbfs/tests/heapshrink-helper.d \
./osprey/libhugetlbfs/tests/heapshrink.d \
./osprey/libhugetlbfs/tests/huge_at_4GB_normal_below.d \
./osprey/libhugetlbfs/tests/huge_below_4GB_normal_above.d \
./osprey/libhugetlbfs/tests/icache-hygiene.d \
./osprey/libhugetlbfs/tests/linkhuge.d \
./osprey/libhugetlbfs/tests/linkhuge_nofd.d \
./osprey/libhugetlbfs/tests/linkshare.d \
./osprey/libhugetlbfs/tests/malloc.d \
./osprey/libhugetlbfs/tests/malloc_manysmall.d \
./osprey/libhugetlbfs/tests/map_high_truncate_2.d \
./osprey/libhugetlbfs/tests/meminfo_nohuge.d \
./osprey/libhugetlbfs/tests/misalign.d \
./osprey/libhugetlbfs/tests/misaligned_offset.d \
./osprey/libhugetlbfs/tests/mlock.d \
./osprey/libhugetlbfs/tests/mmap-cow.d \
./osprey/libhugetlbfs/tests/mmap-gettest.d \
./osprey/libhugetlbfs/tests/mprotect.d \
./osprey/libhugetlbfs/tests/private.d \
./osprey/libhugetlbfs/tests/ptrace-write-hugepage.d \
./osprey/libhugetlbfs/tests/quota.d \
./osprey/libhugetlbfs/tests/readback.d \
./osprey/libhugetlbfs/tests/shared.d \
./osprey/libhugetlbfs/tests/shm-fork.d \
./osprey/libhugetlbfs/tests/shm-getraw.d \
./osprey/libhugetlbfs/tests/shm-gettest.d \
./osprey/libhugetlbfs/tests/slbpacaflush.d \
./osprey/libhugetlbfs/tests/stack_grow_into_huge.d \
./osprey/libhugetlbfs/tests/straddle_4GB.d \
./osprey/libhugetlbfs/tests/task-size-overrun.d \
./osprey/libhugetlbfs/tests/test_root.d \
./osprey/libhugetlbfs/tests/testutils.d \
./osprey/libhugetlbfs/tests/truncate.d \
./osprey/libhugetlbfs/tests/truncate_above_4GB.d \
./osprey/libhugetlbfs/tests/truncate_reserve_wraparound.d \
./osprey/libhugetlbfs/tests/truncate_sigbus_versus_oom.d \
./osprey/libhugetlbfs/tests/unlinked_fd.d \
./osprey/libhugetlbfs/tests/zero_filesize_segment.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libhugetlbfs/tests/%.o: ../osprey/libhugetlbfs/tests/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


