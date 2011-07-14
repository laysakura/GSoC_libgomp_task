#include <string.h>
#include "topcode.h"
#include "targ_isa_print.h"


const ISA_PRINT_INFO ISA_PRINT_info[130] = {
  { "", {
 ISA_PRINT_COMP_end } },	/* print_NULL[0] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* imul[0] */
                    ISA_PRINT_COMP_opnd+1,	/* imul[1] */
                    ISA_PRINT_COMP_opnd,	/* imul[2] */
                    ISA_PRINT_COMP_end } },	/* imul[3] */
  { "%s %s", {
 ISA_PRINT_COMP_name,	/* op1[0] */
                    ISA_PRINT_COMP_opnd+1,	/* op1[1] */
                    ISA_PRINT_COMP_end } },	/* op1[2] */
  { "%s %s", {
 ISA_PRINT_COMP_name,	/* op2[0] */
                    ISA_PRINT_COMP_opnd+2,	/* op2[1] */
                    ISA_PRINT_COMP_end } },	/* op2[2] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* cmp[0] */
                    ISA_PRINT_COMP_opnd+1,	/* cmp[1] */
                    ISA_PRINT_COMP_opnd,	/* cmp[2] */
                    ISA_PRINT_COMP_end } },	/* cmp[3] */
  { "%s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* cmpx[0] */
                    ISA_PRINT_COMP_segment,	/* cmpx[1] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpx[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpx[4] */
                    ISA_PRINT_COMP_end } },	/* cmpx[5] */
  { "%s %s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* cmpxr[0] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxr[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxr[2] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxr[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpxr[4] */
                    ISA_PRINT_COMP_end } },	/* cmpxr[5] */
  { "%s %s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* cmpxi[0] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxi[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxi[2] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxi[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpxi[4] */
                    ISA_PRINT_COMP_end } },	/* cmpxi[5] */
  { "%s %s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* cmpxx[0] */
                    ISA_PRINT_COMP_segment,	/* cmpxx[1] */
                    ISA_PRINT_COMP_opnd+4,	/* cmpxx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxx[4] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxx[5] */
                    ISA_PRINT_COMP_opnd,	/* cmpxx[6] */
                    ISA_PRINT_COMP_end } },	/* cmpxx[7] */
  { "%s %s,%s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* cmpxxr[0] */
                    ISA_PRINT_COMP_opnd+4,	/* cmpxxr[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxxr[2] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxxr[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpxxr[4] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxxr[5] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxxr[6] */
                    ISA_PRINT_COMP_end } },	/* cmpxxr[7] */
  { "%s %s,%s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* cmpxxi[0] */
                    ISA_PRINT_COMP_opnd+4,	/* cmpxxi[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxxi[2] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxxi[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpxxi[4] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxxi[5] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxxi[6] */
                    ISA_PRINT_COMP_end } },	/* cmpxxi[7] */
  { "%s %s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* cmpxxx[0] */
                    ISA_PRINT_COMP_segment,	/* cmpxxx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxxx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxxx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxxx[4] */
                    ISA_PRINT_COMP_opnd,	/* cmpxxx[5] */
                    ISA_PRINT_COMP_end } },	/* cmpxxx[6] */
  { "%s %s,%s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* cmpxxxr[0] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxxxr[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxxxr[2] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxxxr[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpxxxr[4] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxxxr[5] */
                    ISA_PRINT_COMP_end } },	/* cmpxxxr[6] */
  { "%s %s,%s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* cmpxxxi[0] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxxxi[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxxxi[2] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxxxi[3] */
                    ISA_PRINT_COMP_opnd,	/* cmpxxxi[4] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxxxi[5] */
                    ISA_PRINT_COMP_end } },	/* cmpxxxi[6] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* ropop[0] */
                    ISA_PRINT_COMP_opnd+1,	/* ropop[1] */
                    ISA_PRINT_COMP_result,	/* ropop[2] */
                    ISA_PRINT_COMP_opnd,	/* ropop[3] */
                    ISA_PRINT_COMP_end } },	/* ropop[4] */
  { "%s %s%s(%s)", {
 ISA_PRINT_COMP_name,	/* unarybase[0] */
                    ISA_PRINT_COMP_segment,	/* unarybase[1] */
                    ISA_PRINT_COMP_opnd+1,	/* unarybase[2] */
                    ISA_PRINT_COMP_opnd,	/* unarybase[3] */
                    ISA_PRINT_COMP_end } },	/* unarybase[4] */
  { "%s %s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* unarybaseindex[0] */
                    ISA_PRINT_COMP_segment,	/* unarybaseindex[1] */
                    ISA_PRINT_COMP_opnd+1,	/* unarybaseindex[2] */
                    ISA_PRINT_COMP_opnd,	/* unarybaseindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* unarybaseindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* unarybaseindex[5] */
                    ISA_PRINT_COMP_end } },	/* unarybaseindex[6] */
  { "%s %s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* unaryindex[0] */
                    ISA_PRINT_COMP_segment,	/* unaryindex[1] */
                    ISA_PRINT_COMP_opnd+2,	/* unaryindex[2] */
                    ISA_PRINT_COMP_opnd,	/* unaryindex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* unaryindex[4] */
                    ISA_PRINT_COMP_end } },	/* unaryindex[5] */
  { "%s %s", {
 ISA_PRINT_COMP_name,	/* unarymem_n32[0] */
                    ISA_PRINT_COMP_opnd,	/* unarymem_n32[1] */
                    ISA_PRINT_COMP_end } },	/* unarymem_n32[2] */
  { "%s %s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* resbase[0] */
                    ISA_PRINT_COMP_opnd,	/* resbase[1] */
                    ISA_PRINT_COMP_segment,	/* resbase[2] */
                    ISA_PRINT_COMP_opnd+2,	/* resbase[3] */
                    ISA_PRINT_COMP_opnd+1,	/* resbase[4] */
                    ISA_PRINT_COMP_end } },	/* resbase[5] */
  { "%s %s,%s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* resbaseindex[0] */
                    ISA_PRINT_COMP_opnd,	/* resbaseindex[1] */
                    ISA_PRINT_COMP_segment,	/* resbaseindex[2] */
                    ISA_PRINT_COMP_opnd+2,	/* resbaseindex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* resbaseindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* resbaseindex[5] */
                    ISA_PRINT_COMP_opnd+4,	/* resbaseindex[6] */
                    ISA_PRINT_COMP_end } },	/* resbaseindex[7] */
  { "%s %s,%s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* resindex[0] */
                    ISA_PRINT_COMP_opnd,	/* resindex[1] */
                    ISA_PRINT_COMP_segment,	/* resindex[2] */
                    ISA_PRINT_COMP_opnd+3,	/* resindex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* resindex[4] */
                    ISA_PRINT_COMP_opnd+2,	/* resindex[5] */
                    ISA_PRINT_COMP_end } },	/* resindex[6] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* resmem_n32[0] */
                    ISA_PRINT_COMP_opnd,	/* resmem_n32[1] */
                    ISA_PRINT_COMP_opnd+1,	/* resmem_n32[2] */
                    ISA_PRINT_COMP_end } },	/* resmem_n32[3] */
  { "%s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* ropmem[0] */
                    ISA_PRINT_COMP_segment,	/* ropmem[1] */
                    ISA_PRINT_COMP_opnd+2,	/* ropmem[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropmem[3] */
                    ISA_PRINT_COMP_result,	/* ropmem[4] */
                    ISA_PRINT_COMP_opnd,	/* ropmem[5] */
                    ISA_PRINT_COMP_end } },	/* ropmem[6] */
  { "%s %s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* ropmemindex[0] */
                    ISA_PRINT_COMP_segment,	/* ropmemindex[1] */
                    ISA_PRINT_COMP_opnd+4,	/* ropmemindex[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropmemindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ropmemindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* ropmemindex[5] */
                    ISA_PRINT_COMP_result,	/* ropmemindex[6] */
                    ISA_PRINT_COMP_opnd,	/* ropmemindex[7] */
                    ISA_PRINT_COMP_end } },	/* ropmemindex[8] */
  { "%s %s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* ropmemindexx[0] */
                    ISA_PRINT_COMP_segment,	/* ropmemindexx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* ropmemindexx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropmemindexx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ropmemindexx[4] */
                    ISA_PRINT_COMP_result,	/* ropmemindexx[5] */
                    ISA_PRINT_COMP_opnd,	/* ropmemindexx[6] */
                    ISA_PRINT_COMP_end } },	/* ropmemindexx[7] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* rblendv[0] */
                    ISA_PRINT_COMP_opnd+2,	/* rblendv[1] */
                    ISA_PRINT_COMP_result,	/* rblendv[2] */
                    ISA_PRINT_COMP_opnd,	/* rblendv[3] */
                    ISA_PRINT_COMP_end } },	/* rblendv[4] */
  { "%s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* rblendvmem[0] */
                    ISA_PRINT_COMP_opnd+3,	/* rblendvmem[1] */
                    ISA_PRINT_COMP_opnd+2,	/* rblendvmem[2] */
                    ISA_PRINT_COMP_result,	/* rblendvmem[3] */
                    ISA_PRINT_COMP_opnd,	/* rblendvmem[4] */
                    ISA_PRINT_COMP_end } },	/* rblendvmem[5] */
  { "%s %s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* rblendvmemindex[0] */
                    ISA_PRINT_COMP_opnd+5,	/* rblendvmemindex[1] */
                    ISA_PRINT_COMP_opnd+2,	/* rblendvmemindex[2] */
                    ISA_PRINT_COMP_opnd+3,	/* rblendvmemindex[3] */
                    ISA_PRINT_COMP_opnd+4,	/* rblendvmemindex[4] */
                    ISA_PRINT_COMP_result,	/* rblendvmemindex[5] */
                    ISA_PRINT_COMP_opnd,	/* rblendvmemindex[6] */
                    ISA_PRINT_COMP_end } },	/* rblendvmemindex[7] */
  { "%s %s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* rblendvmemindexx[0] */
                    ISA_PRINT_COMP_opnd+4,	/* rblendvmemindexx[1] */
                    ISA_PRINT_COMP_opnd+2,	/* rblendvmemindexx[2] */
                    ISA_PRINT_COMP_opnd+3,	/* rblendvmemindexx[3] */
                    ISA_PRINT_COMP_result,	/* rblendvmemindexx[4] */
                    ISA_PRINT_COMP_opnd,	/* rblendvmemindexx[5] */
                    ISA_PRINT_COMP_end } },	/* rblendvmemindexx[6] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* ropopop[0] */
                    ISA_PRINT_COMP_opnd+2,	/* ropopop[1] */
                    ISA_PRINT_COMP_opnd+1,	/* ropopop[2] */
                    ISA_PRINT_COMP_result,	/* ropopop[3] */
                    ISA_PRINT_COMP_opnd,	/* ropopop[4] */
                    ISA_PRINT_COMP_end } },	/* ropopop[5] */
  { "%s %s%s(%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* ropmemop[0] */
                    ISA_PRINT_COMP_segment,	/* ropmemop[1] */
                    ISA_PRINT_COMP_opnd+2,	/* ropmemop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropmemop[3] */
                    ISA_PRINT_COMP_opnd+3,	/* ropmemop[4] */
                    ISA_PRINT_COMP_result,	/* ropmemop[5] */
                    ISA_PRINT_COMP_opnd,	/* ropmemop[6] */
                    ISA_PRINT_COMP_end } },	/* ropmemop[7] */
  { "%s %s%s(%s,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* ropmemindexop[0] */
                    ISA_PRINT_COMP_segment,	/* ropmemindexop[1] */
                    ISA_PRINT_COMP_opnd+4,	/* ropmemindexop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropmemindexop[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ropmemindexop[4] */
                    ISA_PRINT_COMP_opnd+3,	/* ropmemindexop[5] */
                    ISA_PRINT_COMP_opnd+5,	/* ropmemindexop[6] */
                    ISA_PRINT_COMP_result,	/* ropmemindexop[7] */
                    ISA_PRINT_COMP_opnd,	/* ropmemindexop[8] */
                    ISA_PRINT_COMP_end } },	/* ropmemindexop[9] */
  { "%s %s%s(,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* ropmemindexxop[0] */
                    ISA_PRINT_COMP_segment,	/* ropmemindexxop[1] */
                    ISA_PRINT_COMP_opnd+3,	/* ropmemindexxop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* ropmemindexxop[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ropmemindexxop[4] */
                    ISA_PRINT_COMP_opnd+4,	/* ropmemindexxop[5] */
                    ISA_PRINT_COMP_result,	/* ropmemindexxop[6] */
                    ISA_PRINT_COMP_opnd,	/* ropmemindexxop[7] */
                    ISA_PRINT_COMP_end } },	/* ropmemindexxop[8] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vropspec[0] */
                    ISA_PRINT_COMP_opnd,	/* vropspec[1] */
                    ISA_PRINT_COMP_result,	/* vropspec[2] */
                    ISA_PRINT_COMP_result,	/* vropspec[3] */
                    ISA_PRINT_COMP_end } },	/* vropspec[4] */
  { "%s %s%s(%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropspecmem[0] */
                    ISA_PRINT_COMP_segment,	/* vropspecmem[1] */
                    ISA_PRINT_COMP_opnd+1,	/* vropspecmem[2] */
                    ISA_PRINT_COMP_opnd,	/* vropspecmem[3] */
                    ISA_PRINT_COMP_result,	/* vropspecmem[4] */
                    ISA_PRINT_COMP_result,	/* vropspecmem[5] */
                    ISA_PRINT_COMP_end } },	/* vropspecmem[6] */
  { "%s %s%s(%s,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropspecmemindex[0] */
                    ISA_PRINT_COMP_segment,	/* vropspecmemindex[1] */
                    ISA_PRINT_COMP_opnd+3,	/* vropspecmemindex[2] */
                    ISA_PRINT_COMP_opnd,	/* vropspecmemindex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* vropspecmemindex[4] */
                    ISA_PRINT_COMP_opnd+2,	/* vropspecmemindex[5] */
                    ISA_PRINT_COMP_result,	/* vropspecmemindex[6] */
                    ISA_PRINT_COMP_result,	/* vropspecmemindex[7] */
                    ISA_PRINT_COMP_end } },	/* vropspecmemindex[8] */
  { "%s %s%s(,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropspecmemindexx[0] */
                    ISA_PRINT_COMP_segment,	/* vropspecmemindexx[1] */
                    ISA_PRINT_COMP_opnd+2,	/* vropspecmemindexx[2] */
                    ISA_PRINT_COMP_opnd,	/* vropspecmemindexx[3] */
                    ISA_PRINT_COMP_opnd+1,	/* vropspecmemindexx[4] */
                    ISA_PRINT_COMP_result,	/* vropspecmemindexx[5] */
                    ISA_PRINT_COMP_result,	/* vropspecmemindexx[6] */
                    ISA_PRINT_COMP_end } },	/* vropspecmemindexx[7] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vropop[0] */
                    ISA_PRINT_COMP_opnd+1,	/* vropop[1] */
                    ISA_PRINT_COMP_opnd,	/* vropop[2] */
                    ISA_PRINT_COMP_result,	/* vropop[3] */
                    ISA_PRINT_COMP_end } },	/* vropop[4] */
  { "%s %s%s(%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropmem[0] */
                    ISA_PRINT_COMP_segment,	/* vropmem[1] */
                    ISA_PRINT_COMP_opnd+2,	/* vropmem[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vropmem[3] */
                    ISA_PRINT_COMP_opnd,	/* vropmem[4] */
                    ISA_PRINT_COMP_result,	/* vropmem[5] */
                    ISA_PRINT_COMP_end } },	/* vropmem[6] */
  { "%s %s,%s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* vrmemop[0] */
                    ISA_PRINT_COMP_opnd+2,	/* vrmemop[1] */
                    ISA_PRINT_COMP_segment,	/* vrmemop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vrmemop[3] */
                    ISA_PRINT_COMP_opnd,	/* vrmemop[4] */
                    ISA_PRINT_COMP_result,	/* vrmemop[5] */
                    ISA_PRINT_COMP_end } },	/* vrmemop[6] */
  { "%s %s%s(%s,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropmemindex[0] */
                    ISA_PRINT_COMP_segment,	/* vropmemindex[1] */
                    ISA_PRINT_COMP_opnd+4,	/* vropmemindex[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vropmemindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* vropmemindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* vropmemindex[5] */
                    ISA_PRINT_COMP_opnd,	/* vropmemindex[6] */
                    ISA_PRINT_COMP_result,	/* vropmemindex[7] */
                    ISA_PRINT_COMP_end } },	/* vropmemindex[8] */
  { "%s %s,%s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* vrmemindexop[0] */
                    ISA_PRINT_COMP_opnd+4,	/* vrmemindexop[1] */
                    ISA_PRINT_COMP_segment,	/* vrmemindexop[2] */
                    ISA_PRINT_COMP_opnd+3,	/* vrmemindexop[3] */
                    ISA_PRINT_COMP_opnd,	/* vrmemindexop[4] */
                    ISA_PRINT_COMP_opnd+1,	/* vrmemindexop[5] */
                    ISA_PRINT_COMP_opnd+2,	/* vrmemindexop[6] */
                    ISA_PRINT_COMP_result,	/* vrmemindexop[7] */
                    ISA_PRINT_COMP_end } },	/* vrmemindexop[8] */
  { "%s %s%s(,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropmemindexx[0] */
                    ISA_PRINT_COMP_segment,	/* vropmemindexx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* vropmemindexx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vropmemindexx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* vropmemindexx[4] */
                    ISA_PRINT_COMP_opnd,	/* vropmemindexx[5] */
                    ISA_PRINT_COMP_result,	/* vropmemindexx[6] */
                    ISA_PRINT_COMP_end } },	/* vropmemindexx[7] */
  { "%s %s,%s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* vrmemindexxop[0] */
                    ISA_PRINT_COMP_opnd+3,	/* vrmemindexxop[1] */
                    ISA_PRINT_COMP_segment,	/* vrmemindexxop[2] */
                    ISA_PRINT_COMP_opnd+2,	/* vrmemindexxop[3] */
                    ISA_PRINT_COMP_opnd,	/* vrmemindexxop[4] */
                    ISA_PRINT_COMP_opnd+1,	/* vrmemindexxop[5] */
                    ISA_PRINT_COMP_result,	/* vrmemindexxop[6] */
                    ISA_PRINT_COMP_end } },	/* vrmemindexxop[7] */
  { "%s %s,%s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vropopimm[0] */
                    ISA_PRINT_COMP_opnd+2,	/* vropopimm[1] */
                    ISA_PRINT_COMP_opnd+1,	/* vropopimm[2] */
                    ISA_PRINT_COMP_opnd,	/* vropopimm[3] */
                    ISA_PRINT_COMP_result,	/* vropopimm[4] */
                    ISA_PRINT_COMP_end } },	/* vropopimm[5] */
  { "%s %s,%s%s(%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropmemop[0] */
                    ISA_PRINT_COMP_opnd+3,	/* vropmemop[1] */
                    ISA_PRINT_COMP_segment,	/* vropmemop[2] */
                    ISA_PRINT_COMP_opnd+2,	/* vropmemop[3] */
                    ISA_PRINT_COMP_opnd+1,	/* vropmemop[4] */
                    ISA_PRINT_COMP_opnd,	/* vropmemop[5] */
                    ISA_PRINT_COMP_result,	/* vropmemop[6] */
                    ISA_PRINT_COMP_end } },	/* vropmemop[7] */
  { "%s %s,%s%s(%s,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropmemindexop[0] */
                    ISA_PRINT_COMP_opnd+3,	/* vropmemindexop[1] */
                    ISA_PRINT_COMP_segment,	/* vropmemindexop[2] */
                    ISA_PRINT_COMP_opnd+4,	/* vropmemindexop[3] */
                    ISA_PRINT_COMP_opnd+1,	/* vropmemindexop[4] */
                    ISA_PRINT_COMP_opnd+2,	/* vropmemindexop[5] */
                    ISA_PRINT_COMP_opnd,	/* vropmemindexop[6] */
                    ISA_PRINT_COMP_result,	/* vropmemindexop[7] */
                    ISA_PRINT_COMP_end } },	/* vropmemindexop[8] */
  { "%s %s,%s%s(,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vropmemindexxop[0] */
                    ISA_PRINT_COMP_opnd+4,	/* vropmemindexxop[1] */
                    ISA_PRINT_COMP_segment,	/* vropmemindexxop[2] */
                    ISA_PRINT_COMP_opnd+3,	/* vropmemindexxop[3] */
                    ISA_PRINT_COMP_opnd+1,	/* vropmemindexxop[4] */
                    ISA_PRINT_COMP_opnd+2,	/* vropmemindexxop[5] */
                    ISA_PRINT_COMP_opnd,	/* vropmemindexxop[6] */
                    ISA_PRINT_COMP_result,	/* vropmemindexxop[7] */
                    ISA_PRINT_COMP_end } },	/* vropmemindexxop[8] */
  { "%s %s%s(%s),%s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vropopmem[0] */
                    ISA_PRINT_COMP_segment,	/* vropopmem[1] */
                    ISA_PRINT_COMP_opnd+3,	/* vropopmem[2] */
                    ISA_PRINT_COMP_opnd+2,	/* vropopmem[3] */
                    ISA_PRINT_COMP_opnd+1,	/* vropopmem[4] */
                    ISA_PRINT_COMP_opnd,	/* vropopmem[5] */
                    ISA_PRINT_COMP_result,	/* vropopmem[6] */
                    ISA_PRINT_COMP_end } },	/* vropopmem[7] */
  { "%s %s%s(%s,%s,%s),%s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vropopmemindex[0] */
                    ISA_PRINT_COMP_segment,	/* vropopmemindex[1] */
                    ISA_PRINT_COMP_opnd+5,	/* vropopmemindex[2] */
                    ISA_PRINT_COMP_opnd+2,	/* vropopmemindex[3] */
                    ISA_PRINT_COMP_opnd+3,	/* vropopmemindex[4] */
                    ISA_PRINT_COMP_opnd+4,	/* vropopmemindex[5] */
                    ISA_PRINT_COMP_opnd+1,	/* vropopmemindex[6] */
                    ISA_PRINT_COMP_opnd,	/* vropopmemindex[7] */
                    ISA_PRINT_COMP_result,	/* vropopmemindex[8] */
                    ISA_PRINT_COMP_end } },	/* vropopmemindex[9] */
  { "%s %s%s(,%s,%s),%s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vropopmemindexx[0] */
                    ISA_PRINT_COMP_segment,	/* vropopmemindexx[1] */
                    ISA_PRINT_COMP_opnd+4,	/* vropopmemindexx[2] */
                    ISA_PRINT_COMP_opnd+2,	/* vropopmemindexx[3] */
                    ISA_PRINT_COMP_opnd+3,	/* vropopmemindexx[4] */
                    ISA_PRINT_COMP_opnd+1,	/* vropopmemindexx[5] */
                    ISA_PRINT_COMP_opnd,	/* vropopmemindexx[6] */
                    ISA_PRINT_COMP_result,	/* vropopmemindexx[7] */
                    ISA_PRINT_COMP_end } },	/* vropopmemindexx[8] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* round[0] */
                    ISA_PRINT_COMP_opnd+1,	/* round[1] */
                    ISA_PRINT_COMP_opnd,	/* round[2] */
                    ISA_PRINT_COMP_result,	/* round[3] */
                    ISA_PRINT_COMP_end } },	/* round[4] */
  { "%s %s,%s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* roundmem[0] */
                    ISA_PRINT_COMP_opnd+2,	/* roundmem[1] */
                    ISA_PRINT_COMP_segment,	/* roundmem[2] */
                    ISA_PRINT_COMP_opnd+1,	/* roundmem[3] */
                    ISA_PRINT_COMP_opnd,	/* roundmem[4] */
                    ISA_PRINT_COMP_result,	/* roundmem[5] */
                    ISA_PRINT_COMP_end } },	/* roundmem[6] */
  { "%s %s,%s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* roundmemindex[0] */
                    ISA_PRINT_COMP_opnd+4,	/* roundmemindex[1] */
                    ISA_PRINT_COMP_segment,	/* roundmemindex[2] */
                    ISA_PRINT_COMP_opnd+3,	/* roundmemindex[3] */
                    ISA_PRINT_COMP_opnd,	/* roundmemindex[4] */
                    ISA_PRINT_COMP_opnd+1,	/* roundmemindex[5] */
                    ISA_PRINT_COMP_opnd+2,	/* roundmemindex[6] */
                    ISA_PRINT_COMP_result,	/* roundmemindex[7] */
                    ISA_PRINT_COMP_end } },	/* roundmemindex[8] */
  { "%s %s,%s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* roundmemindexx[0] */
                    ISA_PRINT_COMP_opnd+3,	/* roundmemindexx[1] */
                    ISA_PRINT_COMP_segment,	/* roundmemindexx[2] */
                    ISA_PRINT_COMP_opnd+2,	/* roundmemindexx[3] */
                    ISA_PRINT_COMP_opnd,	/* roundmemindexx[4] */
                    ISA_PRINT_COMP_opnd+1,	/* roundmemindexx[5] */
                    ISA_PRINT_COMP_result,	/* roundmemindexx[6] */
                    ISA_PRINT_COMP_end } },	/* roundmemindexx[7] */
  { "%s %s,%s,%s,%s", {
 ISA_PRINT_COMP_name,	/* avxrounds[0] */
                    ISA_PRINT_COMP_opnd+2,	/* avxrounds[1] */
                    ISA_PRINT_COMP_opnd+1,	/* avxrounds[2] */
                    ISA_PRINT_COMP_opnd,	/* avxrounds[3] */
                    ISA_PRINT_COMP_result,	/* avxrounds[4] */
                    ISA_PRINT_COMP_end } },	/* avxrounds[5] */
  { "%s %s,%s%s(%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* avxroundsmem[0] */
                    ISA_PRINT_COMP_opnd+3,	/* avxroundsmem[1] */
                    ISA_PRINT_COMP_segment,	/* avxroundsmem[2] */
                    ISA_PRINT_COMP_opnd+2,	/* avxroundsmem[3] */
                    ISA_PRINT_COMP_opnd+1,	/* avxroundsmem[4] */
                    ISA_PRINT_COMP_opnd,	/* avxroundsmem[5] */
                    ISA_PRINT_COMP_result,	/* avxroundsmem[6] */
                    ISA_PRINT_COMP_end } },	/* avxroundsmem[7] */
  { "%s %s,%s%s(%s,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* avxroundsmemindex[0] */
                    ISA_PRINT_COMP_opnd+5,	/* avxroundsmemindex[1] */
                    ISA_PRINT_COMP_segment,	/* avxroundsmemindex[2] */
                    ISA_PRINT_COMP_opnd+4,	/* avxroundsmemindex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* avxroundsmemindex[4] */
                    ISA_PRINT_COMP_opnd+2,	/* avxroundsmemindex[5] */
                    ISA_PRINT_COMP_opnd+3,	/* avxroundsmemindex[6] */
                    ISA_PRINT_COMP_opnd,	/* avxroundsmemindex[7] */
                    ISA_PRINT_COMP_result,	/* avxroundsmemindex[8] */
                    ISA_PRINT_COMP_end } },	/* avxroundsmemindex[9] */
  { "%s %s,%s%s(,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* avxroundsmemindexx[0] */
                    ISA_PRINT_COMP_opnd+4,	/* avxroundsmemindexx[1] */
                    ISA_PRINT_COMP_segment,	/* avxroundsmemindexx[2] */
                    ISA_PRINT_COMP_opnd+3,	/* avxroundsmemindexx[3] */
                    ISA_PRINT_COMP_opnd+1,	/* avxroundsmemindexx[4] */
                    ISA_PRINT_COMP_opnd+2,	/* avxroundsmemindexx[5] */
                    ISA_PRINT_COMP_opnd,	/* avxroundsmemindexx[6] */
                    ISA_PRINT_COMP_result,	/* avxroundsmemindexx[7] */
                    ISA_PRINT_COMP_end } },	/* avxroundsmemindexx[8] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* pcmpestr[0] */
                    ISA_PRINT_COMP_opnd+4,	/* pcmpestr[1] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpestr[2] */
                    ISA_PRINT_COMP_opnd,	/* pcmpestr[3] */
                    ISA_PRINT_COMP_end } },	/* pcmpestr[4] */
  { "%s %s,%s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* pcmpestrmem[0] */
                    ISA_PRINT_COMP_opnd+5,	/* pcmpestrmem[1] */
                    ISA_PRINT_COMP_segment,	/* pcmpestrmem[2] */
                    ISA_PRINT_COMP_opnd+3,	/* pcmpestrmem[3] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpestrmem[4] */
                    ISA_PRINT_COMP_opnd,	/* pcmpestrmem[5] */
                    ISA_PRINT_COMP_end } },	/* pcmpestrmem[6] */
  { "%s %s,%s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* pcmpestrmemindex[0] */
                    ISA_PRINT_COMP_opnd+7,	/* pcmpestrmemindex[1] */
                    ISA_PRINT_COMP_segment,	/* pcmpestrmemindex[2] */
                    ISA_PRINT_COMP_opnd+5,	/* pcmpestrmemindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpestrmemindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* pcmpestrmemindex[5] */
                    ISA_PRINT_COMP_opnd+4,	/* pcmpestrmemindex[6] */
                    ISA_PRINT_COMP_opnd,	/* pcmpestrmemindex[7] */
                    ISA_PRINT_COMP_end } },	/* pcmpestrmemindex[8] */
  { "%s %s,%s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* pcmpestrmemindexx[0] */
                    ISA_PRINT_COMP_opnd+6,	/* pcmpestrmemindexx[1] */
                    ISA_PRINT_COMP_segment,	/* pcmpestrmemindexx[2] */
                    ISA_PRINT_COMP_opnd+4,	/* pcmpestrmemindexx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpestrmemindexx[4] */
                    ISA_PRINT_COMP_opnd+3,	/* pcmpestrmemindexx[5] */
                    ISA_PRINT_COMP_opnd,	/* pcmpestrmemindexx[6] */
                    ISA_PRINT_COMP_end } },	/* pcmpestrmemindexx[7] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* pcmpistr[0] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpistr[1] */
                    ISA_PRINT_COMP_opnd+1,	/* pcmpistr[2] */
                    ISA_PRINT_COMP_opnd,	/* pcmpistr[3] */
                    ISA_PRINT_COMP_end } },	/* pcmpistr[4] */
  { "%s %s,%s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* pcmpistrmem[0] */
                    ISA_PRINT_COMP_opnd+3,	/* pcmpistrmem[1] */
                    ISA_PRINT_COMP_segment,	/* pcmpistrmem[2] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpistrmem[3] */
                    ISA_PRINT_COMP_opnd+1,	/* pcmpistrmem[4] */
                    ISA_PRINT_COMP_opnd,	/* pcmpistrmem[5] */
                    ISA_PRINT_COMP_end } },	/* pcmpistrmem[6] */
  { "%s %s,%s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* pcmpistrmemindex[0] */
                    ISA_PRINT_COMP_opnd+5,	/* pcmpistrmemindex[1] */
                    ISA_PRINT_COMP_segment,	/* pcmpistrmemindex[2] */
                    ISA_PRINT_COMP_opnd+4,	/* pcmpistrmemindex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* pcmpistrmemindex[4] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpistrmemindex[5] */
                    ISA_PRINT_COMP_opnd+3,	/* pcmpistrmemindex[6] */
                    ISA_PRINT_COMP_opnd,	/* pcmpistrmemindex[7] */
                    ISA_PRINT_COMP_end } },	/* pcmpistrmemindex[8] */
  { "%s %s,%s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* pcmpistrmemindexx[0] */
                    ISA_PRINT_COMP_opnd+4,	/* pcmpistrmemindexx[1] */
                    ISA_PRINT_COMP_segment,	/* pcmpistrmemindexx[2] */
                    ISA_PRINT_COMP_opnd+3,	/* pcmpistrmemindexx[3] */
                    ISA_PRINT_COMP_opnd+1,	/* pcmpistrmemindexx[4] */
                    ISA_PRINT_COMP_opnd+2,	/* pcmpistrmemindexx[5] */
                    ISA_PRINT_COMP_opnd,	/* pcmpistrmemindexx[6] */
                    ISA_PRINT_COMP_end } },	/* pcmpistrmemindexx[7] */
  { "%s %s", {
 ISA_PRINT_COMP_name,	/* op0[0] */
                    ISA_PRINT_COMP_opnd,	/* op0[1] */
                    ISA_PRINT_COMP_end } },	/* op0[2] */
  { "%s %s%s(%s)", {
 ISA_PRINT_COMP_name,	/* opop[0] */
                    ISA_PRINT_COMP_segment,	/* opop[1] */
                    ISA_PRINT_COMP_opnd+1,	/* opop[2] */
                    ISA_PRINT_COMP_opnd,	/* opop[3] */
                    ISA_PRINT_COMP_end } },	/* opop[4] */
  { "%s %s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* opopopop[0] */
                    ISA_PRINT_COMP_opnd+3,	/* opopopop[1] */
                    ISA_PRINT_COMP_opnd,	/* opopopop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* opopopop[3] */
                    ISA_PRINT_COMP_opnd+2,	/* opopopop[4] */
                    ISA_PRINT_COMP_end } },	/* opopopop[5] */
  { "%s %s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* opopop[0] */
                    ISA_PRINT_COMP_opnd+2,	/* opopop[1] */
                    ISA_PRINT_COMP_opnd,	/* opopop[2] */
                    ISA_PRINT_COMP_opnd+1,	/* opopop[3] */
                    ISA_PRINT_COMP_end } },	/* opopop[4] */
  { "%s %s", {
 ISA_PRINT_COMP_name,	/* opop[0] */
                    ISA_PRINT_COMP_opnd+1,	/* opop[1] */
                    ISA_PRINT_COMP_opnd,	/* opop[2] */
                    ISA_PRINT_COMP_end } },	/* opop[3] */
  { "%s %s", {
 ISA_PRINT_COMP_name,	/* r[0] */
                    ISA_PRINT_COMP_result,	/* r[1] */
                    ISA_PRINT_COMP_end } },	/* r[2] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* rr[0] */
                    ISA_PRINT_COMP_result,	/* rr[1] */
                    ISA_PRINT_COMP_result,	/* rr[2] */
                    ISA_PRINT_COMP_end } },	/* rr[3] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* vrr[0] */
                    ISA_PRINT_COMP_result,	/* vrr[1] */
                    ISA_PRINT_COMP_result,	/* vrr[2] */
                    ISA_PRINT_COMP_result,	/* vrr[3] */
                    ISA_PRINT_COMP_end } },	/* vrr[4] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* rop[0] */
                    ISA_PRINT_COMP_opnd,	/* rop[1] */
                    ISA_PRINT_COMP_result,	/* rop[2] */
                    ISA_PRINT_COMP_end } },	/* rop[3] */
  { "%s %s %s,%s", {
 ISA_PRINT_COMP_name,	/* rop2[0] */
                    ISA_PRINT_COMP_opnd+1,	/* rop2[1] */
                    ISA_PRINT_COMP_opnd,	/* rop2[2] */
                    ISA_PRINT_COMP_result,	/* rop2[3] */
                    ISA_PRINT_COMP_end } },	/* rop2[4] */
  { "%s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* rmem[0] */
                    ISA_PRINT_COMP_segment,	/* rmem[1] */
                    ISA_PRINT_COMP_opnd+1,	/* rmem[2] */
                    ISA_PRINT_COMP_opnd,	/* rmem[3] */
                    ISA_PRINT_COMP_result,	/* rmem[4] */
                    ISA_PRINT_COMP_end } },	/* rmem[5] */
  { "%s %s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* rmemindex[0] */
                    ISA_PRINT_COMP_opnd+3,	/* rmemindex[1] */
                    ISA_PRINT_COMP_opnd,	/* rmemindex[2] */
                    ISA_PRINT_COMP_opnd+1,	/* rmemindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* rmemindex[4] */
                    ISA_PRINT_COMP_result,	/* rmemindex[5] */
                    ISA_PRINT_COMP_end } },	/* rmemindex[6] */
  { "%s %s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* rmemindexx[0] */
                    ISA_PRINT_COMP_opnd+2,	/* rmemindexx[1] */
                    ISA_PRINT_COMP_opnd,	/* rmemindexx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* rmemindexx[3] */
                    ISA_PRINT_COMP_result,	/* rmemindexx[4] */
                    ISA_PRINT_COMP_end } },	/* rmemindexx[5] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* opop1[0] */
                    ISA_PRINT_COMP_opnd,	/* opop1[1] */
                    ISA_PRINT_COMP_opnd+1,	/* opop1[2] */
                    ISA_PRINT_COMP_end } },	/* opop1[3] */
  { "%s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* load[0] */
                    ISA_PRINT_COMP_segment,	/* load[1] */
                    ISA_PRINT_COMP_opnd+1,	/* load[2] */
                    ISA_PRINT_COMP_opnd,	/* load[3] */
                    ISA_PRINT_COMP_result,	/* load[4] */
                    ISA_PRINT_COMP_end } },	/* load[5] */
  { "%s %s(%s,%s,%s), %s", {
 ISA_PRINT_COMP_name,	/* leax[0] */
                    ISA_PRINT_COMP_opnd+3,	/* leax[1] */
                    ISA_PRINT_COMP_opnd,	/* leax[2] */
                    ISA_PRINT_COMP_opnd+1,	/* leax[3] */
                    ISA_PRINT_COMP_opnd+2,	/* leax[4] */
                    ISA_PRINT_COMP_result,	/* leax[5] */
                    ISA_PRINT_COMP_end } },	/* leax[6] */
  { "%s %s(,%s,%s), %s", {
 ISA_PRINT_COMP_name,	/* leaxx[0] */
                    ISA_PRINT_COMP_opnd+2,	/* leaxx[1] */
                    ISA_PRINT_COMP_opnd,	/* leaxx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* leaxx[3] */
                    ISA_PRINT_COMP_result,	/* leaxx[4] */
                    ISA_PRINT_COMP_end } },	/* leaxx[5] */
  { "%s %s%s(%s,%s,%s), %s", {
 ISA_PRINT_COMP_name,	/* ldx[0] */
                    ISA_PRINT_COMP_segment,	/* ldx[1] */
                    ISA_PRINT_COMP_opnd+1,	/* ldx[2] */
                    ISA_PRINT_COMP_opnd,	/* ldx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ldx[4] */
                    ISA_PRINT_COMP_opnd+3,	/* ldx[5] */
                    ISA_PRINT_COMP_result,	/* ldx[6] */
                    ISA_PRINT_COMP_end } },	/* ldx[7] */
  { "%s %s%s(,%s,%s), %s", {
 ISA_PRINT_COMP_name,	/* ldxx[0] */
                    ISA_PRINT_COMP_segment,	/* ldxx[1] */
                    ISA_PRINT_COMP_opnd+2,	/* ldxx[2] */
                    ISA_PRINT_COMP_opnd,	/* ldxx[3] */
                    ISA_PRINT_COMP_opnd+1,	/* ldxx[4] */
                    ISA_PRINT_COMP_result,	/* ldxx[5] */
                    ISA_PRINT_COMP_end } },	/* ldxx[6] */
  { "%s %s,%s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* storex[0] */
                    ISA_PRINT_COMP_opnd,	/* storex[1] */
                    ISA_PRINT_COMP_segment,	/* storex[2] */
                    ISA_PRINT_COMP_opnd+2,	/* storex[3] */
                    ISA_PRINT_COMP_opnd+1,	/* storex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* storex[5] */
                    ISA_PRINT_COMP_opnd+4,	/* storex[6] */
                    ISA_PRINT_COMP_end } },	/* storex[7] */
  { "%s %%gs:%s,%s", {
 ISA_PRINT_COMP_name,	/* load_gs_seg_off[0] */
                    ISA_PRINT_COMP_result,	/* load_gs_seg_off[1] */
                    ISA_PRINT_COMP_opnd,	/* load_gs_seg_off[2] */
                    ISA_PRINT_COMP_end } },	/* load_gs_seg_off[3] */
  { "%s %%fs:%s,%s", {
 ISA_PRINT_COMP_name,	/* load_fs_seg_off[0] */
                    ISA_PRINT_COMP_result,	/* load_fs_seg_off[1] */
                    ISA_PRINT_COMP_opnd,	/* load_fs_seg_off[2] */
                    ISA_PRINT_COMP_end } },	/* load_fs_seg_off[3] */
  { "%s %s,%s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* storexx[0] */
                    ISA_PRINT_COMP_opnd,	/* storexx[1] */
                    ISA_PRINT_COMP_segment,	/* storexx[2] */
                    ISA_PRINT_COMP_opnd+3,	/* storexx[3] */
                    ISA_PRINT_COMP_opnd+1,	/* storexx[4] */
                    ISA_PRINT_COMP_opnd+2,	/* storexx[5] */
                    ISA_PRINT_COMP_end } },	/* storexx[6] */
  { "%s %s%s(%s)", {
 ISA_PRINT_COMP_name,	/* prefetch[0] */
                    ISA_PRINT_COMP_segment,	/* prefetch[1] */
                    ISA_PRINT_COMP_opnd+2,	/* prefetch[2] */
                    ISA_PRINT_COMP_opnd+1,	/* prefetch[3] */
                    ISA_PRINT_COMP_end } },	/* prefetch[4] */
  { "%s %s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* prefetchx[0] */
                    ISA_PRINT_COMP_segment,	/* prefetchx[1] */
                    ISA_PRINT_COMP_opnd+2,	/* prefetchx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* prefetchx[3] */
                    ISA_PRINT_COMP_opnd+3,	/* prefetchx[4] */
                    ISA_PRINT_COMP_opnd+4,	/* prefetchx[5] */
                    ISA_PRINT_COMP_end } },	/* prefetchx[6] */
  { "%s %s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* prefetchxx[0] */
                    ISA_PRINT_COMP_segment,	/* prefetchxx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* prefetchxx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* prefetchxx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* prefetchxx[4] */
                    ISA_PRINT_COMP_end } },	/* prefetchxx[5] */
  { "%s %s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* store[0] */
                    ISA_PRINT_COMP_opnd,	/* store[1] */
                    ISA_PRINT_COMP_segment,	/* store[2] */
                    ISA_PRINT_COMP_opnd+2,	/* store[3] */
                    ISA_PRINT_COMP_opnd+1,	/* store[4] */
                    ISA_PRINT_COMP_end } },	/* store[5] */
  { "%s %s%s(%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vmaskload[0] */
                    ISA_PRINT_COMP_segment,	/* vmaskload[1] */
                    ISA_PRINT_COMP_opnd+2,	/* vmaskload[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vmaskload[3] */
                    ISA_PRINT_COMP_opnd,	/* vmaskload[4] */
                    ISA_PRINT_COMP_result,	/* vmaskload[5] */
                    ISA_PRINT_COMP_end } },	/* vmaskload[6] */
  { "%s %s%s(%s,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vmaskloadindex[0] */
                    ISA_PRINT_COMP_segment,	/* vmaskloadindex[1] */
                    ISA_PRINT_COMP_opnd+4,	/* vmaskloadindex[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vmaskloadindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* vmaskloadindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* vmaskloadindex[5] */
                    ISA_PRINT_COMP_opnd,	/* vmaskloadindex[6] */
                    ISA_PRINT_COMP_result,	/* vmaskloadindex[7] */
                    ISA_PRINT_COMP_end } },	/* vmaskloadindex[8] */
  { "%s %s%s(,%s,%s),%s,%s", {
 ISA_PRINT_COMP_name,	/* vmaskloadindexx[0] */
                    ISA_PRINT_COMP_segment,	/* vmaskloadindexx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* vmaskloadindexx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* vmaskloadindexx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* vmaskloadindexx[4] */
                    ISA_PRINT_COMP_opnd,	/* vmaskloadindexx[5] */
                    ISA_PRINT_COMP_result,	/* vmaskloadindexx[6] */
                    ISA_PRINT_COMP_end } },	/* vmaskloadindexx[7] */
  { "%s %s,%s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* vmaskstore[0] */
                    ISA_PRINT_COMP_opnd,	/* vmaskstore[1] */
                    ISA_PRINT_COMP_opnd+1,	/* vmaskstore[2] */
                    ISA_PRINT_COMP_segment,	/* vmaskstore[3] */
                    ISA_PRINT_COMP_opnd+3,	/* vmaskstore[4] */
                    ISA_PRINT_COMP_opnd+2,	/* vmaskstore[5] */
                    ISA_PRINT_COMP_end } },	/* vmaskstore[6] */
  { "%s %s,%s,%s%s(%s,%s,%s)", {
 ISA_PRINT_COMP_name,	/* vmaskstoreindex[0] */
                    ISA_PRINT_COMP_opnd,	/* vmaskstoreindex[1] */
                    ISA_PRINT_COMP_opnd+1,	/* vmaskstoreindex[2] */
                    ISA_PRINT_COMP_segment,	/* vmaskstoreindex[3] */
                    ISA_PRINT_COMP_opnd+5,	/* vmaskstoreindex[4] */
                    ISA_PRINT_COMP_opnd+2,	/* vmaskstoreindex[5] */
                    ISA_PRINT_COMP_opnd+3,	/* vmaskstoreindex[6] */
                    ISA_PRINT_COMP_opnd+4,	/* vmaskstoreindex[7] */
                    ISA_PRINT_COMP_end } },	/* vmaskstoreindex[8] */
  { "%s %s,%s,%s%s(,%s,%s)", {
 ISA_PRINT_COMP_name,	/* vmaskstoreindexx[0] */
                    ISA_PRINT_COMP_opnd,	/* vmaskstoreindexx[1] */
                    ISA_PRINT_COMP_opnd+1,	/* vmaskstoreindexx[2] */
                    ISA_PRINT_COMP_segment,	/* vmaskstoreindexx[3] */
                    ISA_PRINT_COMP_opnd+4,	/* vmaskstoreindexx[4] */
                    ISA_PRINT_COMP_opnd+2,	/* vmaskstoreindexx[5] */
                    ISA_PRINT_COMP_opnd+3,	/* vmaskstoreindexx[6] */
                    ISA_PRINT_COMP_end } },	/* vmaskstoreindexx[7] */
  { "lock %s %s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* rmw[0] */
                    ISA_PRINT_COMP_opnd,	/* rmw[1] */
                    ISA_PRINT_COMP_segment,	/* rmw[2] */
                    ISA_PRINT_COMP_opnd+2,	/* rmw[3] */
                    ISA_PRINT_COMP_opnd+1,	/* rmw[4] */
                    ISA_PRINT_COMP_end } },	/* rmw[5] */
  { "lock %s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* xchg[0] */
                    ISA_PRINT_COMP_segment,	/* xchg[1] */
                    ISA_PRINT_COMP_opnd+2,	/* xchg[2] */
                    ISA_PRINT_COMP_opnd+1,	/* xchg[3] */
                    ISA_PRINT_COMP_result,	/* xchg[4] */
                    ISA_PRINT_COMP_opnd,	/* xchg[5] */
                    ISA_PRINT_COMP_end } },	/* xchg[6] */
  { "lock %s %s,%s%s(%s)", {
 ISA_PRINT_COMP_name,	/* cmpxchg[0] */
                    ISA_PRINT_COMP_opnd+1,	/* cmpxchg[1] */
                    ISA_PRINT_COMP_segment,	/* cmpxchg[2] */
                    ISA_PRINT_COMP_opnd+3,	/* cmpxchg[3] */
                    ISA_PRINT_COMP_opnd+2,	/* cmpxchg[4] */
                    ISA_PRINT_COMP_end } },	/* cmpxchg[5] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* unpck[0] */
                    ISA_PRINT_COMP_opnd+1,	/* unpck[1] */
                    ISA_PRINT_COMP_result,	/* unpck[2] */
                    ISA_PRINT_COMP_end } },	/* unpck[3] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* vmovmsk[0] */
                    ISA_PRINT_COMP_opnd,	/* vmovmsk[1] */
                    ISA_PRINT_COMP_result,	/* vmovmsk[2] */
                    ISA_PRINT_COMP_end } },	/* vmovmsk[3] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* shuffle[0] */
                    ISA_PRINT_COMP_opnd+2,	/* shuffle[1] */
                    ISA_PRINT_COMP_opnd+1,	/* shuffle[2] */
                    ISA_PRINT_COMP_result,	/* shuffle[3] */
                    ISA_PRINT_COMP_end } },	/* shuffle[4] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* pshufb[0] */
                    ISA_PRINT_COMP_opnd+1,	/* pshufb[1] */
                    ISA_PRINT_COMP_opnd,	/* pshufb[2] */
                    ISA_PRINT_COMP_result,	/* pshufb[3] */
                    ISA_PRINT_COMP_end } },	/* pshufb[4] */
  { "%s %s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* pshufb_mem[0] */
                    ISA_PRINT_COMP_segment,	/* pshufb_mem[1] */
                    ISA_PRINT_COMP_opnd+2,	/* pshufb_mem[2] */
                    ISA_PRINT_COMP_opnd+1,	/* pshufb_mem[3] */
                    ISA_PRINT_COMP_opnd,	/* pshufb_mem[4] */
                    ISA_PRINT_COMP_result,	/* pshufb_mem[5] */
                    ISA_PRINT_COMP_end } },	/* pshufb_mem[6] */
  { "%s %s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* pshufb_memindex[0] */
                    ISA_PRINT_COMP_segment,	/* pshufb_memindex[1] */
                    ISA_PRINT_COMP_opnd+4,	/* pshufb_memindex[2] */
                    ISA_PRINT_COMP_opnd+1,	/* pshufb_memindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* pshufb_memindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* pshufb_memindex[5] */
                    ISA_PRINT_COMP_opnd,	/* pshufb_memindex[6] */
                    ISA_PRINT_COMP_result,	/* pshufb_memindex[7] */
                    ISA_PRINT_COMP_end } },	/* pshufb_memindex[8] */
  { "%s %s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* pshufb_memindexx[0] */
                    ISA_PRINT_COMP_segment,	/* pshufb_memindexx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* pshufb_memindexx[2] */
                    ISA_PRINT_COMP_opnd+1,	/* pshufb_memindexx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* pshufb_memindexx[4] */
                    ISA_PRINT_COMP_opnd,	/* pshufb_memindexx[5] */
                    ISA_PRINT_COMP_result,	/* pshufb_memindexx[6] */
                    ISA_PRINT_COMP_end } },	/* pshufb_memindexx[7] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* shuffle_int[0] */
                    ISA_PRINT_COMP_opnd+1,	/* shuffle_int[1] */
                    ISA_PRINT_COMP_opnd,	/* shuffle_int[2] */
                    ISA_PRINT_COMP_result,	/* shuffle_int[3] */
                    ISA_PRINT_COMP_end } },	/* shuffle_int[4] */
  { "%s %s,%s", {
 ISA_PRINT_COMP_name,	/* shift_packed[0] */
                    ISA_PRINT_COMP_opnd+1,	/* shift_packed[1] */
                    ISA_PRINT_COMP_result,	/* shift_packed[2] */
                    ISA_PRINT_COMP_end } },	/* shift_packed[3] */
  { "%s %s, %s, %s, %s", {
 ISA_PRINT_COMP_name,	/* ndstvecreg[0] */
                    ISA_PRINT_COMP_opnd+2,	/* ndstvecreg[1] */
                    ISA_PRINT_COMP_opnd+1,	/* ndstvecreg[2] */
                    ISA_PRINT_COMP_opnd,	/* ndstvecreg[3] */
                    ISA_PRINT_COMP_result,	/* ndstvecreg[4] */
                    ISA_PRINT_COMP_end } },	/* ndstvecreg[5] */
  { "%s %s %s(%s), %s, %s, %s", {
 ISA_PRINT_COMP_name,	/* ndstvecregx[0] */
                    ISA_PRINT_COMP_segment,	/* ndstvecregx[1] */
                    ISA_PRINT_COMP_opnd+3,	/* ndstvecregx[2] */
                    ISA_PRINT_COMP_opnd+2,	/* ndstvecregx[3] */
                    ISA_PRINT_COMP_opnd+1,	/* ndstvecregx[4] */
                    ISA_PRINT_COMP_opnd,	/* ndstvecregx[5] */
                    ISA_PRINT_COMP_result,	/* ndstvecregx[6] */
                    ISA_PRINT_COMP_end } },	/* ndstvecregx[7] */
  { "%s %s %s(%s,%s,%s), %s, %s, %s", {
 ISA_PRINT_COMP_name,	/* ndestvecregxx[0] */
                    ISA_PRINT_COMP_segment,	/* ndestvecregxx[1] */
                    ISA_PRINT_COMP_opnd+5,	/* ndestvecregxx[2] */
                    ISA_PRINT_COMP_opnd+2,	/* ndestvecregxx[3] */
                    ISA_PRINT_COMP_opnd+3,	/* ndestvecregxx[4] */
                    ISA_PRINT_COMP_opnd+4,	/* ndestvecregxx[5] */
                    ISA_PRINT_COMP_opnd+1,	/* ndestvecregxx[6] */
                    ISA_PRINT_COMP_opnd,	/* ndestvecregxx[7] */
                    ISA_PRINT_COMP_result,	/* ndestvecregxx[8] */
                    ISA_PRINT_COMP_end } },	/* ndestvecregxx[9] */
  { "%s %s %s(,%s,%s), %s, %s, %s", {
 ISA_PRINT_COMP_name,	/* ndestvecregxxx[0] */
                    ISA_PRINT_COMP_segment,	/* ndestvecregxxx[1] */
                    ISA_PRINT_COMP_opnd+4,	/* ndestvecregxxx[2] */
                    ISA_PRINT_COMP_opnd+2,	/* ndestvecregxxx[3] */
                    ISA_PRINT_COMP_opnd+3,	/* ndestvecregxxx[4] */
                    ISA_PRINT_COMP_opnd+1,	/* ndestvecregxxx[5] */
                    ISA_PRINT_COMP_opnd,	/* ndestvecregxxx[6] */
                    ISA_PRINT_COMP_result,	/* ndestvecregxxx[7] */
                    ISA_PRINT_COMP_end } },	/* ndestvecregxxx[8] */
  { "%s %s %s, %s(%s), %s, %s", {
 ISA_PRINT_COMP_name,	/* ndstvecregxr[0] */
                    ISA_PRINT_COMP_segment,	/* ndstvecregxr[1] */
                    ISA_PRINT_COMP_opnd+3,	/* ndstvecregxr[2] */
                    ISA_PRINT_COMP_opnd+2,	/* ndstvecregxr[3] */
                    ISA_PRINT_COMP_opnd+1,	/* ndstvecregxr[4] */
                    ISA_PRINT_COMP_opnd,	/* ndstvecregxr[5] */
                    ISA_PRINT_COMP_result,	/* ndstvecregxr[6] */
                    ISA_PRINT_COMP_end } },	/* ndstvecregxr[7] */
  { "%s %s %s, %s(%s,%s,%s), %s, %s", {
 ISA_PRINT_COMP_name,	/* ndestvecregxxr[0] */
                    ISA_PRINT_COMP_segment,	/* ndestvecregxxr[1] */
                    ISA_PRINT_COMP_opnd+5,	/* ndestvecregxxr[2] */
                    ISA_PRINT_COMP_opnd+4,	/* ndestvecregxxr[3] */
                    ISA_PRINT_COMP_opnd+1,	/* ndestvecregxxr[4] */
                    ISA_PRINT_COMP_opnd+2,	/* ndestvecregxxr[5] */
                    ISA_PRINT_COMP_opnd+3,	/* ndestvecregxxr[6] */
                    ISA_PRINT_COMP_opnd,	/* ndestvecregxxr[7] */
                    ISA_PRINT_COMP_result,	/* ndestvecregxxr[8] */
                    ISA_PRINT_COMP_end } },	/* ndestvecregxxr[9] */
  { "%s %s %s, %s(,%s,%s), %s, %s", {
 ISA_PRINT_COMP_name,	/* ndestvecregxxxr[0] */
                    ISA_PRINT_COMP_segment,	/* ndestvecregxxxr[1] */
                    ISA_PRINT_COMP_opnd+4,	/* ndestvecregxxxr[2] */
                    ISA_PRINT_COMP_opnd+3,	/* ndestvecregxxxr[3] */
                    ISA_PRINT_COMP_opnd+1,	/* ndestvecregxxxr[4] */
                    ISA_PRINT_COMP_opnd+2,	/* ndestvecregxxxr[5] */
                    ISA_PRINT_COMP_opnd,	/* ndestvecregxxxr[6] */
                    ISA_PRINT_COMP_result,	/* ndestvecregxxxr[7] */
                    ISA_PRINT_COMP_end } },	/* ndestvecregxxxr[8] */
  { "%s %s,%s,%s", {
 ISA_PRINT_COMP_name,	/* ifma_ropopop[0] */
                    ISA_PRINT_COMP_opnd+2,	/* ifma_ropopop[1] */
                    ISA_PRINT_COMP_opnd+1,	/* ifma_ropopop[2] */
                    ISA_PRINT_COMP_result,	/* ifma_ropopop[3] */
                    ISA_PRINT_COMP_opnd,	/* ifma_ropopop[4] */
                    ISA_PRINT_COMP_end } },	/* ifma_ropopop[5] */
  { "%s %s,%s%s(%s),%s", {
 ISA_PRINT_COMP_name,	/* ifma_ropopmem[0] */
                    ISA_PRINT_COMP_opnd+1,	/* ifma_ropopmem[1] */
                    ISA_PRINT_COMP_segment,	/* ifma_ropopmem[2] */
                    ISA_PRINT_COMP_opnd+3,	/* ifma_ropopmem[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ifma_ropopmem[4] */
                    ISA_PRINT_COMP_result,	/* ifma_ropopmem[5] */
                    ISA_PRINT_COMP_opnd,	/* ifma_ropopmem[6] */
                    ISA_PRINT_COMP_end } },	/* ifma_ropopmem[7] */
  { "%s %s,%s%s(%s,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* ifma_ropopmemindex[0] */
                    ISA_PRINT_COMP_opnd+1,	/* ifma_ropopmemindex[1] */
                    ISA_PRINT_COMP_segment,	/* ifma_ropopmemindex[2] */
                    ISA_PRINT_COMP_opnd+5,	/* ifma_ropopmemindex[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ifma_ropopmemindex[4] */
                    ISA_PRINT_COMP_opnd+3,	/* ifma_ropopmemindex[5] */
                    ISA_PRINT_COMP_opnd+4,	/* ifma_ropopmemindex[6] */
                    ISA_PRINT_COMP_result,	/* ifma_ropopmemindex[7] */
                    ISA_PRINT_COMP_opnd,	/* ifma_ropopmemindex[8] */
                    ISA_PRINT_COMP_end } },	/* ifma_ropopmemindex[9] */
  { "%s %s,%s%s(,%s,%s),%s", {
 ISA_PRINT_COMP_name,	/* ifma_ropopmemindexx[0] */
                    ISA_PRINT_COMP_opnd+1,	/* ifma_ropopmemindexx[1] */
                    ISA_PRINT_COMP_segment,	/* ifma_ropopmemindexx[2] */
                    ISA_PRINT_COMP_opnd+4,	/* ifma_ropopmemindexx[3] */
                    ISA_PRINT_COMP_opnd+2,	/* ifma_ropopmemindexx[4] */
                    ISA_PRINT_COMP_opnd+3,	/* ifma_ropopmemindexx[5] */
                    ISA_PRINT_COMP_result,	/* ifma_ropopmemindexx[6] */
                    ISA_PRINT_COMP_opnd,	/* ifma_ropopmemindexx[7] */
                    ISA_PRINT_COMP_end } },	/* ifma_ropopmemindexx[8] */
  { "%s %s%s(%s)", {
 ISA_PRINT_COMP_name,	/* stmxcsr[0] */
                    ISA_PRINT_COMP_segment,	/* stmxcsr[1] */
                    ISA_PRINT_COMP_opnd+1,	/* stmxcsr[2] */
                    ISA_PRINT_COMP_opnd,	/* stmxcsr[3] */
                    ISA_PRINT_COMP_end } },	/* stmxcsr[4] */
  { "# %s\n\t.byte \t0x66\n\tleaq %s(%s), %%rdi\n\t.word \t0x6666\n\trex64\n\tcall %s", {
 ISA_PRINT_COMP_name,	/* tls_gd_64[0] */
                    ISA_PRINT_COMP_opnd,	/* tls_gd_64[1] */
                    ISA_PRINT_COMP_opnd+1,	/* tls_gd_64[2] */
                    ISA_PRINT_COMP_opnd+2,	/* tls_gd_64[3] */
                    ISA_PRINT_COMP_end } },	/* tls_gd_64[4] */
  { "# %s\n\tleal %s(,%s,1), %%eax\n\tcall %s", {
 ISA_PRINT_COMP_name,	/* tls_gd_32[0] */
                    ISA_PRINT_COMP_opnd,	/* tls_gd_32[1] */
                    ISA_PRINT_COMP_opnd+1,	/* tls_gd_32[2] */
                    ISA_PRINT_COMP_opnd+2,	/* tls_gd_32[3] */
                    ISA_PRINT_COMP_end } },	/* tls_gd_32[4] */
  { "# %s\n\tleaq %s(%s), %%rdi\n\tcall %s", {
 ISA_PRINT_COMP_name,	/* tls_ld_64[0] */
                    ISA_PRINT_COMP_opnd,	/* tls_ld_64[1] */
                    ISA_PRINT_COMP_opnd+1,	/* tls_ld_64[2] */
                    ISA_PRINT_COMP_opnd+2,	/* tls_ld_64[3] */
                    ISA_PRINT_COMP_end } },	/* tls_ld_64[4] */
  { "# %s\n\tleal %s(%s), %%eax\n\tcall %s", {
 ISA_PRINT_COMP_name,	/* tls_ld_32[0] */
                    ISA_PRINT_COMP_opnd,	/* tls_ld_32[1] */
                    ISA_PRINT_COMP_opnd+1,	/* tls_ld_32[2] */
                    ISA_PRINT_COMP_opnd+2,	/* tls_ld_32[3] */
                    ISA_PRINT_COMP_end } },	/* tls_ld_32[4] */
  { "%s", {
 ISA_PRINT_COMP_name,	/* no_rop[0] */
                    ISA_PRINT_COMP_end } },	/* no_rop[1] */
};

