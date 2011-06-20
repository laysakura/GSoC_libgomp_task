#include <string.h>
#include "topcode.h"
#include "targ_isa_print.h"


const ISA_PRINT_INFO ISA_PRINT_info[129] = {
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

const mUINT8 ISA_PRINT_info_index[3591] = {
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
  128,  /* enter: no_rop */
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
   81,  /* ld64: load */
   84,  /* ldx64: ldx */
   85,  /* ldxx64: ldxx */
   81,  /* ld64_2m: load */
   81,  /* ld64_2sse: load */
   81,  /* lea32: load */
   81,  /* lea64: load */
   82,  /* leax32: leax */
   82,  /* leax64: leax */
   83,  /* leaxx32: leaxx */
   83,  /* leaxx64: leaxx */
  128,  /* leave: no_rop */
   76,  /* ldc32: rop */
   76,  /* ldc64: rop */
    2,  /* mul32: op1 */
    2,  /* mulx64: op1 */
   76,  /* mov32: rop */
   76,  /* mov64: rop */
   76,  /* mov64_m: rop */
   76,  /* ld32_64_off: rop */
   76,  /* ld64_off: rop */
   80,  /* store64_off: opop1 */
   80,  /* storei64_off: opop1 */
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
   80,  /* store8_n32: opop1 */
   80,  /* storei8_n32: opop1 */
   80,  /* store16_n32: opop1 */
   80,  /* storei16_n32: opop1 */
   80,  /* store32_n32: opop1 */
   80,  /* storei32_n32: opop1 */
   80,  /* stss_n32: opop1 */
   80,  /* stsd_n32: opop1 */
   80,  /* staps_n32: opop1 */
   80,  /* stapd_n32: opop1 */
   80,  /* stdqa_n32: opop1 */
   80,  /* stdqu_n32: opop1 */
   80,  /* stlps_n32: opop1 */
   80,  /* sthps_n32: opop1 */
   80,  /* stlpd_n32: opop1 */
   80,  /* sthpd_n32: opop1 */
   80,  /* store64_fm_n32: opop1 */
   80,  /* store64_fsse_n32: opop1 */
   87,  /* ld32_gs_seg_off: load_gs_seg_off */
   88,  /* ld64_fs_seg_off: load_fs_seg_off */
   76,  /* movsbl: rop */
   81,  /* ld8_32: load */
   84,  /* ldx8_32: ldx */
   85,  /* ldxx8_32: ldxx */
   76,  /* movzbl: rop */
   81,  /* ldu8_32: load */
   84,  /* ldxu8_32: ldx */
   85,  /* ldxxu8_32: ldxx */
   76,  /* movswl: rop */
   81,  /* ld16_32: load */
   84,  /* ldx16_32: ldx */
   85,  /* ldxx16_32: ldxx */
   76,  /* movzwl: rop */
   81,  /* ldu16_32: load */
   84,  /* ldxu16_32: ldx */
   85,  /* ldxxu16_32: ldxx */
   76,  /* movsbq: rop */
   81,  /* ld8_64: load */
   84,  /* ldx8_64: ldx */
   85,  /* ldxx8_64: ldxx */
   76,  /* ld8_64_off: rop */
   76,  /* movzbq: rop */
   81,  /* ldu8_64: load */
   84,  /* ldxu8_64: ldx */
   85,  /* ldxxu8_64: ldxx */
   76,  /* ldu8_64_off: rop */
   76,  /* movswq: rop */
   81,  /* ld16_64: load */
   84,  /* ldx16_64: ldx */
   85,  /* ldxx16_64: ldxx */
   76,  /* ld16_64_off: rop */
   76,  /* movzwq: rop */
   81,  /* ldu16_64: load */
   84,  /* ldxu16_64: ldx */
   85,  /* ldxxu16_64: ldxx */
   76,  /* ldu16_64_off: rop */
   76,  /* movslq: rop */
   81,  /* ld32_64: load */
   84,  /* ldx32_64: ldx */
   85,  /* ldxx32_64: ldxx */
   81,  /* ld32: load */
   84,  /* ldx32: ldx */
   85,  /* ldxx32: ldxx */
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
  128,  /* ret: no_rop */
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
   90,  /* prefetch: prefetch */
   90,  /* prefetchw: prefetch */
   90,  /* prefetcht0: prefetch */
   90,  /* prefetcht1: prefetch */
   90,  /* prefetchnta: prefetch */
   91,  /* prefetchx: prefetchx */
   92,  /* prefetchxx: prefetchxx */
   91,  /* prefetchwx: prefetchx */
   92,  /* prefetchwxx: prefetchxx */
   91,  /* prefetcht0x: prefetchx */
   92,  /* prefetcht0xx: prefetchxx */
   91,  /* prefetcht1x: prefetchx */
   92,  /* prefetcht1xx: prefetchxx */
   91,  /* prefetchntax: prefetchx */
   92,  /* prefetchntaxx: prefetchxx */
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
   93,  /* store8: store */
   93,  /* storei8: store */
   86,  /* storex8: storex */
   86,  /* storeix8: storex */
   89,  /* storexx8: storexx */
   89,  /* storeixx8: storexx */
   93,  /* store16: store */
   93,  /* storei16: store */
   86,  /* storex16: storex */
   86,  /* storeix16: storex */
   89,  /* storexx16: storexx */
   89,  /* storeixx16: storexx */
   93,  /* store32: store */
   93,  /* storei32: store */
   86,  /* storex32: storex */
   86,  /* storeix32: storex */
   89,  /* storexx32: storexx */
   89,  /* storeixx32: storexx */
   93,  /* store64: store */
   93,  /* storei64: store */
   86,  /* storex64: storex */
   86,  /* storeix64: storex */
   89,  /* storexx64: storexx */
   89,  /* storeixx64: storexx */
   93,  /* store64_fm: store */
   93,  /* store64_fsse: store */
   93,  /* storenti32: store */
   86,  /* storentix32: storex */
   89,  /* storentixx32: storexx */
   93,  /* storenti64: store */
   86,  /* storentix64: storex */
   89,  /* storentixx64: storexx */
   93,  /* storenti128: store */
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
   81,  /* fmovsldupx: load */
   81,  /* fmovshdupx: load */
   81,  /* fmovddupx: load */
   84,  /* fmovsldupxx: ldx */
   84,  /* fmovshdupxx: ldx */
   84,  /* fmovddupxx: ldx */
   85,  /* fmovsldupxxx: ldxx */
   85,  /* fmovshdupxxx: ldxx */
   85,  /* fmovddupxxx: ldxx */
  128,  /* cltd: no_rop */
  128,  /* cqto: no_rop */
   76,  /* cvtss2sd: rop */
   76,  /* cvtsd2ss: rop */
   81,  /* cvtsd2ss_x: load */
   82,  /* cvtsd2ss_xx: leax */
   83,  /* cvtsd2ss_xxx: leaxx */
   76,  /* cvtsi2sd: rop */
   81,  /* cvtsi2sd_x: load */
   82,  /* cvtsi2sd_xx: leax */
   83,  /* cvtsi2sd_xxx: leaxx */
   76,  /* cvtsi2ss: rop */
   81,  /* cvtsi2ss_x: load */
   82,  /* cvtsi2ss_xx: leax */
   83,  /* cvtsi2ss_xxx: leaxx */
   76,  /* cvtsi2sdq: rop */
   81,  /* cvtsi2sdq_x: load */
   82,  /* cvtsi2sdq_xx: leax */
   83,  /* cvtsi2sdq_xxx: leaxx */
   76,  /* cvtsi2ssq: rop */
   81,  /* cvtsi2ssq_x: load */
   82,  /* cvtsi2ssq_xx: leax */
   83,  /* cvtsi2ssq_xxx: leaxx */
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
   81,  /* cvtdq2pd_x: load */
   81,  /* cvtdq2ps_x: load */
   81,  /* cvtps2pd_x: load */
   81,  /* cvtpd2ps_x: load */
   81,  /* cvtps2dq_x: load */
   81,  /* cvtpd2dq_x: load */
   81,  /* cvttps2dq_x: load */
   81,  /* cvttpd2dq_x: load */
   82,  /* cvtdq2pd_xx: leax */
   82,  /* cvtdq2ps_xx: leax */
   82,  /* cvtps2pd_xx: leax */
   82,  /* cvtpd2ps_xx: leax */
   82,  /* cvtps2dq_xx: leax */
   82,  /* cvtpd2dq_xx: leax */
   82,  /* cvttps2dq_xx: leax */
   82,  /* cvttpd2dq_xx: leax */
   83,  /* cvtdq2pd_xxx: leaxx */
   83,  /* cvtdq2ps_xxx: leaxx */
   83,  /* cvtps2pd_xxx: leaxx */
   83,  /* cvtpd2ps_xxx: leaxx */
   83,  /* cvtps2dq_xxx: leaxx */
   83,  /* cvtpd2dq_xxx: leaxx */
   83,  /* cvttps2dq_xxx: leaxx */
   83,  /* cvttpd2dq_xxx: leaxx */
   76,  /* cvtpi2ps: rop */
   76,  /* cvtps2pi: rop */
   76,  /* cvttps2pi: rop */
   76,  /* cvtpi2pd: rop */
   76,  /* cvtpd2pi: rop */
   76,  /* cvttpd2pi: rop */
   81,  /* ldsd: load */
   84,  /* ldsdx: ldx */
   85,  /* ldsdxx: ldxx */
   81,  /* ldss: load */
   84,  /* ldssx: ldx */
   85,  /* ldssxx: ldxx */
   81,  /* lddqa: load */
   81,  /* lddqu: load */
   81,  /* ldlps: load */
   81,  /* ldhps: load */
   81,  /* ldlpd: load */
   81,  /* ldhpd: load */
   93,  /* stdqa: store */
   93,  /* stdqu: store */
   93,  /* stlps: store */
   93,  /* sthps: store */
   93,  /* stlpd: store */
   93,  /* storelpd: store */
   93,  /* sthpd: store */
   93,  /* stntpd: store */
   93,  /* stntps: store */
   93,  /* storent64_fm: store */
   84,  /* lddqax: ldx */
   84,  /* lddqux: ldx */
   84,  /* ldlpsx: ldx */
   84,  /* ldhpsx: ldx */
   84,  /* ldlpdx: ldx */
   84,  /* ldhpdx: ldx */
   86,  /* stdqax: storex */
   86,  /* stntpdx: storex */
   86,  /* stntpsx: storex */
   86,  /* stdqux: storex */
   86,  /* stlpsx: storex */
   86,  /* sthpsx: storex */
   86,  /* stlpdx: storex */
   86,  /* sthpdx: storex */
   85,  /* lddqaxx: ldxx */
   85,  /* lddquxx: ldxx */
   85,  /* ldlpsxx: ldxx */
   85,  /* ldhpsxx: ldxx */
   85,  /* ldlpdxx: ldxx */
   85,  /* ldhpdxx: ldxx */
   81,  /* ldaps: load */
   84,  /* ldapsx: ldx */
   85,  /* ldapsxx: ldxx */
   81,  /* ldapd: load */
   84,  /* ldapdx: ldx */
   85,  /* ldapdxx: ldxx */
   81,  /* ldups: load */
   84,  /* ldupsx: ldx */
   85,  /* ldupsxx: ldxx */
   81,  /* ldupd: load */
   84,  /* ldupdx: ldx */
   85,  /* ldupdxx: ldxx */
   89,  /* stdqaxx: storexx */
   89,  /* stntpdxx: storexx */
   89,  /* stntpsxx: storexx */
   89,  /* stdquxx: storexx */
   89,  /* stlpsxx: storexx */
   89,  /* sthpsxx: storexx */
   89,  /* stlpdxx: storexx */
   89,  /* sthpdxx: storexx */
   93,  /* staps: store */
   86,  /* stapsx: storex */
   89,  /* stapsxx: storexx */
   93,  /* stapd: store */
   86,  /* stapdx: storex */
   89,  /* stapdxx: storexx */
   93,  /* stups: store */
   86,  /* stupsx: storex */
   89,  /* stupsxx: storexx */
   76,  /* stups_n32: rop */
   93,  /* stupd: store */
   86,  /* stupdx: storex */
   89,  /* stupdxx: storexx */
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
   93,  /* stss: store */
   93,  /* stntss: store */
   86,  /* stssx: storex */
   86,  /* stntssx: storex */
   89,  /* stssxx: storexx */
   89,  /* stntssxx: storexx */
   93,  /* stsd: store */
   93,  /* stntsd: store */
   86,  /* stsdx: storex */
   86,  /* stntsdx: storex */
   89,  /* stsdxx: storexx */
   89,  /* stntsdxx: storexx */
   76,  /* rcpss: rop */
   76,  /* frcp128v32: rop */
   76,  /* sqrtsd: rop */
   76,  /* sqrtss: rop */
   76,  /* rsqrtss: rop */
   76,  /* fsqrt128v32: rop */
   76,  /* frsqrt128v32: rop */
   76,  /* fsqrt128v64: rop */
  103,  /* punpcklwd: unpck */
  103,  /* punpcklbw: unpck */
  103,  /* punpckldq: unpck */
  103,  /* punpcklbw128: unpck */
  103,  /* punpcklwd128: unpck */
  103,  /* punpckldq128: unpck */
  103,  /* punpckhbw: unpck */
  103,  /* punpckhwd: unpck */
  103,  /* punpckhdq: unpck */
  103,  /* punpckhbw128: unpck */
  103,  /* punpckhwd128: unpck */
  103,  /* punpckhdq128: unpck */
  103,  /* punpcklqdq: unpck */
  103,  /* punpckhqdq: unpck */
   14,  /* packsswb: ropop */
   14,  /* packssdw: ropop */
   14,  /* packuswb: ropop */
   14,  /* packsswb128: ropop */
   14,  /* packssdw128: ropop */
   14,  /* packuswb128: ropop */
  110,  /* pshufd: shuffle_int */
  110,  /* pshufw: shuffle_int */
  110,  /* pshuflw: shuffle_int */
  110,  /* pshufhw: shuffle_int */
  111,  /* pslldq: shift_packed */
  111,  /* psllw: shift_packed */
  111,  /* psllwi: shift_packed */
  111,  /* pslld: shift_packed */
  111,  /* pslldi: shift_packed */
  111,  /* psllq: shift_packed */
  111,  /* psllqi: shift_packed */
  111,  /* psrlw: shift_packed */
  111,  /* psrlwi: shift_packed */
  111,  /* psrld: shift_packed */
  111,  /* psrldi: shift_packed */
  111,  /* psrlq: shift_packed */
  111,  /* psrlqi: shift_packed */
  111,  /* psraw: shift_packed */
  111,  /* psrawi: shift_packed */
  111,  /* psrad: shift_packed */
  111,  /* psradi: shift_packed */
  111,  /* psllw_mmx: shift_packed */
  111,  /* psllwi_mmx: shift_packed */
  111,  /* pslld_mmx: shift_packed */
  111,  /* pslldi_mmx: shift_packed */
  111,  /* psllq_mmx: shift_packed */
  111,  /* psllqi_mmx: shift_packed */
  111,  /* psrlw_mmx: shift_packed */
  111,  /* psrlwi_mmx: shift_packed */
  111,  /* psrld_mmx: shift_packed */
  111,  /* psrldi_mmx: shift_packed */
  111,  /* psrlq_mmx: shift_packed */
  111,  /* psrlqi_mmx: shift_packed */
  111,  /* psraw_mmx: shift_packed */
  111,  /* psrawi_mmx: shift_packed */
  111,  /* psrad_mmx: shift_packed */
  111,  /* psradi_mmx: shift_packed */
  111,  /* pand_mmx: shift_packed */
  111,  /* pandn_mmx: shift_packed */
  111,  /* por_mmx: shift_packed */
  111,  /* pxor_mmx: shift_packed */
   14,  /* pand: ropop */
   14,  /* pandn: ropop */
   14,  /* por: ropop */
   14,  /* pxor: ropop */
  103,  /* unpckhpd: unpck */
  103,  /* unpckhps: unpck */
  103,  /* unpcklpd: unpck */
  103,  /* unpcklps: unpck */
  105,  /* shufpd: shuffle */
  105,  /* shufps: shuffle */
   76,  /* movhlps: rop */
   76,  /* movlhps: rop */
  111,  /* psrldq: shift_packed */
  111,  /* psrlq128v64: shift_packed */
   14,  /* subus128v16: ropop */
   14,  /* pavgb: ropop */
   14,  /* pavgw: ropop */
   14,  /* psadbw: ropop */
   14,  /* pavgb128: ropop */
   14,  /* pavgw128: ropop */
   14,  /* psadbw128: ropop */
  110,  /* pextrw: shuffle_int */
  110,  /* pinsrw: shuffle_int */
   76,  /* pmovmskb: rop */
   76,  /* pmovmskb128: rop */
   76,  /* movi32_2m: rop */
   76,  /* movi64_2m: rop */
   76,  /* movm_2i32: rop */
   76,  /* movm_2i64: rop */
  110,  /* pshufw64v16: shuffle_int */
   76,  /* movmskps: rop */
   76,  /* movmskpd: rop */
   80,  /* maskmovdqu: opop1 */
   80,  /* maskmovq: opop1 */
  111,  /* extrq: shift_packed */
  111,  /* insertq: shift_packed */
  112,  /* vfmaddss: ndstvecreg */
  113,  /* vfmaddxss: ndstvecregx */
  114,  /* vfmaddxxss: ndestvecregxx */
  115,  /* vfmaddxxxss: ndestvecregxxx */
  116,  /* vfmaddxrss: ndstvecregxr */
  117,  /* vfmaddxxrss: ndestvecregxxr */
  118,  /* vfmaddxxxrss: ndestvecregxxxr */
  112,  /* vfmaddsd: ndstvecreg */
  113,  /* vfmaddxsd: ndstvecregx */
  114,  /* vfmaddxxsd: ndestvecregxx */
  115,  /* vfmaddxxxsd: ndestvecregxxx */
  116,  /* vfmaddxrsd: ndstvecregxr */
  117,  /* vfmaddxxrsd: ndestvecregxxr */
  118,  /* vfmaddxxxrsd: ndestvecregxxxr */
  112,  /* vfnmaddss: ndstvecreg */
  113,  /* vfnmaddxss: ndstvecregx */
  114,  /* vfnmaddxxss: ndestvecregxx */
  115,  /* vfnmaddxxxss: ndestvecregxxx */
  116,  /* vfnmaddxrss: ndstvecregxr */
  117,  /* vfnmaddxxrss: ndestvecregxxr */
  118,  /* vfnmaddxxxrss: ndestvecregxxxr */
  112,  /* vfnmaddsd: ndstvecreg */
  113,  /* vfnmaddxsd: ndstvecregx */
  114,  /* vfnmaddxxsd: ndestvecregxx */
  115,  /* vfnmaddxxxsd: ndestvecregxxx */
  116,  /* vfnmaddxrsd: ndstvecregxr */
  117,  /* vfnmaddxxrsd: ndestvecregxxr */
  118,  /* vfnmaddxxxrsd: ndestvecregxxxr */
  112,  /* vfmaddps: ndstvecreg */
  113,  /* vfmaddxps: ndstvecregx */
  114,  /* vfmaddxxps: ndestvecregxx */
  115,  /* vfmaddxxxps: ndestvecregxxx */
  116,  /* vfmaddxrps: ndstvecregxr */
  117,  /* vfmaddxxrps: ndestvecregxxr */
  118,  /* vfmaddxxxrps: ndestvecregxxxr */
  112,  /* vfmaddpd: ndstvecreg */
  113,  /* vfmaddxpd: ndstvecregx */
  114,  /* vfmaddxxpd: ndestvecregxx */
  115,  /* vfmaddxxxpd: ndestvecregxxx */
  116,  /* vfmaddxrpd: ndstvecregxr */
  117,  /* vfmaddxxrpd: ndestvecregxxr */
  118,  /* vfmaddxxxrpd: ndestvecregxxxr */
  112,  /* vfmaddsubps: ndstvecreg */
  113,  /* vfmaddsubxps: ndstvecregx */
  114,  /* vfmaddsubxxps: ndestvecregxx */
  115,  /* vfmaddsubxxxps: ndestvecregxxx */
  116,  /* vfmaddsubxrps: ndstvecregxr */
  117,  /* vfmaddsubxxrps: ndestvecregxxr */
  118,  /* vfmaddsubxxxrps: ndestvecregxxxr */
  112,  /* vfmaddsubpd: ndstvecreg */
  113,  /* vfmaddsubxpd: ndstvecregx */
  114,  /* vfmaddsubxxpd: ndestvecregxx */
  115,  /* vfmaddsubxxxpd: ndestvecregxxx */
  116,  /* vfmaddsubxrpd: ndstvecregxr */
  117,  /* vfmaddsubxxrpd: ndestvecregxxr */
  118,  /* vfmaddsubxxxrpd: ndestvecregxxxr */
  112,  /* vfnmaddps: ndstvecreg */
  113,  /* vfnmaddxps: ndstvecregx */
  114,  /* vfnmaddxxps: ndestvecregxx */
  115,  /* vfnmaddxxxps: ndestvecregxxx */
  116,  /* vfnmaddxrps: ndstvecregxr */
  117,  /* vfnmaddxxrps: ndestvecregxxr */
  118,  /* vfnmaddxxxrps: ndestvecregxxxr */
  112,  /* vfnmaddpd: ndstvecreg */
  113,  /* vfnmaddxpd: ndstvecregx */
  114,  /* vfnmaddxxpd: ndestvecregxx */
  115,  /* vfnmaddxxxpd: ndestvecregxxx */
  116,  /* vfnmaddxrpd: ndstvecregxr */
  117,  /* vfnmaddxxrpd: ndestvecregxxr */
  118,  /* vfnmaddxxxrpd: ndestvecregxxxr */
  112,  /* vfmsubss: ndstvecreg */
  113,  /* vfmsubxss: ndstvecregx */
  114,  /* vfmsubxxss: ndestvecregxx */
  115,  /* vfmsubxxxss: ndestvecregxxx */
  116,  /* vfmsubxrss: ndstvecregxr */
  117,  /* vfmsubxxrss: ndestvecregxxr */
  118,  /* vfmsubxxxrss: ndestvecregxxxr */
  112,  /* vfmsubsd: ndstvecreg */
  113,  /* vfmsubxsd: ndstvecregx */
  114,  /* vfmsubxxsd: ndestvecregxx */
  115,  /* vfmsubxxxsd: ndestvecregxxx */
  116,  /* vfmsubxrsd: ndstvecregxr */
  117,  /* vfmsubxxrsd: ndestvecregxxr */
  118,  /* vfmsubxxxrsd: ndestvecregxxxr */
  112,  /* vfnmsubss: ndstvecreg */
  113,  /* vfnmsubxss: ndstvecregx */
  114,  /* vfnmsubxxss: ndestvecregxx */
  115,  /* vfnmsubxxxss: ndestvecregxxx */
  116,  /* vfnmsubxrss: ndstvecregxr */
  117,  /* vfnmsubxxrss: ndestvecregxxr */
  118,  /* vfnmsubxxxrss: ndestvecregxxxr */
  112,  /* vfnmsubsd: ndstvecreg */
  113,  /* vfnmsubxsd: ndstvecregx */
  114,  /* vfnmsubxxsd: ndestvecregxx */
  115,  /* vfnmsubxxxsd: ndestvecregxxx */
  116,  /* vfnmsubxrsd: ndstvecregxr */
  117,  /* vfnmsubxxrsd: ndestvecregxxr */
  118,  /* vfnmsubxxxrsd: ndestvecregxxxr */
  112,  /* vfmsubps: ndstvecreg */
  113,  /* vfmsubxps: ndstvecregx */
  114,  /* vfmsubxxps: ndestvecregxx */
  115,  /* vfmsubxxxps: ndestvecregxxx */
  116,  /* vfmsubxrps: ndstvecregxr */
  117,  /* vfmsubxxrps: ndestvecregxxr */
  118,  /* vfmsubxxxrps: ndestvecregxxxr */
  112,  /* vfmsubpd: ndstvecreg */
  113,  /* vfmsubxpd: ndstvecregx */
  114,  /* vfmsubxxpd: ndestvecregxx */
  115,  /* vfmsubxxxpd: ndestvecregxxx */
  116,  /* vfmsubxrpd: ndstvecregxr */
  117,  /* vfmsubxxrpd: ndestvecregxxr */
  118,  /* vfmsubxxxrpd: ndestvecregxxxr */
  112,  /* vfmsubaddps: ndstvecreg */
  113,  /* vfmsubaddxps: ndstvecregx */
  114,  /* vfmsubaddxxps: ndestvecregxx */
  115,  /* vfmsubaddxxxps: ndestvecregxxx */
  116,  /* vfmsubaddxrps: ndstvecregxr */
  117,  /* vfmsubaddxxrps: ndestvecregxxr */
  118,  /* vfmsubaddxxxrps: ndestvecregxxxr */
  112,  /* vfmsubaddpd: ndstvecreg */
  113,  /* vfmsubaddxpd: ndstvecregx */
  114,  /* vfmsubaddxxpd: ndestvecregxx */
  115,  /* vfmsubaddxxxpd: ndestvecregxxx */
  116,  /* vfmsubaddxrpd: ndstvecregxr */
  117,  /* vfmsubaddxxrpd: ndestvecregxxr */
  118,  /* vfmsubaddxxxrpd: ndestvecregxxxr */
  112,  /* vfnmsubps: ndstvecreg */
  113,  /* vfnmsubxps: ndstvecregx */
  114,  /* vfnmsubxxps: ndestvecregxx */
  115,  /* vfnmsubxxxps: ndestvecregxxx */
  116,  /* vfnmsubxrps: ndstvecregxr */
  117,  /* vfnmsubxxrps: ndestvecregxxr */
  118,  /* vfnmsubxxxrps: ndestvecregxxxr */
  112,  /* vfnmsubpd: ndstvecreg */
  113,  /* vfnmsubxpd: ndstvecregx */
  114,  /* vfnmsubxxpd: ndestvecregxx */
  115,  /* vfnmsubxxxpd: ndestvecregxxx */
  116,  /* vfnmsubxrpd: ndstvecregxr */
  117,  /* vfnmsubxxrpd: ndestvecregxxr */
  118,  /* vfnmsubxxxrpd: ndestvecregxxxr */
  128,  /* vzeroupper: no_rop */
  128,  /* mfence: no_rop */
  128,  /* lfence: no_rop */
  128,  /* sfence: no_rop */
  128,  /* monitor: no_rop */
  128,  /* mwait: no_rop */
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
   90,  /* fstps: prefetch */
    2,  /* fstps_n32: op1 */
   90,  /* fstpl: prefetch */
    2,  /* fstpl_n32: op1 */
   90,  /* fstpt: prefetch */
    2,  /* fstpt_n32: op1 */
   90,  /* fsts: prefetch */
    2,  /* fsts_n32: op1 */
   90,  /* fstl: prefetch */
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
  128,  /* fchs: no_rop */
  128,  /* frndint: no_rop */
   90,  /* fnstcw: prefetch */
   69,  /* fldcw: opop */
   90,  /* fistps: prefetch */
   90,  /* fistpl: prefetch */
   90,  /* fists: prefetch */
   90,  /* fistl: prefetch */
   90,  /* fistpll: prefetch */
   69,  /* filds: opop */
   69,  /* fildl: opop */
   69,  /* fildll: opop */
  128,  /* fldz: no_rop */
  128,  /* fabs: no_rop */
  128,  /* fsqrt: no_rop */
   76,  /* fcmovb: rop */
   76,  /* fcmovbe: rop */
   76,  /* fcmovnb: rop */
   76,  /* fcmovnbe: rop */
   76,  /* fcmove: rop */
   76,  /* fcmovne: rop */
   76,  /* fcmovu: rop */
   76,  /* fcmovnu: rop */
  128,  /* fcos: no_rop */
  128,  /* fsin: no_rop */
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
  128,  /* emms: no_rop */
  123,  /* stmxcsr: stmxcsr */
  123,  /* ldmxcsr: stmxcsr */
   69,  /* clflush: opop */
   90,  /* fisttps: prefetch */
   90,  /* fisttpl: prefetch */
   90,  /* fisttpll: prefetch */
   76,  /* pabs128v8: rop */
   77,  /* pabsx128v8: rmem */
   78,  /* pabsxx128v8: rmemindex */
   79,  /* pabsxxx128v8: rmemindexx */
   76,  /* pabs128v16: rop */
   77,  /* pabsx128v16: rmem */
   78,  /* pabsxx128v16: rmemindex */
   79,  /* pabsxxx128v16: rmemindexx */
   76,  /* pabs128v32: rop */
   77,  /* pabsx128v32: rmem */
   78,  /* pabsxx128v32: rmemindex */
   79,  /* pabsxxx128v32: rmemindexx */
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
  106,  /* pshuf128v8: pshufb */
  107,  /* pshufx128v8: pshufb_mem */
  108,  /* pshufxx128v8: pshufb_memindex */
  109,  /* pshufxxx128v8: pshufb_memindexx */
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
   81,  /* ldntdqa: load */
   84,  /* ldntdqax: ldx */
   85,  /* ldntdqaxx: ldxx */
   93,  /* stntdq: store */
   86,  /* stntdqx: storex */
   89,  /* stntdqxx: storexx */
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
   77,  /* pmovsxbwx: rmem */
   78,  /* pmovsxbwxx: rmemindex */
   79,  /* pmovsxbwxxx: rmemindexx */
   76,  /* pmovzxbw: rop */
   77,  /* pmovzxbwx: rmem */
   78,  /* pmovzxbwxx: rmemindex */
   79,  /* pmovzxbwxxx: rmemindexx */
   76,  /* pmovsxbd: rop */
   77,  /* pmovsxbdx: rmem */
   78,  /* pmovsxbdxx: rmemindex */
   79,  /* pmovsxbdxxx: rmemindexx */
   76,  /* pmovzxbd: rop */
   77,  /* pmovzxbdx: rmem */
   78,  /* pmovzxbdxx: rmemindex */
   79,  /* pmovzxbdxxx: rmemindexx */
   76,  /* pmovsxbq: rop */
   77,  /* pmovsxbqx: rmem */
   78,  /* pmovsxbqxx: rmemindex */
   79,  /* pmovsxbqxxx: rmemindexx */
   76,  /* pmovzxbq: rop */
   77,  /* pmovzxbqx: rmem */
   78,  /* pmovzxbqxx: rmemindex */
   79,  /* pmovzxbqxxx: rmemindexx */
   76,  /* pmovsxwd: rop */
   77,  /* pmovsxwdx: rmem */
   78,  /* pmovsxwdxx: rmemindex */
   79,  /* pmovsxwdxxx: rmemindexx */
   76,  /* pmovzxwd: rop */
   77,  /* pmovzxwdx: rmem */
   78,  /* pmovzxwdxx: rmemindex */
   79,  /* pmovzxwdxxx: rmemindexx */
   76,  /* pmovsxwq: rop */
   77,  /* pmovsxwqx: rmem */
   78,  /* pmovsxwqxx: rmemindex */
   79,  /* pmovsxwqxxx: rmemindexx */
   76,  /* pmovzxwq: rop */
   77,  /* pmovzxwqx: rmem */
   78,  /* pmovzxwqxx: rmemindex */
   79,  /* pmovzxwqxxx: rmemindexx */
   76,  /* pmovsxdq: rop */
   77,  /* pmovsxdqx: rmem */
   78,  /* pmovsxdqxx: rmemindex */
   79,  /* pmovsxdqxxx: rmemindexx */
   76,  /* pmovzxdq: rop */
   77,  /* pmovzxdqx: rmem */
   78,  /* pmovzxdqxx: rmemindex */
   79,  /* pmovzxdqxxx: rmemindexx */
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
   77,  /* phminposuwx: rmem */
   78,  /* phminposuwxx: rmemindex */
   79,  /* phminposuwxxx: rmemindexx */
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
   30,  /* extr128v8: ropopop */
   31,  /* extrx128v8: ropmemop */
   32,  /* extrxx128v8: ropmemindexop */
   33,  /* extrxxx128v8: ropmemindexxop */
   30,  /* extr128v16: ropopop */
   31,  /* extrx128v16: ropmemop */
   32,  /* extrxx128v16: ropmemindexop */
   33,  /* extrxxx128v16: ropmemindexxop */
   30,  /* extr128v32: ropopop */
   31,  /* extrx128v32: ropmemop */
   32,  /* extrxx128v32: ropmemindexop */
   33,  /* extrxxx128v32: ropmemindexxop */
   30,  /* extr128v64: ropopop */
   31,  /* extrx128v64: ropmemop */
   32,  /* extrxx128v64: ropmemindexop */
   33,  /* extrxxx128v64: ropmemindexxop */
   30,  /* finsr128v32: ropopop */
   31,  /* finsrx128v32: ropmemop */
   32,  /* finsrxx128v32: ropmemindexop */
   33,  /* finsrxxx128v32: ropmemindexxop */
   30,  /* fextr128v32: ropopop */
   31,  /* fextrx128v32: ropmemop */
   32,  /* fextrxx128v32: ropmemindexop */
   33,  /* fextrxxx128v32: ropmemindexxop */
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
   77,  /* popcntx16: rmem */
   78,  /* popcntxx16: rmemindex */
   79,  /* popcntxxx16: rmemindexx */
   76,  /* popcnt32: rop */
   77,  /* popcntx32: rmem */
   78,  /* popcntxx32: rmemindex */
   79,  /* popcntxxx32: rmemindexx */
   76,  /* popcnt64: rop */
   77,  /* popcntx64: rmem */
   78,  /* popcntxx64: rmemindex */
   79,  /* popcntxxx64: rmemindexx */
   76,  /* aesimc: rop */
   77,  /* aesimcx: rmem */
   78,  /* aesimcxx: rmemindex */
   79,  /* aesimcxxx: rmemindexx */
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
   77,  /* vphaddbdx: rmem */
   78,  /* vphaddbdxx: rmemindex */
   79,  /* vphaddbdxxx: rmemindexx */
   76,  /* vphaddbq: rop */
   77,  /* vphaddbqx: rmem */
   78,  /* vphaddbqxx: rmemindex */
   79,  /* vphaddbqxxx: rmemindexx */
   76,  /* vphaddbw: rop */
   77,  /* vphaddbwx: rmem */
   78,  /* vphaddbwxx: rmemindex */
   79,  /* vphaddbwxxx: rmemindexx */
   76,  /* vphadddq: rop */
   77,  /* vphadddqx: rmem */
   78,  /* vphadddqxx: rmemindex */
   79,  /* vphadddqxxx: rmemindexx */
   76,  /* vphaddubd: rop */
   77,  /* vphaddubdx: rmem */
   78,  /* vphaddubdxx: rmemindex */
   79,  /* vphaddubdxxx: rmemindexx */
   76,  /* vphaddubq: rop */
   77,  /* vphaddubqx: rmem */
   78,  /* vphaddubqxx: rmemindex */
   79,  /* vphaddubqxxx: rmemindexx */
   76,  /* vphaddubw: rop */
   77,  /* vphaddubwx: rmem */
   78,  /* vphaddubwxx: rmemindex */
   79,  /* vphaddubwxxx: rmemindexx */
   76,  /* vphaddudq: rop */
   77,  /* vphaddudqx: rmem */
   78,  /* vphaddudqxx: rmemindex */
   79,  /* vphaddudqxxx: rmemindexx */
   76,  /* vphadduwd: rop */
   77,  /* vphadduwdx: rmem */
   78,  /* vphadduwdxx: rmemindex */
   79,  /* vphadduwdxxx: rmemindexx */
   76,  /* vphadduwq: rop */
   77,  /* vphadduwqx: rmem */
   78,  /* vphadduwqxx: rmemindex */
   79,  /* vphadduwqxxx: rmemindexx */
   76,  /* vphaddwd: rop */
   77,  /* vphaddwdx: rmem */
   78,  /* vphaddwdxx: rmemindex */
   79,  /* vphaddwdxxx: rmemindexx */
   76,  /* vphaddwq: rop */
   77,  /* vphaddwqx: rmem */
   78,  /* vphaddwqxx: rmemindex */
   79,  /* vphaddwqxxx: rmemindexx */
   76,  /* vphsubbw: rop */
   77,  /* vphsubbwx: rmem */
   78,  /* vphsubbwxx: rmemindex */
   79,  /* vphsubbwxxx: rmemindexx */
   76,  /* vphsubdq: rop */
   77,  /* vphsubdqx: rmem */
   78,  /* vphsubdqxx: rmemindex */
   79,  /* vphsubdqxxx: rmemindexx */
   76,  /* vphsubwd: rop */
   77,  /* vphsubwdx: rmem */
   78,  /* vphsubwdxx: rmemindex */
   79,  /* vphsubwdxxx: rmemindexx */
   76,  /* vfrczpd: rop */
   77,  /* vfrczpdx: rmem */
   78,  /* vfrczpdxx: rmemindex */
   79,  /* vfrczpdxxx: rmemindexx */
   76,  /* vfrczps: rop */
   77,  /* vfrczpsx: rmem */
   78,  /* vfrczpsxx: rmemindex */
   79,  /* vfrczpsxxx: rmemindexx */
   76,  /* vfrczsd: rop */
   77,  /* vfrczsdx: rmem */
   78,  /* vfrczsdxx: rmemindex */
   79,  /* vfrczsdxxx: rmemindexx */
   76,  /* vfrczss: rop */
   77,  /* vfrczssx: rmem */
   78,  /* vfrczssxx: rmemindex */
   79,  /* vfrczssxxx: rmemindexx */
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
   77,  /* vaesimcx: rmem */
   78,  /* vaesimcxx: rmemindex */
   79,  /* vaesimcxxx: rmemindexx */
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
   81,  /* vfbroadcastss: load */
   84,  /* vfbroadcastxss: ldx */
   85,  /* vfbroadcastxxss: ldxx */
   81,  /* vfbroadcastsd: load */
   84,  /* vfbroadcastxsd: ldx */
   85,  /* vfbroadcastxxsd: ldxx */
   81,  /* vfbroadcastf128: load */
   84,  /* vfbroadcastxf128: ldx */
   85,  /* vfbroadcastxxf128: ldxx */
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
   45,  /* vfcmpsd: vropopimm */
   46,  /* vfcmpxsd: vropmemop */
   47,  /* vfcmpxxsd: vropmemindexop */
   48,  /* vfcmpxxxsd: vropmemindexxop */
   45,  /* vfcmpss: vropopimm */
   46,  /* vfcmpxss: vropmemop */
   47,  /* vfcmpxxss: vropmemindexop */
   48,  /* vfcmpxxxss: vropmemindexxop */
    4,  /* vcomisd: cmp */
    5,  /* vcomixsd: cmpx */
    8,  /* vcomixxsd: cmpxx */
   11,  /* vcomixxxsd: cmpxxx */
    4,  /* vcomiss: cmp */
    5,  /* vcomixss: cmpx */
    8,  /* vcomixxss: cmpxx */
   11,  /* vcomixxxss: cmpxxx */
   76,  /* vcvtdq2pd: rop */
   77,  /* vcvtdq2pdx: rmem */
   82,  /* vcvtdq2pdxx: leax */
   83,  /* vcvtdq2pdxxx: leaxx */
   76,  /* vcvtdq2ps: rop */
   77,  /* vcvtdq2psx: rmem */
   82,  /* vcvtdq2psxx: leax */
   83,  /* vcvtdq2psxxx: leaxx */
   76,  /* vcvtpd2dq: rop */
   77,  /* vcvtpd2dqx: rmem */
   82,  /* vcvtpd2dqxx: leax */
   83,  /* vcvtpd2dqxxx: leaxx */
   76,  /* vcvtpd2dqy: rop */
   77,  /* vcvtpd2dqyx: rmem */
   82,  /* vcvtpd2dqyxx: leax */
   83,  /* vcvtpd2dqyxxx: leaxx */
   76,  /* vcvtpd2ps: rop */
   77,  /* vcvtpd2psx: rmem */
   82,  /* vcvtpd2psxx: leax */
   83,  /* vcvtpd2psxxx: leaxx */
   76,  /* vcvtpd2psy: rop */
   77,  /* vcvtpd2psyx: rmem */
   82,  /* vcvtpd2psyxx: leax */
   83,  /* vcvtpd2psyxxx: leaxx */
   76,  /* vcvtps2dq: rop */
   77,  /* vcvtps2dqx: rmem */
   82,  /* vcvtps2dqxx: leax */
   83,  /* vcvtps2dqxxx: leaxx */
   76,  /* vcvtps2pd: rop */
   77,  /* vcvtps2pdx: rmem */
   82,  /* vcvtps2pdxx: leax */
   83,  /* vcvtps2pdxxx: leaxx */
   76,  /* vcvtsd2si: rop */
   76,  /* vcvtsd2siq: rop */
   76,  /* vcvtsd2ss: rop */
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
   76,  /* vcvtss2sd: rop */
   39,  /* vcvtss2sdx: vropmem */
   41,  /* vcvtss2sdxx: vropmemindex */
   43,  /* vcvtss2sdxxx: vropmemindexx */
   76,  /* vcvtss2si: rop */
   76,  /* vcvtss2siq: rop */
   76,  /* vcvttpd2dq: rop */
   77,  /* vcvttpd2dqx: rmem */
   82,  /* vcvttpd2dqxx: leax */
   83,  /* vcvttpd2dqxxx: leaxx */
   76,  /* vcvttpd2dqy: rop */
   77,  /* vcvttpd2dqyx: rmem */
   82,  /* vcvttpd2dqyxx: leax */
   83,  /* vcvttpd2dqyxxx: leaxx */
   76,  /* vcvttps2dq: rop */
   77,  /* vcvttps2dqx: rmem */
   82,  /* vcvttps2dqxx: leax */
   83,  /* vcvttps2dqxxx: leaxx */
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
   81,  /* vlddqu: load */
   84,  /* vlddqux: ldx */
   85,  /* vlddquxx: ldxx */
   76,  /* vlddqu_n32: rop */
  123,  /* vldmxcsr: stmxcsr */
   76,  /* vmaskmovdqu: rop */
   94,  /* vfmaskld128v32: vmaskload */
   95,  /* vfmaskldx128v32: vmaskloadindex */
   96,  /* vfmaskldxx128v32: vmaskloadindexx */
   94,  /* vfmaskld128v64: vmaskload */
   95,  /* vfmaskldx128v64: vmaskloadindex */
   96,  /* vfmaskldxx128v64: vmaskloadindexx */
   97,  /* vfmaskst128v32: vmaskstore */
   98,  /* vfmaskstx128v32: vmaskstoreindex */
   99,  /* vfmaskstxx128v32: vmaskstoreindexx */
   97,  /* vfmaskst128v64: vmaskstore */
   98,  /* vfmaskstx128v64: vmaskstoreindex */
   99,  /* vfmaskstxx128v64: vmaskstoreindexx */
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
   81,  /* vldapd: load */
   84,  /* vldapdx: ldx */
   85,  /* vldapdxx: ldxx */
   76,  /* vldapd_n32: rop */
   93,  /* vstapd: store */
   86,  /* vstapdx: storex */
   89,  /* vstapdxx: storexx */
   76,  /* vstapd_n32: rop */
   76,  /* vmovaps: rop */
   81,  /* vldaps: load */
   84,  /* vldapsx: ldx */
   85,  /* vldapsxx: ldxx */
   76,  /* vldaps_n32: rop */
   93,  /* vstaps: store */
   86,  /* vstapsx: storex */
   89,  /* vstapsxx: storexx */
   76,  /* vstaps_n32: rop */
   76,  /* vmovg2x: rop */
   76,  /* vmovg2x64: rop */
   76,  /* vmovx2g: rop */
   76,  /* vmovx2g64: rop */
   81,  /* vld64_2sse: load */
   84,  /* vldx64_2sse: ldx */
   85,  /* vldxx64_2sse: ldxx */
   76,  /* vld64_2sse_n32: rop */
   76,  /* vst64_fsse: rop */
   86,  /* vstx64_fsse: storex */
   89,  /* vstxx64_fsse: storexx */
   76,  /* vst64_fsse_n32: rop */
   76,  /* vmovddup: rop */
   77,  /* vmovddupx: rmem */
   78,  /* vmovddupxx: rmemindex */
   79,  /* vmovddupxxx: rmemindexx */
   81,  /* vlddqa: load */
   84,  /* vlddqax: ldx */
   85,  /* vlddqaxx: ldxx */
   76,  /* vlddqa_n32: rop */
   76,  /* vmovdqa: rop */
   93,  /* vstdqa: store */
   86,  /* vstdqax: storex */
   89,  /* vstdqaxx: storexx */
   76,  /* vstdqa_n32: rop */
   93,  /* vstdqu: store */
   86,  /* vstdqux: storex */
   89,  /* vstdquxx: storexx */
   76,  /* vstdqu_n32: rop */
   81,  /* vldhpd: load */
   84,  /* vldhpdx: ldx */
   85,  /* vldhpdxx: ldxx */
   76,  /* vldhpd_n32: rop */
   93,  /* vsthpd: store */
   86,  /* vsthpdx: storex */
   89,  /* vsthpdxx: storexx */
   76,  /* vsthpd_n32: rop */
   81,  /* vldhps: load */
   84,  /* vldhpsx: ldx */
   85,  /* vldhpsxx: ldxx */
   76,  /* vldhps_n32: rop */
   93,  /* vsthps: store */
   86,  /* vsthpsx: storex */
   89,  /* vsthpsxx: storexx */
   76,  /* vsthps_n32: rop */
   81,  /* vldlpd: load */
   84,  /* vldlpdx: ldx */
   85,  /* vldlpdxx: ldxx */
   76,  /* vldlpd_n32: rop */
   93,  /* vstorelpd: store */
   93,  /* vstlpd: store */
   86,  /* vstlpdx: storex */
   89,  /* vstlpdxx: storexx */
   76,  /* vstlpd_n32: rop */
   81,  /* vldlps: load */
   84,  /* vldlpsx: ldx */
   85,  /* vldlpsxx: ldxx */
   76,  /* vldlps_n32: rop */
   93,  /* vstlps: store */
   86,  /* vstlpsx: storex */
   89,  /* vstlpsxx: storexx */
   76,  /* vstlps_n32: rop */
  104,  /* vmovmskpd: vmovmsk */
  104,  /* vmovmskps: vmovmsk */
   93,  /* vstorenti128: store */
   86,  /* vstorentxi128: storex */
   89,  /* vstorentxxi128: storexx */
   81,  /* vldntdqa: load */
   84,  /* vldntdqax: ldx */
   85,  /* vldntdqaxx: ldxx */
   93,  /* vstntdq: store */
   86,  /* vstntdqx: storex */
   89,  /* vstntdqxx: storexx */
   93,  /* vstntpd: store */
   86,  /* vstntpdx: storex */
   89,  /* vstntpdxx: storexx */
   93,  /* vstntps: store */
   86,  /* vstntpsx: storex */
   89,  /* vstntpsxx: storexx */
   93,  /* vstntsd: store */
   86,  /* vstntsdx: storex */
   89,  /* vstntsdxx: storexx */
   93,  /* vstntss: store */
   86,  /* vstntssx: storex */
   89,  /* vstntssxx: storexx */
   38,  /* vmovsd: vropop */
   81,  /* vldsd: load */
   84,  /* vldsdx: ldx */
   85,  /* vldsdxx: ldxx */
   76,  /* vldsd_n32: rop */
   93,  /* vstsd: store */
   86,  /* vstsdx: storex */
   89,  /* vstsdxx: storexx */
   80,  /* vstsd_n32: opop1 */
   38,  /* vmovss: vropop */
   81,  /* vldss: load */
   84,  /* vldssx: ldx */
   85,  /* vldssxx: ldxx */
   76,  /* vldss_n32: rop */
   93,  /* vstss: store */
   86,  /* vstssx: storex */
   89,  /* vstssxx: storexx */
   80,  /* vstss_n32: opop1 */
   34,  /* vmovlhps: vropspec */
   38,  /* vmovhlps: vropop */
   76,  /* vmovshdup: rop */
   77,  /* vmovshdupx: rmem */
   78,  /* vmovshdupxx: rmemindex */
   79,  /* vmovshdupxxx: rmemindexx */
   76,  /* vmovsldup: rop */
   77,  /* vmovsldupx: rmem */
   78,  /* vmovsldupxx: rmemindex */
   79,  /* vmovsldupxxx: rmemindexx */
   81,  /* vldupd: load */
   84,  /* vldupdx: ldx */
   85,  /* vldupdxx: ldxx */
   76,  /* vldupd_n32: rop */
   93,  /* vstupd: store */
   86,  /* vstupdx: storex */
   89,  /* vstupdxx: storexx */
   76,  /* vstupd_n32: rop */
   81,  /* vldups: load */
   84,  /* vldupsx: ldx */
   85,  /* vldupsxx: ldxx */
   76,  /* vldups_n32: rop */
   93,  /* vstups: store */
   86,  /* vstupsx: storex */
   89,  /* vstupsxx: storexx */
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
   77,  /* vabsx128v8: rmem */
   78,  /* vabsxx128v8: rmemindex */
   79,  /* vabsxxx128v8: rmemindexx */
   76,  /* vabs128v32: rop */
   77,  /* vabsx128v32: rmem */
   78,  /* vabsxx128v32: rmemindex */
   79,  /* vabsxxx128v32: rmemindexx */
   76,  /* vabs128v16: rop */
   77,  /* vabsx128v16: rmem */
   78,  /* vabsxx128v16: rmemindex */
   79,  /* vabsxxx128v16: rmemindexx */
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
   77,  /* vphminposuwx: rmem */
   78,  /* vphminposuwxx: rmemindex */
   79,  /* vphminposuwxxx: rmemindexx */
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
   77,  /* vpmovsxbdx: rmem */
   78,  /* vpmovsxbdxx: rmemindex */
   79,  /* vpmovsxbdxxx: rmemindexx */
   76,  /* vpmovsxbq: rop */
   77,  /* vpmovsxbqx: rmem */
   78,  /* vpmovsxbqxx: rmemindex */
   79,  /* vpmovsxbqxxx: rmemindexx */
   76,  /* vpmovsxbw: rop */
   77,  /* vpmovsxbwx: rmem */
   78,  /* vpmovsxbwxx: rmemindex */
   79,  /* vpmovsxbwxxx: rmemindexx */
   76,  /* vpmovsxdq: rop */
   77,  /* vpmovsxdqx: rmem */
   78,  /* vpmovsxdqxx: rmemindex */
   79,  /* vpmovsxdqxxx: rmemindexx */
   76,  /* vpmovsxwd: rop */
   77,  /* vpmovsxwdx: rmem */
   78,  /* vpmovsxwdxx: rmemindex */
   79,  /* vpmovsxwdxxx: rmemindexx */
   76,  /* vpmovsxwq: rop */
   77,  /* vpmovsxwqx: rmem */
   78,  /* vpmovsxwqxx: rmemindex */
   79,  /* vpmovsxwqxxx: rmemindexx */
   76,  /* vpmovzxbd: rop */
   77,  /* vpmovzxbdx: rmem */
   78,  /* vpmovzxbdxx: rmemindex */
   79,  /* vpmovzxbdxxx: rmemindexx */
   76,  /* vpmovzxbq: rop */
   77,  /* vpmovzxbqx: rmem */
   78,  /* vpmovzxbqxx: rmemindex */
   79,  /* vpmovzxbqxxx: rmemindexx */
   76,  /* vpmovzxbw: rop */
   77,  /* vpmovzxbwx: rmem */
   78,  /* vpmovzxbwxx: rmemindex */
   79,  /* vpmovzxbwxxx: rmemindexx */
   76,  /* vpmovzxdq: rop */
   77,  /* vpmovzxdqx: rmem */
   78,  /* vpmovzxdqxx: rmemindex */
   79,  /* vpmovzxdqxxx: rmemindexx */
   76,  /* vpmovzxwd: rop */
   77,  /* vpmovzxwdx: rmem */
   78,  /* vpmovzxwdxx: rmemindex */
   79,  /* vpmovzxwdxxx: rmemindexx */
   76,  /* vpmovzxwq: rop */
   77,  /* vpmovzxwqx: rmem */
   78,  /* vpmovzxwqxx: rmemindex */
   79,  /* vpmovzxwqxxx: rmemindexx */
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
   77,  /* vpsignx128v8: rmem */
   78,  /* vpsignxx128v8: rmemindex */
   79,  /* vpsignxxx128v8: rmemindexx */
   76,  /* vpsign128v32: rop */
   77,  /* vpsignx128v32: rmem */
   78,  /* vpsignxx128v32: rmemindex */
   79,  /* vpsignxxx128v32: rmemindexx */
   76,  /* vpsign128v16: rop */
   77,  /* vpsignx128v16: rmem */
   78,  /* vpsignxx128v16: rmemindex */
   79,  /* vpsignxxx128v16: rmemindexx */
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
   77,  /* vfrcpx128v32: rmem */
   78,  /* vfrcpxx128v32: rmemindex */
   79,  /* vfrcpxxx128v32: rmemindexx */
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
   77,  /* vfrsqrtx128v32: rmem */
   78,  /* vfrsqrtxx128v32: rmemindex */
   79,  /* vfrsqrtxxx128v32: rmemindexx */
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
   77,  /* vfsqrtx128v64: rmem */
   78,  /* vfsqrtxx128v64: rmemindex */
   79,  /* vfsqrtxxx128v64: rmemindexx */
   76,  /* vfsqrt128v32: rop */
   77,  /* vfsqrtx128v32: rmem */
   78,  /* vfsqrtxx128v32: rmemindex */
   79,  /* vfsqrtxxx128v32: rmemindexx */
   34,  /* vfsqrtsd: vropspec */
   35,  /* vfsqrtxsd: vropspecmem */
   36,  /* vfsqrtxxsd: vropspecmemindex */
   37,  /* vfsqrtxxxsd: vropspecmemindexx */
   34,  /* vfsqrtss: vropspec */
   35,  /* vfsqrtxss: vropspecmem */
   36,  /* vfsqrtxxss: vropspecmemindex */
   37,  /* vfsqrtxxxss: vropspecmemindexx */
  123,  /* vstmxcsr: stmxcsr */
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
  128,  /* vzeroall: no_rop */
  119,  /* xfmadd132pd: ifma_ropopop */
  120,  /* xfmadd132xpd: ifma_ropopmem */
  121,  /* xfmadd132xxpd: ifma_ropopmemindex */
  122,  /* xfmadd132xxxpd: ifma_ropopmemindexx */
  119,  /* xfmadd213pd: ifma_ropopop */
  120,  /* xfmadd213xpd: ifma_ropopmem */
  121,  /* xfmadd213xxpd: ifma_ropopmemindex */
  122,  /* xfmadd213xxxpd: ifma_ropopmemindexx */
  119,  /* xfmadd231pd: ifma_ropopop */
  120,  /* xfmadd231xpd: ifma_ropopmem */
  121,  /* xfmadd231xxpd: ifma_ropopmemindex */
  122,  /* xfmadd231xxxpd: ifma_ropopmemindexx */
  119,  /* xfmadd132ps: ifma_ropopop */
  120,  /* xfmadd132xps: ifma_ropopmem */
  121,  /* xfmadd132xxps: ifma_ropopmemindex */
  122,  /* xfmadd132xxxps: ifma_ropopmemindexx */
  119,  /* xfmadd213ps: ifma_ropopop */
  120,  /* xfmadd213xps: ifma_ropopmem */
  121,  /* xfmadd213xxps: ifma_ropopmemindex */
  122,  /* xfmadd213xxxps: ifma_ropopmemindexx */
  119,  /* xfmadd231ps: ifma_ropopop */
  120,  /* xfmadd231xps: ifma_ropopmem */
  121,  /* xfmadd231xxps: ifma_ropopmemindex */
  122,  /* xfmadd231xxxps: ifma_ropopmemindexx */
  119,  /* xfmadd132sd: ifma_ropopop */
  120,  /* xfmadd132xsd: ifma_ropopmem */
  121,  /* xfmadd132xxsd: ifma_ropopmemindex */
  122,  /* xfmadd132xxxsd: ifma_ropopmemindexx */
  119,  /* xfmadd213sd: ifma_ropopop */
  120,  /* xfmadd213xsd: ifma_ropopmem */
  121,  /* xfmadd213xxsd: ifma_ropopmemindex */
  122,  /* xfmadd213xxxsd: ifma_ropopmemindexx */
  119,  /* xfmadd231sd: ifma_ropopop */
  120,  /* xfmadd231xsd: ifma_ropopmem */
  121,  /* xfmadd231xxsd: ifma_ropopmemindex */
  122,  /* xfmadd231xxxsd: ifma_ropopmemindexx */
  119,  /* xfmadd132ss: ifma_ropopop */
  120,  /* xfmadd132xss: ifma_ropopmem */
  121,  /* xfmadd132xxss: ifma_ropopmemindex */
  122,  /* xfmadd132xxxss: ifma_ropopmemindexx */
  119,  /* xfmadd213ss: ifma_ropopop */
  120,  /* xfmadd213xss: ifma_ropopmem */
  121,  /* xfmadd213xxss: ifma_ropopmemindex */
  122,  /* xfmadd213xxxss: ifma_ropopmemindexx */
  119,  /* xfmadd231ss: ifma_ropopop */
  120,  /* xfmadd231xss: ifma_ropopmem */
  121,  /* xfmadd231xxss: ifma_ropopmemindex */
  122,  /* xfmadd231xxxss: ifma_ropopmemindexx */
  119,  /* xfmaddsub132pd: ifma_ropopop */
  120,  /* xfmaddsub132xpd: ifma_ropopmem */
  121,  /* xfmaddsub132xxpd: ifma_ropopmemindex */
  122,  /* xfmaddsub132xxxpd: ifma_ropopmemindexx */
  119,  /* xfmaddsub213pd: ifma_ropopop */
  120,  /* xfmaddsub213xpd: ifma_ropopmem */
  121,  /* xfmaddsub213xxpd: ifma_ropopmemindex */
  122,  /* xfmaddsub213xxxpd: ifma_ropopmemindexx */
  119,  /* xfmaddsub231pd: ifma_ropopop */
  120,  /* xfmaddsub231xpd: ifma_ropopmem */
  121,  /* xfmaddsub231xxpd: ifma_ropopmemindex */
  122,  /* xfmaddsub231xxxpd: ifma_ropopmemindexx */
  119,  /* xfmaddsub132ps: ifma_ropopop */
  120,  /* xfmaddsub132xps: ifma_ropopmem */
  121,  /* xfmaddsub132xxps: ifma_ropopmemindex */
  122,  /* xfmaddsub132xxxps: ifma_ropopmemindexx */
  119,  /* xfmaddsub213ps: ifma_ropopop */
  120,  /* xfmaddsub213xps: ifma_ropopmem */
  121,  /* xfmaddsub213xxps: ifma_ropopmemindex */
  122,  /* xfmaddsub213xxxps: ifma_ropopmemindexx */
  119,  /* xfmaddsub231ps: ifma_ropopop */
  120,  /* xfmaddsub231xps: ifma_ropopmem */
  121,  /* xfmaddsub231xxps: ifma_ropopmemindex */
  122,  /* xfmaddsub231xxxps: ifma_ropopmemindexx */
  119,  /* xfmsubadd132pd: ifma_ropopop */
  120,  /* xfmsubadd132xpd: ifma_ropopmem */
  121,  /* xfmsubadd132xxpd: ifma_ropopmemindex */
  122,  /* xfmsubadd132xxxpd: ifma_ropopmemindexx */
  119,  /* xfmsubadd213pd: ifma_ropopop */
  120,  /* xfmsubadd213xpd: ifma_ropopmem */
  121,  /* xfmsubadd213xxpd: ifma_ropopmemindex */
  122,  /* xfmsubadd213xxxpd: ifma_ropopmemindexx */
  119,  /* xfmsubadd231pd: ifma_ropopop */
  120,  /* xfmsubadd231xpd: ifma_ropopmem */
  121,  /* xfmsubadd231xxpd: ifma_ropopmemindex */
  122,  /* xfmsubadd231xxxpd: ifma_ropopmemindexx */
  119,  /* xfmsubadd132ps: ifma_ropopop */
  120,  /* xfmsubadd132xps: ifma_ropopmem */
  121,  /* xfmsubadd132xxps: ifma_ropopmemindex */
  122,  /* xfmsubadd132xxxps: ifma_ropopmemindexx */
  119,  /* xfmsubadd213ps: ifma_ropopop */
  120,  /* xfmsubadd213xps: ifma_ropopmem */
  121,  /* xfmsubadd213xxps: ifma_ropopmemindex */
  122,  /* xfmsubadd213xxxps: ifma_ropopmemindexx */
  119,  /* xfmsubadd231ps: ifma_ropopop */
  120,  /* xfmsubadd231xps: ifma_ropopmem */
  121,  /* xfmsubadd231xxps: ifma_ropopmemindex */
  122,  /* xfmsubadd231xxxps: ifma_ropopmemindexx */
  119,  /* xfmsub132pd: ifma_ropopop */
  120,  /* xfmsub132xpd: ifma_ropopmem */
  121,  /* xfmsub132xxpd: ifma_ropopmemindex */
  122,  /* xfmsub132xxxpd: ifma_ropopmemindexx */
  119,  /* xfmsub213pd: ifma_ropopop */
  120,  /* xfmsub213xpd: ifma_ropopmem */
  121,  /* xfmsub213xxpd: ifma_ropopmemindex */
  122,  /* xfmsub213xxxpd: ifma_ropopmemindexx */
  119,  /* xfmsub231pd: ifma_ropopop */
  120,  /* xfmsub231xpd: ifma_ropopmem */
  121,  /* xfmsub231xxpd: ifma_ropopmemindex */
  122,  /* xfmsub231xxxpd: ifma_ropopmemindexx */
  119,  /* xfmsub132ps: ifma_ropopop */
  120,  /* xfmsub132xps: ifma_ropopmem */
  121,  /* xfmsub132xxps: ifma_ropopmemindex */
  122,  /* xfmsub132xxxps: ifma_ropopmemindexx */
  119,  /* xfmsub213ps: ifma_ropopop */
  120,  /* xfmsub213xps: ifma_ropopmem */
  121,  /* xfmsub213xxps: ifma_ropopmemindex */
  122,  /* xfmsub213xxxps: ifma_ropopmemindexx */
  119,  /* xfmsub231ps: ifma_ropopop */
  120,  /* xfmsub231xps: ifma_ropopmem */
  121,  /* xfmsub231xxps: ifma_ropopmemindex */
  122,  /* xfmsub231xxxps: ifma_ropopmemindexx */
  119,  /* xfmsub132sd: ifma_ropopop */
  120,  /* xfmsub132xsd: ifma_ropopmem */
  121,  /* xfmsub132xxsd: ifma_ropopmemindex */
  122,  /* xfmsub132xxxsd: ifma_ropopmemindexx */
  119,  /* xfmsub213sd: ifma_ropopop */
  120,  /* xfmsub213xsd: ifma_ropopmem */
  121,  /* xfmsub213xxsd: ifma_ropopmemindex */
  122,  /* xfmsub213xxxsd: ifma_ropopmemindexx */
  119,  /* xfmsub231sd: ifma_ropopop */
  120,  /* xfmsub231xsd: ifma_ropopmem */
  121,  /* xfmsub231xxsd: ifma_ropopmemindex */
  122,  /* xfmsub231xxxsd: ifma_ropopmemindexx */
  119,  /* xfmsub132ss: ifma_ropopop */
  120,  /* xfmsub132xss: ifma_ropopmem */
  121,  /* xfmsub132xxss: ifma_ropopmemindex */
  122,  /* xfmsub132xxxss: ifma_ropopmemindexx */
  119,  /* xfmsub213ss: ifma_ropopop */
  120,  /* xfmsub213xss: ifma_ropopmem */
  121,  /* xfmsub213xxss: ifma_ropopmemindex */
  122,  /* xfmsub213xxxss: ifma_ropopmemindexx */
  119,  /* xfmsub231ss: ifma_ropopop */
  120,  /* xfmsub231xss: ifma_ropopmem */
  121,  /* xfmsub231xxss: ifma_ropopmemindex */
  122,  /* xfmsub231xxxss: ifma_ropopmemindexx */
  119,  /* xfnmadd132pd: ifma_ropopop */
  120,  /* xfnmadd132xpd: ifma_ropopmem */
  121,  /* xfnmadd132xxpd: ifma_ropopmemindex */
  122,  /* xfnmadd132xxxpd: ifma_ropopmemindexx */
  119,  /* xfnmadd213pd: ifma_ropopop */
  120,  /* xfnmadd213xpd: ifma_ropopmem */
  121,  /* xfnmadd213xxpd: ifma_ropopmemindex */
  122,  /* xfnmadd213xxxpd: ifma_ropopmemindexx */
  119,  /* xfnmadd231pd: ifma_ropopop */
  120,  /* xfnmadd231xpd: ifma_ropopmem */
  121,  /* xfnmadd231xxpd: ifma_ropopmemindex */
  122,  /* xfnmadd231xxxpd: ifma_ropopmemindexx */
  119,  /* xfnmadd132ps: ifma_ropopop */
  120,  /* xfnmadd132xps: ifma_ropopmem */
  121,  /* xfnmadd132xxps: ifma_ropopmemindex */
  122,  /* xfnmadd132xxxps: ifma_ropopmemindexx */
  119,  /* xfnmadd213ps: ifma_ropopop */
  120,  /* xfnmadd213xps: ifma_ropopmem */
  121,  /* xfnmadd213xxps: ifma_ropopmemindex */
  122,  /* xfnmadd213xxxps: ifma_ropopmemindexx */
  119,  /* xfnmadd231ps: ifma_ropopop */
  120,  /* xfnmadd231xps: ifma_ropopmem */
  121,  /* xfnmadd231xxps: ifma_ropopmemindex */
  122,  /* xfnmadd231xxxps: ifma_ropopmemindexx */
  119,  /* xfnmadd132sd: ifma_ropopop */
  120,  /* xfnmadd132xsd: ifma_ropopmem */
  121,  /* xfnmadd132xxsd: ifma_ropopmemindex */
  122,  /* xfnmadd132xxxsd: ifma_ropopmemindexx */
  119,  /* xfnmadd213sd: ifma_ropopop */
  120,  /* xfnmadd213xsd: ifma_ropopmem */
  121,  /* xfnmadd213xxsd: ifma_ropopmemindex */
  122,  /* xfnmadd213xxxsd: ifma_ropopmemindexx */
  119,  /* xfnmadd231sd: ifma_ropopop */
  120,  /* xfnmadd231xsd: ifma_ropopmem */
  121,  /* xfnmadd231xxsd: ifma_ropopmemindex */
  122,  /* xfnmadd231xxxsd: ifma_ropopmemindexx */
  119,  /* xfnmadd132ss: ifma_ropopop */
  120,  /* xfnmadd132xss: ifma_ropopmem */
  121,  /* xfnmadd132xxss: ifma_ropopmemindex */
  122,  /* xfnmadd132xxxss: ifma_ropopmemindexx */
  119,  /* xfnmadd213ss: ifma_ropopop */
  120,  /* xfnmadd213xss: ifma_ropopmem */
  121,  /* xfnmadd213xxss: ifma_ropopmemindex */
  122,  /* xfnmadd213xxxss: ifma_ropopmemindexx */
  119,  /* xfnmadd231ss: ifma_ropopop */
  120,  /* xfnmadd231xss: ifma_ropopmem */
  121,  /* xfnmadd231xxss: ifma_ropopmemindex */
  122,  /* xfnmadd231xxxss: ifma_ropopmemindexx */
  119,  /* xfnmsub132pd: ifma_ropopop */
  120,  /* xfnmsub132xpd: ifma_ropopmem */
  121,  /* xfnmsub132xxpd: ifma_ropopmemindex */
  122,  /* xfnmsub132xxxpd: ifma_ropopmemindexx */
  119,  /* xfnmsub213pd: ifma_ropopop */
  120,  /* xfnmsub213xpd: ifma_ropopmem */
  121,  /* xfnmsub213xxpd: ifma_ropopmemindex */
  122,  /* xfnmsub213xxxpd: ifma_ropopmemindexx */
  119,  /* xfnmsub231pd: ifma_ropopop */
  120,  /* xfnmsub231xpd: ifma_ropopmem */
  121,  /* xfnmsub231xxpd: ifma_ropopmemindex */
  122,  /* xfnmsub231xxxpd: ifma_ropopmemindexx */
  119,  /* xfnmsub132ps: ifma_ropopop */
  120,  /* xfnmsub132xps: ifma_ropopmem */
  121,  /* xfnmsub132xxps: ifma_ropopmemindex */
  122,  /* xfnmsub132xxxps: ifma_ropopmemindexx */
  119,  /* xfnmsub213ps: ifma_ropopop */
  120,  /* xfnmsub213xps: ifma_ropopmem */
  121,  /* xfnmsub213xxps: ifma_ropopmemindex */
  122,  /* xfnmsub213xxxps: ifma_ropopmemindexx */
  119,  /* xfnmsub231ps: ifma_ropopop */
  120,  /* xfnmsub231xps: ifma_ropopmem */
  121,  /* xfnmsub231xxps: ifma_ropopmemindex */
  122,  /* xfnmsub231xxxps: ifma_ropopmemindexx */
  119,  /* xfnmsub132sd: ifma_ropopop */
  120,  /* xfnmsub132xsd: ifma_ropopmem */
  121,  /* xfnmsub132xxsd: ifma_ropopmemindex */
  122,  /* xfnmsub132xxxsd: ifma_ropopmemindexx */
  119,  /* xfnmsub213sd: ifma_ropopop */
  120,  /* xfnmsub213xsd: ifma_ropopmem */
  121,  /* xfnmsub213xxsd: ifma_ropopmemindex */
  122,  /* xfnmsub213xxxsd: ifma_ropopmemindexx */
  119,  /* xfnmsub231sd: ifma_ropopop */
  120,  /* xfnmsub231xsd: ifma_ropopmem */
  121,  /* xfnmsub231xxsd: ifma_ropopmemindex */
  122,  /* xfnmsub231xxxsd: ifma_ropopmemindexx */
  119,  /* xfnmsub132ss: ifma_ropopop */
  120,  /* xfnmsub132xss: ifma_ropopmem */
  121,  /* xfnmsub132xxss: ifma_ropopmemindex */
  122,  /* xfnmsub132xxxss: ifma_ropopmemindexx */
  119,  /* xfnmsub213ss: ifma_ropopop */
  120,  /* xfnmsub213xss: ifma_ropopmem */
  121,  /* xfnmsub213xxss: ifma_ropopmemindex */
  122,  /* xfnmsub213xxxss: ifma_ropopmemindexx */
  119,  /* xfnmsub231ss: ifma_ropopop */
  120,  /* xfnmsub231xss: ifma_ropopmem */
  121,  /* xfnmsub231xxss: ifma_ropopmemindex */
  122,  /* xfnmsub231xxxss: ifma_ropopmemindexx */
   76,  /* movabsq: rop */
   80,  /* store8_abs: opop1 */
   80,  /* store16_abs: opop1 */
   80,  /* store32_abs: opop1 */
   80,  /* store64_abs: opop1 */
   76,  /* ld8_abs: rop */
   76,  /* ld16_abs: rop */
   76,  /* ld32_abs: rop */
   76,  /* ld64_abs: rop */
  100,  /* lock_add32: rmw */
  100,  /* lock_adc32: rmw */
  100,  /* lock_add64: rmw */
  101,  /* lock_xchg32: xchg */
  101,  /* lock_xchg64: xchg */
  102,  /* lock_cmpxchg32: cmpxchg */
  102,  /* lock_cmpxchg64: cmpxchg */
  100,  /* lock_and32: rmw */
  100,  /* lock_and64: rmw */
  100,  /* lock_or32: rmw */
  100,  /* lock_or64: rmw */
  100,  /* lock_xor32: rmw */
  100,  /* lock_xor64: rmw */
  100,  /* lock_sub32: rmw */
  100,  /* lock_sub64: rmw */
  100,  /* lock_add8: rmw */
  100,  /* lock_add16: rmw */
  101,  /* lock_xchg8: xchg */
  101,  /* lock_xchg16: xchg */
  102,  /* lock_cmpxchg8: cmpxchg */
  102,  /* lock_cmpxchg16: cmpxchg */
  100,  /* lock_and8: rmw */
  100,  /* lock_and16: rmw */
  100,  /* lock_or8: rmw */
  100,  /* lock_or16: rmw */
  100,  /* lock_xor8: rmw */
  100,  /* lock_xor16: rmw */
  100,  /* lock_sub8: rmw */
  100,  /* lock_sub16: rmw */
  100,  /* lock_xadd8: rmw */
  100,  /* lock_xadd16: rmw */
  100,  /* lock_xadd32: rmw */
  100,  /* lock_xadd64: rmw */
   76,  /* bsf32: rop */
   76,  /* bsf64: rop */
   76,  /* bsr32: rop */
   76,  /* bsr64: rop */
  124,  /* tls_global_dynamic_64: tls_gd_64 */
  125,  /* tls_global_dynamic_32: tls_gd_32 */
  126,  /* tls_local_dynamic_64: tls_ld_64 */
  127,  /* tls_local_dynamic_32: tls_ld_32 */
    0,  /* begin_pregtn */
    0,  /* end_pregtn */
    0,  /* bwd_bar */
    0,  /* fwd_bar */
    0,  /* label */
  128,  /* nop: no_rop */
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
