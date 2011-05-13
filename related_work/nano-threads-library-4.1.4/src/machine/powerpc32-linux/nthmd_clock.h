#ifndef NTHMD_TIMER_H
#define NTHMD_TIMER_H

typedef unsigned long nth_time_t;

static inline unsigned long long inl_read_time_base ()
{
   register unsigned long long val;
   register unsigned int val_h, val_l;
   register unsigned long long promoted_val_h, promoted_val_l;

   asm __volatile__ ("mftb  %0" : "=r" (val)  );
   asm __volatile__ ("mr    %0, %1" : "=r" (val_l) : "r" (val));
   asm __volatile__ ("sldi  %0, %1, 32" : "=r" (val_h) : "r" (val));

   promoted_val_h = ((unsigned long long) val_h) << 32;
   promoted_val_l = (unsigned long long) val_l;
   return promoted_val_h | promoted_val_l;
}


static inline nth_time_t get_hwtime ()
{
	return inl_read_time_base();
}

/* #define to use inline above */
#define get_wtime get_hwtime

#endif