const mUINT8 ISA_PRINT_info_index[3623] = {
   14,  /* add8: ropop */
   14,  /* add16: ropop */
   14,  /* add32: ropop */
   14,  /* adc32: ropop */
   14,  /* add64: ropop */
   23,  /* addx32: ropmem */
   24,  /* addxx32: ropmemindex */
   25,  /* addxxx32: ropmemindexx */
   23,  /* addx64: ropmem */
   24,  /* addxx64: ropmemindex */
   25,  /* addxxx64: ropmemindexx */
   14,  /* addi8: ropop */
   14,  /* addi16: ropop */
   14,  /* addi32: ropop */
   14,  /* adci32: ropop */
   14,  /* addi64: ropop */
   19,  /* addxr8: resbase */
   20,  /* addxxr8: resbaseindex */
   21,  /* addxxxr8: resindex */
   22,  /* addxr8_n32: resmem_n32 */
   19,  /* addxr16: resbase */
   20,  /* addxxr16: resbaseindex */
   21,  /* addxxxr16: resindex */
   22,  /* addxr16_n32: resmem_n32 */
   19,  /* addxr32: resbase */
   20,  /* addxxr32: resbaseindex */
   21,  /* addxxxr32: resindex */
   22,  /* addxr32_n32: resmem_n32 */
   19,  /* addxr64: resbase */
   20,  /* addxxr64: resbaseindex */
   21,  /* addxxxr64: resindex */
   22,  /* addxr64_off: resmem_n32 */
   19,  /* addixr8: resbase */
   20,  /* addixxr8: resbaseindex */
   21,  /* addixxxr8: resindex */
   22,  /* addixr8_n32: resmem_n32 */
   19,  /* addixr16: resbase */
   20,  /* addixxr16: resbaseindex */
   21,  /* addixxxr16: resindex */
   22,  /* addixr16_n32: resmem_n32 */
   19,  /* addixr32: resbase */
   20,  /* addixxr32: resbaseindex */
   21,  /* addixxxr32: resindex */
   22,  /* addixr32_n32: resmem_n32 */
   19,  /* addixr64: resbase */
   20,  /* addixxr64: resbaseindex */
   21,  /* addixxxr64: resindex */
   22,  /* addixr64_off: resmem_n32 */
   14,  /* add128v8: ropop */
   23,  /* addx128v8: ropmem */
   24,  /* addxx128v8: ropmemindex */
   25,  /* addxxx128v8: ropmemindexx */
   14,  /* add128v16: ropop */
   23,  /* addx128v16: ropmem */
   24,  /* addxx128v16: ropmemindex */
   25,  /* addxxx128v16: ropmemindexx */
   14,  /* add128v32: ropop */
   23,  /* addx128v32: ropmem */
   24,  /* addxx128v32: ropmemindex */
   25,  /* addxxx128v32: ropmemindexx */
   14,  /* add128v64: ropop */
   23,  /* addx128v64: ropmem */
   24,  /* addxx128v64: ropmemindex */
   25,  /* addxxx128v64: ropmemindexx */
   14,  /* add64v8: ropop */
   14,  /* add64v16: ropop */
   14,  /* add64v32: ropop */
   14,  /* paddsb: ropop */
   14,  /* paddsw: ropop */
   14,  /* paddq: ropop */
   14,  /* psubsb: ropop */
   14,  /* psubsw: ropop */
   14,  /* psubq: ropop */
   14,  /* paddusb: ropop */
   14,  /* paddusw: ropop */
   14,  /* psubusb: ropop */
   14,  /* psubusw: ropop */
   14,  /* pmullw: ropop */
   14,  /* pmulhw: ropop */
   14,  /* pmulhuw: ropop */
   14,  /* pmuludq: ropop */
   14,  /* pmaddwd: ropop */
   14,  /* paddsb128: ropop */
   14,  /* paddsw128: ropop */
   14,  /* paddq128: ropop */
   14,  /* psubsb128: ropop */
   14,  /* psubsw128: ropop */
   14,  /* psubq128: ropop */
   14,  /* paddusb128: ropop */
   14,  /* paddusw128: ropop */
   14,  /* psubusb128: ropop */
   14,  /* psubusw128: ropop */
   14,  /* pmullw128: ropop */
   14,  /* pmulhw128: ropop */
   14,  /* pmulhuw128: ropop */
   14,  /* pmuludq128: ropop */
   14,  /* pmaddwd128: ropop */
   14,  /* and8: ropop */
   14,  /* and16: ropop */
   14,  /* and32: ropop */
   23,  /* andx32: ropmem */
   24,  /* andxx32: ropmemindex */
   25,  /* andxxx32: ropmemindexx */
   14,  /* and64: ropop */
   23,  /* andx64: ropmem */
   24,  /* andxx64: ropmemindex */
   25,  /* andxxx64: ropmemindexx */
   23,  /* andx8: ropmem */
   23,  /* andx16: ropmem */
   24,  /* andxx8: ropmemindex */
   25,  /* andxxx8: ropmemindexx */
   24,  /* andxx16: ropmemindex */
   25,  /* andxxx16: ropmemindexx */
   14,  /* and128v8: ropop */
   23,  /* andx128v8: ropmem */
   24,  /* andxx128v8: ropmemindex */
   25,  /* andxxx128v8: ropmemindexx */
   19,  /* andxr8: resbase */
   20,  /* andxxr8: resbaseindex */
   21,  /* andxxxr8: resindex */
   22,  /* andxr8_n32: resmem_n32 */
   19,  /* andxr16: resbase */
   20,  /* andxxr16: resbaseindex */
   21,  /* andxxxr16: resindex */
   22,  /* andxr16_n32: resmem_n32 */
   19,  /* andxr32: resbase */
   20,  /* andxxr32: resbaseindex */
   21,  /* andxxxr32: resindex */
   22,  /* andxr32_n32: resmem_n32 */
   19,  /* andxr64: resbase */
   20,  /* andxxr64: resbaseindex */
   21,  /* andxxxr64: resindex */
   22,  /* andxr64_off: resmem_n32 */
   19,  /* andixr8: resbase */
   20,  /* andixxr8: resbaseindex */
   21,  /* andixxxr8: resindex */
   22,  /* andixr8_n32: resmem_n32 */
   19,  /* andixr16: resbase */
   20,  /* andixxr16: resbaseindex */
   21,  /* andixxxr16: resindex */
   22,  /* andixr16_n32: resmem_n32 */
   19,  /* andixr32: resbase */
   20,  /* andixxr32: resbaseindex */
   21,  /* andixxxr32: resindex */
   22,  /* andixr32_n32: resmem_n32 */
   19,  /* andixr64: resbase */
   20,  /* andixxr64: resbaseindex */
   21,  /* andixxxr64: resindex */
   22,  /* andixr64_off: resmem_n32 */
   14,  /* and128v16: ropop */
   23,  /* andx128v16: ropmem */
   24,  /* andxx128v16: ropmemindex */
   25,  /* andxxx128v16: ropmemindexx */
   14,  /* and128v32: ropop */
   23,  /* andx128v32: ropmem */
   24,  /* andxx128v32: ropmemindex */
   25,  /* andxxx128v32: ropmemindexx */
   14,  /* and128v64: ropop */
   23,  /* andx128v64: ropmem */
   24,  /* andxx128v64: ropmemindex */
   25,  /* andxxx128v64: ropmemindexx */
   14,  /* andi8: ropop */
   14,  /* andi16: ropop */
   14,  /* andi32: ropop */
   14,  /* andi64: ropop */
   68,  /* call: op0 */
   68,  /* icall: op0 */
   69,  /* icallx: opop */
   70,  /* icallxx: opopopop */
   71,  /* icallxxx: opopop */
    4,  /* cmp8: cmp */
    5,  /* cmpx8: cmpx */
    8,  /* cmpxx8: cmpxx */
   11,  /* cmpxxx8: cmpxxx */
    4,  /* cmp16: cmp */
    5,  /* cmpx16: cmpx */
    8,  /* cmpxx16: cmpxx */
   11,  /* cmpxxx16: cmpxxx */
    4,  /* cmp32: cmp */
    5,  /* cmpx32: cmpx */
    8,  /* cmpxx32: cmpxx */
   11,  /* cmpxxx32: cmpxxx */
    4,  /* cmp64: cmp */
    5,  /* cmpx64: cmpx */
    8,  /* cmpxx64: cmpxx */
   11,  /* cmpxxx64: cmpxxx */
    4,  /* cmpi8: cmp */
    6,  /* cmpxr8: cmpxr */
    7,  /* cmpxi8: cmpxi */
    9,  /* cmpxxr8: cmpxxr */
   10,  /* cmpxxi8: cmpxxi */
   12,  /* cmpxxxr8: cmpxxxr */
   13,  /* cmpxxxi8: cmpxxxi */
    4,  /* cmpi16: cmp */
    6,  /* cmpxr16: cmpxr */
    7,  /* cmpxi16: cmpxi */
    9,  /* cmpxxr16: cmpxxr */
   10,  /* cmpxxi16: cmpxxi */
   12,  /* cmpxxxr16: cmpxxxr */
   13,  /* cmpxxxi16: cmpxxxi */
    4,  /* cmpi32: cmp */
    6,  /* cmpxr32: cmpxr */
    7,  /* cmpxi32: cmpxi */
    9,  /* cmpxxr32: cmpxxr */
   10,  /* cmpxxi32: cmpxxi */
   12,  /* cmpxxxr32: cmpxxxr */
   13,  /* cmpxxxi32: cmpxxxi */
    4,  /* cmpi64: cmp */
    6,  /* cmpxr64: cmpxr */
    7,  /* cmpxi64: cmpxi */
    9,  /* cmpxxr64: cmpxxr */
   10,  /* cmpxxi64: cmpxxi */
   12,  /* cmpxxxr64: cmpxxxr */
   13,  /* cmpxxxi64: cmpxxxi */
   76,  /* cmovb: rop */
   76,  /* cmovae: rop */
   76,  /* cmovp: rop */
   76,  /* cmovnp: rop */
   76,  /* cmove: rop */
   76,  /* cmovne: rop */
   76,  /* cmovbe: rop */
   76,  /* cmova: rop */
   76,  /* cmovl: rop */
   76,  /* cmovge: rop */
   76,  /* cmovle: rop */
   76,  /* cmovg: rop */
   76,  /* cmovs: rop */
   76,  /* cmovns: rop */
    3,  /* div32: op2 */
    3,  /* div64: op2 */
  129,  /* enter: no_rop */
    3,  /* idiv32: op2 */
    3,  /* idiv64: op2 */
    1,  /* imul32: imul */
    2,  /* imulx32: op1 */
    1,  /* imul64: imul */
    1,  /* imuli32: imul */
    1,  /* imuli64: imul */
    2,  /* imulx64: op1 */
   14,  /* mul128v16: ropop */
   73,  /* inc8: r */
   73,  /* dec8: r */
   73,  /* inc16: r */
   73,  /* dec16: r */
   73,  /* inc32: r */
   73,  /* dec32: r */
   73,  /* inc64: r */
   73,  /* dec64: r */
   15,  /* incxr8: unarybase */
   16,  /* incxxr8: unarybaseindex */
   17,  /* incxxxr8: unaryindex */
   18,  /* incxr8_n32: unarymem_n32 */
   15,  /* incxr16: unarybase */
   16,  /* incxxr16: unarybaseindex */
   17,  /* incxxxr16: unaryindex */
   18,  /* incxr16_n32: unarymem_n32 */
   15,  /* incxr32: unarybase */
   16,  /* incxxr32: unarybaseindex */
   17,  /* incxxxr32: unaryindex */
   18,  /* incxr32_n32: unarymem_n32 */
   15,  /* incxr64: unarybase */
   16,  /* incxxr64: unarybaseindex */
   17,  /* incxxxr64: unaryindex */
   18,  /* incxr64_off: unarymem_n32 */
   15,  /* decxr8: unarybase */
   16,  /* decxxr8: unarybaseindex */
   17,  /* decxxxr8: unaryindex */
   18,  /* decxr8_n32: unarymem_n32 */
   15,  /* decxr16: unarybase */
   16,  /* decxxr16: unarybaseindex */
   17,  /* decxxxr16: unaryindex */
   18,  /* decxr16_n32: unarymem_n32 */
   15,  /* decxr32: unarybase */
   16,  /* decxxr32: unarybaseindex */
   17,  /* decxxxr32: unaryindex */
   18,  /* decxr32_n32: unarymem_n32 */
   15,  /* decxr64: unarybase */
   16,  /* decxxr64: unarybaseindex */
   17,  /* decxxxr64: unaryindex */
   18,  /* decxr64_off: unarymem_n32 */
   72,  /* jb: opop */
   72,  /* jae: opop */
   72,  /* jp: opop */
   72,  /* jnp: opop */
   72,  /* je: opop */
   72,  /* jne: opop */
   72,  /* jbe: opop */
   72,  /* ja: opop */
   72,  /* jl: opop */
   72,  /* jge: opop */
   72,  /* jle: opop */
   72,  /* jg: opop */
   72,  /* jcxz: opop */
   72,  /* jecxz: opop */
   72,  /* jrcxz: opop */
   72,  /* js: opop */
   72,  /* jns: opop */
   68,  /* jmp: op0 */
   68,  /* ijmp: op0 */
   69,  /* ijmpx: opop */
   70,  /* ijmpxx: opopopop */
   71,  /* ijmpxxx: opopop */
   82,  /* ld64: load */
   85,  /* ldx64: ldx */
   86,  /* ldxx64: ldxx */
   82,  /* ld64_2m: load */
   82,  /* ld64_2sse: load */
   82,  /* lea32: load */
   82,  /* lea64: load */
   83,  /* leax32: leax */
   83,  /* leax64: leax */
   84,  /* leaxx32: leaxx */
   84,  /* leaxx64: leaxx */
  129,  /* leave: no_rop */
   76,  /* ldc32: rop */
   76,  /* ldc64: rop */
    2,  /* mul32: op1 */
    2,  /* mulx64: op1 */
   76,  /* mov32: rop */
   76,  /* mov64: rop */
   76,  /* mov64_m: rop */
   76,  /* ld32_64_off: rop */
   76,  /* ld64_off: rop */
   81,  /* store64_off: opop1 */
   81,  /* storei64_off: opop1 */
   76,  /* ld8_32_n32: rop */
   76,  /* ldu8_32_n32: rop */
   76,  /* ld16_32_n32: rop */
   76,  /* ldu16_32_n32: rop */
   76,  /* ld32_n32: rop */
   76,  /* ldss_n32: rop */
   76,  /* ldsd_n32: rop */
   76,  /* ldaps_n32: rop */
   76,  /* ldapd_n32: rop */
   76,  /* ldups_n32: rop */
   76,  /* ldupd_n32: rop */
   76,  /* lddqa_n32: rop */
   76,  /* lddqu_n32: rop */
   76,  /* ldlps_n32: rop */
   76,  /* ldlpd_n32: rop */
   76,  /* ldhps_n32: rop */
   76,  /* ldhpd_n32: rop */
   76,  /* ld64_2m_n32: rop */
   76,  /* ld64_2sse_n32: rop */
   81,  /* store8_n32: opop1 */
   81,  /* storei8_n32: opop1 */
   81,  /* store16_n32: opop1 */
   81,  /* storei16_n32: opop1 */
   81,  /* store32_n32: opop1 */
   81,  /* storei32_n32: opop1 */
   81,  /* stss_n32: opop1 */
   81,  /* stsd_n32: opop1 */
   81,  /* staps_n32: opop1 */
   81,  /* stapd_n32: opop1 */
   81,  /* stdqa_n32: opop1 */
   81,  /* stdqu_n32: opop1 */
   81,  /* stlps_n32: opop1 */
   81,  /* sthps_n32: opop1 */
   81,  /* stlpd_n32: opop1 */
   81,  /* sthpd_n32: opop1 */
   81,  /* store64_fm_n32: opop1 */
   81,  /* store64_fsse_n32: opop1 */
   88,  /* ld32_gs_seg_off: load_gs_seg_off */
   89,  /* ld64_fs_seg_off: load_fs_seg_off */
   76,  /* movsbl: rop */
   82,  /* ld8_32: load */
   85,  /* ldx8_32: ldx */
   86,  /* ldxx8_32: ldxx */
   76,  /* movzbl: rop */
   82,  /* ldu8_32: load */
   85,  /* ldxu8_32: ldx */
   86,  /* ldxxu8_32: ldxx */
   76,  /* movswl: rop */
   82,  /* ld16_32: load */
   85,  /* ldx16_32: ldx */
   86,  /* ldxx16_32: ldxx */
   76,  /* movzwl: rop */
   82,  /* ldu16_32: load */
   85,  /* ldxu16_32: ldx */
   86,  /* ldxxu16_32: ldxx */
   76,  /* movsbq: rop */
   82,  /* ld8_64: load */
   85,  /* ldx8_64: ldx */
   86,  /* ldxx8_64: ldxx */
   76,  /* ld8_64_off: rop */
   76,  /* movzbq: rop */
   82,  /* ldu8_64: load */
   85,  /* ldxu8_64: ldx */
   86,  /* ldxxu8_64: ldxx */
   76,  /* ldu8_64_off: rop */
   76,  /* movswq: rop */
   82,  /* ld16_64: load */
   85,  /* ldx16_64: ldx */
   86,  /* ldxx16_64: ldxx */
   76,  /* ld16_64_off: rop */
   76,  /* movzwq: rop */
   82,  /* ldu16_64: load */
   85,  /* ldxu16_64: ldx */
   86,  /* ldxxu16_64: ldxx */
   76,  /* ldu16_64_off: rop */
   76,  /* movslq: rop */
   82,  /* ld32_64: load */
   85,  /* ldx32_64: ldx */
   86,  /* ldxx32_64: ldxx */
   82,  /* ld32: load */
   85,  /* ldx32: ldx */
   86,  /* ldxx32: ldxx */
   76,  /* movzlq: rop */
   73,  /* neg8: r */
   73,  /* neg16: r */
   73,  /* neg32: r */
   73,  /* neg64: r */
   15,  /* negxr8: unarybase */
   16,  /* negxxr8: unarybaseindex */
   17,  /* negxxxr8: unaryindex */
   18,  /* negxr8_n32: unarymem_n32 */
   15,  /* negxr16: unarybase */
   16,  /* negxxr16: unarybaseindex */
   17,  /* negxxxr16: unaryindex */
   18,  /* negxr16_n32: unarymem_n32 */
   15,  /* negxr32: unarybase */
   16,  /* negxxr32: unarybaseindex */
   17,  /* negxxxr32: unaryindex */
   18,  /* negxr32_n32: unarymem_n32 */
   15,  /* negxr64: unarybase */
   16,  /* negxxr64: unarybaseindex */
   17,  /* negxxxr64: unaryindex */
   18,  /* negxr64_off: unarymem_n32 */
   73,  /* not8: r */
   73,  /* not16: r */
   73,  /* not32: r */
   73,  /* not64: r */
   15,  /* notxr8: unarybase */
   16,  /* notxxr8: unarybaseindex */
   17,  /* notxxxr8: unaryindex */
   18,  /* notxr8_n32: unarymem_n32 */
   15,  /* notxr16: unarybase */
   16,  /* notxxr16: unarybaseindex */
   17,  /* notxxxr16: unaryindex */
   18,  /* notxr16_n32: unarymem_n32 */
   15,  /* notxr32: unarybase */
   16,  /* notxxr32: unarybaseindex */
   17,  /* notxxxr32: unaryindex */
   18,  /* notxr32_n32: unarymem_n32 */
   15,  /* notxr64: unarybase */
   16,  /* notxxr64: unarybaseindex */
   17,  /* notxxxr64: unaryindex */
   18,  /* notxr64_off: unarymem_n32 */
   14,  /* or8: ropop */
   14,  /* or16: ropop */
   14,  /* or32: ropop */
   23,  /* orx32: ropmem */
   24,  /* orxx32: ropmemindex */
   25,  /* orxxx32: ropmemindexx */
   14,  /* or64: ropop */
   23,  /* orx64: ropmem */
   24,  /* orxx64: ropmemindex */
   25,  /* orxxx64: ropmemindexx */
   23,  /* orx8: ropmem */
   23,  /* orx16: ropmem */
   24,  /* orxx8: ropmemindex */
   25,  /* orxxx8: ropmemindexx */
   24,  /* orxx16: ropmemindex */
   25,  /* orxxx16: ropmemindexx */
   19,  /* orxr8: resbase */
   20,  /* orxxr8: resbaseindex */
   21,  /* orxxxr8: resindex */
   22,  /* orxr8_n32: resmem_n32 */
   19,  /* orxr16: resbase */
   20,  /* orxxr16: resbaseindex */
   21,  /* orxxxr16: resindex */
   22,  /* orxr16_n32: resmem_n32 */
   19,  /* orxr32: resbase */
   20,  /* orxxr32: resbaseindex */
   21,  /* orxxxr32: resindex */
   22,  /* orxr32_n32: resmem_n32 */
   19,  /* orxr64: resbase */
   20,  /* orxxr64: resbaseindex */
   21,  /* orxxxr64: resindex */
   22,  /* orxr64_off: resmem_n32 */
   19,  /* orixr8: resbase */
   20,  /* orixxr8: resbaseindex */
   21,  /* orixxxr8: resindex */
   22,  /* orixr8_n32: resmem_n32 */
   19,  /* orixr16: resbase */
   20,  /* orixxr16: resbaseindex */
   21,  /* orixxxr16: resindex */
   22,  /* orixr16_n32: resmem_n32 */
   19,  /* orixr32: resbase */
   20,  /* orixxr32: resbaseindex */
   21,  /* orixxxr32: resindex */
   22,  /* orixr32_n32: resmem_n32 */
   19,  /* orixr64: resbase */
   20,  /* orixxr64: resbaseindex */
   21,  /* orixxxr64: resindex */
   22,  /* orixr64_off: resmem_n32 */
   14,  /* or128v8: ropop */
   23,  /* orx128v8: ropmem */
   24,  /* orxx128v8: ropmemindex */
   25,  /* orxxx128v8: ropmemindexx */
   14,  /* or128v16: ropop */
   23,  /* orx128v16: ropmem */
   24,  /* orxx128v16: ropmemindex */
   25,  /* orxxx128v16: ropmemindexx */
   14,  /* or128v32: ropop */
   23,  /* orx128v32: ropmem */
   24,  /* orxx128v32: ropmemindex */
   25,  /* orxxx128v32: ropmemindexx */
   14,  /* or128v64: ropop */
   23,  /* orx128v64: ropmem */
   24,  /* orxx128v64: ropmemindex */
   25,  /* orxxx128v64: ropmemindexx */
   14,  /* ori8: ropop */
   14,  /* ori16: ropop */
   14,  /* ori32: ropop */
   14,  /* ori64: ropop */
   73,  /* popl: r */
   73,  /* popq: r */
   68,  /* pushl: op0 */
   68,  /* pushq: op0 */
  129,  /* ret: no_rop */
   68,  /* reti: op0 */
   14,  /* ror8: ropop */
   14,  /* ror16: ropop */
   14,  /* ror32: ropop */
   14,  /* ror64: ropop */
   14,  /* rori8: ropop */
   14,  /* rori16: ropop */
   14,  /* rori32: ropop */
   14,  /* rori64: ropop */
   14,  /* rol8: ropop */
   14,  /* rol16: ropop */
   14,  /* rol32: ropop */
   14,  /* rol64: ropop */
   14,  /* roli8: ropop */
   14,  /* roli16: ropop */
   14,  /* roli32: ropop */
   14,  /* roli64: ropop */
   91,  /* prefetch: prefetch */
   91,  /* prefetchw: prefetch */
   91,  /* prefetcht0: prefetch */
   91,  /* prefetcht1: prefetch */
   91,  /* prefetchnta: prefetch */
   92,  /* prefetchx: prefetchx */
   93,  /* prefetchxx: prefetchxx */
   92,  /* prefetchwx: prefetchx */
   93,  /* prefetchwxx: prefetchxx */
   92,  /* prefetcht0x: prefetchx */
   93,  /* prefetcht0xx: prefetchxx */
   92,  /* prefetcht1x: prefetchx */
   93,  /* prefetcht1xx: prefetchxx */
   92,  /* prefetchntax: prefetchx */
   93,  /* prefetchntaxx: prefetchxx */
   73,  /* setb: r */
   73,  /* setae: r */
   73,  /* setp: r */
   73,  /* setnp: r */
   73,  /* sete: r */
   73,  /* setne: r */
   73,  /* setbe: r */
   73,  /* seta: r */
   73,  /* setl: r */
   73,  /* setge: r */
   73,  /* setle: r */
   73,  /* setg: r */
   73,  /* setc: r */
   73,  /* seto: r */
   73,  /* sets: r */
   73,  /* setz: r */
   94,  /* store8: store */
   94,  /* storei8: store */
   87,  /* storex8: storex */
   87,  /* storeix8: storex */
   90,  /* storexx8: storexx */
   90,  /* storeixx8: storexx */
   94,  /* store16: store */
   94,  /* storei16: store */
   87,  /* storex16: storex */
   87,  /* storeix16: storex */
   90,  /* storexx16: storexx */
   90,  /* storeixx16: storexx */
   94,  /* store32: store */
   94,  /* storei32: store */
   87,  /* storex32: storex */
   87,  /* storeix32: storex */
   90,  /* storexx32: storexx */
   90,  /* storeixx32: storexx */
   94,  /* store64: store */
   94,  /* storei64: store */
   87,  /* storex64: storex */
   87,  /* storeix64: storex */
   90,  /* storexx64: storexx */
   90,  /* storeixx64: storexx */
   94,  /* store64_fm: store */
   94,  /* store64_fsse: store */
   94,  /* storenti32: store */
   87,  /* storentix32: storex */
   90,  /* storentixx32: storexx */
   94,  /* storenti64: store */
   87,  /* storentix64: storex */
   90,  /* storentixx64: storexx */
   94,  /* storenti128: store */
   14,  /* sar32: ropop */
   14,  /* sar64: ropop */
   14,  /* sari32: ropop */
   14,  /* sari64: ropop */
   14,  /* shl32: ropop */
   14,  /* shld32: ropop */
   30,  /* shldi32: ropopop */
   14,  /* shrd32: ropop */
   30,  /* shrdi32: ropopop */
   14,  /* shl64: ropop */
   14,  /* shli32: ropop */
   14,  /* shli64: ropop */
   14,  /* shr32: ropop */
   14,  /* shr64: ropop */
   14,  /* shri32: ropop */
   14,  /* shri64: ropop */
   14,  /* sub8: ropop */
   14,  /* sub16: ropop */
   14,  /* sub32: ropop */
   14,  /* sbb32: ropop */
   14,  /* sub64: ropop */
   23,  /* subx32: ropmem */
   23,  /* subx64: ropmem */
   24,  /* subxx32: ropmemindex */
   25,  /* subxxx32: ropmemindexx */
   24,  /* subxx64: ropmemindex */
   25,  /* subxxx64: ropmemindexx */
   14,  /* subi8: ropop */
   14,  /* subi16: ropop */
   14,  /* subi32: ropop */
   14,  /* sbbi32: ropop */
   14,  /* subi64: ropop */
   19,  /* subxr8: resbase */
   20,  /* subxxr8: resbaseindex */
   21,  /* subxxxr8: resindex */
   22,  /* subxr8_n32: resmem_n32 */
   19,  /* subxr16: resbase */
   20,  /* subxxr16: resbaseindex */
   21,  /* subxxxr16: resindex */
   22,  /* subxr16_n32: resmem_n32 */
   19,  /* subxr32: resbase */
   20,  /* subxxr32: resbaseindex */
   21,  /* subxxxr32: resindex */
   22,  /* subxr32_n32: resmem_n32 */
   19,  /* subxr64: resbase */
   20,  /* subxxr64: resbaseindex */
   21,  /* subxxxr64: resindex */
   22,  /* subxr64_off: resmem_n32 */
   19,  /* subixr8: resbase */
   20,  /* subixxr8: resbaseindex */
   21,  /* subixxxr8: resindex */
   22,  /* subixr8_n32: resmem_n32 */
   19,  /* subixr16: resbase */
   20,  /* subixxr16: resbaseindex */
   21,  /* subixxxr16: resindex */
   22,  /* subixr16_n32: resmem_n32 */
   19,  /* subixr32: resbase */
   20,  /* subixxr32: resbaseindex */
   21,  /* subixxxr32: resindex */
   22,  /* subixr32_n32: resmem_n32 */
   19,  /* subixr64: resbase */
   20,  /* subixxr64: resbaseindex */
   21,  /* subixxxr64: resindex */
   22,  /* subixr64_off: resmem_n32 */
   14,  /* sub128v8: ropop */
   23,  /* subx128v8: ropmem */
   24,  /* subxx128v8: ropmemindex */
   25,  /* subxxx128v8: ropmemindexx */
   14,  /* sub128v16: ropop */
   23,  /* subx128v16: ropmem */
   24,  /* subxx128v16: ropmemindex */
   25,  /* subxxx128v16: ropmemindexx */
   14,  /* sub128v32: ropop */
   23,  /* subx128v32: ropmem */
   24,  /* subxx128v32: ropmemindex */
   25,  /* subxxx128v32: ropmemindexx */
   14,  /* sub128v64: ropop */
   23,  /* subx128v64: ropmem */
   24,  /* subxx128v64: ropmemindex */
   25,  /* subxxx128v64: ropmemindexx */
   14,  /* sub64v8: ropop */
   14,  /* sub64v16: ropop */
   14,  /* sub64v32: ropop */
    4,  /* test8: cmp */
    5,  /* testx8: cmpx */
    8,  /* testxx8: cmpxx */
   11,  /* testxxx8: cmpxxx */
    4,  /* test16: cmp */
    5,  /* testx16: cmpx */
    8,  /* testxx16: cmpxx */
   11,  /* testxxx16: cmpxxx */
    4,  /* test32: cmp */
    5,  /* testx32: cmpx */
    8,  /* testxx32: cmpxx */
   11,  /* testxxx32: cmpxxx */
    4,  /* test64: cmp */
    5,  /* testx64: cmpx */
    8,  /* testxx64: cmpxx */
   11,  /* testxxx64: cmpxxx */
    4,  /* testi8: cmp */
    4,  /* testi16: cmp */
    4,  /* testi32: cmp */
    4,  /* testi64: cmp */
   14,  /* xor8: ropop */
   14,  /* xor16: ropop */
   14,  /* xor32: ropop */
   23,  /* xorx32: ropmem */
   24,  /* xorxx32: ropmemindex */
   25,  /* xorxxx32: ropmemindexx */
   14,  /* xor64: ropop */
   23,  /* xorx64: ropmem */
   24,  /* xorxx64: ropmemindex */
   25,  /* xorxxx64: ropmemindexx */
   23,  /* xorx8: ropmem */
   23,  /* xorx16: ropmem */
   24,  /* xorxx8: ropmemindex */
   25,  /* xorxxx8: ropmemindexx */
   24,  /* xorxx16: ropmemindex */
   25,  /* xorxxx16: ropmemindexx */
   19,  /* xorxr8: resbase */
   20,  /* xorxxr8: resbaseindex */
   21,  /* xorxxxr8: resindex */
   22,  /* xorxr8_n32: resmem_n32 */
   19,  /* xorxr16: resbase */
   20,  /* xorxxr16: resbaseindex */
   21,  /* xorxxxr16: resindex */
   22,  /* xorxr16_n32: resmem_n32 */
   19,  /* xorxr32: resbase */
   20,  /* xorxxr32: resbaseindex */
   21,  /* xorxxxr32: resindex */
   22,  /* xorxr32_n32: resmem_n32 */
   19,  /* xorxr64: resbase */
   20,  /* xorxxr64: resbaseindex */
   21,  /* xorxxxr64: resindex */
   22,  /* xorxr64_off: resmem_n32 */
   19,  /* xorixr8: resbase */
   20,  /* xorixxr8: resbaseindex */
   21,  /* xorixxxr8: resindex */
   22,  /* xorixr8_n32: resmem_n32 */
   19,  /* xorixr16: resbase */
   20,  /* xorixxr16: resbaseindex */
   21,  /* xorixxxr16: resindex */
   22,  /* xorixr16_n32: resmem_n32 */
   19,  /* xorixr32: resbase */
   20,  /* xorixxr32: resbaseindex */
   21,  /* xorixxxr32: resindex */
   22,  /* xorixr32_n32: resmem_n32 */
   19,  /* xorixr64: resbase */
   20,  /* xorixxr64: resbaseindex */
   21,  /* xorixxxr64: resindex */
   22,  /* xorixr64_off: resmem_n32 */
   14,  /* xor128v8: ropop */
   23,  /* xorx128v8: ropmem */
   24,  /* xorxx128v8: ropmemindex */
   25,  /* xorxxx128v8: ropmemindexx */
   14,  /* xor128v16: ropop */
   23,  /* xorx128v16: ropmem */
   24,  /* xorxx128v16: ropmemindex */
   25,  /* xorxxx128v16: ropmemindexx */
   14,  /* xor128v32: ropop */
   23,  /* xorx128v32: ropmem */
   24,  /* xorxx128v32: ropmemindex */
   25,  /* xorxxx128v32: ropmemindexx */
   14,  /* xor128v64: ropop */
   23,  /* xorx128v64: ropmem */
   24,  /* xorxx128v64: ropmemindex */
   25,  /* xorxxx128v64: ropmemindexx */
   14,  /* xori8: ropop */
   14,  /* xori16: ropop */
   14,  /* xori32: ropop */
   14,  /* xori64: ropop */
   14,  /* fxor128v32: ropop */
   23,  /* fxorx128v32: ropmem */
   24,  /* fxorxx128v32: ropmemindex */
   25,  /* fxorxxx128v32: ropmemindexx */
   14,  /* fxor128v64: ropop */
   23,  /* fxorx128v64: ropmem */
   24,  /* fxorxx128v64: ropmemindex */
   25,  /* fxorxxx128v64: ropmemindexx */
   14,  /* xorps: ropop */
   14,  /* xorpd: ropop */
   14,  /* addsd: ropop */
   14,  /* addss: ropop */
   23,  /* addxsd: ropmem */
   23,  /* addxss: ropmem */
   24,  /* addxxsd: ropmemindex */
   25,  /* addxxxsd: ropmemindexx */
   24,  /* addxxss: ropmemindex */
   25,  /* addxxxss: ropmemindexx */
   14,  /* faddsub128v32: ropop */
   23,  /* faddsubx128v32: ropmem */
   24,  /* faddsubxx128v32: ropmemindex */
   25,  /* faddsubxxx128v32: ropmemindexx */
   14,  /* faddsub128v64: ropop */
   23,  /* faddsubx128v64: ropmem */
   24,  /* faddsubxx128v64: ropmemindex */
   25,  /* faddsubxxx128v64: ropmemindexx */
   14,  /* fadd128v32: ropop */
   23,  /* faddx128v32: ropmem */
   24,  /* faddxx128v32: ropmemindex */
   25,  /* faddxxx128v32: ropmemindexx */
   14,  /* fadd128v64: ropop */
   23,  /* faddx128v64: ropmem */
   24,  /* faddxx128v64: ropmemindex */
   25,  /* faddxxx128v64: ropmemindexx */
   14,  /* fhadd128v32: ropop */
   23,  /* fhaddx128v32: ropmem */
   24,  /* fhaddxx128v32: ropmemindex */
   25,  /* fhaddxxx128v32: ropmemindexx */
   14,  /* fhadd128v64: ropop */
   23,  /* fhaddx128v64: ropmem */
   24,  /* fhaddxx128v64: ropmemindex */
   25,  /* fhaddxxx128v64: ropmemindexx */
   14,  /* fand128v32: ropop */
   23,  /* fandx128v32: ropmem */
   24,  /* fandxx128v32: ropmemindex */
   25,  /* fandxxx128v32: ropmemindexx */
   14,  /* fand128v64: ropop */
   23,  /* fandx128v64: ropmem */
   24,  /* fandxx128v64: ropmemindex */
   25,  /* fandxxx128v64: ropmemindexx */
   14,  /* andps: ropop */
   14,  /* andpd: ropop */
   14,  /* andnps: ropop */
   14,  /* andnpd: ropop */
   14,  /* for128v32: ropop */
   23,  /* forx128v32: ropmem */
   24,  /* forxx128v32: ropmemindex */
   25,  /* forxxx128v32: ropmemindexx */
   14,  /* for128v64: ropop */
   23,  /* forx128v64: ropmem */
   24,  /* forxx128v64: ropmemindex */
   25,  /* forxxx128v64: ropmemindexx */
   14,  /* orps: ropop */
   14,  /* orpd: ropop */
    4,  /* comisd: cmp */
    5,  /* comixsd: cmpx */
    8,  /* comixxsd: cmpxx */
   11,  /* comixxxsd: cmpxxx */
    4,  /* comiss: cmp */
    5,  /* comixss: cmpx */
    8,  /* comixxss: cmpxx */
   11,  /* comixxxss: cmpxxx */
   30,  /* cmpss: ropopop */
   30,  /* cmpsd: ropopop */
   30,  /* cmpps: ropopop */
   30,  /* cmppd: ropopop */
   14,  /* cmpeq128v8: ropop */
   14,  /* cmpeq128v16: ropop */
   14,  /* cmpeq128v32: ropop */
   23,  /* cmpeqx128v8: ropmem */
   23,  /* cmpeqx128v16: ropmem */
   23,  /* cmpeqx128v32: ropmem */
   24,  /* cmpeqxx128v8: ropmemindex */
   24,  /* cmpeqxx128v16: ropmemindex */
   24,  /* cmpeqxx128v32: ropmemindex */
   25,  /* cmpeqxxx128v8: ropmemindexx */
   25,  /* cmpeqxxx128v16: ropmemindexx */
   25,  /* cmpeqxxx128v32: ropmemindexx */
   14,  /* cmpgt128v8: ropop */
   14,  /* cmpgt128v16: ropop */
   14,  /* cmpgt128v32: ropop */
   23,  /* cmpgtx128v8: ropmem */
   23,  /* cmpgtx128v16: ropmem */
   23,  /* cmpgtx128v32: ropmem */
   24,  /* cmpgtxx128v8: ropmemindex */
   24,  /* cmpgtxx128v16: ropmemindex */
   24,  /* cmpgtxx128v32: ropmemindex */
   25,  /* cmpgtxxx128v8: ropmemindexx */
   25,  /* cmpgtxxx128v16: ropmemindexx */
   25,  /* cmpgtxxx128v32: ropmemindexx */
   14,  /* pcmpeqb: ropop */
   14,  /* pcmpeqw: ropop */
   14,  /* pcmpeqd: ropop */
   14,  /* pcmpgtb: ropop */
   14,  /* pcmpgtw: ropop */
   14,  /* pcmpgtd: ropop */
   76,  /* fmovsldup: rop */
   76,  /* fmovshdup: rop */
   76,  /* fmovddup: rop */
   82,  /* fmovsldupx: load */
   82,  /* fmovshdupx: load */
   82,  /* fmovddupx: load */
   85,  /* fmovsldupxx: ldx */
   85,  /* fmovshdupxx: ldx */
   85,  /* fmovddupxx: ldx */
   86,  /* fmovsldupxxx: ldxx */
   86,  /* fmovshdupxxx: ldxx */
   86,  /* fmovddupxxx: ldxx */
  129,  /* cltd: no_rop */
  129,  /* cqto: no_rop */
   76,  /* cvtss2sd: rop */
   76,  /* cvtsd2ss: rop */
   82,  /* cvtsd2ss_x: load */
   83,  /* cvtsd2ss_xx: leax */
   84,  /* cvtsd2ss_xxx: leaxx */
   76,  /* cvtsi2sd: rop */
   82,  /* cvtsi2sd_x: load */
   83,  /* cvtsi2sd_xx: leax */
   84,  /* cvtsi2sd_xxx: leaxx */
   76,  /* cvtsi2ss: rop */
   82,  /* cvtsi2ss_x: load */
   83,  /* cvtsi2ss_xx: leax */
   84,  /* cvtsi2ss_xxx: leaxx */
   76,  /* cvtsi2sdq: rop */
   82,  /* cvtsi2sdq_x: load */
   83,  /* cvtsi2sdq_xx: leax */
   84,  /* cvtsi2sdq_xxx: leaxx */
   76,  /* cvtsi2ssq: rop */
   82,  /* cvtsi2ssq_x: load */
   83,  /* cvtsi2ssq_xx: leax */
   84,  /* cvtsi2ssq_xxx: leaxx */
   76,  /* cvtss2si: rop */
   76,  /* cvtsd2si: rop */
   76,  /* cvtss2siq: rop */
   76,  /* cvtsd2siq: rop */
   76,  /* cvttss2si: rop */
   76,  /* cvttsd2si: rop */
   76,  /* cvttss2siq: rop */
   76,  /* cvttsd2siq: rop */
   76,  /* cvtdq2pd: rop */
   76,  /* cvtdq2ps: rop */
   76,  /* cvtps2pd: rop */
   76,  /* cvtpd2ps: rop */
   76,  /* cvtps2dq: rop */
   76,  /* cvttps2dq: rop */
   76,  /* cvtpd2dq: rop */
   76,  /* cvttpd2dq: rop */
   82,  /* cvtdq2pd_x: load */
   82,  /* cvtdq2ps_x: load */
   82,  /* cvtps2pd_x: load */
   82,  /* cvtpd2ps_x: load */
   82,  /* cvtps2dq_x: load */
   82,  /* cvtpd2dq_x: load */
   82,  /* cvttps2dq_x: load */
   82,  /* cvttpd2dq_x: load */
   83,  /* cvtdq2pd_xx: leax */
   83,  /* cvtdq2ps_xx: leax */
   83,  /* cvtps2pd_xx: leax */
   83,  /* cvtpd2ps_xx: leax */
   83,  /* cvtps2dq_xx: leax */
   83,  /* cvtpd2dq_xx: leax */
   83,  /* cvttps2dq_xx: leax */
   83,  /* cvttpd2dq_xx: leax */
   84,  /* cvtdq2pd_xxx: leaxx */
   84,  /* cvtdq2ps_xxx: leaxx */
   84,  /* cvtps2pd_xxx: leaxx */
   84,  /* cvtpd2ps_xxx: leaxx */
   84,  /* cvtps2dq_xxx: leaxx */
   84,  /* cvtpd2dq_xxx: leaxx */
   84,  /* cvttps2dq_xxx: leaxx */
   84,  /* cvttpd2dq_xxx: leaxx */
   76,  /* cvtpi2ps: rop */
   76,  /* cvtps2pi: rop */
   76,  /* cvttps2pi: rop */
   76,  /* cvtpi2pd: rop */
   76,  /* cvtpd2pi: rop */
   76,  /* cvttpd2pi: rop */
   82,  /* ldsd: load */
   85,  /* ldsdx: ldx */
   86,  /* ldsdxx: ldxx */
   82,  /* ldss: load */
   85,  /* ldssx: ldx */
   86,  /* ldssxx: ldxx */
   82,  /* lddqa: load */
   82,  /* lddqu: load */
   82,  /* ldlps: load */
   82,  /* ldhps: load */
   82,  /* ldlpd: load */
   82,  /* ldhpd: load */
   94,  /* stdqa: store */
   94,  /* stdqu: store */
   94,  /* stlps: store */
   94,  /* sthps: store */
   94,  /* stlpd: store */
   94,  /* storelpd: store */
   94,  /* sthpd: store */
   94,  /* stntpd: store */
   94,  /* stntps: store */
   94,  /* storent64_fm: store */
   85,  /* lddqax: ldx */
   85,  /* lddqux: ldx */
   85,  /* ldlpsx: ldx */
   85,  /* ldhpsx: ldx */
   85,  /* ldlpdx: ldx */
   85,  /* ldhpdx: ldx */
   87,  /* stdqax: storex */
   87,  /* stntpdx: storex */
   87,  /* stntpsx: storex */
   87,  /* stdqux: storex */
   87,  /* stlpsx: storex */
   87,  /* sthpsx: storex */
   87,  /* stlpdx: storex */
   87,  /* sthpdx: storex */
   86,  /* lddqaxx: ldxx */
   86,  /* lddquxx: ldxx */
   86,  /* ldlpsxx: ldxx */
   86,  /* ldhpsxx: ldxx */
   86,  /* ldlpdxx: ldxx */
   86,  /* ldhpdxx: ldxx */
   82,  /* ldaps: load */
   85,  /* ldapsx: ldx */
   86,  /* ldapsxx: ldxx */
   82,  /* ldapd: load */
   85,  /* ldapdx: ldx */
   86,  /* ldapdxx: ldxx */
   82,  /* ldups: load */
   85,  /* ldupsx: ldx */
   86,  /* ldupsxx: ldxx */
   82,  /* ldupd: load */
   85,  /* ldupdx: ldx */
   86,  /* ldupdxx: ldxx */
   90,  /* stdqaxx: storexx */
   90,  /* stntpdxx: storexx */
   90,  /* stntpsxx: storexx */
   90,  /* stdquxx: storexx */
   90,  /* stlpsxx: storexx */
   90,  /* sthpsxx: storexx */
   90,  /* stlpdxx: storexx */
   90,  /* sthpdxx: storexx */
   94,  /* staps: store */
   87,  /* stapsx: storex */
   90,  /* stapsxx: storexx */
   94,  /* stapd: store */
   87,  /* stapdx: storex */
   90,  /* stapdxx: storexx */
   94,  /* stups: store */
   87,  /* stupsx: storex */
   90,  /* stupsxx: storexx */
   76,  /* stups_n32: rop */
   94,  /* stupd: store */
   87,  /* stupdx: storex */
   90,  /* stupdxx: storexx */
   76,  /* stupd_n32: rop */
   14,  /* maxsd: ropop */
   14,  /* maxss: ropop */
   14,  /* fmax128v32: ropop */
   23,  /* fmaxx128v32: ropmem */
   24,  /* fmaxxx128v32: ropmemindex */
   25,  /* fmaxxxx128v32: ropmemindexx */
   14,  /* fmax128v64: ropop */
   23,  /* fmaxx128v64: ropmem */
   24,  /* fmaxxx128v64: ropmemindex */
   25,  /* fmaxxxx128v64: ropmemindexx */
   14,  /* max64v8: ropop */
   14,  /* max64v16: ropop */
   14,  /* min64v8: ropop */
   14,  /* min64v16: ropop */
   14,  /* minsd: ropop */
   14,  /* minss: ropop */
   14,  /* fmin128v32: ropop */
   23,  /* fminx128v32: ropmem */
   24,  /* fminxx128v32: ropmemindex */
   25,  /* fminxxx128v32: ropmemindexx */
   14,  /* fmin128v64: ropop */
   23,  /* fminx128v64: ropmem */
   24,  /* fminxx128v64: ropmemindex */
   25,  /* fminxxx128v64: ropmemindexx */
   76,  /* movx2g64: rop */
   76,  /* movx2g: rop */
   76,  /* movg2x64: rop */
   76,  /* movg2x: rop */
   76,  /* movsd: rop */
   76,  /* movss: rop */
   76,  /* movdq: rop */
   76,  /* movapd: rop */
   76,  /* movaps: rop */
   76,  /* movq2dq: rop */
   76,  /* movdq2q: rop */
   14,  /* divsd: ropop */
   23,  /* divxsd: ropmem */
   24,  /* divxxsd: ropmemindex */
   25,  /* divxxxsd: ropmemindexx */
   14,  /* divss: ropop */
   23,  /* divxss: ropmem */
   24,  /* divxxss: ropmemindex */
   25,  /* divxxxss: ropmemindexx */
   14,  /* fdiv128v32: ropop */
   23,  /* fdivx128v32: ropmem */
   24,  /* fdivxx128v32: ropmemindex */
   25,  /* fdivxxx128v32: ropmemindexx */
   14,  /* fdiv128v64: ropop */
   23,  /* fdivx128v64: ropmem */
   24,  /* fdivxx128v64: ropmemindex */
   25,  /* fdivxxx128v64: ropmemindexx */
   14,  /* mulsd: ropop */
   14,  /* mulss: ropop */
   14,  /* fmul128v32: ropop */
   23,  /* fmulx128v32: ropmem */
   24,  /* fmulxx128v32: ropmemindex */
   25,  /* fmulxxx128v32: ropmemindexx */
   14,  /* fmul128v64: ropop */
   23,  /* fmulx128v64: ropmem */
   24,  /* fmulxx128v64: ropmemindex */
   25,  /* fmulxxx128v64: ropmemindexx */
   23,  /* mulxsd: ropmem */
   23,  /* mulxss: ropmem */
   24,  /* mulxxsd: ropmemindex */
   25,  /* mulxxxsd: ropmemindexx */
   24,  /* mulxxss: ropmemindex */
   25,  /* mulxxxss: ropmemindexx */
   14,  /* subsd: ropop */
   14,  /* subss: ropop */
   23,  /* subxsd: ropmem */
   23,  /* subxss: ropmem */
   24,  /* subxxsd: ropmemindex */
   25,  /* subxxxsd: ropmemindexx */
   24,  /* subxxss: ropmemindex */
   25,  /* subxxxss: ropmemindexx */
    4,  /* ucomisd: cmp */
    5,  /* ucomixsd: cmpx */
    8,  /* ucomixxsd: cmpxx */
   11,  /* ucomixxxsd: cmpxxx */
    4,  /* ucomiss: cmp */
    5,  /* ucomixss: cmpx */
    8,  /* ucomixxss: cmpxx */
   11,  /* ucomixxxss: cmpxxx */
   14,  /* fsub128v32: ropop */
   23,  /* fsubx128v32: ropmem */
   24,  /* fsubxx128v32: ropmemindex */
   25,  /* fsubxxx128v32: ropmemindexx */
   14,  /* fsub128v64: ropop */
   23,  /* fsubx128v64: ropmem */
   24,  /* fsubxx128v64: ropmemindex */
   25,  /* fsubxxx128v64: ropmemindexx */
   14,  /* fhsub128v32: ropop */
   23,  /* fhsubx128v32: ropmem */
   24,  /* fhsubxx128v32: ropmemindex */
   25,  /* fhsubxxx128v32: ropmemindexx */
   14,  /* fhsub128v64: ropop */
   23,  /* fhsubx128v64: ropmem */
   24,  /* fhsubxx128v64: ropmemindex */
   25,  /* fhsubxxx128v64: ropmemindexx */
   94,  /* stss: store */
   94,  /* stntss: store */
   87,  /* stssx: storex */
   87,  /* stntssx: storex */
   90,  /* stssxx: storexx */
   90,  /* stntssxx: storexx */
   94,  /* stsd: store */
   94,  /* stntsd: store */
   87,  /* stsdx: storex */
   87,  /* stntsdx: storex */
   90,  /* stsdxx: storexx */
   90,  /* stntsdxx: storexx */
   76,  /* rcpss: rop */
   76,  /* frcp128v32: rop */
   76,  /* sqrtsd: rop */
   76,  /* sqrtss: rop */
   76,  /* rsqrtss: rop */
   76,  /* fsqrt128v32: rop */
   76,  /* frsqrt128v32: rop */
   76,  /* fsqrt128v64: rop */
  104,  /* punpcklwd: unpck */
  104,  /* punpcklbw: unpck */
  104,  /* punpckldq: unpck */
  104,  /* punpcklbw128: unpck */
  104,  /* punpcklwd128: unpck */
  104,  /* punpckldq128: unpck */
  104,  /* punpckhbw: unpck */
  104,  /* punpckhwd: unpck */
  104,  /* punpckhdq: unpck */
  104,  /* punpckhbw128: unpck */
  104,  /* punpckhwd128: unpck */
  104,  /* punpckhdq128: unpck */
  104,  /* punpcklqdq: unpck */
  104,  /* punpckhqdq: unpck */
   14,  /* packsswb: ropop */
   14,  /* packssdw: ropop */
   14,  /* packuswb: ropop */
   14,  /* packsswb128: ropop */
   14,  /* packssdw128: ropop */
   14,  /* packuswb128: ropop */
  111,  /* pshufd: shuffle_int */
  111,  /* pshufw: shuffle_int */
  111,  /* pshuflw: shuffle_int */
  111,  /* pshufhw: shuffle_int */
  112,  /* pslldq: shift_packed */
  112,  /* psllw: shift_packed */
  112,  /* psllwi: shift_packed */
  112,  /* pslld: shift_packed */
  112,  /* pslldi: shift_packed */
  112,  /* psllq: shift_packed */
  112,  /* psllqi: shift_packed */
  112,  /* psrlw: shift_packed */
  112,  /* psrlwi: shift_packed */
  112,  /* psrld: shift_packed */
  112,  /* psrldi: shift_packed */
  112,  /* psrlq: shift_packed */
  112,  /* psrlqi: shift_packed */
  112,  /* psraw: shift_packed */
  112,  /* psrawi: shift_packed */
  112,  /* psrad: shift_packed */
  112,  /* psradi: shift_packed */
  112,  /* psllw_mmx: shift_packed */
  112,  /* psllwi_mmx: shift_packed */
  112,  /* pslld_mmx: shift_packed */
  112,  /* pslldi_mmx: shift_packed */
  112,  /* psllq_mmx: shift_packed */
  112,  /* psllqi_mmx: shift_packed */
  112,  /* psrlw_mmx: shift_packed */
  112,  /* psrlwi_mmx: shift_packed */
  112,  /* psrld_mmx: shift_packed */
  112,  /* psrldi_mmx: shift_packed */
  112,  /* psrlq_mmx: shift_packed */
  112,  /* psrlqi_mmx: shift_packed */
  112,  /* psraw_mmx: shift_packed */
  112,  /* psrawi_mmx: shift_packed */
  112,  /* psrad_mmx: shift_packed */
  112,  /* psradi_mmx: shift_packed */
  112,  /* pand_mmx: shift_packed */
  112,  /* pandn_mmx: shift_packed */
  112,  /* por_mmx: shift_packed */
  112,  /* pxor_mmx: shift_packed */
   14,  /* pand: ropop */
   14,  /* pandn: ropop */
   14,  /* por: ropop */
   14,  /* pxor: ropop */
  104,  /* unpckhpd: unpck */
  104,  /* unpckhps: unpck */
  104,  /* unpcklpd: unpck */
  104,  /* unpcklps: unpck */
  106,  /* shufpd: shuffle */
  106,  /* shufps: shuffle */
   76,  /* movhlps: rop */
   76,  /* movlhps: rop */
  112,  /* psrldq: shift_packed */
  112,  /* psrlq128v64: shift_packed */
   14,  /* subus128v16: ropop */
   14,  /* pavgb: ropop */
   14,  /* pavgw: ropop */
   14,  /* psadbw: ropop */
   14,  /* pavgb128: ropop */
   14,  /* pavgw128: ropop */
   14,  /* psadbw128: ropop */
  111,  /* pextrw: shuffle_int */
  111,  /* pinsrw: shuffle_int */
   76,  /* pmovmskb: rop */
   76,  /* pmovmskb128: rop */
   76,  /* movi32_2m: rop */
   76,  /* movi64_2m: rop */
   76,  /* movm_2i32: rop */
   76,  /* movm_2i64: rop */
  111,  /* pshufw64v16: shuffle_int */
   76,  /* movmskps: rop */
   76,  /* movmskpd: rop */
   81,  /* maskmovdqu: opop1 */
   81,  /* maskmovq: opop1 */
  112,  /* extrq: shift_packed */
  112,  /* insertq: shift_packed */
  113,  /* vfmaddss: ndstvecreg */
  114,  /* vfmaddxss: ndstvecregx */
  115,  /* vfmaddxxss: ndestvecregxx */
  116,  /* vfmaddxxxss: ndestvecregxxx */
  117,  /* vfmaddxrss: ndstvecregxr */
  118,  /* vfmaddxxrss: ndestvecregxxr */
  119,  /* vfmaddxxxrss: ndestvecregxxxr */
  113,  /* vfmaddsd: ndstvecreg */
  114,  /* vfmaddxsd: ndstvecregx */
  115,  /* vfmaddxxsd: ndestvecregxx */
  116,  /* vfmaddxxxsd: ndestvecregxxx */
  117,  /* vfmaddxrsd: ndstvecregxr */
  118,  /* vfmaddxxrsd: ndestvecregxxr */
  119,  /* vfmaddxxxrsd: ndestvecregxxxr */
  113,  /* vfnmaddss: ndstvecreg */
  114,  /* vfnmaddxss: ndstvecregx */
  115,  /* vfnmaddxxss: ndestvecregxx */
  116,  /* vfnmaddxxxss: ndestvecregxxx */
  117,  /* vfnmaddxrss: ndstvecregxr */
  118,  /* vfnmaddxxrss: ndestvecregxxr */
  119,  /* vfnmaddxxxrss: ndestvecregxxxr */
  113,  /* vfnmaddsd: ndstvecreg */
  114,  /* vfnmaddxsd: ndstvecregx */
  115,  /* vfnmaddxxsd: ndestvecregxx */
  116,  /* vfnmaddxxxsd: ndestvecregxxx */
  117,  /* vfnmaddxrsd: ndstvecregxr */
  118,  /* vfnmaddxxrsd: ndestvecregxxr */
  119,  /* vfnmaddxxxrsd: ndestvecregxxxr */
  113,  /* vfmaddps: ndstvecreg */
  114,  /* vfmaddxps: ndstvecregx */
  115,  /* vfmaddxxps: ndestvecregxx */
  116,  /* vfmaddxxxps: ndestvecregxxx */
  117,  /* vfmaddxrps: ndstvecregxr */
  118,  /* vfmaddxxrps: ndestvecregxxr */
  119,  /* vfmaddxxxrps: ndestvecregxxxr */
  113,  /* vfmaddpd: ndstvecreg */
  114,  /* vfmaddxpd: ndstvecregx */
  115,  /* vfmaddxxpd: ndestvecregxx */
  116,  /* vfmaddxxxpd: ndestvecregxxx */
  117,  /* vfmaddxrpd: ndstvecregxr */
  118,  /* vfmaddxxrpd: ndestvecregxxr */
  119,  /* vfmaddxxxrpd: ndestvecregxxxr */
  113,  /* vfmaddsubps: ndstvecreg */
  114,  /* vfmaddsubxps: ndstvecregx */
  115,  /* vfmaddsubxxps: ndestvecregxx */
  116,  /* vfmaddsubxxxps: ndestvecregxxx */
  117,  /* vfmaddsubxrps: ndstvecregxr */
  118,  /* vfmaddsubxxrps: ndestvecregxxr */
  119,  /* vfmaddsubxxxrps: ndestvecregxxxr */
  113,  /* vfmaddsubpd: ndstvecreg */
  114,  /* vfmaddsubxpd: ndstvecregx */
  115,  /* vfmaddsubxxpd: ndestvecregxx */
  116,  /* vfmaddsubxxxpd: ndestvecregxxx */
  117,  /* vfmaddsubxrpd: ndstvecregxr */
  118,  /* vfmaddsubxxrpd: ndestvecregxxr */
  119,  /* vfmaddsubxxxrpd: ndestvecregxxxr */
  113,  /* vfnmaddps: ndstvecreg */
  114,  /* vfnmaddxps: ndstvecregx */
  115,  /* vfnmaddxxps: ndestvecregxx */
  116,  /* vfnmaddxxxps: ndestvecregxxx */
  117,  /* vfnmaddxrps: ndstvecregxr */
  118,  /* vfnmaddxxrps: ndestvecregxxr */
  119,  /* vfnmaddxxxrps: ndestvecregxxxr */
  113,  /* vfnmaddpd: ndstvecreg */
  114,  /* vfnmaddxpd: ndstvecregx */
  115,  /* vfnmaddxxpd: ndestvecregxx */
  116,  /* vfnmaddxxxpd: ndestvecregxxx */
  117,  /* vfnmaddxrpd: ndstvecregxr */
  118,  /* vfnmaddxxrpd: ndestvecregxxr */
  119,  /* vfnmaddxxxrpd: ndestvecregxxxr */
  113,  /* vfmsubss: ndstvecreg */
  114,  /* vfmsubxss: ndstvecregx */
  115,  /* vfmsubxxss: ndestvecregxx */
  116,  /* vfmsubxxxss: ndestvecregxxx */
  117,  /* vfmsubxrss: ndstvecregxr */
  118,  /* vfmsubxxrss: ndestvecregxxr */
  119,  /* vfmsubxxxrss: ndestvecregxxxr */
  113,  /* vfmsubsd: ndstvecreg */
  114,  /* vfmsubxsd: ndstvecregx */
  115,  /* vfmsubxxsd: ndestvecregxx */
  116,  /* vfmsubxxxsd: ndestvecregxxx */
  117,  /* vfmsubxrsd: ndstvecregxr */
  118,  /* vfmsubxxrsd: ndestvecregxxr */
  119,  /* vfmsubxxxrsd: ndestvecregxxxr */
  113,  /* vfnmsubss: ndstvecreg */
  114,  /* vfnmsubxss: ndstvecregx */
  115,  /* vfnmsubxxss: ndestvecregxx */
  116,  /* vfnmsubxxxss: ndestvecregxxx */
  117,  /* vfnmsubxrss: ndstvecregxr */
  118,  /* vfnmsubxxrss: ndestvecregxxr */
  119,  /* vfnmsubxxxrss: ndestvecregxxxr */
  113,  /* vfnmsubsd: ndstvecreg */
  114,  /* vfnmsubxsd: ndstvecregx */
  115,  /* vfnmsubxxsd: ndestvecregxx */
  116,  /* vfnmsubxxxsd: ndestvecregxxx */
  117,  /* vfnmsubxrsd: ndstvecregxr */
  118,  /* vfnmsubxxrsd: ndestvecregxxr */
  119,  /* vfnmsubxxxrsd: ndestvecregxxxr */
  113,  /* vfmsubps: ndstvecreg */
  114,  /* vfmsubxps: ndstvecregx */
  115,  /* vfmsubxxps: ndestvecregxx */
  116,  /* vfmsubxxxps: ndestvecregxxx */
  117,  /* vfmsubxrps: ndstvecregxr */
  118,  /* vfmsubxxrps: ndestvecregxxr */
  119,  /* vfmsubxxxrps: ndestvecregxxxr */
  113,  /* vfmsubpd: ndstvecreg */
  114,  /* vfmsubxpd: ndstvecregx */
  115,  /* vfmsubxxpd: ndestvecregxx */
  116,  /* vfmsubxxxpd: ndestvecregxxx */
  117,  /* vfmsubxrpd: ndstvecregxr */
  118,  /* vfmsubxxrpd: ndestvecregxxr */
  119,  /* vfmsubxxxrpd: ndestvecregxxxr */
  113,  /* vfmsubaddps: ndstvecreg */
  114,  /* vfmsubaddxps: ndstvecregx */
  115,  /* vfmsubaddxxps: ndestvecregxx */
  116,  /* vfmsubaddxxxps: ndestvecregxxx */
  117,  /* vfmsubaddxrps: ndstvecregxr */
  118,  /* vfmsubaddxxrps: ndestvecregxxr */
  119,  /* vfmsubaddxxxrps: ndestvecregxxxr */
  113,  /* vfmsubaddpd: ndstvecreg */
  114,  /* vfmsubaddxpd: ndstvecregx */
  115,  /* vfmsubaddxxpd: ndestvecregxx */
  116,  /* vfmsubaddxxxpd: ndestvecregxxx */
  117,  /* vfmsubaddxrpd: ndstvecregxr */
  118,  /* vfmsubaddxxrpd: ndestvecregxxr */
  119,  /* vfmsubaddxxxrpd: ndestvecregxxxr */
  113,  /* vfnmsubps: ndstvecreg */
  114,  /* vfnmsubxps: ndstvecregx */
  115,  /* vfnmsubxxps: ndestvecregxx */
  116,  /* vfnmsubxxxps: ndestvecregxxx */
  117,  /* vfnmsubxrps: ndstvecregxr */
  118,  /* vfnmsubxxrps: ndestvecregxxr */
  119,  /* vfnmsubxxxrps: ndestvecregxxxr */
  113,  /* vfnmsubpd: ndstvecreg */
  114,  /* vfnmsubxpd: ndstvecregx */
  115,  /* vfnmsubxxpd: ndestvecregxx */
  116,  /* vfnmsubxxxpd: ndestvecregxxx */
  117,  /* vfnmsubxrpd: ndstvecregxr */
  118,  /* vfnmsubxxrpd: ndestvecregxxr */
  119,  /* vfnmsubxxxrpd: ndestvecregxxxr */
  129,  /* vzeroupper: no_rop */
  129,  /* mfence: no_rop */
  129,  /* lfence: no_rop */
  129,  /* sfence: no_rop */
  129,  /* monitor: no_rop */
  129,  /* mwait: no_rop */
    0,  /* asm */
    0,  /* intrncall */
    0,  /* spadjust */
    0,  /* savexmms */
   74,  /* zero32: rr */
   74,  /* zero64: rr */
   74,  /* xzero32: rr */
   74,  /* xzero64: rr */
   74,  /* xzero128v32: rr */
   74,  /* xzero128v64: rr */
   14,  /* fadd: ropop */
   14,  /* faddp: ropop */
   69,  /* flds: opop */
   68,  /* flds_n32: op0 */
   69,  /* fldl: opop */
   68,  /* fldl_n32: op0 */
   69,  /* fldt: opop */
   68,  /* fldt_n32: op0 */
   68,  /* fld: op0 */
   68,  /* fst: op0 */
   68,  /* fstp: op0 */
   91,  /* fstps: prefetch */
    2,  /* fstps_n32: op1 */
   91,  /* fstpl: prefetch */
    2,  /* fstpl_n32: op1 */
   91,  /* fstpt: prefetch */
    2,  /* fstpt_n32: op1 */
   91,  /* fsts: prefetch */
    2,  /* fsts_n32: op1 */
   91,  /* fstl: prefetch */
    2,  /* fstl_n32: op1 */
   68,  /* fxch: op0 */
   68,  /* fmov: op0 */
   14,  /* fsub: ropop */
   14,  /* fsubr: ropop */
   14,  /* fsubp: ropop */
   14,  /* fsubrp: ropop */
   14,  /* fmul: ropop */
   14,  /* fmulp: ropop */
   14,  /* fdiv: ropop */
   14,  /* fdivp: ropop */
   14,  /* fdivr: ropop */
   14,  /* fdivrp: ropop */
    4,  /* fucomi: cmp */
    4,  /* fucomip: cmp */
  129,  /* fchs: no_rop */
  129,  /* frndint: no_rop */
   91,  /* fnstcw: prefetch */
   69,  /* fldcw: opop */
   91,  /* fistps: prefetch */
   91,  /* fistpl: prefetch */
   91,  /* fists: prefetch */
   91,  /* fistl: prefetch */
   91,  /* fistpll: prefetch */
   69,  /* filds: opop */
   69,  /* fildl: opop */
   69,  /* fildll: opop */
  129,  /* fldz: no_rop */
  129,  /* fabs: no_rop */
  129,  /* fsqrt: no_rop */
   76,  /* fcmovb: rop */
   76,  /* fcmovbe: rop */
   76,  /* fcmovnb: rop */
   76,  /* fcmovnbe: rop */
   76,  /* fcmove: rop */
   76,  /* fcmovne: rop */
   76,  /* fcmovu: rop */
   76,  /* fcmovnu: rop */
  129,  /* fcos: no_rop */
  129,  /* fsin: no_rop */
   14,  /* cmpeqpd: ropop */
   14,  /* cmpltpd: ropop */
   14,  /* cmplepd: ropop */
   14,  /* cmpunordpd: ropop */
   14,  /* cmpneqpd: ropop */
   14,  /* cmpnltpd: ropop */
   14,  /* cmpnlepd: ropop */
   14,  /* cmpordpd: ropop */
   14,  /* cmpeqps: ropop */
   14,  /* cmpltps: ropop */
   14,  /* cmpleps: ropop */
   14,  /* cmpunordps: ropop */
   14,  /* cmpneqps: ropop */
   14,  /* cmpnltps: ropop */
   14,  /* cmpnleps: ropop */
   14,  /* cmpordps: ropop */
   14,  /* cmpeqsd: ropop */
   14,  /* cmpltsd: ropop */
   14,  /* cmplesd: ropop */
   14,  /* cmpunordsd: ropop */
   14,  /* cmpneqsd: ropop */
   14,  /* cmpnltsd: ropop */
   14,  /* cmpnlesd: ropop */
   14,  /* cmpordsd: ropop */
   14,  /* cmpeqss: ropop */
   14,  /* cmpltss: ropop */
   14,  /* cmpless: ropop */
   14,  /* cmpunordss: ropop */
   14,  /* cmpneqss: ropop */
   14,  /* cmpnltss: ropop */
   14,  /* cmpnless: ropop */
   14,  /* cmpordss: ropop */
  129,  /* emms: no_rop */
  124,  /* stmxcsr: stmxcsr */
  124,  /* ldmxcsr: stmxcsr */
   69,  /* clflush: opop */
   91,  /* fisttps: prefetch */
   91,  /* fisttpl: prefetch */
   91,  /* fisttpll: prefetch */
   76,  /* pabs128v8: rop */
   78,  /* pabsx128v8: rmem */
   79,  /* pabsxx128v8: rmemindex */
   80,  /* pabsxxx128v8: rmemindexx */
   76,  /* pabs128v16: rop */
   78,  /* pabsx128v16: rmem */
   79,  /* pabsxx128v16: rmemindex */
   80,  /* pabsxxx128v16: rmemindexx */
   76,  /* pabs128v32: rop */
   78,  /* pabsx128v32: rmem */
   79,  /* pabsxx128v32: rmemindex */
   80,  /* pabsxxx128v32: rmemindexx */
   14,  /* psign128v8: ropop */
   23,  /* psignx128v8: ropmem */
   24,  /* psignxx128v8: ropmemindex */
   25,  /* psignxxx128v8: ropmemindexx */
   14,  /* psign128v16: ropop */
   23,  /* psignx128v16: ropmem */
   24,  /* psignxx128v16: ropmemindex */
   25,  /* psignxxx128v16: ropmemindexx */
   14,  /* psign128v32: ropop */
   23,  /* psignx128v32: ropmem */
   24,  /* psignxx128v32: ropmemindex */
   25,  /* psignxxx128v32: ropmemindexx */
  107,  /* pshuf128v8: pshufb */
  108,  /* pshufx128v8: pshufb_mem */
  109,  /* pshufxx128v8: pshufb_memindex */
  110,  /* pshufxxx128v8: pshufb_memindexx */
   14,  /* phsub128v16: ropop */
   23,  /* phsubx128v16: ropmem */
   24,  /* phsubxx128v16: ropmemindex */
   25,  /* phsubxxx128v16: ropmemindexx */
   14,  /* phsub128v32: ropop */
   23,  /* phsubx128v32: ropmem */
   24,  /* phsubxx128v32: ropmemindex */
   25,  /* phsubxxx128v32: ropmemindexx */
   14,  /* phsubs128v16: ropop */
   23,  /* phsubsx128v16: ropmem */
   24,  /* phsubsxx128v16: ropmemindex */
   25,  /* phsubsxxx128v16: ropmemindexx */
   14,  /* phadd128v16: ropop */
   23,  /* phaddx128v16: ropmem */
   24,  /* phaddxx128v16: ropmemindex */
   25,  /* phaddxxx128v16: ropmemindexx */
   14,  /* phadd128v32: ropop */
   23,  /* phaddx128v32: ropmem */
   24,  /* phaddxx128v32: ropmemindex */
   25,  /* phaddxxx128v32: ropmemindexx */
   14,  /* phadds128v16: ropop */
   23,  /* phaddsx128v16: ropmem */
   24,  /* phaddsxx128v16: ropmemindex */
   25,  /* phaddsxxx128v16: ropmemindexx */
   14,  /* pmulhrsw128: ropop */
   23,  /* pmulhrswx128: ropmem */
   24,  /* pmulhrswxx128: ropmemindex */
   25,  /* pmulhrswxxx128: ropmemindexx */
   14,  /* pmaddubsw128: ropop */
   23,  /* pmaddubswx128: ropmem */
   24,  /* pmaddubswxx128: ropmemindex */
   25,  /* pmaddubswxxx128: ropmemindexx */
   30,  /* palignr128: ropopop */
   31,  /* palignrx128: ropmemop */
   32,  /* palignrxx128: ropmemindexop */
   33,  /* palignrxxx128: ropmemindexxop */
   14,  /* muldq: ropop */
   23,  /* muldqx: ropmem */
   24,  /* muldqxx: ropmemindex */
   25,  /* muldqxxx: ropmemindexx */
   82,  /* ldntdqa: load */
   85,  /* ldntdqax: ldx */
   86,  /* ldntdqaxx: ldxx */
   94,  /* stntdq: store */
   87,  /* stntdqx: storex */
   90,  /* stntdqxx: storexx */
   14,  /* minu128v8: ropop */
   23,  /* minux128v8: ropmem */
   24,  /* minuxx128v8: ropmemindex */
   25,  /* minuxxx128v8: ropmemindexx */
   14,  /* mins128v8: ropop */
   23,  /* minsx128v8: ropmem */
   24,  /* minsxx128v8: ropmemindex */
   25,  /* minsxxx128v8: ropmemindexx */
   14,  /* maxu128v8: ropop */
   23,  /* maxux128v8: ropmem */
   24,  /* maxuxx128v8: ropmemindex */
   25,  /* maxuxxx128v8: ropmemindexx */
   14,  /* maxs128v8: ropop */
   23,  /* maxsx128v8: ropmem */
   24,  /* maxsxx128v8: ropmemindex */
   25,  /* maxsxxx128v8: ropmemindexx */
   14,  /* mins128v16: ropop */
   23,  /* minsx128v16: ropmem */
   24,  /* minsxx128v16: ropmemindex */
   25,  /* minsxxx128v16: ropmemindexx */
   14,  /* maxs128v16: ropop */
   23,  /* maxsx128v16: ropmem */
   24,  /* maxsxx128v16: ropmemindex */
   25,  /* maxsxxx128v16: ropmemindexx */
   14,  /* minu128v16: ropop */
   23,  /* minux128v16: ropmem */
   24,  /* minuxx128v16: ropmemindex */
   25,  /* minuxxx128v16: ropmemindexx */
   14,  /* maxu128v16: ropop */
   23,  /* maxux128v16: ropmem */
   24,  /* maxuxx128v16: ropmemindex */
   25,  /* maxuxxx128v16: ropmemindexx */
   14,  /* minu128v32: ropop */
   23,  /* minux128v32: ropmem */
   24,  /* minuxx128v32: ropmemindex */
   25,  /* minuxxx128v32: ropmemindexx */
   14,  /* maxu128v32: ropop */
   23,  /* maxux128v32: ropmem */
   24,  /* maxuxx128v32: ropmemindex */
   25,  /* maxuxxx128v32: ropmemindexx */
   14,  /* mins128v32: ropop */
   23,  /* minsx128v32: ropmem */
   24,  /* minsxx128v32: ropmemindex */
   25,  /* minsxxx128v32: ropmemindexx */
   14,  /* maxs128v32: ropop */
   23,  /* maxsx128v32: ropmem */
   24,  /* maxsxx128v32: ropmemindex */
   25,  /* maxsxxx128v32: ropmemindexx */
   76,  /* pmovsxbw: rop */
   78,  /* pmovsxbwx: rmem */
   79,  /* pmovsxbwxx: rmemindex */
   80,  /* pmovsxbwxxx: rmemindexx */
   76,  /* pmovzxbw: rop */
   78,  /* pmovzxbwx: rmem */
   79,  /* pmovzxbwxx: rmemindex */
   80,  /* pmovzxbwxxx: rmemindexx */
   76,  /* pmovsxbd: rop */
   78,  /* pmovsxbdx: rmem */
   79,  /* pmovsxbdxx: rmemindex */
   80,  /* pmovsxbdxxx: rmemindexx */
   76,  /* pmovzxbd: rop */
   78,  /* pmovzxbdx: rmem */
   79,  /* pmovzxbdxx: rmemindex */
   80,  /* pmovzxbdxxx: rmemindexx */
   76,  /* pmovsxbq: rop */
   78,  /* pmovsxbqx: rmem */
   79,  /* pmovsxbqxx: rmemindex */
   80,  /* pmovsxbqxxx: rmemindexx */
   76,  /* pmovzxbq: rop */
   78,  /* pmovzxbqx: rmem */
   79,  /* pmovzxbqxx: rmemindex */
   80,  /* pmovzxbqxxx: rmemindexx */
   76,  /* pmovsxwd: rop */
   78,  /* pmovsxwdx: rmem */
   79,  /* pmovsxwdxx: rmemindex */
   80,  /* pmovsxwdxxx: rmemindexx */
   76,  /* pmovzxwd: rop */
   78,  /* pmovzxwdx: rmem */
   79,  /* pmovzxwdxx: rmemindex */
   80,  /* pmovzxwdxxx: rmemindexx */
   76,  /* pmovsxwq: rop */
   78,  /* pmovsxwqx: rmem */
   79,  /* pmovsxwqxx: rmemindex */
   80,  /* pmovsxwqxxx: rmemindexx */
   76,  /* pmovzxwq: rop */
   78,  /* pmovzxwqx: rmem */
   79,  /* pmovzxwqxx: rmemindex */
   80,  /* pmovzxwqxxx: rmemindexx */
   76,  /* pmovsxdq: rop */
   78,  /* pmovsxdqx: rmem */
   79,  /* pmovsxdqxx: rmemindex */
   80,  /* pmovsxdqxxx: rmemindexx */
   76,  /* pmovzxdq: rop */
   78,  /* pmovzxdqx: rmem */
   79,  /* pmovzxdqxx: rmemindex */
   80,  /* pmovzxdqxxx: rmemindexx */
   14,  /* mul128v32: ropop */
   23,  /* mulx128v32: ropmem */
   24,  /* mulxx128v32: ropmemindex */
   25,  /* mulxxx128v32: ropmemindexx */
   14,  /* cmpeq128v64: ropop */
   23,  /* cmpeqx128v64: ropmem */
   24,  /* cmpeqxx128v64: ropmemindex */
   25,  /* cmpeqxxx128v64: ropmemindexx */
   14,  /* packusdw: ropop */
   23,  /* packusdwx: ropmem */
   24,  /* packusdwxx: ropmemindex */
   25,  /* packusdwxxx: ropmemindexx */
   76,  /* phminposuw: rop */
   78,  /* phminposuwx: rmem */
   79,  /* phminposuwxx: rmemindex */
   80,  /* phminposuwxxx: rmemindexx */
    4,  /* ptest128: cmp */
    5,  /* ptestx128: cmpx */
    8,  /* ptestxx128: cmpxx */
   11,  /* ptestxxx128: cmpxxx */
   52,  /* roundsd: round */
   53,  /* roundxsd: roundmem */
   54,  /* roundxxsd: roundmemindex */
   55,  /* roundxxxsd: roundmemindexx */
   30,  /* mpsadbw: ropopop */
   31,  /* mpsadbwx: ropmemop */
   32,  /* mpsadbwxx: ropmemindexop */
   33,  /* mpsadbwxxx: ropmemindexxop */
   30,  /* insr128v8: ropopop */
   31,  /* insrx128v8: ropmemop */
   32,  /* insrxx128v8: ropmemindexop */
   33,  /* insrxxx128v8: ropmemindexxop */
   30,  /* insr128v16: ropopop */
   31,  /* insrx128v16: ropmemop */
   32,  /* insrxx128v16: ropmemindexop */
   33,  /* insrxxx128v16: ropmemindexxop */
   30,  /* insr128v32: ropopop */
   31,  /* insrx128v32: ropmemop */
   32,  /* insrxx128v32: ropmemindexop */
   33,  /* insrxxx128v32: ropmemindexxop */
   30,  /* insr128v64: ropopop */
   31,  /* insrx128v64: ropmemop */
   32,  /* insrxx128v64: ropmemindexop */
   33,  /* insrxxx128v64: ropmemindexxop */
   38,  /* extr128v8: vropop */
   40,  /* extrx128v8: vrmemop */
   42,  /* extrxx128v8: vrmemindexop */
   44,  /* extrxxx128v8: vrmemindexxop */
   38,  /* extr128v16: vropop */
   40,  /* extrx128v16: vrmemop */
   42,  /* extrxx128v16: vrmemindexop */
   44,  /* extrxxx128v16: vrmemindexxop */
   38,  /* extr128v32: vropop */
   40,  /* extrx128v32: vrmemop */
   42,  /* extrxx128v32: vrmemindexop */
   44,  /* extrxxx128v32: vrmemindexxop */
   38,  /* extr128v64: vropop */
   40,  /* extrx128v64: vrmemop */
   42,  /* extrxx128v64: vrmemindexop */
   44,  /* extrxxx128v64: vrmemindexxop */
   30,  /* finsr128v32: ropopop */
   31,  /* finsrx128v32: ropmemop */
   32,  /* finsrxx128v32: ropmemindexop */
   33,  /* finsrxxx128v32: ropmemindexxop */
   38,  /* fextr128v32: vropop */
   40,  /* fextrx128v32: vrmemop */
   42,  /* fextrxx128v32: vrmemindexop */
   44,  /* fextrxxx128v32: vrmemindexxop */
   26,  /* fblendv128v32: rblendv */
   27,  /* fblendvx128v32: rblendvmem */
   28,  /* fblendvxx128v32: rblendvmemindex */
   29,  /* fblendvxxx128v32: rblendvmemindexx */
   26,  /* fblendv128v64: rblendv */
   27,  /* fblendvx128v64: rblendvmem */
   28,  /* fblendvxx128v64: rblendvmemindex */
   29,  /* fblendvxxx128v64: rblendvmemindexx */
   26,  /* blendv128v8: rblendv */
   27,  /* blendvx128v8: rblendvmem */
   28,  /* blendvxx128v8: rblendvmemindex */
   29,  /* blendvxxx128v8: rblendvmemindexx */
   52,  /* round128v32: round */
   53,  /* roundx128v32: roundmem */
   54,  /* roundxx128v32: roundmemindex */
   55,  /* roundxxx128v32: roundmemindexx */
   52,  /* roundss: round */
   53,  /* roundxss: roundmem */
   54,  /* roundxxss: roundmemindex */
   55,  /* roundxxxss: roundmemindexx */
   30,  /* fblend128v64: ropopop */
   31,  /* fblendx128v64: ropmemop */
   32,  /* fblendxx128v64: ropmemindexop */
   33,  /* fblendxxx128v64: ropmemindexxop */
   30,  /* blend128v16: ropopop */
   31,  /* blendx128v16: ropmemop */
   32,  /* blendxx128v16: ropmemindexop */
   33,  /* blendxxx128v16: ropmemindexxop */
   30,  /* fdp128v32: ropopop */
   31,  /* fdpx128v32: ropmemop */
   32,  /* fdpxx128v32: ropmemindexop */
   33,  /* fdpxxx128v32: ropmemindexxop */
   30,  /* fdp128v64: ropopop */
   31,  /* fdpx128v64: ropmemop */
   32,  /* fdpxx128v64: ropmemindexop */
   33,  /* fdpxxx128v64: ropmemindexxop */
   52,  /* round128v64: round */
   53,  /* roundx128v64: roundmem */
   54,  /* roundxx128v64: roundmemindex */
   55,  /* roundxxx128v64: roundmemindexx */
   30,  /* fblend128v32: ropopop */
   31,  /* fblendx128v32: ropmemop */
   32,  /* fblendxx128v32: ropmemindexop */
   33,  /* fblendxxx128v32: ropmemindexxop */
   14,  /* cmpgt128v64: ropop */
   23,  /* cmpgtx128v64: ropmem */
   24,  /* cmpgtxx128v64: ropmemindex */
   25,  /* cmpgtxxx128v64: ropmemindexx */
   14,  /* crc32w: ropop */
   23,  /* crc32wx: ropmem */
   24,  /* crc32wxx: ropmemindex */
   25,  /* crc32wxxx: ropmemindexx */
   14,  /* crc32d: ropop */
   23,  /* crc32dx: ropmem */
   24,  /* crc32dxx: ropmemindex */
   25,  /* crc32dxxx: ropmemindexx */
   14,  /* crc32q: ropop */
   23,  /* crc32qx: ropmem */
   24,  /* crc32qxx: ropmemindex */
   25,  /* crc32qxxx: ropmemindexx */
   14,  /* crc32b: ropop */
   23,  /* crc32bx: ropmem */
   24,  /* crc32bxx: ropmemindex */
   25,  /* crc32bxxx: ropmemindexx */
   60,  /* cmpestrm: pcmpestr */
   61,  /* cmpestrmx: pcmpestrmem */
   62,  /* cmpestrmxx: pcmpestrmemindex */
   63,  /* cmpestrmxxx: pcmpestrmemindexx */
   60,  /* cmpestri: pcmpestr */
   61,  /* cmpestrix: pcmpestrmem */
   62,  /* cmpestrixx: pcmpestrmemindex */
   63,  /* cmpestrixxx: pcmpestrmemindexx */
   64,  /* cmpistrm: pcmpistr */
   65,  /* cmpistrmx: pcmpistrmem */
   66,  /* cmpistrmxx: pcmpistrmemindex */
   67,  /* cmpistrmxxx: pcmpistrmemindexx */
   64,  /* cmpistri: pcmpistr */
   65,  /* cmpistrix: pcmpistrmem */
   66,  /* cmpistrixx: pcmpistrmemindex */
   67,  /* cmpistrixxx: pcmpistrmemindexx */
   76,  /* popcnt16: rop */
   78,  /* popcntx16: rmem */
   79,  /* popcntxx16: rmemindex */
   80,  /* popcntxxx16: rmemindexx */
   76,  /* popcnt32: rop */
   78,  /* popcntx32: rmem */
   79,  /* popcntxx32: rmemindex */
   80,  /* popcntxxx32: rmemindexx */
   76,  /* popcnt64: rop */
   78,  /* popcntx64: rmem */
   79,  /* popcntxx64: rmemindex */
   80,  /* popcntxxx64: rmemindexx */
   76,  /* aesimc: rop */
   78,  /* aesimcx: rmem */
   79,  /* aesimcxx: rmemindex */
   80,  /* aesimcxxx: rmemindexx */
   38,  /* aeskeygenassist: vropop */
   39,  /* aeskeygenassistx: vropmem */
   41,  /* aeskeygenassistxx: vropmemindex */
   43,  /* aeskeygenassistxxx: vropmemindexx */
   14,  /* aesenc: ropop */
   23,  /* aesencx: ropmem */
   24,  /* aesencxx: ropmemindex */
   25,  /* aesencxxx: ropmemindexx */
   14,  /* aesenclast: ropop */
   23,  /* aesenclastx: ropmem */
   24,  /* aesenclastxx: ropmemindex */
   25,  /* aesenclastxxx: ropmemindexx */
   14,  /* aesdec: ropop */
   23,  /* aesdecx: ropmem */
   24,  /* aesdecxx: ropmemindex */
   25,  /* aesdecxxx: ropmemindexx */
   14,  /* aesdeclast: ropop */
   23,  /* aesdeclastx: ropmem */
   24,  /* aesdeclastxx: ropmemindex */
   25,  /* aesdeclastxxx: ropmemindexx */
   30,  /* pclmulqdq: ropopop */
   31,  /* pclmulqdqx: ropmemop */
   32,  /* pclmulqdqxx: ropmemindexop */
   33,  /* pclmulqdqxxx: ropmemindexxop */
   76,  /* vphaddbd: rop */
   78,  /* vphaddbdx: rmem */
   79,  /* vphaddbdxx: rmemindex */
   80,  /* vphaddbdxxx: rmemindexx */
   76,  /* vphaddbq: rop */
   78,  /* vphaddbqx: rmem */
   79,  /* vphaddbqxx: rmemindex */
   80,  /* vphaddbqxxx: rmemindexx */
   76,  /* vphaddbw: rop */
   78,  /* vphaddbwx: rmem */
   79,  /* vphaddbwxx: rmemindex */
   80,  /* vphaddbwxxx: rmemindexx */
   76,  /* vphadddq: rop */
   78,  /* vphadddqx: rmem */
   79,  /* vphadddqxx: rmemindex */
   80,  /* vphadddqxxx: rmemindexx */
   76,  /* vphaddubd: rop */
   78,  /* vphaddubdx: rmem */
   79,  /* vphaddubdxx: rmemindex */
   80,  /* vphaddubdxxx: rmemindexx */
   76,  /* vphaddubq: rop */
   78,  /* vphaddubqx: rmem */
   79,  /* vphaddubqxx: rmemindex */
   80,  /* vphaddubqxxx: rmemindexx */
   76,  /* vphaddubw: rop */
   78,  /* vphaddubwx: rmem */
   79,  /* vphaddubwxx: rmemindex */
   80,  /* vphaddubwxxx: rmemindexx */
   76,  /* vphaddudq: rop */
   78,  /* vphaddudqx: rmem */
   79,  /* vphaddudqxx: rmemindex */
   80,  /* vphaddudqxxx: rmemindexx */
   76,  /* vphadduwd: rop */
   78,  /* vphadduwdx: rmem */
   79,  /* vphadduwdxx: rmemindex */
   80,  /* vphadduwdxxx: rmemindexx */
   76,  /* vphadduwq: rop */
   78,  /* vphadduwqx: rmem */
   79,  /* vphadduwqxx: rmemindex */
   80,  /* vphadduwqxxx: rmemindexx */
   76,  /* vphaddwd: rop */
   78,  /* vphaddwdx: rmem */
   79,  /* vphaddwdxx: rmemindex */
   80,  /* vphaddwdxxx: rmemindexx */
   76,  /* vphaddwq: rop */
   78,  /* vphaddwqx: rmem */
   79,  /* vphaddwqxx: rmemindex */
   80,  /* vphaddwqxxx: rmemindexx */
   76,  /* vphsubbw: rop */
   78,  /* vphsubbwx: rmem */
   79,  /* vphsubbwxx: rmemindex */
   80,  /* vphsubbwxxx: rmemindexx */
   76,  /* vphsubdq: rop */
   78,  /* vphsubdqx: rmem */
   79,  /* vphsubdqxx: rmemindex */
   80,  /* vphsubdqxxx: rmemindexx */
   76,  /* vphsubwd: rop */
   78,  /* vphsubwdx: rmem */
   79,  /* vphsubwdxx: rmemindex */
   80,  /* vphsubwdxxx: rmemindexx */
   76,  /* vfrczpd: rop */
   78,  /* vfrczpdx: rmem */
   79,  /* vfrczpdxx: rmemindex */
   80,  /* vfrczpdxxx: rmemindexx */
   76,  /* vfrczps: rop */
   78,  /* vfrczpsx: rmem */
   79,  /* vfrczpsxx: rmemindex */
   80,  /* vfrczpsxxx: rmemindexx */
   76,  /* vfrczsd: rop */
   78,  /* vfrczsdx: rmem */
   79,  /* vfrczsdxx: rmemindex */
   80,  /* vfrczsdxxx: rmemindexx */
   76,  /* vfrczss: rop */
   78,  /* vfrczssx: rmem */
   79,  /* vfrczssxx: rmemindex */
   80,  /* vfrczssxxx: rmemindexx */
   38,  /* vprotbi: vropop */
   40,  /* vprotbix: vrmemop */
   42,  /* vprotbixx: vrmemindexop */
   44,  /* vprotbixxx: vrmemindexxop */
   38,  /* vprotdi: vropop */
   40,  /* vprotdix: vrmemop */
   42,  /* vprotdixx: vrmemindexop */
   44,  /* vprotdixxx: vrmemindexxop */
   38,  /* vprotqi: vropop */
   40,  /* vprotqix: vrmemop */
   42,  /* vprotqixx: vrmemindexop */
   44,  /* vprotqixxx: vrmemindexxop */
   38,  /* vprotwi: vropop */
   40,  /* vprotwix: vrmemop */
   42,  /* vprotwixx: vrmemindexop */
   44,  /* vprotwixxx: vrmemindexxop */
   45,  /* vpcomb: vropopimm */
   46,  /* vpcombx: vropmemop */
   47,  /* vpcombxx: vropmemindexop */
   48,  /* vpcombxxx: vropmemindexxop */
   45,  /* vpcomd: vropopimm */
   46,  /* vpcomdx: vropmemop */
   47,  /* vpcomdxx: vropmemindexop */
   48,  /* vpcomdxxx: vropmemindexxop */
   45,  /* vpcomq: vropopimm */
   46,  /* vpcomqx: vropmemop */
   47,  /* vpcomqxx: vropmemindexop */
   48,  /* vpcomqxxx: vropmemindexxop */
   45,  /* vpcomw: vropopimm */
   46,  /* vpcomwx: vropmemop */
   47,  /* vpcomwxx: vropmemindexop */
   48,  /* vpcomwxxx: vropmemindexxop */
   45,  /* vpcomub: vropopimm */
   46,  /* vpcomubx: vropmemop */
   47,  /* vpcomubxx: vropmemindexop */
   48,  /* vpcomubxxx: vropmemindexxop */
   45,  /* vpcomud: vropopimm */
   46,  /* vpcomudx: vropmemop */
   47,  /* vpcomudxx: vropmemindexop */
   48,  /* vpcomudxxx: vropmemindexxop */
   45,  /* vpcomuq: vropopimm */
   46,  /* vpcomuqx: vropmemop */
   47,  /* vpcomuqxx: vropmemindexop */
   48,  /* vpcomuqxxx: vropmemindexxop */
   45,  /* vpcomuw: vropopimm */
   46,  /* vpcomuwx: vropmemop */
   47,  /* vpcomuwxx: vropmemindexop */
   48,  /* vpcomuwxxx: vropmemindexxop */
   45,  /* vpperm: vropopimm */
   46,  /* vppermx: vropmemop */
   47,  /* vppermxx: vropmemindexop */
   48,  /* vppermxxx: vropmemindexxop */
   49,  /* vppermxr: vropopmem */
   50,  /* vppermxxr: vropopmemindex */
   51,  /* vppermxxxr: vropopmemindexx */
   38,  /* vprotb: vropop */
   40,  /* vprotbx: vrmemop */
   42,  /* vprotbxx: vrmemindexop */
   44,  /* vprotbxxx: vrmemindexxop */
   39,  /* vprotbxr: vropmem */
   41,  /* vprotbxxr: vropmemindex */
   43,  /* vprotbxxxr: vropmemindexx */
   38,  /* vprotd: vropop */
   40,  /* vprotdx: vrmemop */
   42,  /* vprotdxx: vrmemindexop */
   44,  /* vprotdxxx: vrmemindexxop */
   39,  /* vprotdxr: vropmem */
   41,  /* vprotdxxr: vropmemindex */
   43,  /* vprotdxxxr: vropmemindexx */
   38,  /* vprotq: vropop */
   40,  /* vprotqx: vrmemop */
   42,  /* vprotqxx: vrmemindexop */
   44,  /* vprotqxxx: vrmemindexxop */
   39,  /* vprotqxr: vropmem */
   41,  /* vprotqxxr: vropmemindex */
   43,  /* vprotqxxxr: vropmemindexx */
   38,  /* vprotw: vropop */
   40,  /* vprotwx: vrmemop */
   42,  /* vprotwxx: vrmemindexop */
   44,  /* vprotwxxx: vrmemindexxop */
   39,  /* vprotwxr: vropmem */
   41,  /* vprotwxxr: vropmemindex */
   43,  /* vprotwxxxr: vropmemindexx */
   38,  /* vpshab: vropop */
   40,  /* vpshabx: vrmemop */
   42,  /* vpshabxx: vrmemindexop */
   44,  /* vpshabxxx: vrmemindexxop */
   39,  /* vpshabxr: vropmem */
   41,  /* vpshabxxr: vropmemindex */
   43,  /* vpshabxxxr: vropmemindexx */
   38,  /* vpshad: vropop */
   40,  /* vpshadx: vrmemop */
   42,  /* vpshadxx: vrmemindexop */
   44,  /* vpshadxxx: vrmemindexxop */
   39,  /* vpshadxr: vropmem */
   41,  /* vpshadxxr: vropmemindex */
   43,  /* vpshadxxxr: vropmemindexx */
   38,  /* vpshaq: vropop */
   40,  /* vpshaqx: vrmemop */
   42,  /* vpshaqxx: vrmemindexop */
   44,  /* vpshaqxxx: vrmemindexxop */
   39,  /* vpshaqxr: vropmem */
   41,  /* vpshaqxxr: vropmemindex */
   43,  /* vpshaqxxxr: vropmemindexx */
   38,  /* vpshaw: vropop */
   40,  /* vpshawx: vrmemop */
   42,  /* vpshawxx: vrmemindexop */
   44,  /* vpshawxxx: vrmemindexxop */
   39,  /* vpshawxr: vropmem */
   41,  /* vpshawxxr: vropmemindex */
   43,  /* vpshawxxxr: vropmemindexx */
   38,  /* vpshlb: vropop */
   40,  /* vpshlbx: vrmemop */
   42,  /* vpshlbxx: vrmemindexop */
   44,  /* vpshlbxxx: vrmemindexxop */
   39,  /* vpshlbxr: vropmem */
   41,  /* vpshlbxxr: vropmemindex */
   43,  /* vpshlbxxxr: vropmemindexx */
   38,  /* vpshld: vropop */
   40,  /* vpshldx: vrmemop */
   42,  /* vpshldxx: vrmemindexop */
   44,  /* vpshldxxx: vrmemindexxop */
   39,  /* vpshldxr: vropmem */
   41,  /* vpshldxxr: vropmemindex */
   43,  /* vpshldxxxr: vropmemindexx */
   38,  /* vpshlq: vropop */
   40,  /* vpshlqx: vrmemop */
   42,  /* vpshlqxx: vrmemindexop */
   44,  /* vpshlqxxx: vrmemindexxop */
   39,  /* vpshlqxr: vropmem */
   41,  /* vpshlqxxr: vropmemindex */
   43,  /* vpshlqxxxr: vropmemindexx */
   38,  /* vpshlw: vropop */
   40,  /* vpshlwx: vrmemop */
   42,  /* vpshlwxx: vrmemindexop */
   44,  /* vpshlwxxx: vrmemindexxop */
   39,  /* vpshlwxr: vropmem */
   41,  /* vpshlwxxr: vropmemindex */
   43,  /* vpshlwxxxr: vropmemindexx */
   45,  /* vpcmov: vropopimm */
   46,  /* vpcmovx: vropmemop */
   47,  /* vpcmovxx: vropmemindexop */
   48,  /* vpcmovxxx: vropmemindexxop */
   49,  /* vpcmovxr: vropopmem */
   50,  /* vpcmovxxr: vropopmemindex */
   51,  /* vpcmovxxxr: vropopmemindexx */
   45,  /* vpmacsdd: vropopimm */
   46,  /* vpmacsddx: vropmemop */
   47,  /* vpmacsddxx: vropmemindexop */
   48,  /* vpmacsddxxx: vropmemindexxop */
   45,  /* vpmacsdqh: vropopimm */
   46,  /* vpmacsdqhx: vropmemop */
   47,  /* vpmacsdqhxx: vropmemindexop */
   48,  /* vpmacsdqhxxx: vropmemindexxop */
   45,  /* vpmacsdql: vropopimm */
   46,  /* vpmacsdqlx: vropmemop */
   47,  /* vpmacsdqlxx: vropmemindexop */
   48,  /* vpmacsdqlxxx: vropmemindexxop */
   45,  /* vpmacssdd: vropopimm */
   46,  /* vpmacssddx: vropmemop */
   47,  /* vpmacssddxx: vropmemindexop */
   48,  /* vpmacssddxxx: vropmemindexxop */
   45,  /* vpmacssdqh: vropopimm */
   46,  /* vpmacssdqhx: vropmemop */
   47,  /* vpmacssdqhxx: vropmemindexop */
   48,  /* vpmacssdqhxxx: vropmemindexxop */
   45,  /* vpmacssdql: vropopimm */
   46,  /* vpmacssdqlx: vropmemop */
   47,  /* vpmacssdqlxx: vropmemindexop */
   48,  /* vpmacssdqlxxx: vropmemindexxop */
   45,  /* vpmacsswd: vropopimm */
   46,  /* vpmacsswdx: vropmemop */
   47,  /* vpmacsswdxx: vropmemindexop */
   48,  /* vpmacsswdxxx: vropmemindexxop */
   45,  /* vpmacssww: vropopimm */
   46,  /* vpmacsswwx: vropmemop */
   47,  /* vpmacsswwxx: vropmemindexop */
   48,  /* vpmacsswwxxx: vropmemindexxop */
   45,  /* vpmacswd: vropopimm */
   46,  /* vpmacswdx: vropmemop */
   47,  /* vpmacswdxx: vropmemindexop */
   48,  /* vpmacswdxxx: vropmemindexxop */
   45,  /* vpmacsww: vropopimm */
   46,  /* vpmacswwx: vropmemop */
   47,  /* vpmacswwxx: vropmemindexop */
   48,  /* vpmacswwxxx: vropmemindexxop */
   45,  /* vpmadcsswd: vropopimm */
   46,  /* vpmadcsswdx: vropmemop */
   47,  /* vpmadcsswdxx: vropmemindexop */
   48,  /* vpmadcsswdxxx: vropmemindexxop */
   45,  /* vpmadcswd: vropopimm */
   46,  /* vpmadcswdx: vropmemop */
   47,  /* vpmadcswdxx: vropmemindexop */
   48,  /* vpmadcswdxxx: vropmemindexxop */
   38,  /* vfadd128v64: vropop */
   39,  /* vfaddx128v64: vropmem */
   41,  /* vfaddxx128v64: vropmemindex */
   43,  /* vfaddxxx128v64: vropmemindexx */
   38,  /* vfadd128v32: vropop */
   39,  /* vfaddx128v32: vropmem */
   41,  /* vfaddxx128v32: vropmemindex */
   43,  /* vfaddxxx128v32: vropmemindexx */
   38,  /* vfaddsd: vropop */
   39,  /* vfaddxsd: vropmem */
   41,  /* vfaddxxsd: vropmemindex */
   43,  /* vfaddxxxsd: vropmemindexx */
   38,  /* vfaddss: vropop */
   39,  /* vfaddxss: vropmem */
   41,  /* vfaddxxss: vropmemindex */
   43,  /* vfaddxxxss: vropmemindexx */
   38,  /* vfaddsub128v64: vropop */
   39,  /* vfaddsubx128v64: vropmem */
   41,  /* vfaddsubxx128v64: vropmemindex */
   43,  /* vfaddsubxxx128v64: vropmemindexx */
   38,  /* vfaddsub128v32: vropop */
   39,  /* vfaddsubx128v32: vropmem */
   41,  /* vfaddsubxx128v32: vropmemindex */
   43,  /* vfaddsubxxx128v32: vropmemindexx */
   38,  /* vaesenc: vropop */
   39,  /* vaesencx: vropmem */
   41,  /* vaesencxx: vropmemindex */
   43,  /* vaesencxxx: vropmemindexx */
   38,  /* vaesenclast: vropop */
   39,  /* vaesenclastx: vropmem */
   41,  /* vaesenclastxx: vropmemindex */
   43,  /* vaesenclastxxx: vropmemindexx */
   38,  /* vaesdec: vropop */
   39,  /* vaesdecx: vropmem */
   41,  /* vaesdecxx: vropmemindex */
   43,  /* vaesdecxxx: vropmemindexx */
   38,  /* vaesdeclast: vropop */
   39,  /* vaesdeclastx: vropmem */
   41,  /* vaesdeclastxx: vropmemindex */
   43,  /* vaesdeclastxxx: vropmemindexx */
   76,  /* vaesimc: rop */
   78,  /* vaesimcx: rmem */
   79,  /* vaesimcxx: rmemindex */
   80,  /* vaesimcxxx: rmemindexx */
   38,  /* vaeskeygenassist: vropop */
   39,  /* vaeskeygenassistx: vropmem */
   41,  /* vaeskeygenassistxx: vropmemindex */
   43,  /* vaeskeygenassistxxx: vropmemindexx */
   38,  /* vandpd: vropop */
   38,  /* vfand128v64: vropop */
   39,  /* vfandx128v64: vropmem */
   41,  /* vfandxx128v64: vropmemindex */
   43,  /* vfandxxx128v64: vropmemindexx */
   38,  /* vandps: vropop */
   38,  /* vfand128v32: vropop */
   39,  /* vfandx128v32: vropmem */
   41,  /* vfandxx128v32: vropmemindex */
   43,  /* vfandxxx128v32: vropmemindexx */
   38,  /* vandnpd: vropop */
   38,  /* vfandn128v64: vropop */
   39,  /* vfandnx128v64: vropmem */
   41,  /* vfandnxx128v64: vropmemindex */
   43,  /* vfandnxxx128v64: vropmemindexx */
   38,  /* vandnps: vropop */
   38,  /* vfandn128v32: vropop */
   39,  /* vfandnx128v32: vropmem */
   41,  /* vfandnxx128v32: vropmemindex */
   43,  /* vfandnxxx128v32: vropmemindexx */
   45,  /* vfblend128v64: vropopimm */
   46,  /* vfblendx128v64: vropmemop */
   47,  /* vfblendxx128v64: vropmemindexop */
   48,  /* vfblendxxx128v64: vropmemindexxop */
   45,  /* vfblend128v32: vropopimm */
   46,  /* vfblendx128v32: vropmemop */
   47,  /* vfblendxx128v32: vropmemindexop */
   48,  /* vfblendxxx128v32: vropmemindexxop */
   45,  /* vfblendv128v64: vropopimm */
   46,  /* vfblendvx128v64: vropmemop */
   47,  /* vfblendvxx128v64: vropmemindexop */
   48,  /* vfblendvxxx128v64: vropmemindexxop */
   45,  /* vfblendv128v32: vropopimm */
   46,  /* vfblendvx128v32: vropmemop */
   47,  /* vfblendvxx128v32: vropmemindexop */
   48,  /* vfblendvxxx128v32: vropmemindexxop */
   82,  /* vfbroadcastss: load */
   85,  /* vfbroadcastxss: ldx */
   86,  /* vfbroadcastxxss: ldxx */
   82,  /* vfbroadcastsd: load */
   85,  /* vfbroadcastxsd: ldx */
   86,  /* vfbroadcastxxsd: ldxx */
   82,  /* vfbroadcastf128: load */
   85,  /* vfbroadcastxf128: ldx */
   86,  /* vfbroadcastxxf128: ldxx */
   45,  /* vcmppd: vropopimm */
   45,  /* vfcmp128v64: vropopimm */
   46,  /* vfcmpx128v64: vropmemop */
   47,  /* vfcmpxx128v64: vropmemindexop */
   48,  /* vfcmpxxx128v64: vropmemindexxop */
   45,  /* vcmpps: vropopimm */
   45,  /* vfcmp128v32: vropopimm */
   46,  /* vfcmpx128v32: vropmemop */
   47,  /* vfcmpxx128v32: vropmemindexop */
   48,  /* vfcmpxxx128v32: vropmemindexxop */
   45,  /* vcmpsd: vropopimm */
   46,  /* vcmpxsd: vropmemop */
   47,  /* vcmpxxsd: vropmemindexop */
   48,  /* vcmpxxxsd: vropmemindexxop */
   45,  /* vcmpss: vropopimm */
   46,  /* vcmpxss: vropmemop */
   47,  /* vcmpxxss: vropmemindexop */
   48,  /* vcmpxxxss: vropmemindexxop */
    4,  /* vcomisd: cmp */
    5,  /* vcomixsd: cmpx */
    8,  /* vcomixxsd: cmpxx */
   11,  /* vcomixxxsd: cmpxxx */
    4,  /* vcomiss: cmp */
    5,  /* vcomixss: cmpx */
    8,  /* vcomixxss: cmpxx */
   11,  /* vcomixxxss: cmpxxx */
   76,  /* vcvtdq2pd: rop */
   78,  /* vcvtdq2pdx: rmem */
   83,  /* vcvtdq2pdxx: leax */
   84,  /* vcvtdq2pdxxx: leaxx */
   76,  /* vcvtdq2ps: rop */
   78,  /* vcvtdq2psx: rmem */
   83,  /* vcvtdq2psxx: leax */
   84,  /* vcvtdq2psxxx: leaxx */
   76,  /* vcvtpd2dq: rop */
   78,  /* vcvtpd2dqx: rmem */
   83,  /* vcvtpd2dqxx: leax */
   84,  /* vcvtpd2dqxxx: leaxx */
   76,  /* vcvtpd2dqy: rop */
   78,  /* vcvtpd2dqyx: rmem */
   83,  /* vcvtpd2dqyxx: leax */
   84,  /* vcvtpd2dqyxxx: leaxx */
   76,  /* vcvtpd2ps: rop */
   78,  /* vcvtpd2psx: rmem */
   83,  /* vcvtpd2psxx: leax */
   84,  /* vcvtpd2psxxx: leaxx */
   76,  /* vcvtpd2psy: rop */
   78,  /* vcvtpd2psyx: rmem */
   83,  /* vcvtpd2psyxx: leax */
   84,  /* vcvtpd2psyxxx: leaxx */
   76,  /* vcvtps2dq: rop */
   78,  /* vcvtps2dqx: rmem */
   83,  /* vcvtps2dqxx: leax */
   84,  /* vcvtps2dqxxx: leaxx */
   76,  /* vcvtps2pd: rop */
   78,  /* vcvtps2pdx: rmem */
   83,  /* vcvtps2pdxx: leax */
   84,  /* vcvtps2pdxxx: leaxx */
   76,  /* vcvtsd2si: rop */
   76,  /* vcvtsd2siq: rop */
   38,  /* vcvtsd2ss: vropop */
   39,  /* vcvtsd2ssx: vropmem */
   41,  /* vcvtsd2ssxx: vropmemindex */
   43,  /* vcvtsd2ssxxx: vropmemindexx */
   38,  /* vcvtsi2sd: vropop */
   39,  /* vcvtsi2sdx: vropmem */
   41,  /* vcvtsi2sdxx: vropmemindex */
   43,  /* vcvtsi2sdxxx: vropmemindexx */
   38,  /* vcvtsi2sdq: vropop */
   39,  /* vcvtsi2sdqx: vropmem */
   41,  /* vcvtsi2sdqxx: vropmemindex */
   43,  /* vcvtsi2sdqxxx: vropmemindexx */
   38,  /* vcvtsi2ss: vropop */
   39,  /* vcvtsi2ssx: vropmem */
   41,  /* vcvtsi2ssxx: vropmemindex */
   43,  /* vcvtsi2ssxxx: vropmemindexx */
   38,  /* vcvtsi2ssq: vropop */
   39,  /* vcvtsi2ssqx: vropmem */
   41,  /* vcvtsi2ssqxx: vropmemindex */
   43,  /* vcvtsi2ssqxxx: vropmemindexx */
   38,  /* vcvtss2sd: vropop */
   39,  /* vcvtss2sdx: vropmem */
   41,  /* vcvtss2sdxx: vropmemindex */
   43,  /* vcvtss2sdxxx: vropmemindexx */
   76,  /* vcvtss2si: rop */
   76,  /* vcvtss2siq: rop */
   76,  /* vcvttpd2dq: rop */
   78,  /* vcvttpd2dqx: rmem */
   83,  /* vcvttpd2dqxx: leax */
   84,  /* vcvttpd2dqxxx: leaxx */
   76,  /* vcvttpd2dqy: rop */
   78,  /* vcvttpd2dqyx: rmem */
   83,  /* vcvttpd2dqyxx: leax */
   84,  /* vcvttpd2dqyxxx: leaxx */
   76,  /* vcvttps2dq: rop */
   78,  /* vcvttps2dqx: rmem */
   83,  /* vcvttps2dqxx: leax */
   84,  /* vcvttps2dqxxx: leaxx */
   76,  /* vcvttsd2si: rop */
   76,  /* vcvttsd2siq: rop */
   76,  /* vcvttss2si: rop */
   76,  /* vcvttss2siq: rop */
   38,  /* vfdiv128v64: vropop */
   39,  /* vfdivx128v64: vropmem */
   41,  /* vfdivxx128v64: vropmemindex */
   43,  /* vfdivxxx128v64: vropmemindexx */
   38,  /* vfdiv128v32: vropop */
   39,  /* vfdivx128v32: vropmem */
   41,  /* vfdivxx128v32: vropmemindex */
   43,  /* vfdivxxx128v32: vropmemindexx */
   38,  /* vdivsd: vropop */
   39,  /* vdivxsd: vropmem */
   41,  /* vdivxxsd: vropmemindex */
   43,  /* vdivxxxsd: vropmemindexx */
   38,  /* vdivss: vropop */
   39,  /* vdivxss: vropmem */
   41,  /* vdivxxss: vropmemindex */
   43,  /* vdivxxxss: vropmemindexx */
   45,  /* vfdp128v64: vropopimm */
   46,  /* vfdpx128v64: vropmemop */
   47,  /* vfdpxx128v64: vropmemindexop */
   48,  /* vfdpxxx128v64: vropmemindexxop */
   45,  /* vfdp128v32: vropopimm */
   46,  /* vfdpx128v32: vropmemop */
   47,  /* vfdpxx128v32: vropmemindexop */
   48,  /* vfdpxxx128v32: vropmemindexxop */
   38,  /* vfextrf128: vropop */
   39,  /* vfextrxf128: vropmem */
   41,  /* vfextrxxf128: vropmemindex */
   43,  /* vfextrxxxf128: vropmemindexx */
   38,  /* vfextr128v32: vropop */
   39,  /* vfextrx128v32: vropmem */
   41,  /* vfextrxx128v32: vropmemindex */
   43,  /* vfextrxxx128v32: vropmemindexx */
   38,  /* vfhadd128v64: vropop */
   39,  /* vfhaddx128v64: vropmem */
   41,  /* vfhaddxx128v64: vropmemindex */
   43,  /* vfhaddxxx128v64: vropmemindexx */
   38,  /* vfhadd128v32: vropop */
   39,  /* vfhaddx128v32: vropmem */
   41,  /* vfhaddxx128v32: vropmemindex */
   43,  /* vfhaddxxx128v32: vropmemindexx */
   38,  /* vfhsub128v64: vropop */
   39,  /* vfhsubx128v64: vropmem */
   41,  /* vfhsubxx128v64: vropmemindex */
   43,  /* vfhsubxxx128v64: vropmemindexx */
   38,  /* vfhsub128v32: vropop */
   39,  /* vfhsubx128v32: vropmem */
   41,  /* vfhsubxx128v32: vropmemindex */
   43,  /* vfhsubxxx128v32: vropmemindexx */
   45,  /* vfinsrf128: vropopimm */
   46,  /* vfinsrxf128: vropmemop */
   47,  /* vfinsrxxf128: vropmemindexop */
   48,  /* vfinsrxxxf128: vropmemindexxop */
   45,  /* vfinsr128v32: vropopimm */
   46,  /* vfinsrx128v32: vropmemop */
   47,  /* vfinsrxx128v32: vropmemindexop */
   48,  /* vfinsrxxx128v32: vropmemindexxop */
   82,  /* vlddqu: load */
   85,  /* vlddqux: ldx */
   86,  /* vlddquxx: ldxx */
   76,  /* vlddqu_n32: rop */
  124,  /* vldmxcsr: stmxcsr */
   76,  /* vmaskmovdqu: rop */
   95,  /* vfmaskld128v32: vmaskload */
   96,  /* vfmaskldx128v32: vmaskloadindex */
   97,  /* vfmaskldxx128v32: vmaskloadindexx */
   95,  /* vfmaskld128v64: vmaskload */
   96,  /* vfmaskldx128v64: vmaskloadindex */
   97,  /* vfmaskldxx128v64: vmaskloadindexx */
   98,  /* vfmaskst128v32: vmaskstore */
   99,  /* vfmaskstx128v32: vmaskstoreindex */
  100,  /* vfmaskstxx128v32: vmaskstoreindexx */
   98,  /* vfmaskst128v64: vmaskstore */
   99,  /* vfmaskstx128v64: vmaskstoreindex */
  100,  /* vfmaskstxx128v64: vmaskstoreindexx */
   38,  /* vfmax128v64: vropop */
   39,  /* vfmaxx128v64: vropmem */
   41,  /* vfmaxxx128v64: vropmemindex */
   43,  /* vfmaxxxx128v64: vropmemindexx */
   38,  /* vfmax128v32: vropop */
   39,  /* vfmaxx128v32: vropmem */
   41,  /* vfmaxxx128v32: vropmemindex */
   43,  /* vfmaxxxx128v32: vropmemindexx */
   38,  /* vfmaxsd: vropop */
   39,  /* vfmaxxsd: vropmem */
   41,  /* vfmaxxxsd: vropmemindex */
   43,  /* vfmaxxxxsd: vropmemindexx */
   38,  /* vfmaxss: vropop */
   39,  /* vfmaxxss: vropmem */
   41,  /* vfmaxxxss: vropmemindex */
   43,  /* vfmaxxxxss: vropmemindexx */
   38,  /* vfmin128v64: vropop */
   39,  /* vfminx128v64: vropmem */
   41,  /* vfminxx128v64: vropmemindex */
   43,  /* vfminxxx128v64: vropmemindexx */
   38,  /* vfmin128v32: vropop */
   39,  /* vfminx128v32: vropmem */
   41,  /* vfminxx128v32: vropmemindex */
   43,  /* vfminxxx128v32: vropmemindexx */
   38,  /* vfminsd: vropop */
   39,  /* vfminxsd: vropmem */
   41,  /* vfminxxsd: vropmemindex */
   43,  /* vfminxxxsd: vropmemindexx */
   38,  /* vfminss: vropop */
   39,  /* vfminxss: vropmem */
   41,  /* vfminxxss: vropmemindex */
   43,  /* vfminxxxss: vropmemindexx */
   76,  /* vmovapd: rop */
   82,  /* vldapd: load */
   85,  /* vldapdx: ldx */
   86,  /* vldapdxx: ldxx */
   76,  /* vldapd_n32: rop */
   94,  /* vstapd: store */
   87,  /* vstapdx: storex */
   90,  /* vstapdxx: storexx */
   76,  /* vstapd_n32: rop */
   76,  /* vmovaps: rop */
   82,  /* vldaps: load */
   85,  /* vldapsx: ldx */
   86,  /* vldapsxx: ldxx */
   76,  /* vldaps_n32: rop */
   94,  /* vstaps: store */
   87,  /* vstapsx: storex */
   90,  /* vstapsxx: storexx */
   76,  /* vstaps_n32: rop */
   76,  /* vmovg2x: rop */
   76,  /* vmovg2x64: rop */
   76,  /* vmovx2g: rop */
   76,  /* vmovx2g64: rop */
   82,  /* vld64_2sse: load */
   85,  /* vldx64_2sse: ldx */
   86,  /* vldxx64_2sse: ldxx */
   76,  /* vld64_2sse_n32: rop */
   76,  /* vst64_fsse: rop */
   87,  /* vstx64_fsse: storex */
   90,  /* vstxx64_fsse: storexx */
   76,  /* vst64_fsse_n32: rop */
   76,  /* vmovddup: rop */
   78,  /* vmovddupx: rmem */
   79,  /* vmovddupxx: rmemindex */
   80,  /* vmovddupxxx: rmemindexx */
   82,  /* vlddqa: load */
   85,  /* vlddqax: ldx */
   86,  /* vlddqaxx: ldxx */
   76,  /* vlddqa_n32: rop */
   76,  /* vmovdqa: rop */
   94,  /* vstdqa: store */
   87,  /* vstdqax: storex */
   90,  /* vstdqaxx: storexx */
   76,  /* vstdqa_n32: rop */
   94,  /* vstdqu: store */
   87,  /* vstdqux: storex */
   90,  /* vstdquxx: storexx */
   76,  /* vstdqu_n32: rop */
   39,  /* vldhpd: vropmem */
   41,  /* vldhpdx: vropmemindex */
   43,  /* vldhpdxx: vropmemindexx */
   77,  /* vldhpd_n32: rop2 */
   94,  /* vsthpd: store */
   87,  /* vsthpdx: storex */
   90,  /* vsthpdxx: storexx */
   76,  /* vsthpd_n32: rop */
   39,  /* vldhps: vropmem */
   41,  /* vldhpsx: vropmemindex */
   43,  /* vldhpsxx: vropmemindexx */
   77,  /* vldhps_n32: rop2 */
   94,  /* vsthps: store */
   87,  /* vsthpsx: storex */
   90,  /* vsthpsxx: storexx */
   76,  /* vsthps_n32: rop */
   39,  /* vldlpd: vropmem */
   41,  /* vldlpdx: vropmemindex */
   43,  /* vldlpdxx: vropmemindexx */
   78,  /* vldlpd_n32: rmem */
   94,  /* vstorelpd: store */
   94,  /* vstlpd: store */
   87,  /* vstlpdx: storex */
   90,  /* vstlpdxx: storexx */
   76,  /* vstlpd_n32: rop */
   39,  /* vldlps: vropmem */
   41,  /* vldlpsx: vropmemindex */
   43,  /* vldlpsxx: vropmemindexx */
   77,  /* vldlps_n32: rop2 */
   94,  /* vstlps: store */
   87,  /* vstlpsx: storex */
   90,  /* vstlpsxx: storexx */
   76,  /* vstlps_n32: rop */
  105,  /* vmovmskpd: vmovmsk */
  105,  /* vmovmskps: vmovmsk */
   94,  /* vstorenti128: store */
   87,  /* vstorentxi128: storex */
   90,  /* vstorentxxi128: storexx */
   82,  /* vldntdqa: load */
   85,  /* vldntdqax: ldx */
   86,  /* vldntdqaxx: ldxx */
   94,  /* vstntdq: store */
   87,  /* vstntdqx: storex */
   90,  /* vstntdqxx: storexx */
   94,  /* vstntpd: store */
   87,  /* vstntpdx: storex */
   90,  /* vstntpdxx: storexx */
   94,  /* vstntps: store */
   87,  /* vstntpsx: storex */
   90,  /* vstntpsxx: storexx */
   94,  /* vstntsd: store */
   87,  /* vstntsdx: storex */
   90,  /* vstntsdxx: storexx */
   94,  /* vstntss: store */
   87,  /* vstntssx: storex */
   90,  /* vstntssxx: storexx */
   38,  /* vmovsd: vropop */
   82,  /* vldsd: load */
   85,  /* vldsdx: ldx */
   86,  /* vldsdxx: ldxx */
   76,  /* vldsd_n32: rop */
   94,  /* vstsd: store */
   87,  /* vstsdx: storex */
   90,  /* vstsdxx: storexx */
   81,  /* vstsd_n32: opop1 */
   38,  /* vmovss: vropop */
   82,  /* vldss: load */
   85,  /* vldssx: ldx */
   86,  /* vldssxx: ldxx */
   76,  /* vldss_n32: rop */
   94,  /* vstss: store */
   87,  /* vstssx: storex */
   90,  /* vstssxx: storexx */
   81,  /* vstss_n32: opop1 */
   34,  /* vmovlhps: vropspec */
   38,  /* vmovhlps: vropop */
   76,  /* vmovshdup: rop */
   78,  /* vmovshdupx: rmem */
   79,  /* vmovshdupxx: rmemindex */
   80,  /* vmovshdupxxx: rmemindexx */
   76,  /* vmovsldup: rop */
   78,  /* vmovsldupx: rmem */
   79,  /* vmovsldupxx: rmemindex */
   80,  /* vmovsldupxxx: rmemindexx */
   82,  /* vldupd: load */
   85,  /* vldupdx: ldx */
   86,  /* vldupdxx: ldxx */
   76,  /* vldupd_n32: rop */
   94,  /* vstupd: store */
   87,  /* vstupdx: storex */
   90,  /* vstupdxx: storexx */
   76,  /* vstupd_n32: rop */
   82,  /* vldups: load */
   85,  /* vldupsx: ldx */
   86,  /* vldupsxx: ldxx */
   76,  /* vldups_n32: rop */
   94,  /* vstups: store */
   87,  /* vstupsx: storex */
   90,  /* vstupsxx: storexx */
   76,  /* vstups_n32: rop */
   45,  /* vmpsadbw: vropopimm */
   46,  /* vmpsadbwx: vropmemop */
   47,  /* vmpsadbwxx: vropmemindexop */
   48,  /* vmpsadbwxxx: vropmemindexxop */
   38,  /* vfmul128v64: vropop */
   39,  /* vfmulx128v64: vropmem */
   41,  /* vfmulxx128v64: vropmemindex */
   43,  /* vfmulxxx128v64: vropmemindexx */
   38,  /* vfmul128v32: vropop */
   39,  /* vfmulx128v32: vropmem */
   41,  /* vfmulxx128v32: vropmemindex */
   43,  /* vfmulxxx128v32: vropmemindexx */
   38,  /* vmulsd: vropop */
   39,  /* vmulxsd: vropmem */
   41,  /* vmulxxsd: vropmemindex */
   43,  /* vmulxxxsd: vropmemindexx */
   38,  /* vmulss: vropop */
   39,  /* vmulxss: vropmem */
   41,  /* vmulxxss: vropmemindex */
   43,  /* vmulxxxss: vropmemindexx */
   38,  /* vorpd: vropop */
   38,  /* vfor128v64: vropop */
   39,  /* vforx128v64: vropmem */
   41,  /* vforxx128v64: vropmemindex */
   43,  /* vforxxx128v64: vropmemindexx */
   38,  /* vorps: vropop */
   38,  /* vfor128v32: vropop */
   39,  /* vforx128v32: vropmem */
   41,  /* vforxx128v32: vropmemindex */
   43,  /* vforxxx128v32: vropmemindexx */
   76,  /* vabs128v8: rop */
   78,  /* vabsx128v8: rmem */
   79,  /* vabsxx128v8: rmemindex */
   80,  /* vabsxxx128v8: rmemindexx */
   76,  /* vabs128v32: rop */
   78,  /* vabsx128v32: rmem */
   79,  /* vabsxx128v32: rmemindex */
   80,  /* vabsxxx128v32: rmemindexx */
   76,  /* vabs128v16: rop */
   78,  /* vabsx128v16: rmem */
   79,  /* vabsxx128v16: rmemindex */
   80,  /* vabsxxx128v16: rmemindexx */
   38,  /* vpackssdw: vropop */
   39,  /* vpackssdwx: vropmem */
   41,  /* vpackssdwxx: vropmemindex */
   43,  /* vpackssdwxxx: vropmemindexx */
   38,  /* vpacksswb: vropop */
   39,  /* vpacksswbx: vropmem */
   41,  /* vpacksswbxx: vropmemindex */
   43,  /* vpacksswbxxx: vropmemindexx */
   38,  /* vpackusdw: vropop */
   39,  /* vpackusdwx: vropmem */
   41,  /* vpackusdwxx: vropmemindex */
   43,  /* vpackusdwxxx: vropmemindexx */
   38,  /* vpackuswb: vropop */
   39,  /* vpackuswbx: vropmem */
   41,  /* vpackuswbxx: vropmemindex */
   43,  /* vpackuswbxxx: vropmemindexx */
   38,  /* vadd128v8: vropop */
   39,  /* vaddx128v8: vropmem */
   41,  /* vaddxx128v8: vropmemindex */
   43,  /* vaddxxx128v8: vropmemindexx */
   38,  /* vadd128v32: vropop */
   39,  /* vaddx128v32: vropmem */
   41,  /* vaddxx128v32: vropmemindex */
   43,  /* vaddxxx128v32: vropmemindexx */
   38,  /* vadd128v64: vropop */
   39,  /* vaddx128v64: vropmem */
   41,  /* vaddxx128v64: vropmemindex */
   43,  /* vaddxxx128v64: vropmemindexx */
   38,  /* vadd128v16: vropop */
   39,  /* vaddx128v16: vropmem */
   41,  /* vaddxx128v16: vropmemindex */
   43,  /* vaddxxx128v16: vropmemindexx */
   38,  /* vadds128v8: vropop */
   39,  /* vaddsx128v8: vropmem */
   41,  /* vaddsxx128v8: vropmemindex */
   43,  /* vaddsxxx128v8: vropmemindexx */
   38,  /* vadds128v16: vropop */
   39,  /* vaddsx128v16: vropmem */
   41,  /* vaddsxx128v16: vropmemindex */
   43,  /* vaddsxxx128v16: vropmemindexx */
   38,  /* vaddus128v8: vropop */
   39,  /* vaddusx128v8: vropmem */
   41,  /* vaddusxx128v8: vropmemindex */
   43,  /* vaddusxxx128v8: vropmemindexx */
   38,  /* vaddus128v16: vropop */
   39,  /* vaddusx128v16: vropmem */
   41,  /* vaddusxx128v16: vropmemindex */
   43,  /* vaddusxxx128v16: vropmemindexx */
   45,  /* vpalignr128: vropopimm */
   46,  /* vpalignrx128: vropmemop */
   47,  /* vpalignrxx128: vropmemindexop */
   48,  /* vpalignrxxx128: vropmemindexxop */
   38,  /* vand128v8: vropop */
   39,  /* vandx128v8: vropmem */
   41,  /* vandxx128v8: vropmemindex */
   43,  /* vandxxx128v8: vropmemindexx */
   38,  /* vand128v16: vropop */
   39,  /* vandx128v16: vropmem */
   41,  /* vandxx128v16: vropmemindex */
   43,  /* vandxxx128v16: vropmemindexx */
   38,  /* vand128v32: vropop */
   39,  /* vandx128v32: vropmem */
   41,  /* vandxx128v32: vropmemindex */
   43,  /* vandxxx128v32: vropmemindexx */
   38,  /* vand128v64: vropop */
   39,  /* vandx128v64: vropmem */
   41,  /* vandxx128v64: vropmemindex */
   43,  /* vandxxx128v64: vropmemindexx */
   38,  /* vandn128v8: vropop */
   39,  /* vandnx128v8: vropmem */
   41,  /* vandnxx128v8: vropmemindex */
   43,  /* vandnxxx128v8: vropmemindexx */
   38,  /* vandn128v16: vropop */
   39,  /* vandnx128v16: vropmem */
   41,  /* vandnxx128v16: vropmemindex */
   43,  /* vandnxxx128v16: vropmemindexx */
   38,  /* vandn128v32: vropop */
   39,  /* vandnx128v32: vropmem */
   41,  /* vandnxx128v32: vropmemindex */
   43,  /* vandnxxx128v32: vropmemindexx */
   38,  /* vandn128v64: vropop */
   39,  /* vandnx128v64: vropmem */
   41,  /* vandnxx128v64: vropmemindex */
   43,  /* vandnxxx128v64: vropmemindexx */
   38,  /* vpavgb: vropop */
   39,  /* vpavgbx: vropmem */
   41,  /* vpavgbxx: vropmemindex */
   43,  /* vpavgbxxx: vropmemindexx */
   38,  /* vpavgw: vropop */
   39,  /* vpavgwx: vropmem */
   41,  /* vpavgwxx: vropmemindex */
   43,  /* vpavgwxxx: vropmemindexx */
   45,  /* vblendv128v8: vropopimm */
   46,  /* vblendvx128v8: vropmemop */
   47,  /* vblendvxx128v8: vropmemindexop */
   48,  /* vblendvxxx128v8: vropmemindexxop */
   45,  /* vblend128v16: vropopimm */
   46,  /* vblendx128v16: vropmemop */
   47,  /* vblendxx128v16: vropmemindexop */
   48,  /* vblendxxx128v16: vropmemindexxop */
   45,  /* vpclmulqdq: vropopimm */
   46,  /* vpclmulqdqx: vropmemop */
   47,  /* vpclmulqdqxx: vropmemindexop */
   48,  /* vpclmulqdqxxx: vropmemindexxop */
   38,  /* vcmpeq128v8: vropop */
   39,  /* vcmpeqx128v8: vropmem */
   41,  /* vcmpeqxx128v8: vropmemindex */
   43,  /* vcmpeqxxx128v8: vropmemindexx */
   38,  /* vcmpeq128v32: vropop */
   39,  /* vcmpeqx128v32: vropmem */
   41,  /* vcmpeqxx128v32: vropmemindex */
   43,  /* vcmpeqxxx128v32: vropmemindexx */
   38,  /* vcmpeq128v64: vropop */
   39,  /* vcmpeqx128v64: vropmem */
   41,  /* vcmpeqxx128v64: vropmemindex */
   43,  /* vcmpeqxxx128v64: vropmemindexx */
   38,  /* vcmpeq128v16: vropop */
   39,  /* vcmpeqx128v16: vropmem */
   41,  /* vcmpeqxx128v16: vropmemindex */
   43,  /* vcmpeqxxx128v16: vropmemindexx */
   60,  /* vcmpestri: pcmpestr */
   61,  /* vcmpestrix: pcmpestrmem */
   62,  /* vcmpestrixx: pcmpestrmemindex */
   63,  /* vcmpestrixxx: pcmpestrmemindexx */
   60,  /* vcmpestrm: pcmpestr */
   61,  /* vcmpestrmx: pcmpestrmem */
   62,  /* vcmpestrmxx: pcmpestrmemindex */
   63,  /* vcmpestrmxxx: pcmpestrmemindexx */
   38,  /* vcmpgt128v8: vropop */
   39,  /* vcmpgtx128v8: vropmem */
   41,  /* vcmpgtxx128v8: vropmemindex */
   43,  /* vcmpgtxxx128v8: vropmemindexx */
   38,  /* vcmpgt128v32: vropop */
   39,  /* vcmpgtx128v32: vropmem */
   41,  /* vcmpgtxx128v32: vropmemindex */
   43,  /* vcmpgtxxx128v32: vropmemindexx */
   38,  /* vcmpgt128v64: vropop */
   39,  /* vcmpgtx128v64: vropmem */
   41,  /* vcmpgtxx128v64: vropmemindex */
   43,  /* vcmpgtxxx128v64: vropmemindexx */
   38,  /* vcmpgt128v16: vropop */
   39,  /* vcmpgtx128v16: vropmem */
   41,  /* vcmpgtxx128v16: vropmemindex */
   43,  /* vcmpgtxxx128v16: vropmemindexx */
   64,  /* vcmpistri: pcmpistr */
   65,  /* vcmpistrix: pcmpistrmem */
   66,  /* vcmpistrixx: pcmpistrmemindex */
   67,  /* vcmpistrixxx: pcmpistrmemindexx */
   64,  /* vcmpistrm: pcmpistr */
   65,  /* vcmpistrmx: pcmpistrmem */
   66,  /* vcmpistrmxx: pcmpistrmemindex */
   67,  /* vcmpistrmxxx: pcmpistrmemindexx */
   38,  /* vfperm128v64: vropop */
   39,  /* vfpermx128v64: vropmem */
   41,  /* vfpermxx128v64: vropmemindex */
   43,  /* vfpermxxx128v64: vropmemindexx */
   38,  /* vfpermi128v64: vropop */
   39,  /* vfpermix128v64: vropmem */
   41,  /* vfpermixx128v64: vropmemindex */
   43,  /* vfpermixxx128v64: vropmemindexx */
   38,  /* vfperm128v32: vropop */
   39,  /* vfpermx128v32: vropmem */
   41,  /* vfpermxx128v32: vropmemindex */
   43,  /* vfpermxxx128v32: vropmemindexx */
   38,  /* vfpermi128v32: vropop */
   39,  /* vfpermix128v32: vropmem */
   41,  /* vfpermixx128v32: vropmemindex */
   43,  /* vfpermixxx128v32: vropmemindexx */
   45,  /* vfperm2f128: vropopimm */
   46,  /* vfperm2xf128: vropmemop */
   47,  /* vfperm2xxf128: vropmemindexop */
   48,  /* vfperm2xxxf128: vropmemindexxop */
   38,  /* vextr128v8: vropop */
   39,  /* vextrx128v8: vropmem */
   41,  /* vextrxx128v8: vropmemindex */
   43,  /* vextrxxx128v8: vropmemindexx */
   38,  /* vextr128v32: vropop */
   39,  /* vextrx128v32: vropmem */
   41,  /* vextrxx128v32: vropmemindex */
   43,  /* vextrxxx128v32: vropmemindexx */
   38,  /* vextr128v64: vropop */
   39,  /* vextrx128v64: vropmem */
   41,  /* vextrxx128v64: vropmemindex */
   43,  /* vextrxxx128v64: vropmemindexx */
   38,  /* vextr128v16: vropop */
   39,  /* vextrx128v16: vropmem */
   41,  /* vextrxx128v16: vropmemindex */
   43,  /* vextrxxx128v16: vropmemindexx */
   38,  /* vphadd128v32: vropop */
   39,  /* vphaddx128v32: vropmem */
   41,  /* vphaddxx128v32: vropmemindex */
   43,  /* vphaddxxx128v32: vropmemindexx */
   38,  /* vphadds128v16: vropop */
   39,  /* vphaddsx128v16: vropmem */
   41,  /* vphaddsxx128v16: vropmemindex */
   43,  /* vphaddsxxx128v16: vropmemindexx */
   38,  /* vphadd128v16: vropop */
   39,  /* vphaddx128v16: vropmem */
   41,  /* vphaddxx128v16: vropmemindex */
   43,  /* vphaddxxx128v16: vropmemindexx */
   76,  /* vphminposuw: rop */
   78,  /* vphminposuwx: rmem */
   79,  /* vphminposuwxx: rmemindex */
   80,  /* vphminposuwxxx: rmemindexx */
   38,  /* vphsub128v32: vropop */
   39,  /* vphsubx128v32: vropmem */
   41,  /* vphsubxx128v32: vropmemindex */
   43,  /* vphsubxxx128v32: vropmemindexx */
   38,  /* vphsubs128v16: vropop */
   39,  /* vphsubsx128v16: vropmem */
   41,  /* vphsubsxx128v16: vropmemindex */
   43,  /* vphsubsxxx128v16: vropmemindexx */
   38,  /* vphsub128v16: vropop */
   39,  /* vphsubx128v16: vropmem */
   41,  /* vphsubxx128v16: vropmemindex */
   43,  /* vphsubxxx128v16: vropmemindexx */
   45,  /* vinsr128v8: vropopimm */
   46,  /* vinsrx128v8: vropmemop */
   47,  /* vinsrxx128v8: vropmemindexop */
   48,  /* vinsrxxx128v8: vropmemindexxop */
   45,  /* vinsr128v32: vropopimm */
   46,  /* vinsrx128v32: vropmemop */
   47,  /* vinsrxx128v32: vropmemindexop */
   48,  /* vinsrxxx128v32: vropmemindexxop */
   45,  /* vinsr128v64: vropopimm */
   46,  /* vinsrx128v64: vropmemop */
   47,  /* vinsrxx128v64: vropmemindexop */
   48,  /* vinsrxxx128v64: vropmemindexxop */
   45,  /* vinsr128v16: vropopimm */
   46,  /* vinsrx128v16: vropmemop */
   47,  /* vinsrxx128v16: vropmemindexop */
   48,  /* vinsrxxx128v16: vropmemindexxop */
   38,  /* vpmaddwd: vropop */
   39,  /* vpmaddwdx: vropmem */
   41,  /* vpmaddwdxx: vropmemindex */
   43,  /* vpmaddwdxxx: vropmemindexx */
   38,  /* vpmaddubsw128: vropop */
   39,  /* vpmaddubswx128: vropmem */
   41,  /* vpmaddubswxx128: vropmemindex */
   43,  /* vpmaddubswxxx128: vropmemindexx */
   38,  /* vmaxs128v8: vropop */
   39,  /* vmaxsx128v8: vropmem */
   41,  /* vmaxsxx128v8: vropmemindex */
   43,  /* vmaxsxxx128v8: vropmemindexx */
   38,  /* vmaxs128v16: vropop */
   39,  /* vmaxsx128v16: vropmem */
   41,  /* vmaxsxx128v16: vropmemindex */
   43,  /* vmaxsxxx128v16: vropmemindexx */
   38,  /* vmaxs128v32: vropop */
   39,  /* vmaxsx128v32: vropmem */
   41,  /* vmaxsxx128v32: vropmemindex */
   43,  /* vmaxsxxx128v32: vropmemindexx */
   38,  /* vmaxu128v8: vropop */
   39,  /* vmaxux128v8: vropmem */
   41,  /* vmaxuxx128v8: vropmemindex */
   43,  /* vmaxuxxx128v8: vropmemindexx */
   38,  /* vmaxu128v16: vropop */
   39,  /* vmaxux128v16: vropmem */
   41,  /* vmaxuxx128v16: vropmemindex */
   43,  /* vmaxuxxx128v16: vropmemindexx */
   38,  /* vmaxu128v32: vropop */
   39,  /* vmaxux128v32: vropmem */
   41,  /* vmaxuxx128v32: vropmemindex */
   43,  /* vmaxuxxx128v32: vropmemindexx */
   38,  /* vmins128v8: vropop */
   39,  /* vminsx128v8: vropmem */
   41,  /* vminsxx128v8: vropmemindex */
   43,  /* vminsxxx128v8: vropmemindexx */
   38,  /* vmins128v16: vropop */
   39,  /* vminsx128v16: vropmem */
   41,  /* vminsxx128v16: vropmemindex */
   43,  /* vminsxxx128v16: vropmemindexx */
   38,  /* vmins128v32: vropop */
   39,  /* vminsx128v32: vropmem */
   41,  /* vminsxx128v32: vropmemindex */
   43,  /* vminsxxx128v32: vropmemindexx */
   38,  /* vminu128v8: vropop */
   39,  /* vminux128v8: vropmem */
   41,  /* vminuxx128v8: vropmemindex */
   43,  /* vminuxxx128v8: vropmemindexx */
   38,  /* vminu128v16: vropop */
   39,  /* vminux128v16: vropmem */
   41,  /* vminuxx128v16: vropmemindex */
   43,  /* vminuxxx128v16: vropmemindexx */
   38,  /* vminu128v32: vropop */
   39,  /* vminux128v32: vropmem */
   41,  /* vminuxx128v32: vropmemindex */
   43,  /* vminuxxx128v32: vropmemindexx */
   76,  /* vpmovmskb128: rop */
   76,  /* vpmovsxbd: rop */
   78,  /* vpmovsxbdx: rmem */
   79,  /* vpmovsxbdxx: rmemindex */
   80,  /* vpmovsxbdxxx: rmemindexx */
   76,  /* vpmovsxbq: rop */
   78,  /* vpmovsxbqx: rmem */
   79,  /* vpmovsxbqxx: rmemindex */
   80,  /* vpmovsxbqxxx: rmemindexx */
   76,  /* vpmovsxbw: rop */
   78,  /* vpmovsxbwx: rmem */
   79,  /* vpmovsxbwxx: rmemindex */
   80,  /* vpmovsxbwxxx: rmemindexx */
   76,  /* vpmovsxdq: rop */
   78,  /* vpmovsxdqx: rmem */
   79,  /* vpmovsxdqxx: rmemindex */
   80,  /* vpmovsxdqxxx: rmemindexx */
   76,  /* vpmovsxwd: rop */
   78,  /* vpmovsxwdx: rmem */
   79,  /* vpmovsxwdxx: rmemindex */
   80,  /* vpmovsxwdxxx: rmemindexx */
   76,  /* vpmovsxwq: rop */
   78,  /* vpmovsxwqx: rmem */
   79,  /* vpmovsxwqxx: rmemindex */
   80,  /* vpmovsxwqxxx: rmemindexx */
   76,  /* vpmovzxbd: rop */
   78,  /* vpmovzxbdx: rmem */
   79,  /* vpmovzxbdxx: rmemindex */
   80,  /* vpmovzxbdxxx: rmemindexx */
   76,  /* vpmovzxbq: rop */
   78,  /* vpmovzxbqx: rmem */
   79,  /* vpmovzxbqxx: rmemindex */
   80,  /* vpmovzxbqxxx: rmemindexx */
   76,  /* vpmovzxbw: rop */
   78,  /* vpmovzxbwx: rmem */
   79,  /* vpmovzxbwxx: rmemindex */
   80,  /* vpmovzxbwxxx: rmemindexx */
   76,  /* vpmovzxdq: rop */
   78,  /* vpmovzxdqx: rmem */
   79,  /* vpmovzxdqxx: rmemindex */
   80,  /* vpmovzxdqxxx: rmemindexx */
   76,  /* vpmovzxwd: rop */
   78,  /* vpmovzxwdx: rmem */
   79,  /* vpmovzxwdxx: rmemindex */
   80,  /* vpmovzxwdxxx: rmemindexx */
   76,  /* vpmovzxwq: rop */
   78,  /* vpmovzxwqx: rmem */
   79,  /* vpmovzxwqxx: rmemindex */
   80,  /* vpmovzxwqxxx: rmemindexx */
   38,  /* vmulhuw: vropop */
   39,  /* vmulhuwx: vropmem */
   41,  /* vmulhuwxx: vropmemindex */
   43,  /* vmulhuwxxx: vropmemindexx */
   38,  /* vmulhrsw: vropop */
   39,  /* vmulhrswx: vropmem */
   41,  /* vmulhrswxx: vropmemindex */
   43,  /* vmulhrswxxx: vropmemindexx */
   38,  /* vmulhw: vropop */
   39,  /* vmulhwx: vropmem */
   41,  /* vmulhwxx: vropmemindex */
   43,  /* vmulhwxxx: vropmemindexx */
   38,  /* vmulld: vropop */
   39,  /* vmulldx: vropmem */
   41,  /* vmulldxx: vropmemindex */
   43,  /* vmulldxxx: vropmemindexx */
   38,  /* vmul128v16: vropop */
   39,  /* vmulx128v16: vropmem */
   41,  /* vmulxx128v16: vropmemindex */
   43,  /* vmulxxx128v16: vropmemindexx */
   38,  /* vmul128v32: vropop */
   39,  /* vmulx128v32: vropmem */
   41,  /* vmulxx128v32: vropmemindex */
   43,  /* vmulxxx128v32: vropmemindexx */
   38,  /* vmuludq: vropop */
   39,  /* vmuludqx: vropmem */
   41,  /* vmuludqxx: vropmemindex */
   43,  /* vmuludqxxx: vropmemindexx */
   38,  /* vmuldq: vropop */
   39,  /* vmuldqx: vropmem */
   41,  /* vmuldqxx: vropmemindex */
   43,  /* vmuldqxxx: vropmemindexx */
   38,  /* vor128v8: vropop */
   39,  /* vorx128v8: vropmem */
   41,  /* vorxx128v8: vropmemindex */
   43,  /* vorxxx128v8: vropmemindexx */
   38,  /* vor128v16: vropop */
   39,  /* vorx128v16: vropmem */
   41,  /* vorxx128v16: vropmemindex */
   43,  /* vorxxx128v16: vropmemindexx */
   38,  /* vor128v32: vropop */
   39,  /* vorx128v32: vropmem */
   41,  /* vorxx128v32: vropmemindex */
   43,  /* vorxxx128v32: vropmemindexx */
   38,  /* vor128v64: vropop */
   39,  /* vorx128v64: vropmem */
   41,  /* vorxx128v64: vropmemindex */
   43,  /* vorxxx128v64: vropmemindexx */
   38,  /* vpsadbw: vropop */
   39,  /* vpsadbwx: vropmem */
   41,  /* vpsadbwxx: vropmemindex */
   43,  /* vpsadbwxxx: vropmemindexx */
   38,  /* vpshuf128v8: vropop */
   39,  /* vpshufx128v8: vropmem */
   41,  /* vpshufxx128v8: vropmemindex */
   43,  /* vpshufxxx128v8: vropmemindexx */
   38,  /* vpshuf128v32: vropop */
   39,  /* vpshufx128v32: vropmem */
   41,  /* vpshufxx128v32: vropmemindex */
   43,  /* vpshufxxx128v32: vropmemindexx */
   38,  /* vpshufw64v16: vropop */
   39,  /* vpshufwx64v16: vropmem */
   41,  /* vpshufwxx64v16: vropmemindex */
   43,  /* vpshufwxxx64v16: vropmemindexx */
   38,  /* vpshufhw: vropop */
   39,  /* vpshufhwx: vropmem */
   41,  /* vpshufhwxx: vropmemindex */
   43,  /* vpshufhwxxx: vropmemindexx */
   38,  /* vpshuflw: vropop */
   39,  /* vpshuflwx: vropmem */
   41,  /* vpshuflwxx: vropmemindex */
   43,  /* vpshuflwxxx: vropmemindexx */
   76,  /* vpsign128v8: rop */
   78,  /* vpsignx128v8: rmem */
   79,  /* vpsignxx128v8: rmemindex */
   80,  /* vpsignxxx128v8: rmemindexx */
   76,  /* vpsign128v32: rop */
   78,  /* vpsignx128v32: rmem */
   79,  /* vpsignxx128v32: rmemindex */
   80,  /* vpsignxxx128v32: rmemindexx */
   76,  /* vpsign128v16: rop */
   78,  /* vpsignx128v16: rmem */
   79,  /* vpsignxx128v16: rmemindex */
   80,  /* vpsignxxx128v16: rmemindexx */
   38,  /* vpslldq: vropop */
   38,  /* vpsrldq: vropop */
   38,  /* vpslld: vropop */
   39,  /* vpslldx: vropmem */
   41,  /* vpslldxx: vropmemindex */
   43,  /* vpslldxxx: vropmemindexx */
   38,  /* vpslldi: vropop */
   38,  /* vpsllq: vropop */
   39,  /* vpsllqx: vropmem */
   41,  /* vpsllqxx: vropmemindex */
   43,  /* vpsllqxxx: vropmemindexx */
   38,  /* vpsllqi: vropop */
   38,  /* vpsllw: vropop */
   39,  /* vpsllwx: vropmem */
   41,  /* vpsllwxx: vropmemindex */
   43,  /* vpsllwxxx: vropmemindexx */
   38,  /* vpsllwi: vropop */
   38,  /* vpsrad: vropop */
   39,  /* vpsradx: vropmem */
   41,  /* vpsradxx: vropmemindex */
   43,  /* vpsradxxx: vropmemindexx */
   38,  /* vpsradi: vropop */
   38,  /* vpsraw: vropop */
   39,  /* vpsrawx: vropmem */
   41,  /* vpsrawxx: vropmemindex */
   43,  /* vpsrawxxx: vropmemindexx */
   38,  /* vpsrawi: vropop */
   38,  /* vpsrld: vropop */
   39,  /* vpsrldx: vropmem */
   41,  /* vpsrldxx: vropmemindex */
   43,  /* vpsrldxxx: vropmemindexx */
   38,  /* vpsrldi: vropop */
   38,  /* vpsrlq: vropop */
   39,  /* vpsrlqx: vropmem */
   41,  /* vpsrlqxx: vropmemindex */
   43,  /* vpsrlqxxx: vropmemindexx */
   38,  /* vpsrlqi: vropop */
   38,  /* vpsrlw: vropop */
   39,  /* vpsrlwx: vropmem */
   41,  /* vpsrlwxx: vropmemindex */
   43,  /* vpsrlwxxx: vropmemindexx */
   38,  /* vpsrlwi: vropop */
   38,  /* vsub128v8: vropop */
   39,  /* vsubx128v8: vropmem */
   41,  /* vsubxx128v8: vropmemindex */
   43,  /* vsubxxx128v8: vropmemindexx */
   38,  /* vsub128v32: vropop */
   39,  /* vsubx128v32: vropmem */
   41,  /* vsubxx128v32: vropmemindex */
   43,  /* vsubxxx128v32: vropmemindexx */
   38,  /* vsub128v64: vropop */
   39,  /* vsubx128v64: vropmem */
   41,  /* vsubxx128v64: vropmemindex */
   43,  /* vsubxxx128v64: vropmemindexx */
   38,  /* vsub128v16: vropop */
   39,  /* vsubx128v16: vropmem */
   41,  /* vsubxx128v16: vropmemindex */
   43,  /* vsubxxx128v16: vropmemindexx */
   38,  /* vsubs128v8: vropop */
   39,  /* vsubsx128v8: vropmem */
   41,  /* vsubsxx128v8: vropmemindex */
   43,  /* vsubsxxx128v8: vropmemindexx */
   38,  /* vsubs128v16: vropop */
   39,  /* vsubsx128v16: vropmem */
   41,  /* vsubsxx128v16: vropmemindex */
   43,  /* vsubsxxx128v16: vropmemindexx */
   38,  /* vsubus128v8: vropop */
   39,  /* vsubusx128v8: vropmem */
   41,  /* vsubusxx128v8: vropmemindex */
   43,  /* vsubusxxx128v8: vropmemindexx */
   38,  /* vsubus128v16: vropop */
   39,  /* vsubusx128v16: vropmem */
   41,  /* vsubusxx128v16: vropmemindex */
   43,  /* vsubusxxx128v16: vropmemindexx */
    4,  /* vptest128: cmp */
    5,  /* vptestx128: cmpx */
    8,  /* vptestxx128: cmpxx */
   11,  /* vptestxxx128: cmpxxx */
    4,  /* vtestpd: cmp */
    5,  /* vtestxpd: cmpx */
    8,  /* vtestxxpd: cmpxx */
   11,  /* vtestxxxpd: cmpxxx */
    4,  /* vtestps: cmp */
    5,  /* vtestxps: cmpx */
    8,  /* vtestxxps: cmpxx */
   11,  /* vtestxxxps: cmpxxx */
   38,  /* vpunpckh64v8: vropop */
   39,  /* vpunpckhx64v8: vropmem */
   41,  /* vpunpckhxx64v8: vropmemindex */
   43,  /* vpunpckhxxx64v8: vropmemindexx */
   38,  /* vpunpckh64v32: vropop */
   39,  /* vpunpckhx64v32: vropmem */
   41,  /* vpunpckhxx64v32: vropmemindex */
   43,  /* vpunpckhxxx64v32: vropmemindexx */
   38,  /* vpunpckh64v16: vropop */
   39,  /* vpunpckhx64v16: vropmem */
   41,  /* vpunpckhxx64v16: vropmemindex */
   43,  /* vpunpckhxxx64v16: vropmemindexx */
   38,  /* vpunpckh64v64: vropop */
   39,  /* vpunpckhx64v64: vropmem */
   41,  /* vpunpckhxx64v64: vropmemindex */
   43,  /* vpunpckhxxx64v64: vropmemindexx */
   38,  /* vpunpckl64v8: vropop */
   39,  /* vpunpcklx64v8: vropmem */
   41,  /* vpunpcklxx64v8: vropmemindex */
   43,  /* vpunpcklxxx64v8: vropmemindexx */
   38,  /* vpunpckl64v32: vropop */
   39,  /* vpunpcklx64v32: vropmem */
   41,  /* vpunpcklxx64v32: vropmemindex */
   43,  /* vpunpcklxxx64v32: vropmemindexx */
   38,  /* vpunpckl64v16: vropop */
   39,  /* vpunpcklx64v16: vropmem */
   41,  /* vpunpcklxx64v16: vropmemindex */
   43,  /* vpunpcklxxx64v16: vropmemindexx */
   38,  /* vpunpckl64v64: vropop */
   39,  /* vpunpcklx64v64: vropmem */
   41,  /* vpunpcklxx64v64: vropmemindex */
   43,  /* vpunpcklxxx64v64: vropmemindexx */
   38,  /* vxor128v8: vropop */
   39,  /* vxorx128v8: vropmem */
   41,  /* vxorxx128v8: vropmemindex */
   43,  /* vxorxxx128v8: vropmemindexx */
   38,  /* vxor128v16: vropop */
   39,  /* vxorx128v16: vropmem */
   41,  /* vxorxx128v16: vropmemindex */
   43,  /* vxorxxx128v16: vropmemindexx */
   38,  /* vxor128v32: vropop */
   39,  /* vxorx128v32: vropmem */
   41,  /* vxorxx128v32: vropmemindex */
   43,  /* vxorxxx128v32: vropmemindexx */
   38,  /* vxor128v64: vropop */
   39,  /* vxorx128v64: vropmem */
   41,  /* vxorxx128v64: vropmemindex */
   43,  /* vxorxxx128v64: vropmemindexx */
   76,  /* vfrcp128v32: rop */
   78,  /* vfrcpx128v32: rmem */
   79,  /* vfrcpxx128v32: rmemindex */
   80,  /* vfrcpxxx128v32: rmemindexx */
   34,  /* vfrcpss: vropspec */
   35,  /* vfrcpxss: vropspecmem */
   36,  /* vfrcpxxss: vropspecmemindex */
   37,  /* vfrcpxxxss: vropspecmemindexx */
   52,  /* vround128v64: round */
   53,  /* vroundx128v64: roundmem */
   54,  /* vroundxx128v64: roundmemindex */
   55,  /* vroundxxx128v64: roundmemindexx */
   52,  /* vround128v32: round */
   53,  /* vroundx128v32: roundmem */
   54,  /* vroundxx128v32: roundmemindex */
   55,  /* vroundxxx128v32: roundmemindexx */
   56,  /* vroundsd: avxrounds */
   57,  /* vroundxsd: avxroundsmem */
   58,  /* vroundxxsd: avxroundsmemindex */
   59,  /* vroundxxxsd: avxroundsmemindexx */
   56,  /* vroundss: avxrounds */
   57,  /* vroundxss: avxroundsmem */
   58,  /* vroundxxss: avxroundsmemindex */
   59,  /* vroundxxxss: avxroundsmemindexx */
   76,  /* vfrsqrt128v32: rop */
   78,  /* vfrsqrtx128v32: rmem */
   79,  /* vfrsqrtxx128v32: rmemindex */
   80,  /* vfrsqrtxxx128v32: rmemindexx */
   34,  /* vfrsqrtss: vropspec */
   35,  /* vfrsqrtxss: vropspecmem */
   36,  /* vfrsqrtxxss: vropspecmemindex */
   37,  /* vfrsqrtxxxss: vropspecmemindexx */
   45,  /* vshufpd: vropopimm */
   45,  /* vfshuf128v64: vropopimm */
   46,  /* vfshufx128v64: vropmemop */
   47,  /* vfshufxx128v64: vropmemindexop */
   48,  /* vfshufxxx128v64: vropmemindexxop */
   45,  /* vshufps: vropopimm */
   45,  /* vfshuf128v32: vropopimm */
   46,  /* vfshufx128v32: vropmemop */
   47,  /* vfshufxx128v32: vropmemindexop */
   48,  /* vfshufxxx128v32: vropmemindexxop */
   76,  /* vfsqrt128v64: rop */
   78,  /* vfsqrtx128v64: rmem */
   79,  /* vfsqrtxx128v64: rmemindex */
   80,  /* vfsqrtxxx128v64: rmemindexx */
   76,  /* vfsqrt128v32: rop */
   78,  /* vfsqrtx128v32: rmem */
   79,  /* vfsqrtxx128v32: rmemindex */
   80,  /* vfsqrtxxx128v32: rmemindexx */
   34,  /* vfsqrtsd: vropspec */
   35,  /* vfsqrtxsd: vropspecmem */
   36,  /* vfsqrtxxsd: vropspecmemindex */
   37,  /* vfsqrtxxxsd: vropspecmemindexx */
   34,  /* vfsqrtss: vropspec */
   35,  /* vfsqrtxss: vropspecmem */
   36,  /* vfsqrtxxss: vropspecmemindex */
   37,  /* vfsqrtxxxss: vropspecmemindexx */
  124,  /* vstmxcsr: stmxcsr */
   38,  /* vfsub128v64: vropop */
   39,  /* vfsubx128v64: vropmem */
   41,  /* vfsubxx128v64: vropmemindex */
   43,  /* vfsubxxx128v64: vropmemindexx */
   38,  /* vfsub128v32: vropop */
   39,  /* vfsubx128v32: vropmem */
   41,  /* vfsubxx128v32: vropmemindex */
   43,  /* vfsubxxx128v32: vropmemindexx */
   38,  /* vsubsd: vropop */
   39,  /* vsubxsd: vropmem */
   41,  /* vsubxxsd: vropmemindex */
   43,  /* vsubxxxsd: vropmemindexx */
   38,  /* vsubss: vropop */
   39,  /* vsubxss: vropmem */
   41,  /* vsubxxss: vropmemindex */
   43,  /* vsubxxxss: vropmemindexx */
    4,  /* vucomisd: cmp */
    5,  /* vucomixsd: cmpx */
    8,  /* vucomixxsd: cmpxx */
   11,  /* vucomixxxsd: cmpxxx */
    4,  /* vucomiss: cmp */
    5,  /* vucomixss: cmpx */
    8,  /* vucomixxss: cmpxx */
   11,  /* vucomixxxss: cmpxxx */
   38,  /* vunpckh128v64: vropop */
   39,  /* vunpckhx128v64: vropmem */
   41,  /* vunpckhxx128v64: vropmemindex */
   43,  /* vunpckhxxx128v64: vropmemindexx */
   38,  /* vunpckh128v32: vropop */
   39,  /* vunpckhx128v32: vropmem */
   41,  /* vunpckhxx128v32: vropmemindex */
   43,  /* vunpckhxxx128v32: vropmemindexx */
   38,  /* vunpckl128v64: vropop */
   39,  /* vunpcklx128v64: vropmem */
   41,  /* vunpcklxx128v64: vropmemindex */
   43,  /* vunpcklxxx128v64: vropmemindexx */
   38,  /* vunpckl128v32: vropop */
   39,  /* vunpcklx128v32: vropmem */
   41,  /* vunpcklxx128v32: vropmemindex */
   43,  /* vunpcklxxx128v32: vropmemindexx */
   38,  /* vxorpd: vropop */
   38,  /* vfxor128v64: vropop */
   39,  /* vfxorx128v64: vropmem */
   41,  /* vfxorxx128v64: vropmemindex */
   43,  /* vfxorxxx128v64: vropmemindexx */
   75,  /* vxzero128v64: vrr */
   75,  /* vxzero64: vrr */
   38,  /* vxorps: vropop */
   38,  /* vfxor128v32: vropop */
   39,  /* vfxorx128v32: vropmem */
   41,  /* vfxorxx128v32: vropmemindex */
   43,  /* vfxorxxx128v32: vropmemindexx */
   75,  /* vxzero128v32: vrr */
   75,  /* vxzero32: vrr */
  129,  /* vzeroall: no_rop */
   38,  /* vcmpeqpd: vropop */
   38,  /* vcmpltpd: vropop */
   38,  /* vcmplepd: vropop */
   38,  /* vcmpunordpd: vropop */
   38,  /* vcmpneqpd: vropop */
   38,  /* vcmpnltpd: vropop */
   38,  /* vcmpnlepd: vropop */
   38,  /* vcmpordpd: vropop */
   38,  /* vcmpeqps: vropop */
   38,  /* vcmpltps: vropop */
   38,  /* vcmpleps: vropop */
   38,  /* vcmpunordps: vropop */
   38,  /* vcmpneqps: vropop */
   38,  /* vcmpnltps: vropop */
   38,  /* vcmpnleps: vropop */
   38,  /* vcmpordps: vropop */
   38,  /* vcmpeqsd: vropop */
   38,  /* vcmpltsd: vropop */
   38,  /* vcmplesd: vropop */
   38,  /* vcmpunordsd: vropop */
   38,  /* vcmpneqsd: vropop */
   38,  /* vcmpnltsd: vropop */
   38,  /* vcmpnlesd: vropop */
   38,  /* vcmpordsd: vropop */
   38,  /* vcmpeqss: vropop */
   38,  /* vcmpltss: vropop */
   38,  /* vcmpless: vropop */
   38,  /* vcmpunordss: vropop */
   38,  /* vcmpneqss: vropop */
   38,  /* vcmpnltss: vropop */
   38,  /* vcmpnless: vropop */
   38,  /* vcmpordss: vropop */
  120,  /* xfmadd132pd: ifma_ropopop */
  121,  /* xfmadd132xpd: ifma_ropopmem */
  122,  /* xfmadd132xxpd: ifma_ropopmemindex */
  123,  /* xfmadd132xxxpd: ifma_ropopmemindexx */
  120,  /* xfmadd213pd: ifma_ropopop */
  121,  /* xfmadd213xpd: ifma_ropopmem */
  122,  /* xfmadd213xxpd: ifma_ropopmemindex */
  123,  /* xfmadd213xxxpd: ifma_ropopmemindexx */
  120,  /* xfmadd231pd: ifma_ropopop */
  121,  /* xfmadd231xpd: ifma_ropopmem */
  122,  /* xfmadd231xxpd: ifma_ropopmemindex */
  123,  /* xfmadd231xxxpd: ifma_ropopmemindexx */
  120,  /* xfmadd132ps: ifma_ropopop */
  121,  /* xfmadd132xps: ifma_ropopmem */
  122,  /* xfmadd132xxps: ifma_ropopmemindex */
  123,  /* xfmadd132xxxps: ifma_ropopmemindexx */
  120,  /* xfmadd213ps: ifma_ropopop */
  121,  /* xfmadd213xps: ifma_ropopmem */
  122,  /* xfmadd213xxps: ifma_ropopmemindex */
  123,  /* xfmadd213xxxps: ifma_ropopmemindexx */
  120,  /* xfmadd231ps: ifma_ropopop */
  121,  /* xfmadd231xps: ifma_ropopmem */
  122,  /* xfmadd231xxps: ifma_ropopmemindex */
  123,  /* xfmadd231xxxps: ifma_ropopmemindexx */
  120,  /* xfmadd132sd: ifma_ropopop */
  121,  /* xfmadd132xsd: ifma_ropopmem */
  122,  /* xfmadd132xxsd: ifma_ropopmemindex */
  123,  /* xfmadd132xxxsd: ifma_ropopmemindexx */
  120,  /* xfmadd213sd: ifma_ropopop */
  121,  /* xfmadd213xsd: ifma_ropopmem */
  122,  /* xfmadd213xxsd: ifma_ropopmemindex */
  123,  /* xfmadd213xxxsd: ifma_ropopmemindexx */
  120,  /* xfmadd231sd: ifma_ropopop */
  121,  /* xfmadd231xsd: ifma_ropopmem */
  122,  /* xfmadd231xxsd: ifma_ropopmemindex */
  123,  /* xfmadd231xxxsd: ifma_ropopmemindexx */
  120,  /* xfmadd132ss: ifma_ropopop */
  121,  /* xfmadd132xss: ifma_ropopmem */
  122,  /* xfmadd132xxss: ifma_ropopmemindex */
  123,  /* xfmadd132xxxss: ifma_ropopmemindexx */
  120,  /* xfmadd213ss: ifma_ropopop */
  121,  /* xfmadd213xss: ifma_ropopmem */
  122,  /* xfmadd213xxss: ifma_ropopmemindex */
  123,  /* xfmadd213xxxss: ifma_ropopmemindexx */
  120,  /* xfmadd231ss: ifma_ropopop */
  121,  /* xfmadd231xss: ifma_ropopmem */
  122,  /* xfmadd231xxss: ifma_ropopmemindex */
  123,  /* xfmadd231xxxss: ifma_ropopmemindexx */
  120,  /* xfmaddsub132pd: ifma_ropopop */
  121,  /* xfmaddsub132xpd: ifma_ropopmem */
  122,  /* xfmaddsub132xxpd: ifma_ropopmemindex */
  123,  /* xfmaddsub132xxxpd: ifma_ropopmemindexx */
  120,  /* xfmaddsub213pd: ifma_ropopop */
  121,  /* xfmaddsub213xpd: ifma_ropopmem */
  122,  /* xfmaddsub213xxpd: ifma_ropopmemindex */
  123,  /* xfmaddsub213xxxpd: ifma_ropopmemindexx */
  120,  /* xfmaddsub231pd: ifma_ropopop */
  121,  /* xfmaddsub231xpd: ifma_ropopmem */
  122,  /* xfmaddsub231xxpd: ifma_ropopmemindex */
  123,  /* xfmaddsub231xxxpd: ifma_ropopmemindexx */
  120,  /* xfmaddsub132ps: ifma_ropopop */
  121,  /* xfmaddsub132xps: ifma_ropopmem */
  122,  /* xfmaddsub132xxps: ifma_ropopmemindex */
  123,  /* xfmaddsub132xxxps: ifma_ropopmemindexx */
  120,  /* xfmaddsub213ps: ifma_ropopop */
  121,  /* xfmaddsub213xps: ifma_ropopmem */
  122,  /* xfmaddsub213xxps: ifma_ropopmemindex */
  123,  /* xfmaddsub213xxxps: ifma_ropopmemindexx */
  120,  /* xfmaddsub231ps: ifma_ropopop */
  121,  /* xfmaddsub231xps: ifma_ropopmem */
  122,  /* xfmaddsub231xxps: ifma_ropopmemindex */
  123,  /* xfmaddsub231xxxps: ifma_ropopmemindexx */
  120,  /* xfmsubadd132pd: ifma_ropopop */
  121,  /* xfmsubadd132xpd: ifma_ropopmem */
  122,  /* xfmsubadd132xxpd: ifma_ropopmemindex */
  123,  /* xfmsubadd132xxxpd: ifma_ropopmemindexx */
  120,  /* xfmsubadd213pd: ifma_ropopop */
  121,  /* xfmsubadd213xpd: ifma_ropopmem */
  122,  /* xfmsubadd213xxpd: ifma_ropopmemindex */
  123,  /* xfmsubadd213xxxpd: ifma_ropopmemindexx */
  120,  /* xfmsubadd231pd: ifma_ropopop */
  121,  /* xfmsubadd231xpd: ifma_ropopmem */
  122,  /* xfmsubadd231xxpd: ifma_ropopmemindex */
  123,  /* xfmsubadd231xxxpd: ifma_ropopmemindexx */
  120,  /* xfmsubadd132ps: ifma_ropopop */
  121,  /* xfmsubadd132xps: ifma_ropopmem */
  122,  /* xfmsubadd132xxps: ifma_ropopmemindex */
  123,  /* xfmsubadd132xxxps: ifma_ropopmemindexx */
  120,  /* xfmsubadd213ps: ifma_ropopop */
  121,  /* xfmsubadd213xps: ifma_ropopmem */
  122,  /* xfmsubadd213xxps: ifma_ropopmemindex */
  123,  /* xfmsubadd213xxxps: ifma_ropopmemindexx */
  120,  /* xfmsubadd231ps: ifma_ropopop */
  121,  /* xfmsubadd231xps: ifma_ropopmem */
  122,  /* xfmsubadd231xxps: ifma_ropopmemindex */
  123,  /* xfmsubadd231xxxps: ifma_ropopmemindexx */
  120,  /* xfmsub132pd: ifma_ropopop */
  121,  /* xfmsub132xpd: ifma_ropopmem */
  122,  /* xfmsub132xxpd: ifma_ropopmemindex */
  123,  /* xfmsub132xxxpd: ifma_ropopmemindexx */
  120,  /* xfmsub213pd: ifma_ropopop */
  121,  /* xfmsub213xpd: ifma_ropopmem */
  122,  /* xfmsub213xxpd: ifma_ropopmemindex */
  123,  /* xfmsub213xxxpd: ifma_ropopmemindexx */
  120,  /* xfmsub231pd: ifma_ropopop */
  121,  /* xfmsub231xpd: ifma_ropopmem */
  122,  /* xfmsub231xxpd: ifma_ropopmemindex */
  123,  /* xfmsub231xxxpd: ifma_ropopmemindexx */
  120,  /* xfmsub132ps: ifma_ropopop */
  121,  /* xfmsub132xps: ifma_ropopmem */
  122,  /* xfmsub132xxps: ifma_ropopmemindex */
  123,  /* xfmsub132xxxps: ifma_ropopmemindexx */
  120,  /* xfmsub213ps: ifma_ropopop */
  121,  /* xfmsub213xps: ifma_ropopmem */
  122,  /* xfmsub213xxps: ifma_ropopmemindex */
  123,  /* xfmsub213xxxps: ifma_ropopmemindexx */
  120,  /* xfmsub231ps: ifma_ropopop */
  121,  /* xfmsub231xps: ifma_ropopmem */
  122,  /* xfmsub231xxps: ifma_ropopmemindex */
  123,  /* xfmsub231xxxps: ifma_ropopmemindexx */
  120,  /* xfmsub132sd: ifma_ropopop */
  121,  /* xfmsub132xsd: ifma_ropopmem */
  122,  /* xfmsub132xxsd: ifma_ropopmemindex */
  123,  /* xfmsub132xxxsd: ifma_ropopmemindexx */
  120,  /* xfmsub213sd: ifma_ropopop */
  121,  /* xfmsub213xsd: ifma_ropopmem */
  122,  /* xfmsub213xxsd: ifma_ropopmemindex */
  123,  /* xfmsub213xxxsd: ifma_ropopmemindexx */
  120,  /* xfmsub231sd: ifma_ropopop */
  121,  /* xfmsub231xsd: ifma_ropopmem */
  122,  /* xfmsub231xxsd: ifma_ropopmemindex */
  123,  /* xfmsub231xxxsd: ifma_ropopmemindexx */
  120,  /* xfmsub132ss: ifma_ropopop */
  121,  /* xfmsub132xss: ifma_ropopmem */
  122,  /* xfmsub132xxss: ifma_ropopmemindex */
  123,  /* xfmsub132xxxss: ifma_ropopmemindexx */
  120,  /* xfmsub213ss: ifma_ropopop */
  121,  /* xfmsub213xss: ifma_ropopmem */
  122,  /* xfmsub213xxss: ifma_ropopmemindex */
  123,  /* xfmsub213xxxss: ifma_ropopmemindexx */
  120,  /* xfmsub231ss: ifma_ropopop */
  121,  /* xfmsub231xss: ifma_ropopmem */
  122,  /* xfmsub231xxss: ifma_ropopmemindex */
  123,  /* xfmsub231xxxss: ifma_ropopmemindexx */
  120,  /* xfnmadd132pd: ifma_ropopop */
  121,  /* xfnmadd132xpd: ifma_ropopmem */
  122,  /* xfnmadd132xxpd: ifma_ropopmemindex */
  123,  /* xfnmadd132xxxpd: ifma_ropopmemindexx */
  120,  /* xfnmadd213pd: ifma_ropopop */
  121,  /* xfnmadd213xpd: ifma_ropopmem */
  122,  /* xfnmadd213xxpd: ifma_ropopmemindex */
  123,  /* xfnmadd213xxxpd: ifma_ropopmemindexx */
  120,  /* xfnmadd231pd: ifma_ropopop */
  121,  /* xfnmadd231xpd: ifma_ropopmem */
  122,  /* xfnmadd231xxpd: ifma_ropopmemindex */
  123,  /* xfnmadd231xxxpd: ifma_ropopmemindexx */
  120,  /* xfnmadd132ps: ifma_ropopop */
  121,  /* xfnmadd132xps: ifma_ropopmem */
  122,  /* xfnmadd132xxps: ifma_ropopmemindex */
  123,  /* xfnmadd132xxxps: ifma_ropopmemindexx */
  120,  /* xfnmadd213ps: ifma_ropopop */
  121,  /* xfnmadd213xps: ifma_ropopmem */
  122,  /* xfnmadd213xxps: ifma_ropopmemindex */
  123,  /* xfnmadd213xxxps: ifma_ropopmemindexx */
  120,  /* xfnmadd231ps: ifma_ropopop */
  121,  /* xfnmadd231xps: ifma_ropopmem */
  122,  /* xfnmadd231xxps: ifma_ropopmemindex */
  123,  /* xfnmadd231xxxps: ifma_ropopmemindexx */
  120,  /* xfnmadd132sd: ifma_ropopop */
  121,  /* xfnmadd132xsd: ifma_ropopmem */
  122,  /* xfnmadd132xxsd: ifma_ropopmemindex */
  123,  /* xfnmadd132xxxsd: ifma_ropopmemindexx */
  120,  /* xfnmadd213sd: ifma_ropopop */
  121,  /* xfnmadd213xsd: ifma_ropopmem */
  122,  /* xfnmadd213xxsd: ifma_ropopmemindex */
  123,  /* xfnmadd213xxxsd: ifma_ropopmemindexx */
  120,  /* xfnmadd231sd: ifma_ropopop */
  121,  /* xfnmadd231xsd: ifma_ropopmem */
  122,  /* xfnmadd231xxsd: ifma_ropopmemindex */
  123,  /* xfnmadd231xxxsd: ifma_ropopmemindexx */
  120,  /* xfnmadd132ss: ifma_ropopop */
  121,  /* xfnmadd132xss: ifma_ropopmem */
  122,  /* xfnmadd132xxss: ifma_ropopmemindex */
  123,  /* xfnmadd132xxxss: ifma_ropopmemindexx */
  120,  /* xfnmadd213ss: ifma_ropopop */
  121,  /* xfnmadd213xss: ifma_ropopmem */
  122,  /* xfnmadd213xxss: ifma_ropopmemindex */
  123,  /* xfnmadd213xxxss: ifma_ropopmemindexx */
  120,  /* xfnmadd231ss: ifma_ropopop */
  121,  /* xfnmadd231xss: ifma_ropopmem */
  122,  /* xfnmadd231xxss: ifma_ropopmemindex */
  123,  /* xfnmadd231xxxss: ifma_ropopmemindexx */
  120,  /* xfnmsub132pd: ifma_ropopop */
  121,  /* xfnmsub132xpd: ifma_ropopmem */
  122,  /* xfnmsub132xxpd: ifma_ropopmemindex */
  123,  /* xfnmsub132xxxpd: ifma_ropopmemindexx */
  120,  /* xfnmsub213pd: ifma_ropopop */
  121,  /* xfnmsub213xpd: ifma_ropopmem */
  122,  /* xfnmsub213xxpd: ifma_ropopmemindex */
  123,  /* xfnmsub213xxxpd: ifma_ropopmemindexx */
  120,  /* xfnmsub231pd: ifma_ropopop */
  121,  /* xfnmsub231xpd: ifma_ropopmem */
  122,  /* xfnmsub231xxpd: ifma_ropopmemindex */
  123,  /* xfnmsub231xxxpd: ifma_ropopmemindexx */
  120,  /* xfnmsub132ps: ifma_ropopop */
  121,  /* xfnmsub132xps: ifma_ropopmem */
  122,  /* xfnmsub132xxps: ifma_ropopmemindex */
  123,  /* xfnmsub132xxxps: ifma_ropopmemindexx */
  120,  /* xfnmsub213ps: ifma_ropopop */
  121,  /* xfnmsub213xps: ifma_ropopmem */
  122,  /* xfnmsub213xxps: ifma_ropopmemindex */
  123,  /* xfnmsub213xxxps: ifma_ropopmemindexx */
  120,  /* xfnmsub231ps: ifma_ropopop */
  121,  /* xfnmsub231xps: ifma_ropopmem */
  122,  /* xfnmsub231xxps: ifma_ropopmemindex */
  123,  /* xfnmsub231xxxps: ifma_ropopmemindexx */
  120,  /* xfnmsub132sd: ifma_ropopop */
  121,  /* xfnmsub132xsd: ifma_ropopmem */
  122,  /* xfnmsub132xxsd: ifma_ropopmemindex */
  123,  /* xfnmsub132xxxsd: ifma_ropopmemindexx */
  120,  /* xfnmsub213sd: ifma_ropopop */
  121,  /* xfnmsub213xsd: ifma_ropopmem */
  122,  /* xfnmsub213xxsd: ifma_ropopmemindex */
  123,  /* xfnmsub213xxxsd: ifma_ropopmemindexx */
  120,  /* xfnmsub231sd: ifma_ropopop */
  121,  /* xfnmsub231xsd: ifma_ropopmem */
  122,  /* xfnmsub231xxsd: ifma_ropopmemindex */
  123,  /* xfnmsub231xxxsd: ifma_ropopmemindexx */
  120,  /* xfnmsub132ss: ifma_ropopop */
  121,  /* xfnmsub132xss: ifma_ropopmem */
  122,  /* xfnmsub132xxss: ifma_ropopmemindex */
  123,  /* xfnmsub132xxxss: ifma_ropopmemindexx */
  120,  /* xfnmsub213ss: ifma_ropopop */
  121,  /* xfnmsub213xss: ifma_ropopmem */
  122,  /* xfnmsub213xxss: ifma_ropopmemindex */
  123,  /* xfnmsub213xxxss: ifma_ropopmemindexx */
  120,  /* xfnmsub231ss: ifma_ropopop */
  121,  /* xfnmsub231xss: ifma_ropopmem */
  122,  /* xfnmsub231xxss: ifma_ropopmemindex */
  123,  /* xfnmsub231xxxss: ifma_ropopmemindexx */
   76,  /* movabsq: rop */
   81,  /* store8_abs: opop1 */
   81,  /* store16_abs: opop1 */
   81,  /* store32_abs: opop1 */
   81,  /* store64_abs: opop1 */
   76,  /* ld8_abs: rop */
   76,  /* ld16_abs: rop */
   76,  /* ld32_abs: rop */
   76,  /* ld64_abs: rop */
  101,  /* lock_add32: rmw */
  101,  /* lock_adc32: rmw */
  101,  /* lock_add64: rmw */
  102,  /* lock_xchg32: xchg */
  102,  /* lock_xchg64: xchg */
  103,  /* lock_cmpxchg32: cmpxchg */
  103,  /* lock_cmpxchg64: cmpxchg */
  101,  /* lock_and32: rmw */
  101,  /* lock_and64: rmw */
  101,  /* lock_or32: rmw */
  101,  /* lock_or64: rmw */
  101,  /* lock_xor32: rmw */
  101,  /* lock_xor64: rmw */
  101,  /* lock_sub32: rmw */
  101,  /* lock_sub64: rmw */
  101,  /* lock_add8: rmw */
  101,  /* lock_add16: rmw */
  102,  /* lock_xchg8: xchg */
  102,  /* lock_xchg16: xchg */
  103,  /* lock_cmpxchg8: cmpxchg */
  103,  /* lock_cmpxchg16: cmpxchg */
  101,  /* lock_and8: rmw */
  101,  /* lock_and16: rmw */
  101,  /* lock_or8: rmw */
  101,  /* lock_or16: rmw */
  101,  /* lock_xor8: rmw */
  101,  /* lock_xor16: rmw */
  101,  /* lock_sub8: rmw */
  101,  /* lock_sub16: rmw */
  101,  /* lock_xadd8: rmw */
  101,  /* lock_xadd16: rmw */
  101,  /* lock_xadd32: rmw */
  101,  /* lock_xadd64: rmw */
   76,  /* bsf32: rop */
   76,  /* bsf64: rop */
   76,  /* bsr32: rop */
   76,  /* bsr64: rop */
  125,  /* tls_global_dynamic_64: tls_gd_64 */
  126,  /* tls_global_dynamic_32: tls_gd_32 */
  127,  /* tls_local_dynamic_64: tls_ld_64 */
  128,  /* tls_local_dynamic_32: tls_ld_32 */
    0,  /* begin_pregtn */
    0,  /* end_pregtn */
    0,  /* bwd_bar */
    0,  /* fwd_bar */
    0,  /* label */
  129,  /* nop: no_rop */
    0,  /* noop */
};

BOOL ISA_PRINT_Operand_Is_Part_Of_Name(TOP topcode, INT opindex)
{
  const ISA_PRINT_INFO *info = ISA_PRINT_Info(topcode);
  const char *place_in_format = ISA_PRINT_INFO_Format(info);
  BOOL in_name_part = 0;
  INT comp;
  INT i = 0;
  for (;;) {
  	comp = ISA_PRINT_INFO_Comp(info,i);
  	if (comp == ISA_PRINT_COMP_end) break;
	place_in_format = strchr(place_in_format, '%');
	place_in_format += 2; /* assume %s */
  	if (comp == ISA_PRINT_COMP_name) {
	  if (*place_in_format == '\0' || *place_in_format == ' ')
		in_name_part = 0;
	  else
		in_name_part = 1;
  	}
  	if (comp >= ISA_PRINT_COMP_opnd && comp < ISA_PRINT_COMP_result) {
  	  if (in_name_part) {
	    INT comp_opindex = comp - ISA_PRINT_COMP_opnd;
	    if (comp_opindex == opindex)
		return 1;
	    if (*place_in_format == '\0' || *place_in_format == ' ')
		in_name_part = 0;
  	  }
  	}
  	++i;
  }
  return 0;
}
