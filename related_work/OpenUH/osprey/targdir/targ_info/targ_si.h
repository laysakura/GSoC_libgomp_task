/* ====================================================================
 * ====================================================================
 *
 * Description:
 *
 *   Raw processor-specific scheduling information.
 *
 *   Clients should access this information through the public interface
 *   defined in "ti_si.h".  See that interface for more detailed
 *   documentation.
 *
 *   The following variables are exported:
 *
 *   const SI_RRW SI_RRW_initializer
 *       Initial value (no resources reserved) for resource reservation
 *       entry.
 *
 *   const SI_RRW SI_RRW_overuse_mask
 *       Mask used to determine if a resource reservation entry has an
 *       overuse.
 *
 *   const INT SI_resource_count
 *       Count of elements in SI_resources array.
 *
 *   const SI_RESOURCE* const SI_resources[n]
 *       Fixed-size array of SI_RESOURCE records.
 *
 *   const SI SI_all[m]
 *       Fixed-size array of all SI records.
 *
 *   const SI_MACHINE si_machines[p]
 *       Fixed-size array of SI_MACHINE records.
 *
 *   int si_current_machine
 *       Global index into the si_machines array, defined here for
 *       convenience.
 *
 * ====================================================================
 * ====================================================================
 */

#ifndef targ_si_INCLUDED
#define targ_si_INCLUDED
#ifdef __cplusplus
extern "C" {
#endif

#ifndef defs_INCLUDED
#define defs_INCLUDED
typedef signed int INT;
typedef signed int INT32;
typedef signed long long INT64;
typedef signed char mINT8;
typedef signed short mINT16;
typedef signed int mINT32;
typedef signed long long mINT64;
typedef unsigned int UINT;
typedef unsigned int UINT32;
typedef unsigned long long UINT64;
typedef unsigned char mUINT8;
typedef unsigned short mUINT16;
typedef unsigned int mUINT32;
typedef unsigned long long mUINT64;
typedef int BOOL;
typedef unsigned char mBOOL;
#ifndef TRUE
#define TRUE    ((BOOL) 1)
#endif
#ifndef FALSE
#define FALSE   ((BOOL) 0)
#endif
#if (defined(_LANGUAGE_C) || defined(__GNUC__)) && !defined(inline)
#define inline static __inline
#endif
#endif

#include "ti_si_types.h"

extern const SI_RRW SI_RRW_initializer;
extern const SI_RRW SI_RRW_overuse_mask;

extern const INT SI_resource_count;
extern const SI_RESOURCE* const SI_resources[7];

extern const SI SI_all[182];

extern const SI_MACHINE si_machines[6];

extern int si_current_machine;

#ifdef __cplusplus
}
#endif
#endif
