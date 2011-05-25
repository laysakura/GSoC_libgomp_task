#ifndef _I386_H_
#define _I386_H_


#define gomp_rbarrier() asm volatile("lfence":::"memory")
#define gomp_wbarrier() asm volatile("sfence":::"memory")
#define gomp_rwbarrier() asm volatile("mfence":::"memory")


#endif /* _I386_H_ */


