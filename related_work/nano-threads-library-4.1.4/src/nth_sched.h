#ifndef NTH_SCHED_H
#define NTH_SCHED_H

#include "nth_desc.h"
#include "nth_data.h"
#include "nth_support.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct schedule_desc schedule_desc_t;

struct schedule_desc {
	char *name;
	void (*init) (void);
	nth_desc_t* (*creation_sp) (nth_desc_t *creator, nth_desc_t *new_nth_desc);
	nth_desc_t* (*finish_sp) (nth_desc_t *desc);
	nth_desc_t* (*block_sp) (nth_desc_t *desc);
	nth_desc_t* (*yield_sp) (nth_desc_t *desc);
	nth_desc_t* (*idle_sp) (nth_desc_t *desc);
	nth_desc_t* (*wakeup_sp)(nth_desc_t *current,
				 nth_desc_t *desc, int *requeue);
	nth_desc_t* (*generic_sp) (nth_desc_t *desc);
	void (*enqueue_desc) (nth_desc_t *desc);
	void (*parse_option) (char *opt, char *value);
	int  (*num_ready) (void);
};

/* current schedule policy */
extern schedule_desc_t *nth_schedule;

/* available policies */
extern schedule_desc_t default_schedule;
extern schedule_desc_t wf_schedule;
extern schedule_desc_t cilk_schedule;
extern schedule_desc_t dwf_schedule;
extern schedule_desc_t lb_schedule;

/* scheduling services */
void nth_sch_switch_to ( nth_desc_t *to );
void nth_sch_exit_to ( nth_desc_t *to );
//void nth_sch_block (  nth_uint16_t block_state );
void nth_sch_block_on_cond ( nth_uint16_t block_state, volatile nth_word_t * var, nth_word_t val );
void nth_sch_wakeup ( nth_desc_t * desc );
void nth_sch_newnth ( nth_desc_t * newnth );
void nth_sch_exitnth (void);
void nth_sch_yield (void);
void nth_sch_enqueue (nth_desc_t *desc);
void nth_sch_print_info (void);

void nth_sch_environment_options (void);
void nth_sch_init (void);

int nth_sch_generic_num_ready ( void );

/* cutoff */

typedef enum {
	NTH_CUTOFF_CREATE=0,
	NTH_CUTOFF_IMMEDIATE,
	NTH_CUTOFF_SERIALIZE,
	NTH_CUTOFF_GROUPN,
} nth_cutoff_res_t;

typedef struct {
  char *name;
  nth_cutoff_res_t (*create) (int *out1);
  void (*config) (char *value);
  void (*init) (void);
  void (*print_info) (void);
} nth_cutoff_t;

extern nth_cutoff_t *nth_curr_cutoff;

/* available cutoffs */
extern nth_cutoff_t nth_maxlevel_cutoff;
extern nth_cutoff_t nth_maxnths_cutoff;
extern nth_cutoff_t nth_maxtasks_cutoff;
extern nth_cutoff_t nth_null_cutoff;
extern nth_cutoff_t nth_serial_cutoff;
extern nth_cutoff_t nth_numready_cutoff;
extern nth_cutoff_t nth_idle_cutoff;
extern nth_cutoff_t lb_cutoff;
extern nth_cutoff_t sr_cutoff;
extern nth_cutoff_t nth_groupn_cutoff;

nth_cutoff_res_t nth_cutoff_create (int *out1);
void nth_cutoff_set ( nth_cutoff_t *cutoff, char *config );
void nth_cuttof_print_info ( void );
void nth_cutoff_init (void);

/* inline functions */

static inline int nth_sch_get_idle_kths ()
{
	int i,idles = 0;
	for ( i = 0; i < nth_data.nkths; i++ ) {
	        if ( !nth_data.kth_myself[i] || nth_data.kth_myself[i]->idle ) {
                        idles++;
                }
	}

	return idles;
}

extern nth_word_t nth_sch_num_ready[NTH_MAX_LEVEL+1];
static inline nth_word_t nth_sch_get_numready_level (nth_word_t level)
{
	return nth_sch_num_ready[nth_min(level,NTH_MAX_LEVEL)];
}

#ifdef __cplusplus
}
#endif

#endif
