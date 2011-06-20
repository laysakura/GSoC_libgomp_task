#include "targ_isa_operands.h"
#include "targ_isa_registers.h"
#include "targ_isa_properties.h"
#include "targ_isa_lits.h"


const ISA_OPERAND_VALTYP ISA_OPERAND_operand_types[] = {
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      1, EC_UNDEFINED,  8, 0x02 }, /* simm8 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      2, EC_UNDEFINED,  8, 0x00 }, /* uimm8 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      3, EC_UNDEFINED, 16, 0x02 }, /* simm16 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      4, EC_UNDEFINED, 16, 0x00 }, /* uimm16 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      5, EC_UNDEFINED, 32, 0x02 }, /* simm32 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      6, EC_UNDEFINED, 32, 0x00 }, /* uimm32 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      7, EC_UNDEFINED, 64, 0x02 }, /* simm64 */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      8, EC_UNDEFINED, 32, 0x02 }, /* pcrel32 */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x03 }, /* int64 */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 32, 0x03 }, /* int32 */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 16, 0x03 }, /* int16 */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED,  8, 0x03 }, /* int8 */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rax       ,
      0, EC_UNDEFINED, 64, 0x03 }, /* rax */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rax       ,
      0, EC_UNDEFINED, 32, 0x03 }, /* eax */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rax       ,
      0, EC_UNDEFINED, 16, 0x03 }, /* ax */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rax       ,
      0, EC_UNDEFINED,  8, 0x03 }, /* al */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rdx       ,
      0, EC_UNDEFINED, 64, 0x03 }, /* rdx */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rdx       ,
      0, EC_UNDEFINED, 32, 0x03 }, /* edx */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rcx       ,
      0, EC_UNDEFINED, 32, 0x03 }, /* ecx */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rcx       ,
      0, EC_UNDEFINED,  8, 0x03 }, /* cl */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rdi       ,
      0, EC_UNDEFINED, 64, 0x03 }, /* rdi */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rbx       ,
      0, EC_UNDEFINED, 32, 0x03 }, /* ebx */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rsp       ,
      0, EC_UNDEFINED, 64, 0x03 }, /* rsp */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rsp       ,
      0, EC_UNDEFINED, 32, 0x03 }, /* esp */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_rbp       ,
      0, EC_UNDEFINED, 64, 0x03 }, /* rbp */
  { ISA_REGISTER_CLASS_integer   , ISA_REGISTER_SUBCLASS_r11       ,
      0, EC_UNDEFINED, 64, 0x03 }, /* r11 */
  { ISA_REGISTER_CLASS_float     , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x03 }, /* fp64 */
  { ISA_REGISTER_CLASS_float     , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 128, 0x03 }, /* fp128 */
  { ISA_REGISTER_CLASS_float     , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 256, 0x03 }, /* fp256 */
  { ISA_REGISTER_CLASS_float     , ISA_REGISTER_SUBCLASS_xmm0      ,
      0, EC_UNDEFINED, 128, 0x03 }, /* xmm0 */
  { ISA_REGISTER_CLASS_x87       , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 128, 0x03 }, /* x87 */
  { ISA_REGISTER_CLASS_rflags    , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x01 }, /* rflags */
  { ISA_REGISTER_CLASS_rflags    , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 32, 0x01 }, /* eflags */
  { ISA_REGISTER_CLASS_x87_cw    , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 16, 0x01 }, /* x87_cw */
  { ISA_REGISTER_CLASS_mmx       , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 64, 0x03 }, /* mmx */
  { ISA_REGISTER_CLASS_mxcsr     , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_UNDEFINED, 3322, 0x01 }, /* mxcsr */
  { ISA_REGISTER_CLASS_UNDEFINED , ISA_REGISTER_SUBCLASS_UNDEFINED ,
      0, EC_pfhint,  8, 0x00 }, /* pfhint */
};

const ISA_OPERAND_INFO ISA_OPERAND_info[] = {
  { 0, {  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* no operand */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* no operand */
    0, {  -1,  -1 } },                            /* no operand */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse2 clflush */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* sse2 clflush */
    0, {  -1,  -1 } },                            /* sse2 clflush */
  { 3, {  12,  18,  17,  -1,  -1,  -1,  -1,  -1 },/* sse3 monitor */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* sse3 monitor */
    0, {  -1,  -1 } },                            /* sse3 monitor */
  { 2, {  18,  17,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse3 mwait */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* sse3 mwait */
    0, {  -1,  -1 } },                            /* sse3 mwait */
  { 1, {   2,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* ret imm16 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* ret imm16 */
    0, {  -1,  -1 } },                            /* ret imm16 */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int load imm32 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int load imm32 */
    1, {   9,  -1 } },                            /* int load imm32 */
  { 1, {   6,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int load imm64 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int load imm64 */
    1, {   8,  -1 } },                            /* int load imm64 */
  { 2, {  11,  11,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int8 arithmetic */
    1, {  11,  -1 } },                            /* int8 arithmetic */
  { 2, {  10,  10,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int16 arithmetic */
    1, {  10,  -1 } },                            /* int16 arithmetic */
  { 2, {   9,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int32 arithmetic */
    1, {   9,  -1 } },                            /* int32 arithmetic */
  { 2, {   8,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int64 arithmetic */
    1, {   8,  -1 } },                            /* int64 arithmetic */
  { 2, {   9,  11,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse4.2 crc32b reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* sse4.2 crc32b reg */
    1, {   9,  -1 } },                            /* sse4.2 crc32b reg */
  { 2, {   9,  10,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse4.2 crc32w reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* sse4.2 crc32w reg */
    1, {   9,  -1 } },                            /* sse4.2 crc32w reg */
  { 2, {   9,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse4.2 crc32d reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* sse4.2 crc32d reg */
    1, {   9,  -1 } },                            /* sse4.2 crc32d reg */
  { 2, {   8,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse4.2 crc32q reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* sse4.2 crc32q reg */
    1, {   8,  -1 } },                            /* sse4.2 crc32q reg */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* sse4.2 crc32 mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* sse4.2 crc32 mem opnd */
    1, {   9,  -1 } },                            /* sse4.2 crc32 mem opnd */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* sse4.2 crc32q mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* sse4.2 crc32q mem opnd */
    1, {   8,  -1 } },                            /* sse4.2 crc32q mem opnd */
  { 5, {   9,   8,   8,   1,   4,  -1,  -1,  -1 },/* sse4.2 crc32 mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* sse4.2 crc32 mem opnd w/ scaled index */
    1, {   9,  -1 } },                            /* sse4.2 crc32 mem opnd w/ scaled index */
  { 5, {   8,   8,   8,   1,   4,  -1,  -1,  -1 },/* sse4.2 crc32q mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* sse4.2 crc32q mem opnd w/ scaled index */
    1, {   8,  -1 } },                            /* sse4.2 crc32q mem opnd w/ scaled index */
  { 4, {   9,   8,   1,   4,  -1,  -1,  -1,  -1 },/* sse4.2 crc32 mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* sse4.2 crc32 mem opnd w/ scaled index w/o base */
    1, {   9,  -1 } },                            /* sse4.2 crc32 mem opnd w/ scaled index w/o base */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* sse4.2 crc32q mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* sse4.2 crc32q mem opnd w/ scaled index w/o base */
    1, {   8,  -1 } },                            /* sse4.2 crc32q mem opnd w/ scaled index w/o base */
  { 1, {  10,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 unary reg */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int16 unary reg */
    1, {  10,  -1 } },                            /* int16 unary reg */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 unary mem opnd */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int16 unary mem opnd */
    1, {  10,  -1 } },                            /* int16 unary mem opnd */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int16 unary mem opnd w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* int16 unary mem opnd w/ scaled index */
    1, {  10,  -1 } },                            /* int16 unary mem opnd w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 unary mem opnd w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int16 unary mem opnd w/ scaled index w/o base */
    1, {  10,  -1 } },                            /* int16 unary mem opnd w/ scaled index w/o base */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 unary reg */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int32 unary reg */
    1, {   9,  -1 } },                            /* int32 unary reg */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 unary mem opnd */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int32 unary mem opnd */
    1, {   9,  -1 } },                            /* int32 unary mem opnd */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int32 unary mem opnd w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* int32 unary mem opnd w/ scaled index */
    1, {   9,  -1 } },                            /* int32 unary mem opnd w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 unary mem opnd w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int32 unary mem opnd w/ scaled index w/o base */
    1, {   9,  -1 } },                            /* int32 unary mem opnd w/ scaled index w/o base */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 unary reg */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int64 unary reg */
    1, {   8,  -1 } },                            /* int64 unary reg */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 unary mem opnd */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int64 unary mem opnd */
    1, {   8,  -1 } },                            /* int64 unary mem opnd */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 unary mem opnd w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* int64 unary mem opnd w/ scaled index */
    1, {   8,  -1 } },                            /* int64 unary mem opnd w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 unary mem opnd w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int64 unary mem opnd w/ scaled index w/o base */
    1, {   8,  -1 } },                            /* int64 unary mem opnd w/ scaled index w/o base */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector broadcast mem */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* vector broadcast mem */
    1, {  27,  -1 } },                            /* vector broadcast mem */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector broadcast mem w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* vector broadcast mem w/ scaled index */
    1, {  27,  -1 } },                            /* vector broadcast mem w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* vector broadcast mem w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* vector broadcast mem w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector broadcast mem w/ scaled index w/o base */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector mov */
    1, {  27,  -1 } },                            /* vector mov */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector mov II */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector mov II */
    1, {  27,  -1 } },                            /* vector mov II */
  { 3, {  27,  27,   8,  -1,  -1,  -1,  -1,  -1 },/* vector maskmov */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* vector maskmov */
    0, {  -1,  -1 } },                            /* vector maskmov */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* vector mask load */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* vector mask load */
    1, {  27,  -1 } },                            /* vector mask load */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* vector mask load w/ scaled index w/ base */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* vector mask load w/ scaled index w/ base */
    1, {  27,  -1 } },                            /* vector mask load w/ scaled index w/ base */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector mask load w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* vector mask load w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector mask load w/ scaled index w/o base */
  { 4, {  27,  27,   8,   4,  -1,  -1,  -1,  -1 },/* vector mask store */
       {   7,   8,   2,   5,   0,   0,   0,   0 },/* vector mask store */
    0, {  -1,  -1 } },                            /* vector mask store */
  { 6, {  27,  27,   8,   8,   1,   4,  -1,  -1 },/* vector mask store w/ scaled index w/ base */
       {   7,   8,   2,   3,   4,   5,   0,   0 },/* vector mask store w/ scaled index w/ base */
    0, {  -1,  -1 } },                            /* vector mask store w/ scaled index w/ base */
  { 5, {  27,  27,   8,   1,   4,  -1,  -1,  -1 },/* vector mask store w/ scaled index w/o base */
       {   7,   8,   3,   4,   5,   0,   0,   0 },/* vector mask store w/ scaled index w/o base */
    0, {  -1,  -1 } },                            /* vector mask store w/ scaled index w/o base */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector unary reg */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector unary reg */
    1, {  27,  -1 } },                            /* vector unary reg */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector unary mem opnd */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* vector unary mem opnd */
    1, {  27,  -1 } },                            /* vector unary mem opnd */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector unary mem opnd w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* vector unary mem opnd w/ scaled index */
    1, {  27,  -1 } },                            /* vector unary mem opnd w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* vector unary mem opnd w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* vector unary mem opnd w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector unary mem opnd w/ scaled index w/o base */
  { 2, {  27,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* aeskeygenassist reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* aeskeygenassist reg */
    1, {  27,  -1 } },                            /* aeskeygenassist reg */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* aeskeygenassist mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* aeskeygenassist mem opnd */
    1, {  27,  -1 } },                            /* aeskeygenassist mem opnd */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* aeskeygenassist mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* aeskeygenassist mem opnd w/ scaled index */
    1, {  27,  -1 } },                            /* aeskeygenassist mem opnd w/ scaled index */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* aeskeygenassist mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* aeskeygenassist mem opnd w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* aeskeygenassist mem opnd w/ scaled index w/o base */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector arithmetic special */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector arithmetic special */
    1, {  27,  -1 } },                            /* vector arithmetic special */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector arithmetic special mem opnd */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* vector arithmetic special mem opnd */
    1, {  27,  -1 } },                            /* vector arithmetic special mem opnd */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector arithmetic special mem opnd w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* vector arithmetic special mem opnd w/ scaled index */
    1, {  27,  -1 } },                            /* vector arithmetic special mem opnd w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* vector arithmetic special mem opnd w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* vector arithmetic special mem opnd w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector arithmetic special mem opnd w/ scaled index w/o base */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector arithmetic */
    1, {  27,  -1 } },                            /* vector arithmetic */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* vector arithmetic mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* vector arithmetic mem opnd */
    1, {  27,  -1 } },                            /* vector arithmetic mem opnd */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* vector arithmetic mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* vector arithmetic mem opnd w/ scaled index */
    1, {  27,  -1 } },                            /* vector arithmetic mem opnd w/ scaled index */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector arithmetic mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* vector arithmetic mem opnd w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector arithmetic mem opnd w/ scaled index w/o base */
  { 2, {  27,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector extract int32 reg imm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector extract int32 reg imm */
    1, {   9,  -1 } },                            /* vector extract int32 reg imm */
  { 2, {  27,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector extract int64 reg imm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector extract int64 reg imm */
    1, {   8,  -1 } },                            /* vector extract int64 reg imm */
  { 4, {  27,   0,   8,   4,  -1,  -1,  -1,  -1 },/* vector extract mem reg imm */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* vector extract mem reg imm */
    0, {  -1,  -1 } },                            /* vector extract mem reg imm */
  { 6, {  27,   0,   8,   4,   8,   1,  -1,  -1 },/* vector extract mem w/ scaled index w/ base reg imm */
       {   8,   9,   2,   5,   3,   4,   0,   0 },/* vector extract mem w/ scaled index w/ base reg imm */
    0, {  -1,  -1 } },                            /* vector extract mem w/ scaled index w/ base reg imm */
  { 5, {  27,   0,   8,   1,   4,  -1,  -1,  -1 },/* vector extract mem w/ scaled index w/o base reg imm */
       {   8,   9,   3,   4,   5,   0,   0,   0 },/* vector extract mem w/ scaled index w/o base reg imm */
    0, {  -1,  -1 } },                            /* vector extract mem w/ scaled index w/o base reg imm */
  { 2, {  27,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector res reg imm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector res reg imm */
    1, {  27,  -1 } },                            /* vector res reg imm */
  { 3, {   8,   4,   0,  -1,  -1,  -1,  -1,  -1 },/* vector res mem imm */
       {   2,   5,  10,   0,   0,   0,   0,   0 },/* vector res mem imm */
    1, {  27,  -1 } },                            /* vector res mem imm */
  { 5, {   8,   8,   1,   4,   0,  -1,  -1,  -1 },/* vector res reg mem imm w/ scaled index */
       {   2,   3,   4,   5,  10,   0,   0,   0 },/* vector res reg mem imm w/ scaled index */
    1, {  27,  -1 } },                            /* vector res reg mem imm w/ scaled index */
  { 4, {   8,   1,   4,   0,  -1,  -1,  -1,  -1 },/* vector res reg mem imm w/ scaled index w/o base */
       {   3,   4,   5,  10,   0,   0,   0,   0 },/* vector res reg mem imm w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector res reg mem imm w/ scaled index w/o base */
  { 3, {  27,   9,   0,  -1,  -1,  -1,  -1,  -1 },/* vector pinsr 8/16/32 */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* vector pinsr 8/16/32 */
    1, {  27,  -1 } },                            /* vector pinsr 8/16/32 */
  { 3, {  27,   8,   0,  -1,  -1,  -1,  -1,  -1 },/* vector pinsr 64 */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* vector pinsr 64 */
    1, {  27,  -1 } },                            /* vector pinsr 64 */
  { 4, {  27,   8,   4,   0,  -1,  -1,  -1,  -1 },/* vector pinsr 8/16/32 mem */
       {   8,   2,   5,  10,   0,   0,   0,   0 },/* vector pinsr 8/16/32 mem */
    1, {  27,  -1 } },                            /* vector pinsr 8/16/32 mem */
  { 6, {  27,   8,   8,   1,   4,   0,  -1,  -1 },/* vector pinsr 8/16/32 mem w/ scaled index */
       {   8,   2,   3,   4,   5,  10,   0,   0 },/* vector pinsr 8/16/32 mem w/ scaled index */
    1, {  27,  -1 } },                            /* vector pinsr 8/16/32 mem w/ scaled index */
  { 5, {  27,   8,   1,   4,   0,  -1,  -1,  -1 },/* vector pinsr 8/16/32 mem w/ scaled index w/o base */
       {   8,   3,   4,   5,  10,   0,   0,   0 },/* vector pinsr 8/16/32 mem w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector pinsr 8/16/32 mem w/ scaled index w/o base */
  { 3, {  27,  27,   0,  -1,  -1,  -1,  -1,  -1 },/* vector res reg reg imm */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* vector res reg reg imm */
    1, {  27,  -1 } },                            /* vector res reg reg imm */
  { 4, {  27,   8,   4,   0,  -1,  -1,  -1,  -1 },/* vector res reg mem imm */
       {   8,   2,   5,  10,   0,   0,   0,   0 },/* vector res reg mem imm */
    1, {  27,  -1 } },                            /* vector res reg mem imm */
  { 6, {  27,   8,   8,   1,   4,   0,  -1,  -1 },/* vector res reg mem imm w/ scaled index */
       {   8,   2,   3,   4,   5,  10,   0,   0 },/* vector res reg mem imm w/ scaled index */
    1, {  27,  -1 } },                            /* vector res reg mem imm w/ scaled index */
  { 5, {  27,   8,   1,   4,   0,  -1,  -1,  -1 },/* vector res reg mem imm w/ scaled index w/o base */
       {   8,   3,   4,   5,  10,   0,   0,   0 },/* vector res reg mem imm w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector res reg mem imm w/ scaled index w/o base */
  { 3, {  27,  29,  27,  -1,  -1,  -1,  -1,  -1 },/* SSE4.1 blendv res reg reg reg */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* SSE4.1 blendv res reg reg reg */
    1, {  27,  -1 } },                            /* SSE4.1 blendv res reg reg reg */
  { 4, {  27,  29,   8,   4,  -1,  -1,  -1,  -1 },/* SSE4.1 blendv res reg mem reg */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* SSE4.1 blendv res reg mem reg */
    1, {  27,  -1 } },                            /* SSE4.1 blendv res reg mem reg */
  { 6, {  27,  29,   8,   8,   1,   4,  -1,  -1 },/* SSE4.1 blendv res reg mem reg w/ scaled index */
       {   8,   9,   2,   3,   4,   5,   0,   0 },/* SSE4.1 blendv res reg mem reg w/ scaled index */
    1, {  27,  -1 } },                            /* SSE4.1 blendv res reg mem reg w/ scaled index */
  { 5, {  27,  29,   8,   1,   4,  -1,  -1,  -1 },/* SSE4.1 blendv res reg mem reg w/ scaled index w/o base */
       {   8,  10,   3,   4,   5,   0,   0,   0 },/* SSE4.1 blendv res reg mem reg w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* SSE4.1 blendv res reg mem reg w/ scaled index w/o base */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector res reg reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector res reg reg */
    1, {  27,  -1 } },                            /* vector res reg reg */
  { 3, {   8,   4,  27,  -1,  -1,  -1,  -1,  -1 },/* vector res mem reg */
       {   2,   5,   8,   0,   0,   0,   0,   0 },/* vector res mem reg */
    1, {  27,  -1 } },                            /* vector res mem reg */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* vector res reg mem */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* vector res reg mem */
    1, {  27,  -1 } },                            /* vector res reg mem */
  { 5, {   8,   8,   1,   4,  27,  -1,  -1,  -1 },/* vector res mem w/ scaled index w/ base reg */
       {   2,   3,   4,   5,   8,   0,   0,   0 },/* vector res mem w/ scaled index w/ base reg */
    1, {  27,  -1 } },                            /* vector res mem w/ scaled index w/ base reg */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* vector res reg mem w/ scaled index w/ base */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* vector res reg mem w/ scaled index w/ base */
    1, {  27,  -1 } },                            /* vector res reg mem w/ scaled index w/ base */
  { 4, {   8,   1,   4,  27,  -1,  -1,  -1,  -1 },/* vector res mem w/ scaled index w/o base reg */
       {   3,   4,   5,   8,   0,   0,   0,   0 },/* vector res mem w/ scaled index w/o base reg */
    1, {  27,  -1 } },                            /* vector res mem w/ scaled index w/o base reg */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector res reg mem w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* vector res reg mem w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector res reg mem w/ scaled index w/o base */
  { 3, {  27,  27,  27,  -1,  -1,  -1,  -1,  -1 },/* vector res reg reg reg */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* vector res reg reg reg */
    1, {  27,  -1 } },                            /* vector res reg reg reg */
  { 4, {  27,   8,   4,  27,  -1,  -1,  -1,  -1 },/* vector res reg mem reg */
       {   8,   2,   5,  10,   0,   0,   0,   0 },/* vector res reg mem reg */
    1, {  27,  -1 } },                            /* vector res reg mem reg */
  { 6, {  27,   8,   8,   1,   4,  27,  -1,  -1 },/* vector res reg mem reg w/ scaled index */
       {   8,   2,   3,   4,   5,  10,   0,   0 },/* vector res reg mem reg w/ scaled index */
    1, {  27,  -1 } },                            /* vector res reg mem reg w/ scaled index */
  { 5, {  27,   8,   1,   4,  27,  -1,  -1,  -1 },/* vector res reg mem reg w/ scaled index w/o base */
       {   8,   3,   4,   5,  10,   0,   0,   0 },/* vector res reg mem reg w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector res reg mem reg w/ scaled index w/o base */
  { 4, {  27,  27,   8,   4,  -1,  -1,  -1,  -1 },/* vector res reg reg memr */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* vector res reg reg memr */
    1, {  27,  -1 } },                            /* vector res reg reg memr */
  { 6, {  27,  27,   8,   8,   1,   4,  -1,  -1 },/* vector res reg reg memr w/ scaled index */
       {   8,   9,   2,   3,   4,   5,   0,   0 },/* vector res reg reg memr w/ scaled index */
    1, {  27,  -1 } },                            /* vector res reg reg memr w/ scaled index */
  { 5, {  27,  27,   8,   1,   4,  -1,  -1,  -1 },/* vector res reg reg memr w/ scaled index w/o base */
       {   8,   9,   3,   4,   5,   0,   0,   0 },/* vector res reg reg memr w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector res reg reg memr w/ scaled index w/o base */
  { 3, {  11,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int8 arithmetic mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int8 arithmetic mem opnd */
    1, {  11,  -1 } },                            /* int8 arithmetic mem opnd */
  { 3, {  10,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 arithmetic mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int16 arithmetic mem opnd */
    1, {  10,  -1 } },                            /* int16 arithmetic mem opnd */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int32 arithmetic mem opnd */
    1, {   9,  -1 } },                            /* int32 arithmetic mem opnd */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 arithmetic mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int64 arithmetic mem opnd */
    1, {   8,  -1 } },                            /* int64 arithmetic mem opnd */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int unary mem res */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int unary mem res */
    0, {  -1,  -1 } },                            /* int unary mem res */
  { 4, {   8,   4,   8,   1,  -1,  -1,  -1,  -1 },/* int unary index w/ base res */
       {   2,   5,   3,   4,   0,   0,   0,   0 },/* int unary index w/ base res */
    0, {  -1,  -1 } },                            /* int unary index w/ base res */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int unary index w/o base res */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int unary index w/o base res */
    0, {  -1,  -1 } },                            /* int unary index w/o base res */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int unary n32 res */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int unary n32 res */
    0, {  -1,  -1 } },                            /* int unary n32 res */
  { 3, {  11,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int8 arithmetic mem res */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int8 arithmetic mem res */
    0, {  -1,  -1 } },                            /* int8 arithmetic mem res */
  { 3, {  10,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 arithmetic mem res */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int16 arithmetic mem res */
    0, {  -1,  -1 } },                            /* int16 arithmetic mem res */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic mem res */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int32 arithmetic mem res */
    0, {  -1,  -1 } },                            /* int32 arithmetic mem res */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 arithmetic mem res */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int64 arithmetic mem res */
    0, {  -1,  -1 } },                            /* int64 arithmetic mem res */
  { 5, {  11,   8,   4,   8,   1,  -1,  -1,  -1 },/* int8 arithmetic index w/ base res */
       {   8,   2,   5,   3,   4,   0,   0,   0 },/* int8 arithmetic index w/ base res */
    0, {  -1,  -1 } },                            /* int8 arithmetic index w/ base res */
  { 5, {  10,   8,   4,   8,   1,  -1,  -1,  -1 },/* int16 arithmetic index w/ base res */
       {   8,   2,   5,   3,   4,   0,   0,   0 },/* int16 arithmetic index w/ base res */
    0, {  -1,  -1 } },                            /* int16 arithmetic index w/ base res */
  { 5, {   9,   8,   4,   8,   1,  -1,  -1,  -1 },/* int32 arithmetic index w/ base res */
       {   8,   2,   5,   3,   4,   0,   0,   0 },/* int32 arithmetic index w/ base res */
    0, {  -1,  -1 } },                            /* int32 arithmetic index w/ base res */
  { 5, {   8,   8,   4,   8,   1,  -1,  -1,  -1 },/* int64 arithmetic index w/ base res */
       {   8,   2,   5,   3,   4,   0,   0,   0 },/* int64 arithmetic index w/ base res */
    0, {  -1,  -1 } },                            /* int64 arithmetic index w/ base res */
  { 4, {  11,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int8 arithmetic index w/o base res */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int8 arithmetic index w/o base res */
    0, {  -1,  -1 } },                            /* int8 arithmetic index w/o base res */
  { 4, {  10,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int16 arithmetic index w/o base res */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int16 arithmetic index w/o base res */
    0, {  -1,  -1 } },                            /* int16 arithmetic index w/o base res */
  { 4, {   9,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int32 arithmetic index w/o base res */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int32 arithmetic index w/o base res */
    0, {  -1,  -1 } },                            /* int32 arithmetic index w/o base res */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 arithmetic index w/o base res */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int64 arithmetic index w/o base res */
    0, {  -1,  -1 } },                            /* int64 arithmetic index w/o base res */
  { 2, {  11,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 arithmetic n32 res */
       {   8,   5,   0,   0,   0,   0,   0,   0 },/* int8 arithmetic n32 res */
    0, {  -1,  -1 } },                            /* int8 arithmetic n32 res */
  { 2, {  10,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 arithmetic n32 res */
       {   8,   5,   0,   0,   0,   0,   0,   0 },/* int16 arithmetic n32 res */
    0, {  -1,  -1 } },                            /* int16 arithmetic n32 res */
  { 2, {   9,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic n32 res */
       {   8,   5,   0,   0,   0,   0,   0,   0 },/* int32 arithmetic n32 res */
    0, {  -1,  -1 } },                            /* int32 arithmetic n32 res */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 arithmetic 64bit offset */
       {   8,   5,   0,   0,   0,   0,   0,   0 },/* int64 arithmetic 64bit offset */
    0, {  -1,  -1 } },                            /* int64 arithmetic 64bit offset */
  { 3, {   4,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32/64 arithmetic mem imm */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int32/64 arithmetic mem imm */
    0, {  -1,  -1 } },                            /* int32/64 arithmetic mem imm */
  { 5, {   4,   8,   4,   8,   1,  -1,  -1,  -1 },/* int32/64 arithmetic index w/ base imm */
       {   8,   2,   5,   3,   4,   0,   0,   0 },/* int32/64 arithmetic index w/ base imm */
    0, {  -1,  -1 } },                            /* int32/64 arithmetic index w/ base imm */
  { 4, {   4,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int32/64 arithmetic index w/o base imm */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int32/64 arithmetic index w/o base imm */
    0, {  -1,  -1 } },                            /* int32/64 arithmetic index w/o base imm */
  { 2, {   4,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic n32 imm */
       {   8,   5,   0,   0,   0,   0,   0,   0 },/* int32 arithmetic n32 imm */
    0, {  -1,  -1 } },                            /* int32 arithmetic n32 imm */
  { 5, {  11,   8,   8,   1,   4,  -1,  -1,  -1 },/* int8 arithmetic mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int8 arithmetic mem opnd w/ scaled index */
    1, {  11,  -1 } },                            /* int8 arithmetic mem opnd w/ scaled index */
  { 5, {  10,   8,   8,   1,   4,  -1,  -1,  -1 },/* int16 arithmetic mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int16 arithmetic mem opnd w/ scaled index */
    1, {  10,  -1 } },                            /* int16 arithmetic mem opnd w/ scaled index */
  { 5, {   9,   8,   8,   1,   4,  -1,  -1,  -1 },/* int32 arithmetic mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int32 arithmetic mem opnd w/ scaled index */
    1, {   9,  -1 } },                            /* int32 arithmetic mem opnd w/ scaled index */
  { 5, {   8,   8,   8,   1,   4,  -1,  -1,  -1 },/* int64 arithmetic mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int64 arithmetic mem opnd w/ scaled index */
    1, {   8,  -1 } },                            /* int64 arithmetic mem opnd w/ scaled index */
  { 4, {  11,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int8 arithmetic mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int8 arithmetic mem opnd w/ scaled index w/o base */
    1, {  11,  -1 } },                            /* int8 arithmetic mem opnd w/ scaled index w/o base */
  { 4, {  10,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int16 arithmetic mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int16 arithmetic mem opnd w/ scaled index w/o base */
    1, {  10,  -1 } },                            /* int16 arithmetic mem opnd w/ scaled index w/o base */
  { 4, {   9,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int32 arithmetic mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int32 arithmetic mem opnd w/ scaled index w/o base */
    1, {   9,  -1 } },                            /* int32 arithmetic mem opnd w/ scaled index w/o base */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 arithmetic mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int64 arithmetic mem opnd w/ scaled index w/o base */
    1, {   8,  -1 } },                            /* int64 arithmetic mem opnd w/ scaled index w/o base */
  { 1, {  11,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* unary int8 arithmetic */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* unary int8 arithmetic */
    1, {  11,  -1 } },                            /* unary int8 arithmetic */
  { 1, {  10,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* unary int16 arithmetic */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* unary int16 arithmetic */
    1, {  10,  -1 } },                            /* unary int16 arithmetic */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* unary int32 arithmetic */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* unary int32 arithmetic */
    1, {   9,  -1 } },                            /* unary int32 arithmetic */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* unary int64 arithmetic */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* unary int64 arithmetic */
    1, {   8,  -1 } },                            /* unary int64 arithmetic */
  { 2, {  11,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 arithmetic with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int8 arithmetic with simm */
    1, {  11,  -1 } },                            /* int8 arithmetic with simm */
  { 2, {  10,   2,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 arithmetic with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int16 arithmetic with simm */
    1, {  10,  -1 } },                            /* int16 arithmetic with simm */
  { 2, {   9,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int32 arithmetic with simm */
    1, {   9,  -1 } },                            /* int32 arithmetic with simm */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 arithmetic with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int64 arithmetic with simm */
    1, {   8,  -1 } },                            /* int64 arithmetic with simm */
  { 1, {   6,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 load w/o base or index (movabs) */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int8 load w/o base or index (movabs) */
    1, {  15,  -1 } },                            /* int8 load w/o base or index (movabs) */
  { 1, {   6,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 load w/o base or index (movabs) */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int16 load w/o base or index (movabs) */
    1, {  14,  -1 } },                            /* int16 load w/o base or index (movabs) */
  { 1, {   6,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 load w/o base or index (movabs) */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int32 load w/o base or index (movabs) */
    1, {  13,  -1 } },                            /* int32 load w/o base or index (movabs) */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 load w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int32 load w/o base or index */
    1, {   9,  -1 } },                            /* int32 load w/o base or index */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int64 load w/o base or index */
    1, {   8,  -1 } },                            /* int64 load w/o base or index */
  { 1, {   6,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load w/o base or index (movabs) */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int64 load w/o base or index (movabs) */
    1, {  12,  -1 } },                            /* int64 load w/o base or index (movabs) */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 load */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int32 load */
    1, {   9,  -1 } },                            /* int32 load */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int64 load */
    1, {   8,  -1 } },                            /* int64 load */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 load from %gs segment w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int32 load from %gs segment w/o base or index */
    1, {   9,  -1 } },                            /* int32 load from %gs segment w/o base or index */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load from %fs segment w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int64 load from %fs segment w/o base or index */
    1, {   8,  -1 } },                            /* int64 load from %fs segment w/o base or index */
  { 2, {  15,   6,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 store w/o base or index (movabs) */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int8 store w/o base or index (movabs) */
    0, {  -1,  -1 } },                            /* int8 store w/o base or index (movabs) */
  { 2, {  11,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int8 store w/o base or index */
    0, {  -1,  -1 } },                            /* int8 store w/o base or index */
  { 2, {  14,   6,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 store w/o base or index (movabs) */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int16 store w/o base or index (movabs) */
    0, {  -1,  -1 } },                            /* int16 store w/o base or index (movabs) */
  { 2, {  10,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int16 store w/o base or index */
    0, {  -1,  -1 } },                            /* int16 store w/o base or index */
  { 2, {  13,   6,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 store w/o base or index (movabs) */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int32 store w/o base or index (movabs) */
    0, {  -1,  -1 } },                            /* int32 store w/o base or index (movabs) */
  { 2, {   9,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int32 store w/o base or index */
    0, {  -1,  -1 } },                            /* int32 store w/o base or index */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int64 store w/o base or index */
    0, {  -1,  -1 } },                            /* int64 store w/o base or index */
  { 2, {  12,   6,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 store w/o base or index (movabs) */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int64 store w/o base or index (movabs) */
    0, {  -1,  -1 } },                            /* int64 store w/o base or index (movabs) */
  { 2, {   0,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* imm8 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* imm8 store w/o base or index */
    0, {  -1,  -1 } },                            /* imm8 store w/o base or index */
  { 2, {   2,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* imm16 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* imm16 store w/o base or index */
    0, {  -1,  -1 } },                            /* imm16 store w/o base or index */
  { 2, {   4,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* imm32 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* imm32 store w/o base or index */
    0, {  -1,  -1 } },                            /* imm32 store w/o base or index */
  { 2, {   6,   6,  -1,  -1,  -1,  -1,  -1,  -1 },/* imm64 store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* imm64 store w/o base or index */
    0, {  -1,  -1 } },                            /* imm64 store w/o base or index */
  { 3, {  11,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int8 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* int8 store */
    0, {  -1,  -1 } },                            /* int8 store */
  { 3, {  10,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* int16 store */
    0, {  -1,  -1 } },                            /* int16 store */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* int32 store */
    0, {  -1,  -1 } },                            /* int32 store */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* int64 store */
    0, {  -1,  -1 } },                            /* int64 store */
  { 3, {   0,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* imm8 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* imm8 store */
    0, {  -1,  -1 } },                            /* imm8 store */
  { 3, {   2,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* imm16 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* imm16 store */
    0, {  -1,  -1 } },                            /* imm16 store */
  { 3, {   4,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* imm32 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* imm32 store */
    0, {  -1,  -1 } },                            /* imm32 store */
  { 3, {   6,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* imm64 store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* imm64 store */
    0, {  -1,  -1 } },                            /* imm64 store */
  { 3, {  36,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* prefetch */
       {   0,   2,   5,   0,   0,   0,   0,   0 },/* prefetch */
    0, {  -1,  -1 } },                            /* prefetch */
  { 5, {  36,   8,   4,   8,   1,  -1,  -1,  -1 },/* prefetchx */
       {   0,   2,   5,   3,   4,   0,   0,   0 },/* prefetchx */
    0, {  -1,  -1 } },                            /* prefetchx */
  { 4, {  36,   8,   1,   4,  -1,  -1,  -1,  -1 },/* prefetchxx */
       {   0,   3,   4,   5,   0,   0,   0,   0 },/* prefetchxx */
    0, {  -1,  -1 } },                            /* prefetchxx */
  { 1, {  11,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8_32 mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int8_32 mov */
    1, {   9,  -1 } },                            /* int8_32 mov */
  { 1, {  10,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16_32 mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int16_32 mov */
    1, {   9,  -1 } },                            /* int16_32 mov */
  { 1, {  11,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8_64 mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int8_64 mov */
    1, {   8,  -1 } },                            /* int8_64 mov */
  { 1, {  10,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16_64 mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int16_64 mov */
    1, {   8,  -1 } },                            /* int16_64 mov */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32_64 sign-ext mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int32_64 sign-ext mov */
    1, {   8,  -1 } },                            /* int32_64 sign-ext mov */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32_64 zero-ext mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int32_64 zero-ext mov */
    1, {   9,  -1 } },                            /* int32_64 zero-ext mov */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int32 mov */
    1, {   9,  -1 } },                            /* int32 mov */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 mov */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int64 mov */
    1, {   8,  -1 } },                            /* int64 mov */
  { 2, {   9,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 mult */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int32 mult */
    1, {   9,  -1 } },                            /* int32 mult */
  { 2, {   8,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 mult */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int64 mult */
    1, {   8,  -1 } },                            /* int64 mult */
  { 2, {  13,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 mult uses eax and edx registers */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int32 mult uses eax and edx registers */
    2, {  13,  17 } },                            /* int32 mult uses eax and edx registers */
  { 2, {  12,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 mult uses rax and rdx registers */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int64 mult uses rax and rdx registers */
    2, {  12,  16 } },                            /* int64 mult uses rax and rdx registers */
  { 3, {  13,  17,   9,  -1,  -1,  -1,  -1,  -1 },/* div32 */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* div32 */
    2, {  13,  17 } },                            /* div32 */
  { 3, {  12,  16,   8,  -1,  -1,  -1,  -1,  -1 },/* div64 */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* div64 */
    2, {  12,  16 } },                            /* div64 */
  { 3, {  13,  17,   9,  -1,  -1,  -1,  -1,  -1 },/* idiv32 */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* idiv32 */
    2, {  13,  17 } },                            /* idiv32 */
  { 3, {  12,  16,   8,  -1,  -1,  -1,  -1,  -1 },/* idiv64 */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* idiv64 */
    2, {  12,  16 } },                            /* idiv64 */
  { 1, {  31,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 set */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int8 set */
    1, {  11,  -1 } },                            /* int8 set */
  { 2, {   8,  31,  -1,  -1,  -1,  -1,  -1,  -1 },/* cond int mov */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* cond int mov */
    1, {   8,  -1 } },                            /* cond int mov */
  { 2, {  30,  31,  -1,  -1,  -1,  -1,  -1,  -1 },/* cond x87 mov */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* cond x87 mov */
    1, {  30,  -1 } },                            /* cond x87 mov */
  { 1, {  26,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp 2 fp */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* fp 2 fp */
    1, {  26,  -1 } },                            /* fp 2 fp */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector cvt */
    1, {  27,  -1 } },                            /* vector cvt */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt w/ trunc */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector cvt w/ trunc */
    1, {  27,  -1 } },                            /* vector cvt w/ trunc */
  { 1, {  28,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt 256bit */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector cvt 256bit */
    1, {  27,  -1 } },                            /* vector cvt 256bit */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt I */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* vector cvt I */
    1, {  27,  -1 } },                            /* vector cvt I */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt w/ trunc I */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* vector cvt w/ trunc I */
    1, {  27,  -1 } },                            /* vector cvt w/ trunc I */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector cvt II */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* vector cvt II */
    1, {  27,  -1 } },                            /* vector cvt II */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector cvt w/ trunc II */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* vector cvt w/ trunc II */
    1, {  27,  -1 } },                            /* vector cvt w/ trunc II */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* vector cvt III */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* vector cvt III */
    1, {  27,  -1 } },                            /* vector cvt III */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* vector cvt w/ trunc III */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* vector cvt w/ trunc III */
    1, {  27,  -1 } },                            /* vector cvt w/ trunc III */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 2 float */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int32 2 float */
    1, {  26,  -1 } },                            /* int32 2 float */
  { 2, {  27,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* avx int32 2 float */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* avx int32 2 float */
    1, {  27,  -1 } },                            /* avx int32 2 float */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 2 float */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int64 2 float */
    1, {  26,  -1 } },                            /* int64 2 float */
  { 2, {  27,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* avx int64 2 float */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* avx int64 2 float */
    1, {  27,  -1 } },                            /* avx int64 2 float */
  { 1, {  26,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp 2 int32 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* fp 2 int32 */
    1, {   9,  -1 } },                            /* fp 2 int32 */
  { 1, {  26,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp 2 int64 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* fp 2 int64 */
    1, {   8,  -1 } },                            /* fp 2 int64 */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* avx move mask */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* avx move mask */
    1, {   9,  -1 } },                            /* avx move mask */
  { 2, {  11,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* shifts8 */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* shifts8 */
    1, {  11,  -1 } },                            /* shifts8 */
  { 2, {  10,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* shifts16 */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* shifts16 */
    1, {  10,  -1 } },                            /* shifts16 */
  { 2, {   9,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* shifts32 */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* shifts32 */
    1, {   9,  -1 } },                            /* shifts32 */
  { 2, {   8,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* shifts64 */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* shifts64 */
    1, {   8,  -1 } },                            /* shifts64 */
  { 2, {   9,  19,  -1,  -1,  -1,  -1,  -1,  -1 },/* variable shifts32 */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* variable shifts32 */
    1, {   9,  -1 } },                            /* variable shifts32 */
  { 3, {   9,   9,  19,  -1,  -1,  -1,  -1,  -1 },/* variable shift left double */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* variable shift left double */
    1, {   9,  -1 } },                            /* variable shift left double */
  { 3, {   9,   9,   1,  -1,  -1,  -1,  -1,  -1 },/* shift left double */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* shift left double */
    1, {   9,  -1 } },                            /* shift left double */
  { 2, {   8,  19,  -1,  -1,  -1,  -1,  -1,  -1 },/* variable shifts64 */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* variable shifts64 */
    1, {   8,  -1 } },                            /* variable shifts64 */
  { 1, {  13,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* sign32 extend */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* sign32 extend */
    2, {  13,  17 } },                            /* sign32 extend */
  { 1, {  12,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* sign64 extend */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* sign64 extend */
    2, {  12,  16 } },                            /* sign64 extend */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* float load w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* float load w/o base or index */
    1, {  26,  -1 } },                            /* float load w/o base or index */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* float load */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* float load */
    1, {  26,  -1 } },                            /* float load */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* float convert */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* float convert */
    1, {  26,  -1 } },                            /* float convert */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* avx float convert */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* avx float convert */
    1, {  27,  -1 } },                            /* avx float convert */
  { 1, {  30,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87-stack float load */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* x87-stack float load */
    0, {  -1,  -1 } },                            /* x87-stack float load */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 float load */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* x87 float load */
    1, {  30,  -1 } },                            /* x87 float load */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 float load w/o index or base */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* x87 float load w/o index or base */
    1, {  30,  -1 } },                            /* x87 float load w/o index or base */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 control-word load */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* x87 control-word load */
    1, {  33,  -1 } },                            /* x87 control-word load */
  { 3, {  33,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* x87 control-word store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* x87 control-word store */
    0, {  -1,  -1 } },                            /* x87 control-word store */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* float load vector w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* float load vector w/o base or index */
    1, {  27,  -1 } },                            /* float load vector w/o base or index */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* float load vector */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* float load vector */
    1, {  27,  -1 } },                            /* float load vector */
  { 2, {  26,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* float store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* float store w/o base or index */
    0, {  -1,  -1 } },                            /* float store w/o base or index */
  { 3, {  26,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* float store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* float store */
    0, {  -1,  -1 } },                            /* float store */
  { 2, {  27,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* float store vector w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* float store vector w/o base or index */
    0, {  -1,  -1 } },                            /* float store vector w/o base or index */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* float store vector */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* float store vector */
    0, {  -1,  -1 } },                            /* float store vector */
  { 3, {  30,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* x87 float store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* x87 float store */
    0, {  -1,  -1 } },                            /* x87 float store */
  { 1, {  30,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 store and pop */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* x87 store and pop */
    0, {  -1,  -1 } },                            /* x87 store and pop */
  { 3, {  30,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* x87 float store */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* x87 float store */
    0, {  -1,  -1 } },                            /* x87 float store */
  { 2, {  30,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 float store w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* x87 float store w/o base or index */
    0, {  -1,  -1 } },                            /* x87 float store w/o base or index */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* unpack */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* unpack */
    1, {  27,  -1 } },                            /* unpack */
  { 3, {  27,  27,   1,  -1,  -1,  -1,  -1,  -1 },/* shuffle */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* shuffle */
    1, {  27,  -1 } },                            /* shuffle */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* pshufb */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* pshufb */
    1, {  27,  -1 } },                            /* pshufb */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* pshufb mem */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* pshufb mem */
    1, {  27,  -1 } },                            /* pshufb mem */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* pshufb mem w/ scaled index w/ base */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* pshufb mem w/ scaled index w/ base */
    1, {  27,  -1 } },                            /* pshufb mem w/ scaled index w/ base */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* pshufb mem w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* pshufb mem w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* pshufb mem w/ scaled index w/o base */
  { 2, {  27,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* shuffle-int */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* shuffle-int */
    1, {  27,  -1 } },                            /* shuffle-int */
  { 3, {   8,   4,   1,  -1,  -1,  -1,  -1,  -1 },/* shuffle-int mem */
       {   2,   5,   9,   0,   0,   0,   0,   0 },/* shuffle-int mem */
    1, {  27,  -1 } },                            /* shuffle-int mem */
  { 5, {   8,   8,   1,   4,   1,  -1,  -1,  -1 },/* shuffle-int mem w/ scaled index w/ base */
       {   2,   3,   4,   5,   9,   0,   0,   0 },/* shuffle-int mem w/ scaled index w/ base */
    1, {  27,  -1 } },                            /* shuffle-int mem w/ scaled index w/ base */
  { 4, {   8,   1,   4,   1,  -1,  -1,  -1,  -1 },/* shuffle-int mem w/ scaled index w/o base */
       {   3,   4,   5,   9,   0,   0,   0,   0 },/* shuffle-int mem w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* shuffle-int mem w/ scaled index w/o base */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* move-high-low */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* move-high-low */
    1, {  27,  -1 } },                            /* move-high-low */
  { 2, {  27,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* packed shifts w/ immediate */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* packed shifts w/ immediate */
    1, {  27,  -1 } },                            /* packed shifts w/ immediate */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* packed shifts */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* packed shifts */
    1, {  27,  -1 } },                            /* packed shifts */
  { 2, {   8,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* float load indexed */
       {   2,   0,   0,   0,   0,   0,   0,   0 },/* float load indexed */
    1, {  26,  -1 } },                            /* float load indexed */
  { 3, {  26,   8,   8,  -1,  -1,  -1,  -1,  -1 },/* float store indexed */
       {   7,   2,   0,   0,   0,   0,   0,   0 },/* float store indexed */
    0, {  -1,  -1 } },                            /* float store indexed */
  { 2, {  26,  26,  -1,  -1,  -1,  -1,  -1,  -1 },/* float arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* float arithmetic */
    1, {  26,  -1 } },                            /* float arithmetic */
  { 1, {  30,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 float exchange */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* x87 float exchange */
    0, {  -1,  -1 } },                            /* x87 float exchange */
  { 2, {  30,  30,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 float arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* x87 float arithmetic */
    1, {  30,  -1 } },                            /* x87 float arithmetic */
  { 3, {  26,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* float arithmetic mem operand */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* float arithmetic mem operand */
    1, {  26,  -1 } },                            /* float arithmetic mem operand */
  { 5, {  26,   8,   8,   1,   4,  -1,  -1,  -1 },/* float arithmetic mem operand w/ scaled-index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* float arithmetic mem operand w/ scaled-index */
    1, {  26,  -1 } },                            /* float arithmetic mem operand w/ scaled-index */
  { 4, {  26,   8,   1,   4,  -1,  -1,  -1,  -1 },/* float arithmetic mem operand w/ scaled-index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* float arithmetic mem operand w/ scaled-index w/o base */
    1, {  26,  -1 } },                            /* float arithmetic mem operand w/ scaled-index w/o base */
  { 1, {  26,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* float unary arithmetic */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* float unary arithmetic */
    1, {  26,  -1 } },                            /* float unary arithmetic */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* float unary arithmetic extended */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* float unary arithmetic extended */
    1, {  27,  -1 } },                            /* float unary arithmetic extended */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* xmm to xmm */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* xmm to xmm */
    1, {  27,  -1 } },                            /* xmm to xmm */
  { 0, {  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 load const */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* x87 load const */
    1, {  30,  -1 } },                            /* x87 load const */
  { 1, {  30,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 to x87 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* x87 to x87 */
    1, {  30,  -1 } },                            /* x87 to x87 */
  { 3, {  26,  26,  26,  -1,  -1,  -1,  -1,  -1 },/* float madd */
       {   8,   9,  13,   0,   0,   0,   0,   0 },/* float madd */
    1, {  26,  -1 } },                            /* float madd */
  { 2, {  31,   7,  -1,  -1,  -1,  -1,  -1,  -1 },/* conditional jump */
       {   8,   6,   0,   0,   0,   0,   0,   0 },/* conditional jump */
    0, {  -1,  -1 } },                            /* conditional jump */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* pop32 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* pop32 */
    2, {   9,  23 } },                            /* pop32 */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* pop64 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* pop64 */
    2, {   8,  22 } },                            /* pop64 */
  { 2, {   9,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* push32 */
       {   8,   8,   0,   0,   0,   0,   0,   0 },/* push32 */
    1, {  23,  -1 } },                            /* push32 */
  { 2, {   8,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* push64 */
       {   8,   8,   0,   0,   0,   0,   0,   0 },/* push64 */
    1, {  22,  -1 } },                            /* push64 */
  { 2, {  11,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 compare/test with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int8 compare/test with simm */
    1, {  32,  -1 } },                            /* int8 compare/test with simm */
  { 2, {  10,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 compare/test with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int16 compare/test with simm */
    1, {  32,  -1 } },                            /* int16 compare/test with simm */
  { 2, {   9,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 compare/test with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int32 compare/test with simm */
    1, {  32,  -1 } },                            /* int32 compare/test with simm */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 compare/test with simm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int64 compare/test with simm */
    1, {  31,  -1 } },                            /* int64 compare/test with simm */
  { 3, {   8,   4,   4,  -1,  -1,  -1,  -1,  -1 },/* int compare/test with simm and mem opnd */
       {   2,   5,   9,   0,   0,   0,   0,   0 },/* int compare/test with simm and mem opnd */
    1, {  32,  -1 } },                            /* int compare/test with simm and mem opnd */
  { 3, {   8,   4,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 compare/test with simm and mem opnd */
       {   2,   5,   9,   0,   0,   0,   0,   0 },/* int64 compare/test with simm and mem opnd */
    1, {  31,  -1 } },                            /* int64 compare/test with simm and mem opnd */
  { 5, {   8,   8,   1,   4,   4,  -1,  -1,  -1 },/* int compare/test with simm and mem opnd scaled-index */
       {   2,   3,   4,   5,   9,   0,   0,   0 },/* int compare/test with simm and mem opnd scaled-index */
    1, {  32,  -1 } },                            /* int compare/test with simm and mem opnd scaled-index */
  { 5, {   8,   8,   1,   4,   4,  -1,  -1,  -1 },/* int64 compare/test with simm and mem opnd scaled-index */
       {   2,   3,   4,   5,   9,   0,   0,   0 },/* int64 compare/test with simm and mem opnd scaled-index */
    1, {  31,  -1 } },                            /* int64 compare/test with simm and mem opnd scaled-index */
  { 4, {   8,   1,   4,   4,  -1,  -1,  -1,  -1 },/* int compare/test with simm and mem opnd scaled-index w/o base */
       {   3,   4,   5,   9,   0,   0,   0,   0 },/* int compare/test with simm and mem opnd scaled-index w/o base */
    1, {  32,  -1 } },                            /* int compare/test with simm and mem opnd scaled-index w/o base */
  { 4, {   8,   1,   4,   4,  -1,  -1,  -1,  -1 },/* int64 compare/test with simm and mem opnd scaled-index w/o base */
       {   3,   4,   5,   9,   0,   0,   0,   0 },/* int64 compare/test with simm and mem opnd scaled-index w/o base */
    1, {  31,  -1 } },                            /* int64 compare/test with simm and mem opnd scaled-index w/o base */
  { 2, {  11,  11,  -1,  -1,  -1,  -1,  -1,  -1 },/* int8 compare/test */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int8 compare/test */
    1, {  32,  -1 } },                            /* int8 compare/test */
  { 2, {  10,  10,  -1,  -1,  -1,  -1,  -1,  -1 },/* int16 compare/test */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int16 compare/test */
    1, {  32,  -1 } },                            /* int16 compare/test */
  { 2, {   9,   9,  -1,  -1,  -1,  -1,  -1,  -1 },/* int32 compare/test */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int32 compare/test */
    1, {  32,  -1 } },                            /* int32 compare/test */
  { 2, {   8,   8,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 compare/test */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* int64 compare/test */
    1, {  31,  -1 } },                            /* int64 compare/test */
  { 3, {  11,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int8 compare/test mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int8 compare/test mem opnd */
    1, {  32,  -1 } },                            /* int8 compare/test mem opnd */
  { 3, {  10,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 compare/test mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int16 compare/test mem opnd */
    1, {  32,  -1 } },                            /* int16 compare/test mem opnd */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 compare/test mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int32 compare/test mem opnd */
    1, {  32,  -1 } },                            /* int32 compare/test mem opnd */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 compare/test mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int64 compare/test mem opnd */
    1, {  31,  -1 } },                            /* int64 compare/test mem opnd */
  { 5, {  11,   8,   8,   1,   4,  -1,  -1,  -1 },/* int8 compare/test mem opnd w/ scaled-index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int8 compare/test mem opnd w/ scaled-index */
    1, {  32,  -1 } },                            /* int8 compare/test mem opnd w/ scaled-index */
  { 5, {  10,   8,   8,   1,   4,  -1,  -1,  -1 },/* int16 compare/test mem opnd w/ scaled-index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int16 compare/test mem opnd w/ scaled-index */
    1, {  32,  -1 } },                            /* int16 compare/test mem opnd w/ scaled-index */
  { 5, {   9,   8,   8,   1,   4,  -1,  -1,  -1 },/* int32 compare/test mem opnd w/ scaled-index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int32 compare/test mem opnd w/ scaled-index */
    1, {  32,  -1 } },                            /* int32 compare/test mem opnd w/ scaled-index */
  { 5, {   8,   8,   8,   1,   4,  -1,  -1,  -1 },/* int64 compare/test mem opnd w/ scaled-index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* int64 compare/test mem opnd w/ scaled-index */
    1, {  31,  -1 } },                            /* int64 compare/test mem opnd w/ scaled-index */
  { 4, {  11,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int8 compare/test mem opnd w/ scaled-index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int8 compare/test mem opnd w/ scaled-index w/o base */
    1, {  32,  -1 } },                            /* int8 compare/test mem opnd w/ scaled-index w/o base */
  { 4, {  10,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int16 compare/test mem opnd w/ scaled-index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int16 compare/test mem opnd w/ scaled-index w/o base */
    1, {  32,  -1 } },                            /* int16 compare/test mem opnd w/ scaled-index w/o base */
  { 4, {   9,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int32 compare/test mem opnd w/ scaled-index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int32 compare/test mem opnd w/ scaled-index w/o base */
    1, {  32,  -1 } },                            /* int32 compare/test mem opnd w/ scaled-index w/o base */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 compare/test mem opnd w/ scaled-index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* int64 compare/test mem opnd w/ scaled-index w/o base */
    1, {  31,  -1 } },                            /* int64 compare/test mem opnd w/ scaled-index w/o base */
  { 3, {   8,   4,  11,  -1,  -1,  -1,  -1,  -1 },/* int8 compare/test mem opnd */
       {   2,   5,   8,   0,   0,   0,   0,   0 },/* int8 compare/test mem opnd */
    1, {  32,  -1 } },                            /* int8 compare/test mem opnd */
  { 3, {   8,   4,  10,  -1,  -1,  -1,  -1,  -1 },/* int16 compare/test mem opnd */
       {   2,   5,   8,   0,   0,   0,   0,   0 },/* int16 compare/test mem opnd */
    1, {  32,  -1 } },                            /* int16 compare/test mem opnd */
  { 3, {   8,   4,   9,  -1,  -1,  -1,  -1,  -1 },/* int32 compare/test mem opnd */
       {   2,   5,   8,   0,   0,   0,   0,   0 },/* int32 compare/test mem opnd */
    1, {  32,  -1 } },                            /* int32 compare/test mem opnd */
  { 3, {   8,   4,   8,  -1,  -1,  -1,  -1,  -1 },/* int64 compare/test mem opnd */
       {   2,   5,   8,   0,   0,   0,   0,   0 },/* int64 compare/test mem opnd */
    1, {  31,  -1 } },                            /* int64 compare/test mem opnd */
  { 5, {   8,   8,   1,   4,  11,  -1,  -1,  -1 },/* int8 compare/test mem opnd w/ scaled-index */
       {   2,   3,   4,   5,   8,   0,   0,   0 },/* int8 compare/test mem opnd w/ scaled-index */
    1, {  32,  -1 } },                            /* int8 compare/test mem opnd w/ scaled-index */
  { 5, {   8,   8,   1,   4,  10,  -1,  -1,  -1 },/* int16 compare/test mem opnd w/ scaled-index */
       {   2,   3,   4,   5,   8,   0,   0,   0 },/* int16 compare/test mem opnd w/ scaled-index */
    1, {  32,  -1 } },                            /* int16 compare/test mem opnd w/ scaled-index */
  { 5, {   8,   8,   1,   4,   9,  -1,  -1,  -1 },/* int32 compare/test mem opnd w/ scaled-index */
       {   2,   3,   4,   5,   8,   0,   0,   0 },/* int32 compare/test mem opnd w/ scaled-index */
    1, {  32,  -1 } },                            /* int32 compare/test mem opnd w/ scaled-index */
  { 5, {   8,   8,   1,   4,   8,  -1,  -1,  -1 },/* int64 compare/test mem opnd w/ scaled-index */
       {   2,   3,   4,   5,   8,   0,   0,   0 },/* int64 compare/test mem opnd w/ scaled-index */
    1, {  31,  -1 } },                            /* int64 compare/test mem opnd w/ scaled-index */
  { 4, {   8,   1,   4,  11,  -1,  -1,  -1,  -1 },/* int8 compare/test mem opnd w/ scaled-index w/o base */
       {   3,   4,   5,   8,   0,   0,   0,   0 },/* int8 compare/test mem opnd w/ scaled-index w/o base */
    1, {  32,  -1 } },                            /* int8 compare/test mem opnd w/ scaled-index w/o base */
  { 4, {   8,   1,   4,  10,  -1,  -1,  -1,  -1 },/* int16 compare/test mem opnd w/ scaled-index w/o base */
       {   3,   4,   5,   8,   0,   0,   0,   0 },/* int16 compare/test mem opnd w/ scaled-index w/o base */
    1, {  32,  -1 } },                            /* int16 compare/test mem opnd w/ scaled-index w/o base */
  { 4, {   8,   1,   4,   9,  -1,  -1,  -1,  -1 },/* int32 compare/test mem opnd w/ scaled-index w/o base */
       {   3,   4,   5,   8,   0,   0,   0,   0 },/* int32 compare/test mem opnd w/ scaled-index w/o base */
    1, {  32,  -1 } },                            /* int32 compare/test mem opnd w/ scaled-index w/o base */
  { 4, {   8,   1,   4,   8,  -1,  -1,  -1,  -1 },/* int64 compare/test mem opnd w/ scaled-index w/o base */
       {   3,   4,   5,   8,   0,   0,   0,   0 },/* int64 compare/test mem opnd w/ scaled-index w/o base */
    1, {  31,  -1 } },                            /* int64 compare/test mem opnd w/ scaled-index w/o base */
  { 2, {  26,  26,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp ordered compare */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* fp ordered compare */
    1, {  31,  -1 } },                            /* fp ordered compare */
  { 3, {  26,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* fp ordered compare mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* fp ordered compare mem opnd */
    1, {  31,  -1 } },                            /* fp ordered compare mem opnd */
  { 5, {  26,   8,   8,   1,   4,  -1,  -1,  -1 },/* fp ordered compare mem opnd w/ scaled-index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* fp ordered compare mem opnd w/ scaled-index */
    1, {  31,  -1 } },                            /* fp ordered compare mem opnd w/ scaled-index */
  { 4, {  26,   8,   1,   4,  -1,  -1,  -1,  -1 },/* fp ordered compare mem opnd w/ scaled-index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* fp ordered compare mem opnd w/ scaled-index w/o base */
    1, {  31,  -1 } },                            /* fp ordered compare mem opnd w/ scaled-index w/o base */
  { 2, {  30,  30,  -1,  -1,  -1,  -1,  -1,  -1 },/* x87 fp compare */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* x87 fp compare */
    1, {  31,  -1 } },                            /* x87 fp compare */
  { 3, {  26,  26,   0,  -1,  -1,  -1,  -1,  -1 },/* fp compare */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* fp compare */
    1, {  26,  -1 } },                            /* fp compare */
  { 2, {  26,  26,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp compare I */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* fp compare I */
    1, {  26,  -1 } },                            /* fp compare I */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector ptest reg */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* vector ptest reg */
    1, {  31,  -1 } },                            /* vector ptest reg */
  { 3, {  27,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* vector ptest mem opnd */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* vector ptest mem opnd */
    1, {  31,  -1 } },                            /* vector ptest mem opnd */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* vector ptest mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* vector ptest mem opnd w/ scaled index */
    1, {  31,  -1 } },                            /* vector ptest mem opnd w/ scaled index */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* vector ptest mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* vector ptest mem opnd w/ scaled index w/o base */
    1, {  31,  -1 } },                            /* vector ptest mem opnd w/ scaled index w/o base */
  { 3, {  27,  27,   0,  -1,  -1,  -1,  -1,  -1 },/* fp vector compare */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* fp vector compare */
    1, {  27,  -1 } },                            /* fp vector compare */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp vector compare I */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* fp vector compare I */
    1, {  27,  -1 } },                            /* fp vector compare I */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* load32 effective addr */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* load32 effective addr */
    1, {   9,  -1 } },                            /* load32 effective addr */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* load64 effective addr */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* load64 effective addr */
    1, {   8,  -1 } },                            /* load64 effective addr */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* load32 effective addr w/ indx */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* load32 effective addr w/ indx */
    1, {   9,  -1 } },                            /* load32 effective addr w/ indx */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* load64 effective addr w/ indx */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* load64 effective addr w/ indx */
    1, {   8,  -1 } },                            /* load64 effective addr w/ indx */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* load32 effective addr w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* load32 effective addr w/ indx w/o base */
    1, {   9,  -1 } },                            /* load32 effective addr w/ indx w/o base */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* load64 effective addr w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* load64 effective addr w/ indx w/o base */
    1, {   8,  -1 } },                            /* load64 effective addr w/ indx w/o base */
  { 4, {   8,   4,   8,   1,  -1,  -1,  -1,  -1 },/* int32 load w/ indx */
       {   2,   5,   3,   4,   0,   0,   0,   0 },/* int32 load w/ indx */
    1, {   9,  -1 } },                            /* int32 load w/ indx */
  { 4, {   8,   4,   8,   1,  -1,  -1,  -1,  -1 },/* int64 load w/ indx */
       {   2,   5,   3,   4,   0,   0,   0,   0 },/* int64 load w/ indx */
    1, {   8,  -1 } },                            /* int64 load w/ indx */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 load w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int32 load w/ indx w/o base */
    1, {   9,  -1 } },                            /* int32 load w/ indx w/o base */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 load w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int64 load w/ indx w/o base */
    1, {   8,  -1 } },                            /* int64 load w/ indx w/o base */
  { 5, {  11,   8,   4,   8,   1,  -1,  -1,  -1 },/* int8 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* int8 store w/ indx */
    0, {  -1,  -1 } },                            /* int8 store w/ indx */
  { 5, {  10,   8,   4,   8,   1,  -1,  -1,  -1 },/* int16 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* int16 store w/ indx */
    0, {  -1,  -1 } },                            /* int16 store w/ indx */
  { 5, {   9,   8,   4,   8,   1,  -1,  -1,  -1 },/* int32 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* int32 store w/ indx */
    0, {  -1,  -1 } },                            /* int32 store w/ indx */
  { 5, {   8,   8,   4,   8,   1,  -1,  -1,  -1 },/* int64 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* int64 store w/ indx */
    0, {  -1,  -1 } },                            /* int64 store w/ indx */
  { 5, {   0,   8,   4,   8,   1,  -1,  -1,  -1 },/* imm8 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* imm8 store w/ indx */
    0, {  -1,  -1 } },                            /* imm8 store w/ indx */
  { 5, {   2,   8,   4,   8,   1,  -1,  -1,  -1 },/* imm16 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* imm16 store w/ indx */
    0, {  -1,  -1 } },                            /* imm16 store w/ indx */
  { 5, {   4,   8,   4,   8,   1,  -1,  -1,  -1 },/* imm32 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* imm32 store w/ indx */
    0, {  -1,  -1 } },                            /* imm32 store w/ indx */
  { 5, {   6,   8,   4,   8,   1,  -1,  -1,  -1 },/* imm64 store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* imm64 store w/ indx */
    0, {  -1,  -1 } },                            /* imm64 store w/ indx */
  { 4, {  11,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int8 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* int8 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* int8 store w/ indx w/o base */
  { 4, {  10,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int16 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* int16 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* int16 store w/ indx w/o base */
  { 4, {   9,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int32 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* int32 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* int32 store w/ indx w/o base */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* int64 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* int64 store w/ indx w/o base */
  { 4, {   0,   8,   1,   4,  -1,  -1,  -1,  -1 },/* imm8 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* imm8 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* imm8 store w/ indx w/o base */
  { 4, {   2,   8,   1,   4,  -1,  -1,  -1,  -1 },/* imm16 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* imm16 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* imm16 store w/ indx w/o base */
  { 4, {   4,   8,   1,   4,  -1,  -1,  -1,  -1 },/* imm32 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* imm32 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* imm32 store w/ indx w/o base */
  { 4, {   6,   8,   1,   4,  -1,  -1,  -1,  -1 },/* imm64 store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* imm64 store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* imm64 store w/ indx w/o base */
  { 4, {   8,   4,   8,   1,  -1,  -1,  -1,  -1 },/* fp load w/ indx */
       {   2,   5,   3,   4,   0,   0,   0,   0 },/* fp load w/ indx */
    1, {  26,  -1 } },                            /* fp load w/ indx */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* fp convert w/ indx */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* fp convert w/ indx */
    1, {  26,  -1 } },                            /* fp convert w/ indx */
  { 5, {  27,   8,   8,   1,   4,  -1,  -1,  -1 },/* avx fp convert w/ indx */
       {   8,   2,   3,   4,   5,   0,   0,   0 },/* avx fp convert w/ indx */
    1, {  27,  -1 } },                            /* avx fp convert w/ indx */
  { 4, {   8,   4,   8,   1,  -1,  -1,  -1,  -1 },/* fp load vector w/ indx */
       {   2,   5,   3,   4,   0,   0,   0,   0 },/* fp load vector w/ indx */
    1, {  27,  -1 } },                            /* fp load vector w/ indx */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* fp load w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* fp load w/ indx w/o base */
    1, {  26,  -1 } },                            /* fp load w/ indx w/o base */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* fp convert w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* fp convert w/ indx w/o base */
    1, {  26,  -1 } },                            /* fp convert w/ indx w/o base */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* avx fp convert w/ indx w/o base */
       {   8,   3,   4,   5,   0,   0,   0,   0 },/* avx fp convert w/ indx w/o base */
    1, {  27,  -1 } },                            /* avx fp convert w/ indx w/o base */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* fp load vector w/ indx w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* fp load vector w/ indx w/o base */
    1, {  27,  -1 } },                            /* fp load vector w/ indx w/o base */
  { 5, {  26,   8,   4,   8,   1,  -1,  -1,  -1 },/* fp store w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* fp store w/ indx */
    0, {  -1,  -1 } },                            /* fp store w/ indx */
  { 5, {  27,   8,   4,   8,   1,  -1,  -1,  -1 },/* fp store vector w/ indx */
       {   7,   2,   5,   3,   4,   0,   0,   0 },/* fp store vector w/ indx */
    0, {  -1,  -1 } },                            /* fp store vector w/ indx */
  { 4, {  26,   8,   1,   4,  -1,  -1,  -1,  -1 },/* fp store w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* fp store w/ indx w/o base */
    0, {  -1,  -1 } },                            /* fp store w/ indx w/o base */
  { 4, {  27,   8,   1,   4,  -1,  -1,  -1,  -1 },/* fp store vector w/ indx w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* fp store vector w/ indx w/o base */
    0, {  -1,  -1 } },                            /* fp store vector w/ indx w/o base */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* load mxcsr */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* load mxcsr */
    1, {  35,  -1 } },                            /* load mxcsr */
  { 3, {  35,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* store mxcsr */
       {   0,   2,   5,   0,   0,   0,   0,   0 },/* store mxcsr */
    0, {  -1,  -1 } },                            /* store mxcsr */
  { 1, {   7,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* jump */
       {   6,   0,   0,   0,   0,   0,   0,   0 },/* jump */
    0, {  -1,  -1 } },                            /* jump */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* jump register */
       {   6,   0,   0,   0,   0,   0,   0,   0 },/* jump register */
    0, {  -1,  -1 } },                            /* jump register */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* jump mem */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* jump mem */
    0, {  -1,  -1 } },                            /* jump mem */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* jump mem w/ scaled index */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* jump mem w/ scaled index */
    0, {  -1,  -1 } },                            /* jump mem w/ scaled index */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* jump mem w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* jump mem w/ scaled index w/o base */
    0, {  -1,  -1 } },                            /* jump mem w/ scaled index w/o base */
  { 1, {   7,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* label */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* label */
    0, {  -1,  -1 } },                            /* label */
  { 2, {   8,   2,  -1,  -1,  -1,  -1,  -1,  -1 },/* spadjust */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* spadjust */
    1, {   8,  -1 } },                            /* spadjust */
  { 6, {  12,   1,   8,   4,   7,  25,  -1,  -1 },/* savexmms */
       {   8,   0,   2,   5,   6,   0,   0,   0 },/* savexmms */
    0, {  -1,  -1 } },                            /* savexmms */
  { 1, {   3,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* intrncall */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* intrncall */
    1, {   8,  -1 } },                            /* intrncall */
  { 1, {   3,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* pregtn tuple */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* pregtn tuple */
    1, {   8,  -1 } },                            /* pregtn tuple */
  { 1, {  24,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* leave */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* leave */
    1, {  22,  -1 } },                            /* leave */
  { 0, {  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* zero32 */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* zero32 */
    1, {   9,  -1 } },                            /* zero32 */
  { 0, {  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* zero64 */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* zero64 */
    1, {   8,  -1 } },                            /* zero64 */
  { 0, {  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* xzero */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* xzero */
    1, {  26,  -1 } },                            /* xzero */
  { 0, {  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* xzerov */
       {   0,   0,   0,   0,   0,   0,   0,   0 },/* xzerov */
    1, {  27,  -1 } },                            /* xzerov */
  { 3, {  11,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int8 arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int8 arithmetic lock */
    0, {  -1,  -1 } },                            /* int8 arithmetic lock */
  { 3, {  10,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int16 arithmetic lock */
    0, {  -1,  -1 } },                            /* int16 arithmetic lock */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int32 arithmetic lock */
    0, {  -1,  -1 } },                            /* int32 arithmetic lock */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int64 arithmetic lock */
    0, {  -1,  -1 } },                            /* int64 arithmetic lock */
  { 4, {  13,  11,   8,   4,  -1,  -1,  -1,  -1 },/* int8 compare & exchange mem opnd lock */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* int8 compare & exchange mem opnd lock */
    2, {  32,  13 } },                            /* int8 compare & exchange mem opnd lock */
  { 4, {  13,  10,   8,   4,  -1,  -1,  -1,  -1 },/* int16 compare & exchange mem opnd lock */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* int16 compare & exchange mem opnd lock */
    2, {  32,  13 } },                            /* int16 compare & exchange mem opnd lock */
  { 4, {  13,   9,   8,   4,  -1,  -1,  -1,  -1 },/* int32 compare & exchange mem opnd lock */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* int32 compare & exchange mem opnd lock */
    2, {  32,  13 } },                            /* int32 compare & exchange mem opnd lock */
  { 4, {  12,   8,   8,   4,  -1,  -1,  -1,  -1 },/* int64 compare & exchange mem opnd lock */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* int64 compare & exchange mem opnd lock */
    2, {  31,  12 } },                            /* int64 compare & exchange mem opnd lock */
  { 3, {  11,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int8 exchange arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int8 exchange arithmetic lock */
    1, {  11,  -1 } },                            /* int8 exchange arithmetic lock */
  { 3, {  10,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int16 exchange arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int16 exchange arithmetic lock */
    1, {  10,  -1 } },                            /* int16 exchange arithmetic lock */
  { 3, {   9,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int32 exchange arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int32 exchange arithmetic lock */
    1, {   9,  -1 } },                            /* int32 exchange arithmetic lock */
  { 3, {   8,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 exchange arithmetic lock */
       {   8,   2,   5,   0,   0,   0,   0,   0 },/* int64 exchange arithmetic lock */
    1, {   8,  -1 } },                            /* int64 exchange arithmetic lock */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* bsf32 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* bsf32 */
    1, {   9,  -1 } },                            /* bsf32 */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* bsf64 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* bsf64 */
    1, {   8,  -1 } },                            /* bsf64 */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load to mmx */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int64 load to mmx */
    1, {  34,  -1 } },                            /* int64 load to mmx */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load to mmx w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int64 load to mmx w/o base or index */
    1, {  34,  -1 } },                            /* int64 load to mmx w/o base or index */
  { 3, {  34,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 store from mmx */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* int64 store from mmx */
    0, {  -1,  -1 } },                            /* int64 store from mmx */
  { 2, {  34,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 store from mmx w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int64 store from mmx w/o base or index */
    0, {  -1,  -1 } },                            /* int64 store from mmx w/o base or index */
  { 1, {  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 mov between mmx */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* int64 mov between mmx */
    1, {  34,  -1 } },                            /* int64 mov between mmx */
  { 1, {  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mmx packed move */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mmx packed move */
    1, {   9,  -1 } },                            /* mmx packed move */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* sse packed move */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* sse packed move */
    1, {   9,  -1 } },                            /* sse packed move */
  { 2, {  34,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* packed word modification */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* packed word modification */
    1, {   9,  -1 } },                            /* packed word modification */
  { 2, {   9,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* packed word insertion */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* packed word insertion */
    1, {  34,  -1 } },                            /* packed word insertion */
  { 2, {  34,  34,  -1,  -1,  -1,  -1,  -1,  -1 },/* mmx vector arithmetic */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* mmx vector arithmetic */
    1, {  34,  -1 } },                            /* mmx vector arithmetic */
  { 2, {  34,   1,  -1,  -1,  -1,  -1,  -1,  -1 },/* MMX shuffle-int */
       {   8,  10,   0,   0,   0,   0,   0,   0 },/* MMX shuffle-int */
    1, {  34,  -1 } },                            /* MMX shuffle-int */
  { 1, {   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mov int32 2 mmx */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mov int32 2 mmx */
    1, {  34,  -1 } },                            /* mov int32 2 mmx */
  { 1, {   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mov int64 2 mmx */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mov int64 2 mmx */
    1, {  34,  -1 } },                            /* mov int64 2 mmx */
  { 1, {  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mov mmx 2 int32 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mov mmx 2 int32 */
    1, {   9,  -1 } },                            /* mov mmx 2 int32 */
  { 1, {  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mov mmx 2 int64 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mov mmx 2 int64 */
    1, {   8,  -1 } },                            /* mov mmx 2 int64 */
  { 1, {  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mov mmx 2 sse */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mov mmx 2 sse */
    1, {  26,  -1 } },                            /* mov mmx 2 sse */
  { 1, {  26,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* mov sse 2 mmx */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* mov sse 2 mmx */
    1, {  34,  -1 } },                            /* mov sse 2 mmx */
  { 2, {  34,  34,  -1,  -1,  -1,  -1,  -1,  -1 },/* packed mmx arith */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* packed mmx arith */
    1, {  34,  -1 } },                            /* packed mmx arith */
  { 2, {  34,   0,  -1,  -1,  -1,  -1,  -1,  -1 },/* packed mmx imm arith */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* packed mmx imm arith */
    1, {  34,  -1 } },                            /* packed mmx imm arith */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt sse ps/pd 2 mmx pi */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector cvt sse ps/pd 2 mmx pi */
    1, {  34,  -1 } },                            /* vector cvt sse ps/pd 2 mmx pi */
  { 1, {  34,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* vector cvt mmx pi 2 sse ps/pd */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* vector cvt mmx pi 2 sse ps/pd */
    1, {  27,  -1 } },                            /* vector cvt mmx pi 2 sse ps/pd */
  { 2, {   8,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load to sse */
       {   2,   5,   0,   0,   0,   0,   0,   0 },/* int64 load to sse */
    1, {  26,  -1 } },                            /* int64 load to sse */
  { 4, {   8,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 load to sse w/ scaled index w/ base */
       {   2,   3,   4,   5,   0,   0,   0,   0 },/* int64 load to sse w/ scaled index w/ base */
    1, {  26,  -1 } },                            /* int64 load to sse w/ scaled index w/ base */
  { 3, {   8,   1,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 load to sse w/ scaled index w/o base */
       {   3,   4,   5,   0,   0,   0,   0,   0 },/* int64 load to sse w/ scaled index w/o base */
    1, {  26,  -1 } },                            /* int64 load to sse w/ scaled index w/o base */
  { 1, {   4,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 load to sse w/o base or index */
       {   5,   0,   0,   0,   0,   0,   0,   0 },/* int64 load to sse w/o base or index */
    1, {  26,  -1 } },                            /* int64 load to sse w/o base or index */
  { 3, {  26,   8,   4,  -1,  -1,  -1,  -1,  -1 },/* int64 store from sse */
       {   7,   2,   5,   0,   0,   0,   0,   0 },/* int64 store from sse */
    0, {  -1,  -1 } },                            /* int64 store from sse */
  { 5, {  26,   8,   8,   1,   4,  -1,  -1,  -1 },/* int64 store from sse w/ scaled index w/ base */
       {   7,   2,   3,   4,   5,   0,   0,   0 },/* int64 store from sse w/ scaled index w/ base */
    0, {  -1,  -1 } },                            /* int64 store from sse w/ scaled index w/ base */
  { 4, {  26,   8,   1,   4,  -1,  -1,  -1,  -1 },/* int64 store from sse w/ scaled index w/o base */
       {   7,   3,   4,   5,   0,   0,   0,   0 },/* int64 store from sse w/ scaled index w/o base */
    0, {  -1,  -1 } },                            /* int64 store from sse w/ scaled index w/o base */
  { 2, {  26,   4,  -1,  -1,  -1,  -1,  -1,  -1 },/* int64 store from sse w/o base or index */
       {   7,   5,   0,   0,   0,   0,   0,   0 },/* int64 store from sse w/o base or index */
    0, {  -1,  -1 } },                            /* int64 store from sse w/o base or index */
  { 1, {  27,  -1,  -1,  -1,  -1,  -1,  -1,  -1 },/* fp128 2 int32 */
       {   8,   0,   0,   0,   0,   0,   0,   0 },/* fp128 2 int32 */
    1, {   9,  -1 } },                            /* fp128 2 int32 */
  { 2, {  34,  34,  -1,  -1,  -1,  -1,  -1,  -1 },/* maskmov mmx */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* maskmov mmx */
    0, {  -1,  -1 } },                            /* maskmov mmx */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* maskmov sse */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* maskmov sse */
    0, {  -1,  -1 } },                            /* maskmov sse */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* extract field xmm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* extract field xmm */
    1, {  27,  -1 } },                            /* extract field xmm */
  { 2, {  27,  27,  -1,  -1,  -1,  -1,  -1,  -1 },/* insert field xmm */
       {   8,   9,   0,   0,   0,   0,   0,   0 },/* insert field xmm */
    1, {  27,  -1 } },                            /* insert field xmm */
  { 3, {   4,   8,   7,  -1,  -1,  -1,  -1,  -1 },/* tls_get_addr_64 */
       {   5,   2,   6,   0,   0,   0,   0,   0 },/* tls_get_addr_64 */
    1, {  20,  -1 } },                            /* tls_get_addr_64 */
  { 3, {   4,   9,   7,  -1,  -1,  -1,  -1,  -1 },/* tls_get_addr_32 */
       {   5,   2,   6,   0,   0,   0,   0,   0 },/* tls_get_addr_32 */
    0, {  -1,  -1 } },                            /* tls_get_addr_32 */
  { 3, {  27,  27,  27,  -1,  -1,  -1,  -1,  -1 },/* vector fma4 xmm xmm xmm */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* vector fma4 xmm xmm xmm */
    1, {  27,  -1 } },                            /* vector fma4 xmm xmm xmm */
  { 4, {  27,  27,   8,   4,  -1,  -1,  -1,  -1 },/* vector fma4 xmm xmm mem opnd */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* vector fma4 xmm xmm mem opnd */
    1, {  27,  -1 } },                            /* vector fma4 xmm xmm mem opnd */
  { 6, {  27,  27,   8,   8,   1,   4,  -1,  -1 },/* vector fma4 xmm xmm mem opnd w/ scaled index */
       {   8,   9,   2,   3,   4,   5,   0,   0 },/* vector fma4 xmm xmm mem opnd w/ scaled index */
    1, {  27,  -1 } },                            /* vector fma4 xmm xmm mem opnd w/ scaled index */
  { 5, {  27,  27,   8,   1,   4,  -1,  -1,  -1 },/* vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
       {   8,   9,   3,   4,   5,   0,   0,   0 },/* vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  { 4, {  27,   8,   4,  27,  -1,  -1,  -1,  -1 },/* vector fma4 xmm mem opnd xmm */
       {   8,   2,   5,   9,   0,   0,   0,   0 },/* vector fma4 xmm mem opnd xmm */
    1, {  27,  -1 } },                            /* vector fma4 xmm mem opnd xmm */
  { 6, {  27,   8,   8,   1,   4,  27,  -1,  -1 },/* vector fma4 xmm mem opnd w/ scaled index xmm */
       {   8,   2,   3,   4,   5,   9,   0,   0 },/* vector fma4 xmm mem opnd w/ scaled index xmm */
    1, {  27,  -1 } },                            /* vector fma4 xmm mem opnd w/ scaled index xmm */
  { 5, {  27,   8,   1,   4,  27,  -1,  -1,  -1 },/* vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
       {   8,   3,   4,   5,   9,   0,   0,   0 },/* vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
    1, {  27,  -1 } },                            /* vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  { 3, {  27,  27,  27,  -1,  -1,  -1,  -1,  -1 },/* avx fma reg */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* avx fma reg */
    1, {  27,  -1 } },                            /* avx fma reg */
  { 4, {  27,  27,   8,   4,  -1,  -1,  -1,  -1 },/* avx fma mem opnd */
       {   8,   9,   2,   5,   0,   0,   0,   0 },/* avx fma mem opnd */
    1, {  27,  -1 } },                            /* avx fma mem opnd */
  { 6, {  27,  27,   8,   8,   1,   4,  -1,  -1 },/* avx fma mem opnd w/ scaled index */
       {   8,   9,   2,   3,   4,   5,   0,   0 },/* avx fma mem opnd w/ scaled index */
    1, {  27,  -1 } },                            /* avx fma mem opnd w/ scaled index */
  { 5, {  27,  27,   8,   1,   4,  -1,  -1,  -1 },/* avx fma mem opnd w/ scaled index w/o base */
       {   8,   9,   3,   4,   5,   0,   0,   0 },/* avx fma mem opnd w/ scaled index w/o base */
    1, {  27,  -1 } },                            /* avx fma mem opnd w/ scaled index w/o base */
  { 5, {  27,  13,  27,  17,   0,  -1,  -1,  -1 },/* pcmpestri reg */
       {   8,   9,  10,  11,  12,   0,   0,   0 },/* pcmpestri reg */
    2, {  18,  31 } },                            /* pcmpestri reg */
  { 6, {  27,  13,   8,   4,  17,   0,  -1,  -1 },/* pcmpestri mem opnd */
       {   8,   9,   2,   5,  11,  12,   0,   0 },/* pcmpestri mem opnd */
    2, {  18,  31 } },                            /* pcmpestri mem opnd */
  { 8, {  27,  13,   8,   8,   1,   4,  17,   0 },/* pcmpestri mem opnd w/ scaled index */
       {   8,   9,   2,   3,   4,   5,  11,  12 },/* pcmpestri mem opnd w/ scaled index */
    2, {  18,  31 } },                            /* pcmpestri mem opnd w/ scaled index */
  { 7, {  27,  13,   8,   1,   4,  17,   0,  -1 },/* pcmpestri mem opnd w/ scaled index w/o base */
       {   8,   9,   3,   4,   5,  11,  12,   0 },/* pcmpestri mem opnd w/ scaled index w/o base */
    2, {  18,  31 } },                            /* pcmpestri mem opnd w/ scaled index w/o base */
  { 5, {  27,  13,  27,  17,   0,  -1,  -1,  -1 },/* pcmpestrm reg */
       {   8,   9,  10,  11,  12,   0,   0,   0 },/* pcmpestrm reg */
    2, {  29,  31 } },                            /* pcmpestrm reg */
  { 6, {  27,  13,   8,   4,  17,   0,  -1,  -1 },/* pcmpestrm mem opnd */
       {   8,   9,   2,   5,  11,  12,   0,   0 },/* pcmpestrm mem opnd */
    2, {  29,  31 } },                            /* pcmpestrm mem opnd */
  { 8, {  27,  13,   8,   8,   1,   4,  17,   0 },/* pcmpestrm mem opnd w/ scaled index */
       {   8,   9,   2,   3,   4,   5,  11,  12 },/* pcmpestrm mem opnd w/ scaled index */
    2, {  29,  31 } },                            /* pcmpestrm mem opnd w/ scaled index */
  { 7, {  27,  13,   8,   1,   4,  17,   0,  -1 },/* pcmpestrm mem opnd w/ scaled index w/o base */
       {   8,   9,   3,   4,   5,  11,  12,   0 },/* pcmpestrm mem opnd w/ scaled index w/o base */
    2, {  29,  31 } },                            /* pcmpestrm mem opnd w/ scaled index w/o base */
  { 3, {  27,  27,   0,  -1,  -1,  -1,  -1,  -1 },/* pcmpistri reg */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* pcmpistri reg */
    2, {  18,  31 } },                            /* pcmpistri reg */
  { 4, {  27,   8,   4,   0,  -1,  -1,  -1,  -1 },/* pcmpistri mem opnd */
       {   8,   2,   5,  10,   0,   0,   0,   0 },/* pcmpistri mem opnd */
    2, {  18,  31 } },                            /* pcmpistri mem opnd */
  { 6, {  27,   8,   8,   1,   4,   0,  -1,  -1 },/* pcmpistri mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,  10,   0,   0 },/* pcmpistri mem opnd w/ scaled index */
    2, {  18,  31 } },                            /* pcmpistri mem opnd w/ scaled index */
  { 5, {  27,   8,   1,   4,   0,  -1,  -1,  -1 },/* pcmpistri mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,  10,   0,   0,   0 },/* pcmpistri mem opnd w/ scaled index w/o base */
    2, {  18,  31 } },                            /* pcmpistri mem opnd w/ scaled index w/o base */
  { 3, {  27,  27,   0,  -1,  -1,  -1,  -1,  -1 },/* pcmpistrm reg */
       {   8,   9,  10,   0,   0,   0,   0,   0 },/* pcmpistrm reg */
    2, {  29,  31 } },                            /* pcmpistrm reg */
  { 4, {  27,   8,   4,   0,  -1,  -1,  -1,  -1 },/* pcmpistrm mem opnd */
       {   8,   2,   5,  10,   0,   0,   0,   0 },/* pcmpistrm mem opnd */
    2, {  29,  31 } },                            /* pcmpistrm mem opnd */
  { 6, {  27,   8,   8,   1,   4,   0,  -1,  -1 },/* pcmpistrm mem opnd w/ scaled index */
       {   8,   2,   3,   4,   5,  10,   0,   0 },/* pcmpistrm mem opnd w/ scaled index */
    2, {  29,  31 } },                            /* pcmpistrm mem opnd w/ scaled index */
  { 5, {  27,   8,   1,   4,   0,  -1,  -1,  -1 },/* pcmpistrm mem opnd w/ scaled index w/o base */
       {   8,   3,   4,   5,  10,   0,   0,   0 },/* pcmpistrm mem opnd w/ scaled index w/o base */
    2, {  29,  31 } },                            /* pcmpistrm mem opnd w/ scaled index w/o base */
};

const mUINT16 ISA_OPERAND_info_index[] = {
    7,  /* add8: int8 arithmetic */
    8,  /* add16: int16 arithmetic */
    9,  /* add32: int32 arithmetic */
    9,  /* adc32: int32 arithmetic */
   10,  /* add64: int64 arithmetic */
   99,  /* addx32: int32 arithmetic mem opnd */
  127,  /* addxx32: int32 arithmetic mem opnd w/ scaled index */
  131,  /* addxxx32: int32 arithmetic mem opnd w/ scaled index w/o base */
  100,  /* addx64: int64 arithmetic mem opnd */
  128,  /* addxx64: int64 arithmetic mem opnd w/ scaled index */
  132,  /* addxxx64: int64 arithmetic mem opnd w/ scaled index w/o base */
  137,  /* addi8: int8 arithmetic with simm */
  138,  /* addi16: int16 arithmetic with simm */
  139,  /* addi32: int32 arithmetic with simm */
  139,  /* adci32: int32 arithmetic with simm */
  140,  /* addi64: int64 arithmetic with simm */
  105,  /* addxr8: int8 arithmetic mem res */
  109,  /* addxxr8: int8 arithmetic index w/ base res */
  113,  /* addxxxr8: int8 arithmetic index w/o base res */
  117,  /* addxr8_n32: int8 arithmetic n32 res */
  106,  /* addxr16: int16 arithmetic mem res */
  110,  /* addxxr16: int16 arithmetic index w/ base res */
  114,  /* addxxxr16: int16 arithmetic index w/o base res */
  118,  /* addxr16_n32: int16 arithmetic n32 res */
  107,  /* addxr32: int32 arithmetic mem res */
  111,  /* addxxr32: int32 arithmetic index w/ base res */
  115,  /* addxxxr32: int32 arithmetic index w/o base res */
  119,  /* addxr32_n32: int32 arithmetic n32 res */
  108,  /* addxr64: int64 arithmetic mem res */
  112,  /* addxxr64: int64 arithmetic index w/ base res */
  116,  /* addxxxr64: int64 arithmetic index w/o base res */
  120,  /* addxr64_off: int64 arithmetic 64bit offset */
  121,  /* addixr8: int32/64 arithmetic mem imm */
  122,  /* addixxr8: int32/64 arithmetic index w/ base imm */
  123,  /* addixxxr8: int32/64 arithmetic index w/o base imm */
  124,  /* addixr8_n32: int32 arithmetic n32 imm */
  121,  /* addixr16: int32/64 arithmetic mem imm */
  122,  /* addixxr16: int32/64 arithmetic index w/ base imm */
  123,  /* addixxxr16: int32/64 arithmetic index w/o base imm */
  124,  /* addixr16_n32: int32 arithmetic n32 imm */
  121,  /* addixr32: int32/64 arithmetic mem imm */
  122,  /* addixxr32: int32/64 arithmetic index w/ base imm */
  123,  /* addixxxr32: int32/64 arithmetic index w/o base imm */
  124,  /* addixr32_n32: int32 arithmetic n32 imm */
  121,  /* addixr64: int32/64 arithmetic mem imm */
  122,  /* addixxr64: int32/64 arithmetic index w/ base imm */
  123,  /* addixxxr64: int32/64 arithmetic index w/o base imm */
  124,  /* addixr64_off: int32 arithmetic n32 imm */
   57,  /* add128v8: vector arithmetic */
   58,  /* addx128v8: vector arithmetic mem opnd */
   59,  /* addxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* addxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* add128v16: vector arithmetic */
   58,  /* addx128v16: vector arithmetic mem opnd */
   59,  /* addxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* addxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* add128v32: vector arithmetic */
   58,  /* addx128v32: vector arithmetic mem opnd */
   59,  /* addxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* addxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* add128v64: vector arithmetic */
   58,  /* addx128v64: vector arithmetic mem opnd */
   59,  /* addxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* addxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  400,  /* add64v8: mmx vector arithmetic */
  400,  /* add64v16: mmx vector arithmetic */
  400,  /* add64v32: mmx vector arithmetic */
  400,  /* paddsb: mmx vector arithmetic */
  400,  /* paddsw: mmx vector arithmetic */
  400,  /* paddq: mmx vector arithmetic */
  400,  /* psubsb: mmx vector arithmetic */
  400,  /* psubsw: mmx vector arithmetic */
  400,  /* psubq: mmx vector arithmetic */
  400,  /* paddusb: mmx vector arithmetic */
  400,  /* paddusw: mmx vector arithmetic */
  400,  /* psubusb: mmx vector arithmetic */
  400,  /* psubusw: mmx vector arithmetic */
  400,  /* pmullw: mmx vector arithmetic */
  400,  /* pmulhw: mmx vector arithmetic */
  400,  /* pmulhuw: mmx vector arithmetic */
  400,  /* pmuludq: mmx vector arithmetic */
  400,  /* pmaddwd: mmx vector arithmetic */
   57,  /* paddsb128: vector arithmetic */
   57,  /* paddsw128: vector arithmetic */
   57,  /* paddq128: vector arithmetic */
   57,  /* psubsb128: vector arithmetic */
   57,  /* psubsw128: vector arithmetic */
   57,  /* psubq128: vector arithmetic */
   57,  /* paddusb128: vector arithmetic */
   57,  /* paddusw128: vector arithmetic */
   57,  /* psubusb128: vector arithmetic */
   57,  /* psubusw128: vector arithmetic */
   57,  /* pmullw128: vector arithmetic */
   57,  /* pmulhw128: vector arithmetic */
   57,  /* pmulhuw128: vector arithmetic */
   57,  /* pmuludq128: vector arithmetic */
   57,  /* pmaddwd128: vector arithmetic */
    7,  /* and8: int8 arithmetic */
    8,  /* and16: int16 arithmetic */
    9,  /* and32: int32 arithmetic */
   99,  /* andx32: int32 arithmetic mem opnd */
  127,  /* andxx32: int32 arithmetic mem opnd w/ scaled index */
  131,  /* andxxx32: int32 arithmetic mem opnd w/ scaled index w/o base */
   10,  /* and64: int64 arithmetic */
  100,  /* andx64: int64 arithmetic mem opnd */
  128,  /* andxx64: int64 arithmetic mem opnd w/ scaled index */
  132,  /* andxxx64: int64 arithmetic mem opnd w/ scaled index w/o base */
   97,  /* andx8: int8 arithmetic mem opnd */
   98,  /* andx16: int16 arithmetic mem opnd */
  125,  /* andxx8: int8 arithmetic mem opnd w/ scaled index */
  129,  /* andxxx8: int8 arithmetic mem opnd w/ scaled index w/o base */
  126,  /* andxx16: int16 arithmetic mem opnd w/ scaled index */
  130,  /* andxxx16: int16 arithmetic mem opnd w/ scaled index w/o base */
   57,  /* and128v8: vector arithmetic */
   58,  /* andx128v8: vector arithmetic mem opnd */
   59,  /* andxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* andxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
  105,  /* andxr8: int8 arithmetic mem res */
  109,  /* andxxr8: int8 arithmetic index w/ base res */
  113,  /* andxxxr8: int8 arithmetic index w/o base res */
  117,  /* andxr8_n32: int8 arithmetic n32 res */
  106,  /* andxr16: int16 arithmetic mem res */
  110,  /* andxxr16: int16 arithmetic index w/ base res */
  114,  /* andxxxr16: int16 arithmetic index w/o base res */
  118,  /* andxr16_n32: int16 arithmetic n32 res */
  107,  /* andxr32: int32 arithmetic mem res */
  111,  /* andxxr32: int32 arithmetic index w/ base res */
  115,  /* andxxxr32: int32 arithmetic index w/o base res */
  119,  /* andxr32_n32: int32 arithmetic n32 res */
  108,  /* andxr64: int64 arithmetic mem res */
  112,  /* andxxr64: int64 arithmetic index w/ base res */
  116,  /* andxxxr64: int64 arithmetic index w/o base res */
  120,  /* andxr64_off: int64 arithmetic 64bit offset */
  121,  /* andixr8: int32/64 arithmetic mem imm */
  122,  /* andixxr8: int32/64 arithmetic index w/ base imm */
  123,  /* andixxxr8: int32/64 arithmetic index w/o base imm */
  124,  /* andixr8_n32: int32 arithmetic n32 imm */
  121,  /* andixr16: int32/64 arithmetic mem imm */
  122,  /* andixxr16: int32/64 arithmetic index w/ base imm */
  123,  /* andixxxr16: int32/64 arithmetic index w/o base imm */
  124,  /* andixr16_n32: int32 arithmetic n32 imm */
  121,  /* andixr32: int32/64 arithmetic mem imm */
  122,  /* andixxr32: int32/64 arithmetic index w/ base imm */
  123,  /* andixxxr32: int32/64 arithmetic index w/o base imm */
  124,  /* andixr32_n32: int32 arithmetic n32 imm */
  121,  /* andixr64: int32/64 arithmetic mem imm */
  122,  /* andixxr64: int32/64 arithmetic index w/ base imm */
  123,  /* andixxxr64: int32/64 arithmetic index w/o base imm */
  124,  /* andixr64_off: int32 arithmetic n32 imm */
   57,  /* and128v16: vector arithmetic */
   58,  /* andx128v16: vector arithmetic mem opnd */
   59,  /* andxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* andxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* and128v32: vector arithmetic */
   58,  /* andx128v32: vector arithmetic mem opnd */
   59,  /* andxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* andxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* and128v64: vector arithmetic */
   58,  /* andx128v64: vector arithmetic mem opnd */
   59,  /* andxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* andxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  137,  /* andi8: int8 arithmetic with simm */
  138,  /* andi16: int16 arithmetic with simm */
  139,  /* andi32: int32 arithmetic with simm */
  140,  /* andi64: int64 arithmetic with simm */
  362,  /* call: jump */
  363,  /* icall: jump register */
  364,  /* icallx: jump mem */
  365,  /* icallxx: jump mem w/ scaled index */
  366,  /* icallxxx: jump mem w/ scaled index w/o base */
  281,  /* cmp8: int8 compare/test */
  285,  /* cmpx8: int8 compare/test mem opnd */
  289,  /* cmpxx8: int8 compare/test mem opnd w/ scaled-index */
  293,  /* cmpxxx8: int8 compare/test mem opnd w/ scaled-index w/o base */
  282,  /* cmp16: int16 compare/test */
  286,  /* cmpx16: int16 compare/test mem opnd */
  290,  /* cmpxx16: int16 compare/test mem opnd w/ scaled-index */
  294,  /* cmpxxx16: int16 compare/test mem opnd w/ scaled-index w/o base */
  283,  /* cmp32: int32 compare/test */
  287,  /* cmpx32: int32 compare/test mem opnd */
  291,  /* cmpxx32: int32 compare/test mem opnd w/ scaled-index */
  295,  /* cmpxxx32: int32 compare/test mem opnd w/ scaled-index w/o base */
  284,  /* cmp64: int64 compare/test */
  288,  /* cmpx64: int64 compare/test mem opnd */
  292,  /* cmpxx64: int64 compare/test mem opnd w/ scaled-index */
  296,  /* cmpxxx64: int64 compare/test mem opnd w/ scaled-index w/o base */
  271,  /* cmpi8: int8 compare/test with simm */
  297,  /* cmpxr8: int8 compare/test mem opnd */
  275,  /* cmpxi8: int compare/test with simm and mem opnd */
  301,  /* cmpxxr8: int8 compare/test mem opnd w/ scaled-index */
  277,  /* cmpxxi8: int compare/test with simm and mem opnd scaled-index */
  305,  /* cmpxxxr8: int8 compare/test mem opnd w/ scaled-index w/o base */
  279,  /* cmpxxxi8: int compare/test with simm and mem opnd scaled-index w/o base */
  272,  /* cmpi16: int16 compare/test with simm */
  298,  /* cmpxr16: int16 compare/test mem opnd */
  275,  /* cmpxi16: int compare/test with simm and mem opnd */
  302,  /* cmpxxr16: int16 compare/test mem opnd w/ scaled-index */
  277,  /* cmpxxi16: int compare/test with simm and mem opnd scaled-index */
  306,  /* cmpxxxr16: int16 compare/test mem opnd w/ scaled-index w/o base */
  279,  /* cmpxxxi16: int compare/test with simm and mem opnd scaled-index w/o base */
  273,  /* cmpi32: int32 compare/test with simm */
  299,  /* cmpxr32: int32 compare/test mem opnd */
  275,  /* cmpxi32: int compare/test with simm and mem opnd */
  303,  /* cmpxxr32: int32 compare/test mem opnd w/ scaled-index */
  277,  /* cmpxxi32: int compare/test with simm and mem opnd scaled-index */
  307,  /* cmpxxxr32: int32 compare/test mem opnd w/ scaled-index w/o base */
  279,  /* cmpxxxi32: int compare/test with simm and mem opnd scaled-index w/o base */
  274,  /* cmpi64: int64 compare/test with simm */
  300,  /* cmpxr64: int64 compare/test mem opnd */
  276,  /* cmpxi64: int64 compare/test with simm and mem opnd */
  304,  /* cmpxxr64: int64 compare/test mem opnd w/ scaled-index */
  278,  /* cmpxxi64: int64 compare/test with simm and mem opnd scaled-index */
  308,  /* cmpxxxr64: int64 compare/test mem opnd w/ scaled-index w/o base */
  280,  /* cmpxxxi64: int64 compare/test with simm and mem opnd scaled-index w/o base */
  191,  /* cmovb: cond int mov */
  191,  /* cmovae: cond int mov */
  191,  /* cmovp: cond int mov */
  191,  /* cmovnp: cond int mov */
  191,  /* cmove: cond int mov */
  191,  /* cmovne: cond int mov */
  191,  /* cmovbe: cond int mov */
  191,  /* cmova: cond int mov */
  191,  /* cmovl: cond int mov */
  191,  /* cmovge: cond int mov */
  191,  /* cmovle: cond int mov */
  191,  /* cmovg: cond int mov */
  191,  /* cmovs: cond int mov */
  191,  /* cmovns: cond int mov */
  186,  /* div32: div32 */
  187,  /* div64: div64 */
    0,  /* enter: no operand */
  188,  /* idiv32: idiv32 */
  189,  /* idiv64: idiv64 */
  182,  /* imul32: int32 mult */
  184,  /* imulx32: int32 mult uses eax and edx registers */
  183,  /* imul64: int64 mult */
  139,  /* imuli32: int32 arithmetic with simm */
  140,  /* imuli64: int64 arithmetic with simm */
  185,  /* imulx64: int64 mult uses rax and rdx registers */
   57,  /* mul128v16: vector arithmetic */
  133,  /* inc8: unary int8 arithmetic */
  133,  /* dec8: unary int8 arithmetic */
  134,  /* inc16: unary int16 arithmetic */
  134,  /* dec16: unary int16 arithmetic */
  135,  /* inc32: unary int32 arithmetic */
  135,  /* dec32: unary int32 arithmetic */
  136,  /* inc64: unary int64 arithmetic */
  136,  /* dec64: unary int64 arithmetic */
  101,  /* incxr8: int unary mem res */
  102,  /* incxxr8: int unary index w/ base res */
  103,  /* incxxxr8: int unary index w/o base res */
  104,  /* incxr8_n32: int unary n32 res */
  101,  /* incxr16: int unary mem res */
  102,  /* incxxr16: int unary index w/ base res */
  103,  /* incxxxr16: int unary index w/o base res */
  104,  /* incxr16_n32: int unary n32 res */
  101,  /* incxr32: int unary mem res */
  102,  /* incxxr32: int unary index w/ base res */
  103,  /* incxxxr32: int unary index w/o base res */
  104,  /* incxr32_n32: int unary n32 res */
  101,  /* incxr64: int unary mem res */
  102,  /* incxxr64: int unary index w/ base res */
  103,  /* incxxxr64: int unary index w/o base res */
  104,  /* incxr64_off: int unary n32 res */
  101,  /* decxr8: int unary mem res */
  102,  /* decxxr8: int unary index w/ base res */
  103,  /* decxxxr8: int unary index w/o base res */
  104,  /* decxr8_n32: int unary n32 res */
  101,  /* decxr16: int unary mem res */
  102,  /* decxxr16: int unary index w/ base res */
  103,  /* decxxxr16: int unary index w/o base res */
  104,  /* decxr16_n32: int unary n32 res */
  101,  /* decxr32: int unary mem res */
  102,  /* decxxr32: int unary index w/ base res */
  103,  /* decxxxr32: int unary index w/o base res */
  104,  /* decxr32_n32: int unary n32 res */
  101,  /* decxr64: int unary mem res */
  102,  /* decxxr64: int unary index w/ base res */
  103,  /* decxxxr64: int unary index w/o base res */
  104,  /* decxr64_off: int unary n32 res */
  266,  /* jb: conditional jump */
  266,  /* jae: conditional jump */
  266,  /* jp: conditional jump */
  266,  /* jnp: conditional jump */
  266,  /* je: conditional jump */
  266,  /* jne: conditional jump */
  266,  /* jbe: conditional jump */
  266,  /* ja: conditional jump */
  266,  /* jl: conditional jump */
  266,  /* jge: conditional jump */
  266,  /* jle: conditional jump */
  266,  /* jg: conditional jump */
  266,  /* jcxz: conditional jump */
  266,  /* jecxz: conditional jump */
  266,  /* jrcxz: conditional jump */
  266,  /* js: conditional jump */
  266,  /* jns: conditional jump */
  362,  /* jmp: jump */
  363,  /* ijmp: jump register */
  364,  /* ijmpx: jump mem */
  365,  /* ijmpxx: jump mem w/ scaled index */
  366,  /* ijmpxxx: jump mem w/ scaled index w/o base */
  148,  /* ld64: int64 load */
  329,  /* ldx64: int64 load w/ indx */
  331,  /* ldxx64: int64 load w/ indx w/o base */
  391,  /* ld64_2m: int64 load to mmx */
  412,  /* ld64_2sse: int64 load to sse */
  322,  /* lea32: load32 effective addr */
  323,  /* lea64: load64 effective addr */
  324,  /* leax32: load32 effective addr w/ indx */
  325,  /* leax64: load64 effective addr w/ indx */
  326,  /* leaxx32: load32 effective addr w/ indx w/o base */
  327,  /* leaxx64: load64 effective addr w/ indx w/o base */
  372,  /* leave: leave */
    5,  /* ldc32: int load imm32 */
    6,  /* ldc64: int load imm64 */
  184,  /* mul32: int32 mult uses eax and edx registers */
  185,  /* mulx64: int64 mult uses rax and rdx registers */
  180,  /* mov32: int32 mov */
  181,  /* mov64: int64 mov */
  395,  /* mov64_m: int64 mov between mmx */
  145,  /* ld32_64_off: int64 load w/o base or index */
  145,  /* ld64_off: int64 load w/o base or index */
  157,  /* store64_off: int64 store w/o base or index */
  162,  /* storei64_off: imm64 store w/o base or index */
  144,  /* ld8_32_n32: int32 load w/o base or index */
  144,  /* ldu8_32_n32: int32 load w/o base or index */
  144,  /* ld16_32_n32: int32 load w/o base or index */
  144,  /* ldu16_32_n32: int32 load w/o base or index */
  144,  /* ld32_n32: int32 load w/o base or index */
  220,  /* ldss_n32: float load w/o base or index */
  220,  /* ldsd_n32: float load w/o base or index */
  229,  /* ldaps_n32: float load vector w/o base or index */
  229,  /* ldapd_n32: float load vector w/o base or index */
  229,  /* ldups_n32: float load vector w/o base or index */
  229,  /* ldupd_n32: float load vector w/o base or index */
  229,  /* lddqa_n32: float load vector w/o base or index */
  229,  /* lddqu_n32: float load vector w/o base or index */
  229,  /* ldlps_n32: float load vector w/o base or index */
  229,  /* ldlpd_n32: float load vector w/o base or index */
  229,  /* ldhps_n32: float load vector w/o base or index */
  229,  /* ldhpd_n32: float load vector w/o base or index */
  392,  /* ld64_2m_n32: int64 load to mmx w/o base or index */
  415,  /* ld64_2sse_n32: int64 load to sse w/o base or index */
  152,  /* store8_n32: int8 store w/o base or index */
  159,  /* storei8_n32: imm8 store w/o base or index */
  154,  /* store16_n32: int16 store w/o base or index */
  160,  /* storei16_n32: imm16 store w/o base or index */
  156,  /* store32_n32: int32 store w/o base or index */
  161,  /* storei32_n32: imm32 store w/o base or index */
  231,  /* stss_n32: float store w/o base or index */
  231,  /* stsd_n32: float store w/o base or index */
  233,  /* staps_n32: float store vector w/o base or index */
  233,  /* stapd_n32: float store vector w/o base or index */
  233,  /* stdqa_n32: float store vector w/o base or index */
  233,  /* stdqu_n32: float store vector w/o base or index */
  233,  /* stlps_n32: float store vector w/o base or index */
  233,  /* sthps_n32: float store vector w/o base or index */
  233,  /* stlpd_n32: float store vector w/o base or index */
  233,  /* sthpd_n32: float store vector w/o base or index */
  394,  /* store64_fm_n32: int64 store from mmx w/o base or index */
  419,  /* store64_fsse_n32: int64 store from sse w/o base or index */
  149,  /* ld32_gs_seg_off: int32 load from %gs segment w/o base or index */
  150,  /* ld64_fs_seg_off: int64 load from %fs segment w/o base or index */
  174,  /* movsbl: int8_32 mov */
  147,  /* ld8_32: int32 load */
  328,  /* ldx8_32: int32 load w/ indx */
  330,  /* ldxx8_32: int32 load w/ indx w/o base */
  174,  /* movzbl: int8_32 mov */
  147,  /* ldu8_32: int32 load */
  328,  /* ldxu8_32: int32 load w/ indx */
  330,  /* ldxxu8_32: int32 load w/ indx w/o base */
  175,  /* movswl: int16_32 mov */
  147,  /* ld16_32: int32 load */
  328,  /* ldx16_32: int32 load w/ indx */
  330,  /* ldxx16_32: int32 load w/ indx w/o base */
  175,  /* movzwl: int16_32 mov */
  147,  /* ldu16_32: int32 load */
  328,  /* ldxu16_32: int32 load w/ indx */
  330,  /* ldxxu16_32: int32 load w/ indx w/o base */
  176,  /* movsbq: int8_64 mov */
  148,  /* ld8_64: int64 load */
  329,  /* ldx8_64: int64 load w/ indx */
  331,  /* ldxx8_64: int64 load w/ indx w/o base */
  145,  /* ld8_64_off: int64 load w/o base or index */
  176,  /* movzbq: int8_64 mov */
  148,  /* ldu8_64: int64 load */
  329,  /* ldxu8_64: int64 load w/ indx */
  331,  /* ldxxu8_64: int64 load w/ indx w/o base */
  145,  /* ldu8_64_off: int64 load w/o base or index */
  177,  /* movswq: int16_64 mov */
  148,  /* ld16_64: int64 load */
  329,  /* ldx16_64: int64 load w/ indx */
  331,  /* ldxx16_64: int64 load w/ indx w/o base */
  145,  /* ld16_64_off: int64 load w/o base or index */
  177,  /* movzwq: int16_64 mov */
  148,  /* ldu16_64: int64 load */
  329,  /* ldxu16_64: int64 load w/ indx */
  331,  /* ldxxu16_64: int64 load w/ indx w/o base */
  145,  /* ldu16_64_off: int64 load w/o base or index */
  178,  /* movslq: int32_64 sign-ext mov */
  148,  /* ld32_64: int64 load */
  329,  /* ldx32_64: int64 load w/ indx */
  331,  /* ldxx32_64: int64 load w/ indx w/o base */
  147,  /* ld32: int32 load */
  328,  /* ldx32: int32 load w/ indx */
  330,  /* ldxx32: int32 load w/ indx w/o base */
  179,  /* movzlq: int32_64 zero-ext mov */
  133,  /* neg8: unary int8 arithmetic */
  134,  /* neg16: unary int16 arithmetic */
  135,  /* neg32: unary int32 arithmetic */
  136,  /* neg64: unary int64 arithmetic */
  101,  /* negxr8: int unary mem res */
  102,  /* negxxr8: int unary index w/ base res */
  103,  /* negxxxr8: int unary index w/o base res */
  104,  /* negxr8_n32: int unary n32 res */
  101,  /* negxr16: int unary mem res */
  102,  /* negxxr16: int unary index w/ base res */
  103,  /* negxxxr16: int unary index w/o base res */
  104,  /* negxr16_n32: int unary n32 res */
  101,  /* negxr32: int unary mem res */
  102,  /* negxxr32: int unary index w/ base res */
  103,  /* negxxxr32: int unary index w/o base res */
  104,  /* negxr32_n32: int unary n32 res */
  101,  /* negxr64: int unary mem res */
  102,  /* negxxr64: int unary index w/ base res */
  103,  /* negxxxr64: int unary index w/o base res */
  104,  /* negxr64_off: int unary n32 res */
  133,  /* not8: unary int8 arithmetic */
  134,  /* not16: unary int16 arithmetic */
  135,  /* not32: unary int32 arithmetic */
  136,  /* not64: unary int64 arithmetic */
  101,  /* notxr8: int unary mem res */
  102,  /* notxxr8: int unary index w/ base res */
  103,  /* notxxxr8: int unary index w/o base res */
  104,  /* notxr8_n32: int unary n32 res */
  101,  /* notxr16: int unary mem res */
  102,  /* notxxr16: int unary index w/ base res */
  103,  /* notxxxr16: int unary index w/o base res */
  104,  /* notxr16_n32: int unary n32 res */
  101,  /* notxr32: int unary mem res */
  102,  /* notxxr32: int unary index w/ base res */
  103,  /* notxxxr32: int unary index w/o base res */
  104,  /* notxr32_n32: int unary n32 res */
  101,  /* notxr64: int unary mem res */
  102,  /* notxxr64: int unary index w/ base res */
  103,  /* notxxxr64: int unary index w/o base res */
  104,  /* notxr64_off: int unary n32 res */
    7,  /* or8: int8 arithmetic */
    8,  /* or16: int16 arithmetic */
    9,  /* or32: int32 arithmetic */
   99,  /* orx32: int32 arithmetic mem opnd */
  127,  /* orxx32: int32 arithmetic mem opnd w/ scaled index */
  131,  /* orxxx32: int32 arithmetic mem opnd w/ scaled index w/o base */
   10,  /* or64: int64 arithmetic */
  100,  /* orx64: int64 arithmetic mem opnd */
  128,  /* orxx64: int64 arithmetic mem opnd w/ scaled index */
  132,  /* orxxx64: int64 arithmetic mem opnd w/ scaled index w/o base */
   97,  /* orx8: int8 arithmetic mem opnd */
   98,  /* orx16: int16 arithmetic mem opnd */
  125,  /* orxx8: int8 arithmetic mem opnd w/ scaled index */
  129,  /* orxxx8: int8 arithmetic mem opnd w/ scaled index w/o base */
  126,  /* orxx16: int16 arithmetic mem opnd w/ scaled index */
  130,  /* orxxx16: int16 arithmetic mem opnd w/ scaled index w/o base */
  105,  /* orxr8: int8 arithmetic mem res */
  109,  /* orxxr8: int8 arithmetic index w/ base res */
  113,  /* orxxxr8: int8 arithmetic index w/o base res */
  117,  /* orxr8_n32: int8 arithmetic n32 res */
  106,  /* orxr16: int16 arithmetic mem res */
  110,  /* orxxr16: int16 arithmetic index w/ base res */
  114,  /* orxxxr16: int16 arithmetic index w/o base res */
  118,  /* orxr16_n32: int16 arithmetic n32 res */
  107,  /* orxr32: int32 arithmetic mem res */
  111,  /* orxxr32: int32 arithmetic index w/ base res */
  115,  /* orxxxr32: int32 arithmetic index w/o base res */
  119,  /* orxr32_n32: int32 arithmetic n32 res */
  108,  /* orxr64: int64 arithmetic mem res */
  112,  /* orxxr64: int64 arithmetic index w/ base res */
  116,  /* orxxxr64: int64 arithmetic index w/o base res */
  120,  /* orxr64_off: int64 arithmetic 64bit offset */
  121,  /* orixr8: int32/64 arithmetic mem imm */
  122,  /* orixxr8: int32/64 arithmetic index w/ base imm */
  123,  /* orixxxr8: int32/64 arithmetic index w/o base imm */
  124,  /* orixr8_n32: int32 arithmetic n32 imm */
  121,  /* orixr16: int32/64 arithmetic mem imm */
  122,  /* orixxr16: int32/64 arithmetic index w/ base imm */
  123,  /* orixxxr16: int32/64 arithmetic index w/o base imm */
  124,  /* orixr16_n32: int32 arithmetic n32 imm */
  121,  /* orixr32: int32/64 arithmetic mem imm */
  122,  /* orixxr32: int32/64 arithmetic index w/ base imm */
  123,  /* orixxxr32: int32/64 arithmetic index w/o base imm */
  124,  /* orixr32_n32: int32 arithmetic n32 imm */
  121,  /* orixr64: int32/64 arithmetic mem imm */
  122,  /* orixxr64: int32/64 arithmetic index w/ base imm */
  123,  /* orixxxr64: int32/64 arithmetic index w/o base imm */
  124,  /* orixr64_off: int32 arithmetic n32 imm */
   57,  /* or128v8: vector arithmetic */
   58,  /* orx128v8: vector arithmetic mem opnd */
   59,  /* orxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* orxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* or128v16: vector arithmetic */
   58,  /* orx128v16: vector arithmetic mem opnd */
   59,  /* orxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* orxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* or128v32: vector arithmetic */
   58,  /* orx128v32: vector arithmetic mem opnd */
   59,  /* orxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* orxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* or128v64: vector arithmetic */
   58,  /* orx128v64: vector arithmetic mem opnd */
   59,  /* orxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* orxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  137,  /* ori8: int8 arithmetic with simm */
  138,  /* ori16: int16 arithmetic with simm */
  139,  /* ori32: int32 arithmetic with simm */
  140,  /* ori64: int64 arithmetic with simm */
  267,  /* popl: pop32 */
  268,  /* popq: pop64 */
  269,  /* pushl: push32 */
  270,  /* pushq: push64 */
    0,  /* ret: no operand */
    4,  /* reti: ret imm16 */
  214,  /* ror8: variable shifts32 */
  214,  /* ror16: variable shifts32 */
  214,  /* ror32: variable shifts32 */
  217,  /* ror64: variable shifts64 */
  210,  /* rori8: shifts8 */
  211,  /* rori16: shifts16 */
  212,  /* rori32: shifts32 */
  213,  /* rori64: shifts64 */
  214,  /* rol8: variable shifts32 */
  214,  /* rol16: variable shifts32 */
  214,  /* rol32: variable shifts32 */
  217,  /* rol64: variable shifts64 */
  210,  /* roli8: shifts8 */
  211,  /* roli16: shifts16 */
  212,  /* roli32: shifts32 */
  213,  /* roli64: shifts64 */
  171,  /* prefetch: prefetch */
  171,  /* prefetchw: prefetch */
  171,  /* prefetcht0: prefetch */
  171,  /* prefetcht1: prefetch */
  171,  /* prefetchnta: prefetch */
  172,  /* prefetchx: prefetchx */
  173,  /* prefetchxx: prefetchxx */
  172,  /* prefetchwx: prefetchx */
  173,  /* prefetchwxx: prefetchxx */
  172,  /* prefetcht0x: prefetchx */
  173,  /* prefetcht0xx: prefetchxx */
  172,  /* prefetcht1x: prefetchx */
  173,  /* prefetcht1xx: prefetchxx */
  172,  /* prefetchntax: prefetchx */
  173,  /* prefetchntaxx: prefetchxx */
  190,  /* setb: int8 set */
  190,  /* setae: int8 set */
  190,  /* setp: int8 set */
  190,  /* setnp: int8 set */
  190,  /* sete: int8 set */
  190,  /* setne: int8 set */
  190,  /* setbe: int8 set */
  190,  /* seta: int8 set */
  190,  /* setl: int8 set */
  190,  /* setge: int8 set */
  190,  /* setle: int8 set */
  190,  /* setg: int8 set */
  190,  /* setc: int8 set */
  190,  /* seto: int8 set */
  190,  /* sets: int8 set */
  190,  /* setz: int8 set */
  163,  /* store8: int8 store */
  167,  /* storei8: imm8 store */
  332,  /* storex8: int8 store w/ indx */
  336,  /* storeix8: imm8 store w/ indx */
  340,  /* storexx8: int8 store w/ indx w/o base */
  344,  /* storeixx8: imm8 store w/ indx w/o base */
  164,  /* store16: int16 store */
  168,  /* storei16: imm16 store */
  333,  /* storex16: int16 store w/ indx */
  337,  /* storeix16: imm16 store w/ indx */
  341,  /* storexx16: int16 store w/ indx w/o base */
  345,  /* storeixx16: imm16 store w/ indx w/o base */
  165,  /* store32: int32 store */
  169,  /* storei32: imm32 store */
  334,  /* storex32: int32 store w/ indx */
  338,  /* storeix32: imm32 store w/ indx */
  342,  /* storexx32: int32 store w/ indx w/o base */
  346,  /* storeixx32: imm32 store w/ indx w/o base */
  166,  /* store64: int64 store */
  170,  /* storei64: imm64 store */
  335,  /* storex64: int64 store w/ indx */
  339,  /* storeix64: imm64 store w/ indx */
  343,  /* storexx64: int64 store w/ indx w/o base */
  347,  /* storeixx64: imm64 store w/ indx w/o base */
  393,  /* store64_fm: int64 store from mmx */
  416,  /* store64_fsse: int64 store from sse */
  165,  /* storenti32: int32 store */
  334,  /* storentix32: int32 store w/ indx */
  342,  /* storentixx32: int32 store w/ indx w/o base */
  166,  /* storenti64: int64 store */
  335,  /* storentix64: int64 store w/ indx */
  343,  /* storentixx64: int64 store w/ indx w/o base */
  234,  /* storenti128: float store vector */
  214,  /* sar32: variable shifts32 */
  217,  /* sar64: variable shifts64 */
  212,  /* sari32: shifts32 */
  213,  /* sari64: shifts64 */
  214,  /* shl32: variable shifts32 */
  215,  /* shld32: variable shift left double */
  216,  /* shldi32: shift left double */
  215,  /* shrd32: variable shift left double */
  216,  /* shrdi32: shift left double */
  217,  /* shl64: variable shifts64 */
  212,  /* shli32: shifts32 */
  213,  /* shli64: shifts64 */
  214,  /* shr32: variable shifts32 */
  217,  /* shr64: variable shifts64 */
  212,  /* shri32: shifts32 */
  213,  /* shri64: shifts64 */
    7,  /* sub8: int8 arithmetic */
    8,  /* sub16: int16 arithmetic */
    9,  /* sub32: int32 arithmetic */
    9,  /* sbb32: int32 arithmetic */
   10,  /* sub64: int64 arithmetic */
   99,  /* subx32: int32 arithmetic mem opnd */
  100,  /* subx64: int64 arithmetic mem opnd */
  127,  /* subxx32: int32 arithmetic mem opnd w/ scaled index */
  131,  /* subxxx32: int32 arithmetic mem opnd w/ scaled index w/o base */
  128,  /* subxx64: int64 arithmetic mem opnd w/ scaled index */
  132,  /* subxxx64: int64 arithmetic mem opnd w/ scaled index w/o base */
  137,  /* subi8: int8 arithmetic with simm */
  138,  /* subi16: int16 arithmetic with simm */
  139,  /* subi32: int32 arithmetic with simm */
  139,  /* sbbi32: int32 arithmetic with simm */
  140,  /* subi64: int64 arithmetic with simm */
  105,  /* subxr8: int8 arithmetic mem res */
  109,  /* subxxr8: int8 arithmetic index w/ base res */
  113,  /* subxxxr8: int8 arithmetic index w/o base res */
  117,  /* subxr8_n32: int8 arithmetic n32 res */
  106,  /* subxr16: int16 arithmetic mem res */
  110,  /* subxxr16: int16 arithmetic index w/ base res */
  114,  /* subxxxr16: int16 arithmetic index w/o base res */
  118,  /* subxr16_n32: int16 arithmetic n32 res */
  107,  /* subxr32: int32 arithmetic mem res */
  111,  /* subxxr32: int32 arithmetic index w/ base res */
  115,  /* subxxxr32: int32 arithmetic index w/o base res */
  119,  /* subxr32_n32: int32 arithmetic n32 res */
  108,  /* subxr64: int64 arithmetic mem res */
  112,  /* subxxr64: int64 arithmetic index w/ base res */
  116,  /* subxxxr64: int64 arithmetic index w/o base res */
  120,  /* subxr64_off: int64 arithmetic 64bit offset */
  121,  /* subixr8: int32/64 arithmetic mem imm */
  122,  /* subixxr8: int32/64 arithmetic index w/ base imm */
  123,  /* subixxxr8: int32/64 arithmetic index w/o base imm */
  124,  /* subixr8_n32: int32 arithmetic n32 imm */
  121,  /* subixr16: int32/64 arithmetic mem imm */
  122,  /* subixxr16: int32/64 arithmetic index w/ base imm */
  123,  /* subixxxr16: int32/64 arithmetic index w/o base imm */
  124,  /* subixr16_n32: int32 arithmetic n32 imm */
  121,  /* subixr32: int32/64 arithmetic mem imm */
  122,  /* subixxr32: int32/64 arithmetic index w/ base imm */
  123,  /* subixxxr32: int32/64 arithmetic index w/o base imm */
  124,  /* subixr32_n32: int32 arithmetic n32 imm */
  121,  /* subixr64: int32/64 arithmetic mem imm */
  122,  /* subixxr64: int32/64 arithmetic index w/ base imm */
  123,  /* subixxxr64: int32/64 arithmetic index w/o base imm */
  124,  /* subixr64_off: int32 arithmetic n32 imm */
   57,  /* sub128v8: vector arithmetic */
   58,  /* subx128v8: vector arithmetic mem opnd */
   59,  /* subxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* subxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* sub128v16: vector arithmetic */
   58,  /* subx128v16: vector arithmetic mem opnd */
   59,  /* subxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* subxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* sub128v32: vector arithmetic */
   58,  /* subx128v32: vector arithmetic mem opnd */
   59,  /* subxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* subxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* sub128v64: vector arithmetic */
   58,  /* subx128v64: vector arithmetic mem opnd */
   59,  /* subxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* subxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  400,  /* sub64v8: mmx vector arithmetic */
  400,  /* sub64v16: mmx vector arithmetic */
  400,  /* sub64v32: mmx vector arithmetic */
  281,  /* test8: int8 compare/test */
  285,  /* testx8: int8 compare/test mem opnd */
  289,  /* testxx8: int8 compare/test mem opnd w/ scaled-index */
  293,  /* testxxx8: int8 compare/test mem opnd w/ scaled-index w/o base */
  282,  /* test16: int16 compare/test */
  286,  /* testx16: int16 compare/test mem opnd */
  290,  /* testxx16: int16 compare/test mem opnd w/ scaled-index */
  294,  /* testxxx16: int16 compare/test mem opnd w/ scaled-index w/o base */
  283,  /* test32: int32 compare/test */
  287,  /* testx32: int32 compare/test mem opnd */
  291,  /* testxx32: int32 compare/test mem opnd w/ scaled-index */
  295,  /* testxxx32: int32 compare/test mem opnd w/ scaled-index w/o base */
  284,  /* test64: int64 compare/test */
  288,  /* testx64: int64 compare/test mem opnd */
  292,  /* testxx64: int64 compare/test mem opnd w/ scaled-index */
  296,  /* testxxx64: int64 compare/test mem opnd w/ scaled-index w/o base */
  271,  /* testi8: int8 compare/test with simm */
  272,  /* testi16: int16 compare/test with simm */
  273,  /* testi32: int32 compare/test with simm */
  274,  /* testi64: int64 compare/test with simm */
    7,  /* xor8: int8 arithmetic */
    8,  /* xor16: int16 arithmetic */
    9,  /* xor32: int32 arithmetic */
   99,  /* xorx32: int32 arithmetic mem opnd */
  127,  /* xorxx32: int32 arithmetic mem opnd w/ scaled index */
  131,  /* xorxxx32: int32 arithmetic mem opnd w/ scaled index w/o base */
   10,  /* xor64: int64 arithmetic */
  100,  /* xorx64: int64 arithmetic mem opnd */
  128,  /* xorxx64: int64 arithmetic mem opnd w/ scaled index */
  132,  /* xorxxx64: int64 arithmetic mem opnd w/ scaled index w/o base */
   97,  /* xorx8: int8 arithmetic mem opnd */
   98,  /* xorx16: int16 arithmetic mem opnd */
  125,  /* xorxx8: int8 arithmetic mem opnd w/ scaled index */
  129,  /* xorxxx8: int8 arithmetic mem opnd w/ scaled index w/o base */
  126,  /* xorxx16: int16 arithmetic mem opnd w/ scaled index */
  130,  /* xorxxx16: int16 arithmetic mem opnd w/ scaled index w/o base */
  105,  /* xorxr8: int8 arithmetic mem res */
  109,  /* xorxxr8: int8 arithmetic index w/ base res */
  113,  /* xorxxxr8: int8 arithmetic index w/o base res */
  117,  /* xorxr8_n32: int8 arithmetic n32 res */
  106,  /* xorxr16: int16 arithmetic mem res */
  110,  /* xorxxr16: int16 arithmetic index w/ base res */
  114,  /* xorxxxr16: int16 arithmetic index w/o base res */
  118,  /* xorxr16_n32: int16 arithmetic n32 res */
  107,  /* xorxr32: int32 arithmetic mem res */
  111,  /* xorxxr32: int32 arithmetic index w/ base res */
  115,  /* xorxxxr32: int32 arithmetic index w/o base res */
  119,  /* xorxr32_n32: int32 arithmetic n32 res */
  108,  /* xorxr64: int64 arithmetic mem res */
  112,  /* xorxxr64: int64 arithmetic index w/ base res */
  116,  /* xorxxxr64: int64 arithmetic index w/o base res */
  120,  /* xorxr64_off: int64 arithmetic 64bit offset */
  121,  /* xorixr8: int32/64 arithmetic mem imm */
  122,  /* xorixxr8: int32/64 arithmetic index w/ base imm */
  123,  /* xorixxxr8: int32/64 arithmetic index w/o base imm */
  124,  /* xorixr8_n32: int32 arithmetic n32 imm */
  121,  /* xorixr16: int32/64 arithmetic mem imm */
  122,  /* xorixxr16: int32/64 arithmetic index w/ base imm */
  123,  /* xorixxxr16: int32/64 arithmetic index w/o base imm */
  124,  /* xorixr16_n32: int32 arithmetic n32 imm */
  121,  /* xorixr32: int32/64 arithmetic mem imm */
  122,  /* xorixxr32: int32/64 arithmetic index w/ base imm */
  123,  /* xorixxxr32: int32/64 arithmetic index w/o base imm */
  124,  /* xorixr32_n32: int32 arithmetic n32 imm */
  121,  /* xorixr64: int32/64 arithmetic mem imm */
  122,  /* xorixxr64: int32/64 arithmetic index w/ base imm */
  123,  /* xorixxxr64: int32/64 arithmetic index w/o base imm */
  124,  /* xorixr64_off: int32 arithmetic n32 imm */
   57,  /* xor128v8: vector arithmetic */
   58,  /* xorx128v8: vector arithmetic mem opnd */
   59,  /* xorxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* xorxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* xor128v16: vector arithmetic */
   58,  /* xorx128v16: vector arithmetic mem opnd */
   59,  /* xorxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* xorxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* xor128v32: vector arithmetic */
   58,  /* xorx128v32: vector arithmetic mem opnd */
   59,  /* xorxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* xorxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* xor128v64: vector arithmetic */
   58,  /* xorx128v64: vector arithmetic mem opnd */
   59,  /* xorxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* xorxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  137,  /* xori8: int8 arithmetic with simm */
  138,  /* xori16: int16 arithmetic with simm */
  139,  /* xori32: int32 arithmetic with simm */
  140,  /* xori64: int64 arithmetic with simm */
   57,  /* fxor128v32: vector arithmetic */
   58,  /* fxorx128v32: vector arithmetic mem opnd */
   59,  /* fxorxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fxorxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fxor128v64: vector arithmetic */
   58,  /* fxorx128v64: vector arithmetic mem opnd */
   59,  /* fxorxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fxorxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* xorps: vector arithmetic */
   57,  /* xorpd: vector arithmetic */
  254,  /* addsd: float arithmetic */
  254,  /* addss: float arithmetic */
  257,  /* addxsd: float arithmetic mem operand */
  257,  /* addxss: float arithmetic mem operand */
  258,  /* addxxsd: float arithmetic mem operand w/ scaled-index */
  259,  /* addxxxsd: float arithmetic mem operand w/ scaled-index w/o base */
  258,  /* addxxss: float arithmetic mem operand w/ scaled-index */
  259,  /* addxxxss: float arithmetic mem operand w/ scaled-index w/o base */
   57,  /* faddsub128v32: vector arithmetic */
   58,  /* faddsubx128v32: vector arithmetic mem opnd */
   59,  /* faddsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* faddsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* faddsub128v64: vector arithmetic */
   58,  /* faddsubx128v64: vector arithmetic mem opnd */
   59,  /* faddsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* faddsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fadd128v32: vector arithmetic */
   58,  /* faddx128v32: vector arithmetic mem opnd */
   59,  /* faddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* faddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fadd128v64: vector arithmetic */
   58,  /* faddx128v64: vector arithmetic mem opnd */
   59,  /* faddxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* faddxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fhadd128v32: vector arithmetic */
   58,  /* fhaddx128v32: vector arithmetic mem opnd */
   59,  /* fhaddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fhaddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fhadd128v64: vector arithmetic */
   58,  /* fhaddx128v64: vector arithmetic mem opnd */
   59,  /* fhaddxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fhaddxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fand128v32: vector arithmetic */
   58,  /* fandx128v32: vector arithmetic mem opnd */
   59,  /* fandxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fandxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fand128v64: vector arithmetic */
   58,  /* fandx128v64: vector arithmetic mem opnd */
   59,  /* fandxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fandxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* andps: vector arithmetic */
   57,  /* andpd: vector arithmetic */
  254,  /* andnps: float arithmetic */
  254,  /* andnpd: float arithmetic */
   57,  /* for128v32: vector arithmetic */
   58,  /* forx128v32: vector arithmetic mem opnd */
   59,  /* forxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* forxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* for128v64: vector arithmetic */
   58,  /* forx128v64: vector arithmetic mem opnd */
   59,  /* forxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* forxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* orps: vector arithmetic */
   57,  /* orpd: vector arithmetic */
  309,  /* comisd: fp ordered compare */
  310,  /* comixsd: fp ordered compare mem opnd */
  311,  /* comixxsd: fp ordered compare mem opnd w/ scaled-index */
  312,  /* comixxxsd: fp ordered compare mem opnd w/ scaled-index w/o base */
  309,  /* comiss: fp ordered compare */
  310,  /* comixss: fp ordered compare mem opnd */
  311,  /* comixxss: fp ordered compare mem opnd w/ scaled-index */
  312,  /* comixxxss: fp ordered compare mem opnd w/ scaled-index w/o base */
  314,  /* cmpss: fp compare */
  314,  /* cmpsd: fp compare */
  320,  /* cmpps: fp vector compare */
  320,  /* cmppd: fp vector compare */
   57,  /* cmpeq128v8: vector arithmetic */
   57,  /* cmpeq128v16: vector arithmetic */
   57,  /* cmpeq128v32: vector arithmetic */
   58,  /* cmpeqx128v8: vector arithmetic mem opnd */
   58,  /* cmpeqx128v16: vector arithmetic mem opnd */
   58,  /* cmpeqx128v32: vector arithmetic mem opnd */
   59,  /* cmpeqxx128v8: vector arithmetic mem opnd w/ scaled index */
   59,  /* cmpeqxx128v16: vector arithmetic mem opnd w/ scaled index */
   59,  /* cmpeqxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* cmpeqxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   60,  /* cmpeqxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   60,  /* cmpeqxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* cmpgt128v8: vector arithmetic */
   57,  /* cmpgt128v16: vector arithmetic */
   57,  /* cmpgt128v32: vector arithmetic */
   58,  /* cmpgtx128v8: vector arithmetic mem opnd */
   58,  /* cmpgtx128v16: vector arithmetic mem opnd */
   58,  /* cmpgtx128v32: vector arithmetic mem opnd */
   59,  /* cmpgtxx128v8: vector arithmetic mem opnd w/ scaled index */
   59,  /* cmpgtxx128v16: vector arithmetic mem opnd w/ scaled index */
   59,  /* cmpgtxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* cmpgtxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   60,  /* cmpgtxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   60,  /* cmpgtxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
  400,  /* pcmpeqb: mmx vector arithmetic */
  400,  /* pcmpeqw: mmx vector arithmetic */
  400,  /* pcmpeqd: mmx vector arithmetic */
  400,  /* pcmpgtb: mmx vector arithmetic */
  400,  /* pcmpgtw: mmx vector arithmetic */
  400,  /* pcmpgtd: mmx vector arithmetic */
  262,  /* fmovsldup: xmm to xmm */
  262,  /* fmovshdup: xmm to xmm */
  262,  /* fmovddup: xmm to xmm */
  230,  /* fmovsldupx: float load vector */
  230,  /* fmovshdupx: float load vector */
  230,  /* fmovddupx: float load vector */
  351,  /* fmovsldupxx: fp load vector w/ indx */
  351,  /* fmovshdupxx: fp load vector w/ indx */
  351,  /* fmovddupxx: fp load vector w/ indx */
  355,  /* fmovsldupxxx: fp load vector w/ indx w/o base */
  355,  /* fmovshdupxxx: fp load vector w/ indx w/o base */
  355,  /* fmovddupxxx: fp load vector w/ indx w/o base */
  218,  /* cltd: sign32 extend */
  219,  /* cqto: sign64 extend */
  193,  /* cvtss2sd: fp 2 fp */
  193,  /* cvtsd2ss: fp 2 fp */
  222,  /* cvtsd2ss_x: float convert */
  349,  /* cvtsd2ss_xx: fp convert w/ indx */
  353,  /* cvtsd2ss_xxx: fp convert w/ indx w/o base */
  203,  /* cvtsi2sd: int32 2 float */
  222,  /* cvtsi2sd_x: float convert */
  349,  /* cvtsi2sd_xx: fp convert w/ indx */
  353,  /* cvtsi2sd_xxx: fp convert w/ indx w/o base */
  203,  /* cvtsi2ss: int32 2 float */
  222,  /* cvtsi2ss_x: float convert */
  349,  /* cvtsi2ss_xx: fp convert w/ indx */
  353,  /* cvtsi2ss_xxx: fp convert w/ indx w/o base */
  205,  /* cvtsi2sdq: int64 2 float */
  222,  /* cvtsi2sdq_x: float convert */
  349,  /* cvtsi2sdq_xx: fp convert w/ indx */
  353,  /* cvtsi2sdq_xxx: fp convert w/ indx w/o base */
  205,  /* cvtsi2ssq: int64 2 float */
  222,  /* cvtsi2ssq_x: float convert */
  349,  /* cvtsi2ssq_xx: fp convert w/ indx */
  353,  /* cvtsi2ssq_xxx: fp convert w/ indx w/o base */
  207,  /* cvtss2si: fp 2 int32 */
  207,  /* cvtsd2si: fp 2 int32 */
  208,  /* cvtss2siq: fp 2 int64 */
  208,  /* cvtsd2siq: fp 2 int64 */
  207,  /* cvttss2si: fp 2 int32 */
  207,  /* cvttsd2si: fp 2 int32 */
  208,  /* cvttss2siq: fp 2 int64 */
  208,  /* cvttsd2siq: fp 2 int64 */
  194,  /* cvtdq2pd: vector cvt */
  194,  /* cvtdq2ps: vector cvt */
  194,  /* cvtps2pd: vector cvt */
  194,  /* cvtpd2ps: vector cvt */
  195,  /* cvtps2dq: vector cvt w/ trunc */
  195,  /* cvttps2dq: vector cvt w/ trunc */
  195,  /* cvtpd2dq: vector cvt w/ trunc */
  195,  /* cvttpd2dq: vector cvt w/ trunc */
  197,  /* cvtdq2pd_x: vector cvt I */
  197,  /* cvtdq2ps_x: vector cvt I */
  197,  /* cvtps2pd_x: vector cvt I */
  197,  /* cvtpd2ps_x: vector cvt I */
  198,  /* cvtps2dq_x: vector cvt w/ trunc I */
  198,  /* cvtpd2dq_x: vector cvt w/ trunc I */
  198,  /* cvttps2dq_x: vector cvt w/ trunc I */
  198,  /* cvttpd2dq_x: vector cvt w/ trunc I */
  199,  /* cvtdq2pd_xx: vector cvt II */
  199,  /* cvtdq2ps_xx: vector cvt II */
  199,  /* cvtps2pd_xx: vector cvt II */
  199,  /* cvtpd2ps_xx: vector cvt II */
  200,  /* cvtps2dq_xx: vector cvt w/ trunc II */
  200,  /* cvtpd2dq_xx: vector cvt w/ trunc II */
  200,  /* cvttps2dq_xx: vector cvt w/ trunc II */
  200,  /* cvttpd2dq_xx: vector cvt w/ trunc II */
  201,  /* cvtdq2pd_xxx: vector cvt III */
  201,  /* cvtdq2ps_xxx: vector cvt III */
  201,  /* cvtps2pd_xxx: vector cvt III */
  201,  /* cvtpd2ps_xxx: vector cvt III */
  202,  /* cvtps2dq_xxx: vector cvt w/ trunc III */
  202,  /* cvtpd2dq_xxx: vector cvt w/ trunc III */
  202,  /* cvttps2dq_xxx: vector cvt w/ trunc III */
  202,  /* cvttpd2dq_xxx: vector cvt w/ trunc III */
  411,  /* cvtpi2ps: vector cvt mmx pi 2 sse ps/pd */
  410,  /* cvtps2pi: vector cvt sse ps/pd 2 mmx pi */
  410,  /* cvttps2pi: vector cvt sse ps/pd 2 mmx pi */
  411,  /* cvtpi2pd: vector cvt mmx pi 2 sse ps/pd */
  410,  /* cvtpd2pi: vector cvt sse ps/pd 2 mmx pi */
  410,  /* cvttpd2pi: vector cvt sse ps/pd 2 mmx pi */
  221,  /* ldsd: float load */
  348,  /* ldsdx: fp load w/ indx */
  352,  /* ldsdxx: fp load w/ indx w/o base */
  221,  /* ldss: float load */
  348,  /* ldssx: fp load w/ indx */
  352,  /* ldssxx: fp load w/ indx w/o base */
  230,  /* lddqa: float load vector */
  230,  /* lddqu: float load vector */
  230,  /* ldlps: float load vector */
  230,  /* ldhps: float load vector */
  230,  /* ldlpd: float load vector */
  230,  /* ldhpd: float load vector */
  234,  /* stdqa: float store vector */
  234,  /* stdqu: float store vector */
  234,  /* stlps: float store vector */
  234,  /* sthps: float store vector */
  234,  /* stlpd: float store vector */
  234,  /* storelpd: float store vector */
  234,  /* sthpd: float store vector */
  234,  /* stntpd: float store vector */
  234,  /* stntps: float store vector */
  393,  /* storent64_fm: int64 store from mmx */
  351,  /* lddqax: fp load vector w/ indx */
  351,  /* lddqux: fp load vector w/ indx */
  351,  /* ldlpsx: fp load vector w/ indx */
  351,  /* ldhpsx: fp load vector w/ indx */
  351,  /* ldlpdx: fp load vector w/ indx */
  351,  /* ldhpdx: fp load vector w/ indx */
  357,  /* stdqax: fp store vector w/ indx */
  357,  /* stntpdx: fp store vector w/ indx */
  357,  /* stntpsx: fp store vector w/ indx */
  357,  /* stdqux: fp store vector w/ indx */
  357,  /* stlpsx: fp store vector w/ indx */
  357,  /* sthpsx: fp store vector w/ indx */
  357,  /* stlpdx: fp store vector w/ indx */
  357,  /* sthpdx: fp store vector w/ indx */
  355,  /* lddqaxx: fp load vector w/ indx w/o base */
  355,  /* lddquxx: fp load vector w/ indx w/o base */
  355,  /* ldlpsxx: fp load vector w/ indx w/o base */
  355,  /* ldhpsxx: fp load vector w/ indx w/o base */
  355,  /* ldlpdxx: fp load vector w/ indx w/o base */
  355,  /* ldhpdxx: fp load vector w/ indx w/o base */
  230,  /* ldaps: float load vector */
  351,  /* ldapsx: fp load vector w/ indx */
  355,  /* ldapsxx: fp load vector w/ indx w/o base */
  230,  /* ldapd: float load vector */
  351,  /* ldapdx: fp load vector w/ indx */
  355,  /* ldapdxx: fp load vector w/ indx w/o base */
  230,  /* ldups: float load vector */
  351,  /* ldupsx: fp load vector w/ indx */
  355,  /* ldupsxx: fp load vector w/ indx w/o base */
  230,  /* ldupd: float load vector */
  351,  /* ldupdx: fp load vector w/ indx */
  355,  /* ldupdxx: fp load vector w/ indx w/o base */
  359,  /* stdqaxx: fp store vector w/ indx w/o base */
  359,  /* stntpdxx: fp store vector w/ indx w/o base */
  359,  /* stntpsxx: fp store vector w/ indx w/o base */
  359,  /* stdquxx: fp store vector w/ indx w/o base */
  359,  /* stlpsxx: fp store vector w/ indx w/o base */
  359,  /* sthpsxx: fp store vector w/ indx w/o base */
  359,  /* stlpdxx: fp store vector w/ indx w/o base */
  359,  /* sthpdxx: fp store vector w/ indx w/o base */
  234,  /* staps: float store vector */
  357,  /* stapsx: fp store vector w/ indx */
  359,  /* stapsxx: fp store vector w/ indx w/o base */
  234,  /* stapd: float store vector */
  357,  /* stapdx: fp store vector w/ indx */
  359,  /* stapdxx: fp store vector w/ indx w/o base */
  234,  /* stups: float store vector */
  357,  /* stupsx: fp store vector w/ indx */
  359,  /* stupsxx: fp store vector w/ indx w/o base */
  233,  /* stups_n32: float store vector w/o base or index */
  234,  /* stupd: float store vector */
  357,  /* stupdx: fp store vector w/ indx */
  359,  /* stupdxx: fp store vector w/ indx w/o base */
  233,  /* stupd_n32: float store vector w/o base or index */
  254,  /* maxsd: float arithmetic */
  254,  /* maxss: float arithmetic */
   57,  /* fmax128v32: vector arithmetic */
   58,  /* fmaxx128v32: vector arithmetic mem opnd */
   59,  /* fmaxxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fmaxxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fmax128v64: vector arithmetic */
   58,  /* fmaxx128v64: vector arithmetic mem opnd */
   59,  /* fmaxxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fmaxxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  400,  /* max64v8: mmx vector arithmetic */
  400,  /* max64v16: mmx vector arithmetic */
  400,  /* min64v8: mmx vector arithmetic */
  400,  /* min64v16: mmx vector arithmetic */
  254,  /* minsd: float arithmetic */
  254,  /* minss: float arithmetic */
   57,  /* fmin128v32: vector arithmetic */
   58,  /* fminx128v32: vector arithmetic mem opnd */
   59,  /* fminxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fminxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fmin128v64: vector arithmetic */
   58,  /* fminx128v64: vector arithmetic mem opnd */
   59,  /* fminxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fminxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  208,  /* movx2g64: fp 2 int64 */
  207,  /* movx2g: fp 2 int32 */
  205,  /* movg2x64: int64 2 float */
  203,  /* movg2x: int32 2 float */
  193,  /* movsd: fp 2 fp */
  193,  /* movss: fp 2 fp */
  262,  /* movdq: xmm to xmm */
  262,  /* movapd: xmm to xmm */
  262,  /* movaps: xmm to xmm */
  406,  /* movq2dq: mov mmx 2 sse */
  407,  /* movdq2q: mov sse 2 mmx */
  254,  /* divsd: float arithmetic */
  257,  /* divxsd: float arithmetic mem operand */
  258,  /* divxxsd: float arithmetic mem operand w/ scaled-index */
  259,  /* divxxxsd: float arithmetic mem operand w/ scaled-index w/o base */
  254,  /* divss: float arithmetic */
  257,  /* divxss: float arithmetic mem operand */
  258,  /* divxxss: float arithmetic mem operand w/ scaled-index */
  259,  /* divxxxss: float arithmetic mem operand w/ scaled-index w/o base */
   57,  /* fdiv128v32: vector arithmetic */
   58,  /* fdivx128v32: vector arithmetic mem opnd */
   59,  /* fdivxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fdivxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fdiv128v64: vector arithmetic */
   58,  /* fdivx128v64: vector arithmetic mem opnd */
   59,  /* fdivxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fdivxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  254,  /* mulsd: float arithmetic */
  254,  /* mulss: float arithmetic */
   57,  /* fmul128v32: vector arithmetic */
   58,  /* fmulx128v32: vector arithmetic mem opnd */
   59,  /* fmulxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fmulxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fmul128v64: vector arithmetic */
   58,  /* fmulx128v64: vector arithmetic mem opnd */
   59,  /* fmulxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fmulxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  257,  /* mulxsd: float arithmetic mem operand */
  257,  /* mulxss: float arithmetic mem operand */
  258,  /* mulxxsd: float arithmetic mem operand w/ scaled-index */
  259,  /* mulxxxsd: float arithmetic mem operand w/ scaled-index w/o base */
  258,  /* mulxxss: float arithmetic mem operand w/ scaled-index */
  259,  /* mulxxxss: float arithmetic mem operand w/ scaled-index w/o base */
  254,  /* subsd: float arithmetic */
  254,  /* subss: float arithmetic */
  257,  /* subxsd: float arithmetic mem operand */
  257,  /* subxss: float arithmetic mem operand */
  258,  /* subxxsd: float arithmetic mem operand w/ scaled-index */
  259,  /* subxxxsd: float arithmetic mem operand w/ scaled-index w/o base */
  258,  /* subxxss: float arithmetic mem operand w/ scaled-index */
  259,  /* subxxxss: float arithmetic mem operand w/ scaled-index w/o base */
  309,  /* ucomisd: fp ordered compare */
  310,  /* ucomixsd: fp ordered compare mem opnd */
  311,  /* ucomixxsd: fp ordered compare mem opnd w/ scaled-index */
  312,  /* ucomixxxsd: fp ordered compare mem opnd w/ scaled-index w/o base */
  309,  /* ucomiss: fp ordered compare */
  310,  /* ucomixss: fp ordered compare mem opnd */
  311,  /* ucomixxss: fp ordered compare mem opnd w/ scaled-index */
  312,  /* ucomixxxss: fp ordered compare mem opnd w/ scaled-index w/o base */
   57,  /* fsub128v32: vector arithmetic */
   58,  /* fsubx128v32: vector arithmetic mem opnd */
   59,  /* fsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fsub128v64: vector arithmetic */
   58,  /* fsubx128v64: vector arithmetic mem opnd */
   59,  /* fsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fhsub128v32: vector arithmetic */
   58,  /* fhsubx128v32: vector arithmetic mem opnd */
   59,  /* fhsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* fhsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* fhsub128v64: vector arithmetic */
   58,  /* fhsubx128v64: vector arithmetic mem opnd */
   59,  /* fhsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* fhsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  232,  /* stss: float store */
  232,  /* stntss: float store */
  356,  /* stssx: fp store w/ indx */
  356,  /* stntssx: fp store w/ indx */
  358,  /* stssxx: fp store w/ indx w/o base */
  358,  /* stntssxx: fp store w/ indx w/o base */
  232,  /* stsd: float store */
  232,  /* stntsd: float store */
  356,  /* stsdx: fp store w/ indx */
  356,  /* stntsdx: fp store w/ indx */
  358,  /* stsdxx: fp store w/ indx w/o base */
  358,  /* stntsdxx: fp store w/ indx w/o base */
  260,  /* rcpss: float unary arithmetic */
  261,  /* frcp128v32: float unary arithmetic extended */
  260,  /* sqrtsd: float unary arithmetic */
  260,  /* sqrtss: float unary arithmetic */
  260,  /* rsqrtss: float unary arithmetic */
  261,  /* fsqrt128v32: float unary arithmetic extended */
  261,  /* frsqrt128v32: float unary arithmetic extended */
  261,  /* fsqrt128v64: float unary arithmetic extended */
  400,  /* punpcklwd: mmx vector arithmetic */
  400,  /* punpcklbw: mmx vector arithmetic */
  400,  /* punpckldq: mmx vector arithmetic */
  239,  /* punpcklbw128: unpack */
  239,  /* punpcklwd128: unpack */
  239,  /* punpckldq128: unpack */
  400,  /* punpckhbw: mmx vector arithmetic */
  400,  /* punpckhwd: mmx vector arithmetic */
  400,  /* punpckhdq: mmx vector arithmetic */
  239,  /* punpckhbw128: unpack */
  239,  /* punpckhwd128: unpack */
  239,  /* punpckhdq128: unpack */
  239,  /* punpcklqdq: unpack */
  239,  /* punpckhqdq: unpack */
  400,  /* packsswb: mmx vector arithmetic */
  400,  /* packssdw: mmx vector arithmetic */
  400,  /* packuswb: mmx vector arithmetic */
  239,  /* packsswb128: unpack */
  239,  /* packssdw128: unpack */
  239,  /* packuswb128: unpack */
  245,  /* pshufd: shuffle-int */
  245,  /* pshufw: shuffle-int */
  245,  /* pshuflw: shuffle-int */
  245,  /* pshufhw: shuffle-int */
  250,  /* pslldq: packed shifts w/ immediate */
  251,  /* psllw: packed shifts */
  250,  /* psllwi: packed shifts w/ immediate */
  251,  /* pslld: packed shifts */
  250,  /* pslldi: packed shifts w/ immediate */
  251,  /* psllq: packed shifts */
  250,  /* psllqi: packed shifts w/ immediate */
  251,  /* psrlw: packed shifts */
  250,  /* psrlwi: packed shifts w/ immediate */
  251,  /* psrld: packed shifts */
  250,  /* psrldi: packed shifts w/ immediate */
  251,  /* psrlq: packed shifts */
  250,  /* psrlqi: packed shifts w/ immediate */
  251,  /* psraw: packed shifts */
  250,  /* psrawi: packed shifts w/ immediate */
  251,  /* psrad: packed shifts */
  250,  /* psradi: packed shifts w/ immediate */
  408,  /* psllw_mmx: packed mmx arith */
  409,  /* psllwi_mmx: packed mmx imm arith */
  408,  /* pslld_mmx: packed mmx arith */
  409,  /* pslldi_mmx: packed mmx imm arith */
  408,  /* psllq_mmx: packed mmx arith */
  409,  /* psllqi_mmx: packed mmx imm arith */
  408,  /* psrlw_mmx: packed mmx arith */
  409,  /* psrlwi_mmx: packed mmx imm arith */
  408,  /* psrld_mmx: packed mmx arith */
  409,  /* psrldi_mmx: packed mmx imm arith */
  408,  /* psrlq_mmx: packed mmx arith */
  409,  /* psrlqi_mmx: packed mmx imm arith */
  408,  /* psraw_mmx: packed mmx arith */
  409,  /* psrawi_mmx: packed mmx imm arith */
  408,  /* psrad_mmx: packed mmx arith */
  409,  /* psradi_mmx: packed mmx imm arith */
  408,  /* pand_mmx: packed mmx arith */
  408,  /* pandn_mmx: packed mmx arith */
  408,  /* por_mmx: packed mmx arith */
  408,  /* pxor_mmx: packed mmx arith */
   57,  /* pand: vector arithmetic */
   57,  /* pandn: vector arithmetic */
   57,  /* por: vector arithmetic */
   57,  /* pxor: vector arithmetic */
  239,  /* unpckhpd: unpack */
  239,  /* unpckhps: unpack */
  239,  /* unpcklpd: unpack */
  239,  /* unpcklps: unpack */
  240,  /* shufpd: shuffle */
  240,  /* shufps: shuffle */
  249,  /* movhlps: move-high-low */
  249,  /* movlhps: move-high-low */
  250,  /* psrldq: packed shifts w/ immediate */
  250,  /* psrlq128v64: packed shifts w/ immediate */
   57,  /* subus128v16: vector arithmetic */
  400,  /* pavgb: mmx vector arithmetic */
  400,  /* pavgw: mmx vector arithmetic */
  400,  /* psadbw: mmx vector arithmetic */
   57,  /* pavgb128: vector arithmetic */
   57,  /* pavgw128: vector arithmetic */
   57,  /* psadbw128: vector arithmetic */
  398,  /* pextrw: packed word modification */
  399,  /* pinsrw: packed word insertion */
  396,  /* pmovmskb: mmx packed move */
  397,  /* pmovmskb128: sse packed move */
  402,  /* movi32_2m: mov int32 2 mmx */
  403,  /* movi64_2m: mov int64 2 mmx */
  404,  /* movm_2i32: mov mmx 2 int32 */
  405,  /* movm_2i64: mov mmx 2 int64 */
  401,  /* pshufw64v16: MMX shuffle-int */
  420,  /* movmskps: fp128 2 int32 */
  420,  /* movmskpd: fp128 2 int32 */
  422,  /* maskmovdqu: maskmov sse */
  421,  /* maskmovq: maskmov mmx */
  423,  /* extrq: extract field xmm */
  424,  /* insertq: insert field xmm */
  427,  /* vfmaddss: vector fma4 xmm xmm xmm */
  428,  /* vfmaddxss: vector fma4 xmm xmm mem opnd */
  429,  /* vfmaddxxss: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmaddxxxss: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmaddxrss: vector fma4 xmm mem opnd xmm */
  432,  /* vfmaddxxrss: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmaddxxxrss: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmaddsd: vector fma4 xmm xmm xmm */
  428,  /* vfmaddxsd: vector fma4 xmm xmm mem opnd */
  429,  /* vfmaddxxsd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmaddxxxsd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmaddxrsd: vector fma4 xmm mem opnd xmm */
  432,  /* vfmaddxxrsd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmaddxxxrsd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmaddss: vector fma4 xmm xmm xmm */
  428,  /* vfnmaddxss: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmaddxxss: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmaddxxxss: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmaddxrss: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmaddxxrss: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmaddxxxrss: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmaddsd: vector fma4 xmm xmm xmm */
  428,  /* vfnmaddxsd: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmaddxxsd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmaddxxxsd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmaddxrsd: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmaddxxrsd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmaddxxxrsd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmaddps: vector fma4 xmm xmm xmm */
  428,  /* vfmaddxps: vector fma4 xmm xmm mem opnd */
  429,  /* vfmaddxxps: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmaddxxxps: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmaddxrps: vector fma4 xmm mem opnd xmm */
  432,  /* vfmaddxxrps: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmaddxxxrps: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmaddpd: vector fma4 xmm xmm xmm */
  428,  /* vfmaddxpd: vector fma4 xmm xmm mem opnd */
  429,  /* vfmaddxxpd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmaddxxxpd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmaddxrpd: vector fma4 xmm mem opnd xmm */
  432,  /* vfmaddxxrpd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmaddxxxrpd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmaddsubps: vector fma4 xmm xmm xmm */
  428,  /* vfmaddsubxps: vector fma4 xmm xmm mem opnd */
  429,  /* vfmaddsubxxps: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmaddsubxxxps: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmaddsubxrps: vector fma4 xmm mem opnd xmm */
  432,  /* vfmaddsubxxrps: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmaddsubxxxrps: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmaddsubpd: vector fma4 xmm xmm xmm */
  428,  /* vfmaddsubxpd: vector fma4 xmm xmm mem opnd */
  429,  /* vfmaddsubxxpd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmaddsubxxxpd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmaddsubxrpd: vector fma4 xmm mem opnd xmm */
  432,  /* vfmaddsubxxrpd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmaddsubxxxrpd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmaddps: vector fma4 xmm xmm xmm */
  428,  /* vfnmaddxps: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmaddxxps: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmaddxxxps: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmaddxrps: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmaddxxrps: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmaddxxxrps: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmaddpd: vector fma4 xmm xmm xmm */
  428,  /* vfnmaddxpd: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmaddxxpd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmaddxxxpd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmaddxrpd: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmaddxxrpd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmaddxxxrpd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmsubss: vector fma4 xmm xmm xmm */
  428,  /* vfmsubxss: vector fma4 xmm xmm mem opnd */
  429,  /* vfmsubxxss: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmsubxxxss: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmsubxrss: vector fma4 xmm mem opnd xmm */
  432,  /* vfmsubxxrss: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmsubxxxrss: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmsubsd: vector fma4 xmm xmm xmm */
  428,  /* vfmsubxsd: vector fma4 xmm xmm mem opnd */
  429,  /* vfmsubxxsd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmsubxxxsd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmsubxrsd: vector fma4 xmm mem opnd xmm */
  432,  /* vfmsubxxrsd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmsubxxxrsd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmsubss: vector fma4 xmm xmm xmm */
  428,  /* vfnmsubxss: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmsubxxss: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmsubxxxss: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmsubxrss: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmsubxxrss: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmsubxxxrss: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmsubsd: vector fma4 xmm xmm xmm */
  428,  /* vfnmsubxsd: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmsubxxsd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmsubxxxsd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmsubxrsd: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmsubxxrsd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmsubxxxrsd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmsubps: vector fma4 xmm xmm xmm */
  428,  /* vfmsubxps: vector fma4 xmm xmm mem opnd */
  429,  /* vfmsubxxps: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmsubxxxps: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmsubxrps: vector fma4 xmm mem opnd xmm */
  432,  /* vfmsubxxrps: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmsubxxxrps: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmsubpd: vector fma4 xmm xmm xmm */
  428,  /* vfmsubxpd: vector fma4 xmm xmm mem opnd */
  429,  /* vfmsubxxpd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmsubxxxpd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmsubxrpd: vector fma4 xmm mem opnd xmm */
  432,  /* vfmsubxxrpd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmsubxxxrpd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmsubaddps: vector fma4 xmm xmm xmm */
  428,  /* vfmsubaddxps: vector fma4 xmm xmm mem opnd */
  429,  /* vfmsubaddxxps: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmsubaddxxxps: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmsubaddxrps: vector fma4 xmm mem opnd xmm */
  432,  /* vfmsubaddxxrps: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmsubaddxxxrps: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfmsubaddpd: vector fma4 xmm xmm xmm */
  428,  /* vfmsubaddxpd: vector fma4 xmm xmm mem opnd */
  429,  /* vfmsubaddxxpd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfmsubaddxxxpd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfmsubaddxrpd: vector fma4 xmm mem opnd xmm */
  432,  /* vfmsubaddxxrpd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfmsubaddxxxrpd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmsubps: vector fma4 xmm xmm xmm */
  428,  /* vfnmsubxps: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmsubxxps: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmsubxxxps: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmsubxrps: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmsubxxrps: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmsubxxxrps: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
  427,  /* vfnmsubpd: vector fma4 xmm xmm xmm */
  428,  /* vfnmsubxpd: vector fma4 xmm xmm mem opnd */
  429,  /* vfnmsubxxpd: vector fma4 xmm xmm mem opnd w/ scaled index */
  430,  /* vfnmsubxxxpd: vector fma4 xmm xmm mem opnd w/ scaled index w/o base */
  431,  /* vfnmsubxrpd: vector fma4 xmm mem opnd xmm */
  432,  /* vfnmsubxxrpd: vector fma4 xmm mem opnd w/ scaled index xmm */
  433,  /* vfnmsubxxxrpd: vector fma4 xmm mem opnd w/ scaled index w/o base xmm */
    0,  /* vzeroupper: no operand */
    0,  /* mfence: no operand */
    0,  /* lfence: no operand */
    0,  /* sfence: no operand */
    2,  /* monitor: sse3 monitor */
    3,  /* mwait: sse3 mwait */
    0,  /* asm: no operand */
  370,  /* intrncall: intrncall */
  368,  /* spadjust: spadjust */
  369,  /* savexmms: savexmms */
  373,  /* zero32: zero32 */
  374,  /* zero64: zero64 */
  375,  /* xzero32: xzero */
  375,  /* xzero64: xzero */
  376,  /* xzero128v32: xzerov */
  376,  /* xzero128v64: xzerov */
  256,  /* fadd: x87 float arithmetic */
  256,  /* faddp: x87 float arithmetic */
  225,  /* flds: x87 float load */
  226,  /* flds_n32: x87 float load w/o index or base */
  225,  /* fldl: x87 float load */
  226,  /* fldl_n32: x87 float load w/o index or base */
  225,  /* fldt: x87 float load */
  226,  /* fldt_n32: x87 float load w/o index or base */
  224,  /* fld: x87-stack float load */
  236,  /* fst: x87 store and pop */
  236,  /* fstp: x87 store and pop */
  237,  /* fstps: x87 float store */
  238,  /* fstps_n32: x87 float store w/o base or index */
  237,  /* fstpl: x87 float store */
  238,  /* fstpl_n32: x87 float store w/o base or index */
  237,  /* fstpt: x87 float store */
  238,  /* fstpt_n32: x87 float store w/o base or index */
  237,  /* fsts: x87 float store */
  238,  /* fsts_n32: x87 float store w/o base or index */
  237,  /* fstl: x87 float store */
  238,  /* fstl_n32: x87 float store w/o base or index */
  255,  /* fxch: x87 float exchange */
  264,  /* fmov: x87 to x87 */
  256,  /* fsub: x87 float arithmetic */
  256,  /* fsubr: x87 float arithmetic */
  256,  /* fsubp: x87 float arithmetic */
  256,  /* fsubrp: x87 float arithmetic */
  256,  /* fmul: x87 float arithmetic */
  256,  /* fmulp: x87 float arithmetic */
  256,  /* fdiv: x87 float arithmetic */
  256,  /* fdivp: x87 float arithmetic */
  256,  /* fdivr: x87 float arithmetic */
  256,  /* fdivrp: x87 float arithmetic */
  313,  /* fucomi: x87 fp compare */
  313,  /* fucomip: x87 fp compare */
  264,  /* fchs: x87 to x87 */
  264,  /* frndint: x87 to x87 */
  228,  /* fnstcw: x87 control-word store */
  227,  /* fldcw: x87 control-word load */
  235,  /* fistps: x87 float store */
  235,  /* fistpl: x87 float store */
  235,  /* fists: x87 float store */
  235,  /* fistl: x87 float store */
  235,  /* fistpll: x87 float store */
  225,  /* filds: x87 float load */
  225,  /* fildl: x87 float load */
  225,  /* fildll: x87 float load */
  263,  /* fldz: x87 load const */
  264,  /* fabs: x87 to x87 */
  264,  /* fsqrt: x87 to x87 */
  192,  /* fcmovb: cond x87 mov */
  192,  /* fcmovbe: cond x87 mov */
  192,  /* fcmovnb: cond x87 mov */
  192,  /* fcmovnbe: cond x87 mov */
  192,  /* fcmove: cond x87 mov */
  192,  /* fcmovne: cond x87 mov */
  192,  /* fcmovu: cond x87 mov */
  192,  /* fcmovnu: cond x87 mov */
  264,  /* fcos: x87 to x87 */
  264,  /* fsin: x87 to x87 */
  321,  /* cmpeqpd: fp vector compare I */
  321,  /* cmpltpd: fp vector compare I */
  321,  /* cmplepd: fp vector compare I */
  321,  /* cmpunordpd: fp vector compare I */
  321,  /* cmpneqpd: fp vector compare I */
  321,  /* cmpnltpd: fp vector compare I */
  321,  /* cmpnlepd: fp vector compare I */
  321,  /* cmpordpd: fp vector compare I */
  321,  /* cmpeqps: fp vector compare I */
  321,  /* cmpltps: fp vector compare I */
  321,  /* cmpleps: fp vector compare I */
  321,  /* cmpunordps: fp vector compare I */
  321,  /* cmpneqps: fp vector compare I */
  321,  /* cmpnltps: fp vector compare I */
  321,  /* cmpnleps: fp vector compare I */
  321,  /* cmpordps: fp vector compare I */
  315,  /* cmpeqsd: fp compare I */
  315,  /* cmpltsd: fp compare I */
  315,  /* cmplesd: fp compare I */
  315,  /* cmpunordsd: fp compare I */
  315,  /* cmpneqsd: fp compare I */
  315,  /* cmpnltsd: fp compare I */
  315,  /* cmpnlesd: fp compare I */
  315,  /* cmpordsd: fp compare I */
  315,  /* cmpeqss: fp compare I */
  315,  /* cmpltss: fp compare I */
  315,  /* cmpless: fp compare I */
  315,  /* cmpunordss: fp compare I */
  315,  /* cmpneqss: fp compare I */
  315,  /* cmpnltss: fp compare I */
  315,  /* cmpnless: fp compare I */
  315,  /* cmpordss: fp compare I */
    0,  /* emms: no operand */
  364,  /* stmxcsr: jump mem */
  364,  /* ldmxcsr: jump mem */
    1,  /* clflush: sse2 clflush */
  235,  /* fisttps: x87 float store */
  235,  /* fisttpl: x87 float store */
  235,  /* fisttpll: x87 float store */
   45,  /* pabs128v8: vector unary reg */
   46,  /* pabsx128v8: vector unary mem opnd */
   47,  /* pabsxx128v8: vector unary mem opnd w/ scaled index */
   48,  /* pabsxxx128v8: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pabs128v16: vector unary reg */
   46,  /* pabsx128v16: vector unary mem opnd */
   47,  /* pabsxx128v16: vector unary mem opnd w/ scaled index */
   48,  /* pabsxxx128v16: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pabs128v32: vector unary reg */
   46,  /* pabsx128v32: vector unary mem opnd */
   47,  /* pabsxx128v32: vector unary mem opnd w/ scaled index */
   48,  /* pabsxxx128v32: vector unary mem opnd w/ scaled index w/o base */
   57,  /* psign128v8: vector arithmetic */
   58,  /* psignx128v8: vector arithmetic mem opnd */
   59,  /* psignxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* psignxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* psign128v16: vector arithmetic */
   58,  /* psignx128v16: vector arithmetic mem opnd */
   59,  /* psignxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* psignxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* psign128v32: vector arithmetic */
   58,  /* psignx128v32: vector arithmetic mem opnd */
   59,  /* psignxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* psignxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
  241,  /* pshuf128v8: pshufb */
  242,  /* pshufx128v8: pshufb mem */
  243,  /* pshufxx128v8: pshufb mem w/ scaled index w/ base */
  244,  /* pshufxxx128v8: pshufb mem w/ scaled index w/o base */
   57,  /* phsub128v16: vector arithmetic */
   58,  /* phsubx128v16: vector arithmetic mem opnd */
   59,  /* phsubxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* phsubxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* phsub128v32: vector arithmetic */
   58,  /* phsubx128v32: vector arithmetic mem opnd */
   59,  /* phsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* phsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* phsubs128v16: vector arithmetic */
   58,  /* phsubsx128v16: vector arithmetic mem opnd */
   59,  /* phsubsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* phsubsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* phadd128v16: vector arithmetic */
   58,  /* phaddx128v16: vector arithmetic mem opnd */
   59,  /* phaddxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* phaddxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* phadd128v32: vector arithmetic */
   58,  /* phaddx128v32: vector arithmetic mem opnd */
   59,  /* phaddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* phaddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* phadds128v16: vector arithmetic */
   58,  /* phaddsx128v16: vector arithmetic mem opnd */
   59,  /* phaddsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* phaddsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* pmulhrsw128: vector arithmetic */
   58,  /* pmulhrswx128: vector arithmetic mem opnd */
   59,  /* pmulhrswxx128: vector arithmetic mem opnd w/ scaled index */
   60,  /* pmulhrswxxx128: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* pmaddubsw128: vector arithmetic */
   58,  /* pmaddubswx128: vector arithmetic mem opnd */
   59,  /* pmaddubswxx128: vector arithmetic mem opnd w/ scaled index */
   60,  /* pmaddubswxxx128: vector arithmetic mem opnd w/ scaled index w/o base */
   75,  /* palignr128: vector res reg reg imm */
   76,  /* palignrx128: vector res reg mem imm */
   77,  /* palignrxx128: vector res reg mem imm w/ scaled index */
   78,  /* palignrxxx128: vector res reg mem imm w/ scaled index w/o base */
   57,  /* muldq: vector arithmetic */
   58,  /* muldqx: vector arithmetic mem opnd */
   59,  /* muldqxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* muldqxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  230,  /* ldntdqa: float load vector */
   58,  /* ldntdqax: vector arithmetic mem opnd */
   59,  /* ldntdqaxx: vector arithmetic mem opnd w/ scaled index */
  234,  /* stntdq: float store vector */
   58,  /* stntdqx: vector arithmetic mem opnd */
   59,  /* stntdqxx: vector arithmetic mem opnd w/ scaled index */
   57,  /* minu128v8: vector arithmetic */
   58,  /* minux128v8: vector arithmetic mem opnd */
   59,  /* minuxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* minuxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* mins128v8: vector arithmetic */
   58,  /* minsx128v8: vector arithmetic mem opnd */
   59,  /* minsxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* minsxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* maxu128v8: vector arithmetic */
   58,  /* maxux128v8: vector arithmetic mem opnd */
   59,  /* maxuxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* maxuxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* maxs128v8: vector arithmetic */
   58,  /* maxsx128v8: vector arithmetic mem opnd */
   59,  /* maxsxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* maxsxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* mins128v16: vector arithmetic */
   58,  /* minsx128v16: vector arithmetic mem opnd */
   59,  /* minsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* minsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* maxs128v16: vector arithmetic */
   58,  /* maxsx128v16: vector arithmetic mem opnd */
   59,  /* maxsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* maxsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* minu128v16: vector arithmetic */
   58,  /* minux128v16: vector arithmetic mem opnd */
   59,  /* minuxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* minuxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* maxu128v16: vector arithmetic */
   58,  /* maxux128v16: vector arithmetic mem opnd */
   59,  /* maxuxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* maxuxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* minu128v32: vector arithmetic */
   58,  /* minux128v32: vector arithmetic mem opnd */
   59,  /* minuxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* minuxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* maxu128v32: vector arithmetic */
   58,  /* maxux128v32: vector arithmetic mem opnd */
   59,  /* maxuxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* maxuxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* mins128v32: vector arithmetic */
   58,  /* minsx128v32: vector arithmetic mem opnd */
   59,  /* minsxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* minsxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* maxs128v32: vector arithmetic */
   58,  /* maxsx128v32: vector arithmetic mem opnd */
   59,  /* maxsxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* maxsxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   45,  /* pmovsxbw: vector unary reg */
   46,  /* pmovsxbwx: vector unary mem opnd */
   47,  /* pmovsxbwxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovsxbwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovzxbw: vector unary reg */
   46,  /* pmovzxbwx: vector unary mem opnd */
   47,  /* pmovzxbwxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovzxbwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovsxbd: vector unary reg */
   46,  /* pmovsxbdx: vector unary mem opnd */
   47,  /* pmovsxbdxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovsxbdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovzxbd: vector unary reg */
   46,  /* pmovzxbdx: vector unary mem opnd */
   47,  /* pmovzxbdxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovzxbdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovsxbq: vector unary reg */
   46,  /* pmovsxbqx: vector unary mem opnd */
   47,  /* pmovsxbqxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovsxbqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovzxbq: vector unary reg */
   46,  /* pmovzxbqx: vector unary mem opnd */
   47,  /* pmovzxbqxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovzxbqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovsxwd: vector unary reg */
   46,  /* pmovsxwdx: vector unary mem opnd */
   47,  /* pmovsxwdxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovsxwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovzxwd: vector unary reg */
   46,  /* pmovzxwdx: vector unary mem opnd */
   47,  /* pmovzxwdxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovzxwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovsxwq: vector unary reg */
   46,  /* pmovsxwqx: vector unary mem opnd */
   47,  /* pmovsxwqxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovsxwqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovzxwq: vector unary reg */
   46,  /* pmovzxwqx: vector unary mem opnd */
   47,  /* pmovzxwqxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovzxwqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovsxdq: vector unary reg */
   46,  /* pmovsxdqx: vector unary mem opnd */
   47,  /* pmovsxdqxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovsxdqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* pmovzxdq: vector unary reg */
   46,  /* pmovzxdqx: vector unary mem opnd */
   47,  /* pmovzxdqxx: vector unary mem opnd w/ scaled index */
   48,  /* pmovzxdqxxx: vector unary mem opnd w/ scaled index w/o base */
   57,  /* mul128v32: vector arithmetic */
   58,  /* mulx128v32: vector arithmetic mem opnd */
   59,  /* mulxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* mulxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* cmpeq128v64: vector arithmetic */
   58,  /* cmpeqx128v64: vector arithmetic mem opnd */
   59,  /* cmpeqxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* cmpeqxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* packusdw: vector arithmetic */
   58,  /* packusdwx: vector arithmetic mem opnd */
   59,  /* packusdwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* packusdwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   45,  /* phminposuw: vector unary reg */
   46,  /* phminposuwx: vector unary mem opnd */
   47,  /* phminposuwxx: vector unary mem opnd w/ scaled index */
   48,  /* phminposuwxxx: vector unary mem opnd w/ scaled index w/o base */
  316,  /* ptest128: vector ptest reg */
  317,  /* ptestx128: vector ptest mem opnd */
  318,  /* ptestxx128: vector ptest mem opnd w/ scaled index */
  319,  /* ptestxxx128: vector ptest mem opnd w/ scaled index w/o base */
   66,  /* roundsd: vector res reg imm */
   67,  /* roundxsd: vector res mem imm */
   68,  /* roundxxsd: vector res reg mem imm w/ scaled index */
   69,  /* roundxxxsd: vector res reg mem imm w/ scaled index w/o base */
   75,  /* mpsadbw: vector res reg reg imm */
   76,  /* mpsadbwx: vector res reg mem imm */
   77,  /* mpsadbwxx: vector res reg mem imm w/ scaled index */
   78,  /* mpsadbwxxx: vector res reg mem imm w/ scaled index w/o base */
   70,  /* insr128v8: vector pinsr 8/16/32 */
   72,  /* insrx128v8: vector pinsr 8/16/32 mem */
   73,  /* insrxx128v8: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* insrxxx128v8: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   70,  /* insr128v16: vector pinsr 8/16/32 */
   72,  /* insrx128v16: vector pinsr 8/16/32 mem */
   73,  /* insrxx128v16: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* insrxxx128v16: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   70,  /* insr128v32: vector pinsr 8/16/32 */
   72,  /* insrx128v32: vector pinsr 8/16/32 mem */
   73,  /* insrxx128v32: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* insrxxx128v32: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   71,  /* insr128v64: vector pinsr 64 */
   72,  /* insrx128v64: vector pinsr 8/16/32 mem */
   73,  /* insrxx128v64: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* insrxxx128v64: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   61,  /* extr128v8: vector extract int32 reg imm */
   63,  /* extrx128v8: vector extract mem reg imm */
   64,  /* extrxx128v8: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* extrxxx128v8: vector extract mem w/ scaled index w/o base reg imm */
   61,  /* extr128v16: vector extract int32 reg imm */
   63,  /* extrx128v16: vector extract mem reg imm */
   64,  /* extrxx128v16: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* extrxxx128v16: vector extract mem w/ scaled index w/o base reg imm */
   61,  /* extr128v32: vector extract int32 reg imm */
   63,  /* extrx128v32: vector extract mem reg imm */
   64,  /* extrxx128v32: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* extrxxx128v32: vector extract mem w/ scaled index w/o base reg imm */
   62,  /* extr128v64: vector extract int64 reg imm */
   63,  /* extrx128v64: vector extract mem reg imm */
   64,  /* extrxx128v64: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* extrxxx128v64: vector extract mem w/ scaled index w/o base reg imm */
   75,  /* finsr128v32: vector res reg reg imm */
   76,  /* finsrx128v32: vector res reg mem imm */
   77,  /* finsrxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* finsrxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   66,  /* fextr128v32: vector res reg imm */
   63,  /* fextrx128v32: vector extract mem reg imm */
   64,  /* fextrxx128v32: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* fextrxxx128v32: vector extract mem w/ scaled index w/o base reg imm */
   79,  /* fblendv128v32: SSE4.1 blendv res reg reg reg */
   80,  /* fblendvx128v32: SSE4.1 blendv res reg mem reg */
   81,  /* fblendvxx128v32: SSE4.1 blendv res reg mem reg w/ scaled index */
   82,  /* fblendvxxx128v32: SSE4.1 blendv res reg mem reg w/ scaled index w/o base */
   79,  /* fblendv128v64: SSE4.1 blendv res reg reg reg */
   80,  /* fblendvx128v64: SSE4.1 blendv res reg mem reg */
   81,  /* fblendvxx128v64: SSE4.1 blendv res reg mem reg w/ scaled index */
   82,  /* fblendvxxx128v64: SSE4.1 blendv res reg mem reg w/ scaled index w/o base */
   79,  /* blendv128v8: SSE4.1 blendv res reg reg reg */
   80,  /* blendvx128v8: SSE4.1 blendv res reg mem reg */
   81,  /* blendvxx128v8: SSE4.1 blendv res reg mem reg w/ scaled index */
   82,  /* blendvxxx128v8: SSE4.1 blendv res reg mem reg w/ scaled index w/o base */
   66,  /* round128v32: vector res reg imm */
   67,  /* roundx128v32: vector res mem imm */
   68,  /* roundxx128v32: vector res reg mem imm w/ scaled index */
   69,  /* roundxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   66,  /* roundss: vector res reg imm */
   67,  /* roundxss: vector res mem imm */
   68,  /* roundxxss: vector res reg mem imm w/ scaled index */
   69,  /* roundxxxss: vector res reg mem imm w/ scaled index w/o base */
   75,  /* fblend128v64: vector res reg reg imm */
   76,  /* fblendx128v64: vector res reg mem imm */
   77,  /* fblendxx128v64: vector res reg mem imm w/ scaled index */
   78,  /* fblendxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   75,  /* blend128v16: vector res reg reg imm */
   76,  /* blendx128v16: vector res reg mem imm */
   77,  /* blendxx128v16: vector res reg mem imm w/ scaled index */
   78,  /* blendxxx128v16: vector res reg mem imm w/ scaled index w/o base */
   75,  /* fdp128v32: vector res reg reg imm */
   76,  /* fdpx128v32: vector res reg mem imm */
   77,  /* fdpxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* fdpxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   75,  /* fdp128v64: vector res reg reg imm */
   76,  /* fdpx128v64: vector res reg mem imm */
   77,  /* fdpxx128v64: vector res reg mem imm w/ scaled index */
   78,  /* fdpxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   66,  /* round128v64: vector res reg imm */
   67,  /* roundx128v64: vector res mem imm */
   68,  /* roundxx128v64: vector res reg mem imm w/ scaled index */
   69,  /* roundxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   75,  /* fblend128v32: vector res reg reg imm */
   76,  /* fblendx128v32: vector res reg mem imm */
   77,  /* fblendxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* fblendxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   57,  /* cmpgt128v64: vector arithmetic */
   58,  /* cmpgtx128v64: vector arithmetic mem opnd */
   59,  /* cmpgtxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* cmpgtxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   12,  /* crc32w: sse4.2 crc32w reg */
   15,  /* crc32wx: sse4.2 crc32 mem opnd */
   17,  /* crc32wxx: sse4.2 crc32 mem opnd w/ scaled index */
   19,  /* crc32wxxx: sse4.2 crc32 mem opnd w/ scaled index w/o base */
   13,  /* crc32d: sse4.2 crc32d reg */
   15,  /* crc32dx: sse4.2 crc32 mem opnd */
   17,  /* crc32dxx: sse4.2 crc32 mem opnd w/ scaled index */
   19,  /* crc32dxxx: sse4.2 crc32 mem opnd w/ scaled index w/o base */
   14,  /* crc32q: sse4.2 crc32q reg */
   16,  /* crc32qx: sse4.2 crc32q mem opnd */
   18,  /* crc32qxx: sse4.2 crc32q mem opnd w/ scaled index */
   20,  /* crc32qxxx: sse4.2 crc32q mem opnd w/ scaled index w/o base */
   11,  /* crc32b: sse4.2 crc32b reg */
   15,  /* crc32bx: sse4.2 crc32 mem opnd */
   17,  /* crc32bxx: sse4.2 crc32 mem opnd w/ scaled index */
   19,  /* crc32bxxx: sse4.2 crc32 mem opnd w/ scaled index w/o base */
  442,  /* cmpestrm: pcmpestrm reg */
  443,  /* cmpestrmx: pcmpestrm mem opnd */
  444,  /* cmpestrmxx: pcmpestrm mem opnd w/ scaled index */
  445,  /* cmpestrmxxx: pcmpestrm mem opnd w/ scaled index w/o base */
  438,  /* cmpestri: pcmpestri reg */
  439,  /* cmpestrix: pcmpestri mem opnd */
  440,  /* cmpestrixx: pcmpestri mem opnd w/ scaled index */
  441,  /* cmpestrixxx: pcmpestri mem opnd w/ scaled index w/o base */
  450,  /* cmpistrm: pcmpistrm reg */
  451,  /* cmpistrmx: pcmpistrm mem opnd */
  452,  /* cmpistrmxx: pcmpistrm mem opnd w/ scaled index */
  453,  /* cmpistrmxxx: pcmpistrm mem opnd w/ scaled index w/o base */
  446,  /* cmpistri: pcmpistri reg */
  447,  /* cmpistrix: pcmpistri mem opnd */
  448,  /* cmpistrixx: pcmpistri mem opnd w/ scaled index */
  449,  /* cmpistrixxx: pcmpistri mem opnd w/ scaled index w/o base */
   21,  /* popcnt16: int16 unary reg */
   22,  /* popcntx16: int16 unary mem opnd */
   23,  /* popcntxx16: int16 unary mem opnd w/ scaled index */
   24,  /* popcntxxx16: int16 unary mem opnd w/ scaled index w/o base */
   25,  /* popcnt32: int32 unary reg */
   26,  /* popcntx32: int32 unary mem opnd */
   27,  /* popcntxx32: int32 unary mem opnd w/ scaled index */
   28,  /* popcntxxx32: int32 unary mem opnd w/ scaled index w/o base */
   29,  /* popcnt64: int64 unary reg */
   30,  /* popcntx64: int64 unary mem opnd */
   31,  /* popcntxx64: int64 unary mem opnd w/ scaled index */
   32,  /* popcntxxx64: int64 unary mem opnd w/ scaled index w/o base */
   45,  /* aesimc: vector unary reg */
   46,  /* aesimcx: vector unary mem opnd */
   47,  /* aesimcxx: vector unary mem opnd w/ scaled index */
   48,  /* aesimcxxx: vector unary mem opnd w/ scaled index w/o base */
   49,  /* aeskeygenassist: aeskeygenassist reg */
   50,  /* aeskeygenassistx: aeskeygenassist mem opnd */
   51,  /* aeskeygenassistxx: aeskeygenassist mem opnd w/ scaled index */
   52,  /* aeskeygenassistxxx: aeskeygenassist mem opnd w/ scaled index w/o base */
   57,  /* aesenc: vector arithmetic */
   58,  /* aesencx: vector arithmetic mem opnd */
   59,  /* aesencxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* aesencxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* aesenclast: vector arithmetic */
   58,  /* aesenclastx: vector arithmetic mem opnd */
   59,  /* aesenclastxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* aesenclastxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* aesdec: vector arithmetic */
   58,  /* aesdecx: vector arithmetic mem opnd */
   59,  /* aesdecxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* aesdecxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* aesdeclast: vector arithmetic */
   58,  /* aesdeclastx: vector arithmetic mem opnd */
   59,  /* aesdeclastxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* aesdeclastxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   75,  /* pclmulqdq: vector res reg reg imm */
   76,  /* pclmulqdqx: vector res reg mem imm */
   77,  /* pclmulqdqxx: vector res reg mem imm w/ scaled index */
   78,  /* pclmulqdqxxx: vector res reg mem imm w/ scaled index w/o base */
   45,  /* vphaddbd: vector unary reg */
   46,  /* vphaddbdx: vector unary mem opnd */
   47,  /* vphaddbdxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddbdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddbq: vector unary reg */
   46,  /* vphaddbqx: vector unary mem opnd */
   47,  /* vphaddbqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddbqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddbw: vector unary reg */
   46,  /* vphaddbwx: vector unary mem opnd */
   47,  /* vphaddbwxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddbwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphadddq: vector unary reg */
   46,  /* vphadddqx: vector unary mem opnd */
   47,  /* vphadddqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphadddqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddubd: vector unary reg */
   46,  /* vphaddubdx: vector unary mem opnd */
   47,  /* vphaddubdxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddubdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddubq: vector unary reg */
   46,  /* vphaddubqx: vector unary mem opnd */
   47,  /* vphaddubqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddubqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddubw: vector unary reg */
   46,  /* vphaddubwx: vector unary mem opnd */
   47,  /* vphaddubwxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddubwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddudq: vector unary reg */
   46,  /* vphaddudqx: vector unary mem opnd */
   47,  /* vphaddudqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddudqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphadduwd: vector unary reg */
   46,  /* vphadduwdx: vector unary mem opnd */
   47,  /* vphadduwdxx: vector unary mem opnd w/ scaled index */
   48,  /* vphadduwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphadduwq: vector unary reg */
   46,  /* vphadduwqx: vector unary mem opnd */
   47,  /* vphadduwqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphadduwqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddwd: vector unary reg */
   46,  /* vphaddwdx: vector unary mem opnd */
   47,  /* vphaddwdxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphaddwq: vector unary reg */
   46,  /* vphaddwqx: vector unary mem opnd */
   47,  /* vphaddwqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphaddwqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphsubbw: vector unary reg */
   46,  /* vphsubbwx: vector unary mem opnd */
   47,  /* vphsubbwxx: vector unary mem opnd w/ scaled index */
   48,  /* vphsubbwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphsubdq: vector unary reg */
   46,  /* vphsubdqx: vector unary mem opnd */
   47,  /* vphsubdqxx: vector unary mem opnd w/ scaled index */
   48,  /* vphsubdqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vphsubwd: vector unary reg */
   46,  /* vphsubwdx: vector unary mem opnd */
   47,  /* vphsubwdxx: vector unary mem opnd w/ scaled index */
   48,  /* vphsubwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vfrczpd: vector unary reg */
   46,  /* vfrczpdx: vector unary mem opnd */
   47,  /* vfrczpdxx: vector unary mem opnd w/ scaled index */
   48,  /* vfrczpdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vfrczps: vector unary reg */
   46,  /* vfrczpsx: vector unary mem opnd */
   47,  /* vfrczpsxx: vector unary mem opnd w/ scaled index */
   48,  /* vfrczpsxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vfrczsd: vector unary reg */
   46,  /* vfrczsdx: vector unary mem opnd */
   47,  /* vfrczsdxx: vector unary mem opnd w/ scaled index */
   48,  /* vfrczsdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vfrczss: vector unary reg */
   46,  /* vfrczssx: vector unary mem opnd */
   47,  /* vfrczssxx: vector unary mem opnd w/ scaled index */
   48,  /* vfrczssxxx: vector unary mem opnd w/ scaled index w/o base */
   66,  /* vprotbi: vector res reg imm */
   67,  /* vprotbix: vector res mem imm */
   68,  /* vprotbixx: vector res reg mem imm w/ scaled index */
   69,  /* vprotbixxx: vector res reg mem imm w/ scaled index w/o base */
   66,  /* vprotdi: vector res reg imm */
   67,  /* vprotdix: vector res mem imm */
   68,  /* vprotdixx: vector res reg mem imm w/ scaled index */
   69,  /* vprotdixxx: vector res reg mem imm w/ scaled index w/o base */
   66,  /* vprotqi: vector res reg imm */
   67,  /* vprotqix: vector res mem imm */
   68,  /* vprotqixx: vector res reg mem imm w/ scaled index */
   69,  /* vprotqixxx: vector res reg mem imm w/ scaled index w/o base */
   66,  /* vprotwi: vector res reg imm */
   67,  /* vprotwix: vector res mem imm */
   68,  /* vprotwixx: vector res reg mem imm w/ scaled index */
   69,  /* vprotwixxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomb: vector res reg reg imm */
   76,  /* vpcombx: vector res reg mem imm */
   77,  /* vpcombxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcombxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomd: vector res reg reg imm */
   76,  /* vpcomdx: vector res reg mem imm */
   77,  /* vpcomdxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomdxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomq: vector res reg reg imm */
   76,  /* vpcomqx: vector res reg mem imm */
   77,  /* vpcomqxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomqxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomw: vector res reg reg imm */
   76,  /* vpcomwx: vector res reg mem imm */
   77,  /* vpcomwxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomwxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomub: vector res reg reg imm */
   76,  /* vpcomubx: vector res reg mem imm */
   77,  /* vpcomubxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomubxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomud: vector res reg reg imm */
   76,  /* vpcomudx: vector res reg mem imm */
   77,  /* vpcomudxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomudxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomuq: vector res reg reg imm */
   76,  /* vpcomuqx: vector res reg mem imm */
   77,  /* vpcomuqxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomuqxxx: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpcomuw: vector res reg reg imm */
   76,  /* vpcomuwx: vector res reg mem imm */
   77,  /* vpcomuwxx: vector res reg mem imm w/ scaled index */
   78,  /* vpcomuwxxx: vector res reg mem imm w/ scaled index w/o base */
   90,  /* vpperm: vector res reg reg reg */
   91,  /* vppermx: vector res reg mem reg */
   92,  /* vppermxx: vector res reg mem reg w/ scaled index */
   93,  /* vppermxxx: vector res reg mem reg w/ scaled index w/o base */
   94,  /* vppermxr: vector res reg reg memr */
   95,  /* vppermxxr: vector res reg reg memr w/ scaled index */
   96,  /* vppermxxxr: vector res reg reg memr w/ scaled index w/o base */
   83,  /* vprotb: vector res reg reg */
   84,  /* vprotbx: vector res mem reg */
   86,  /* vprotbxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vprotbxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vprotbxr: vector res reg mem */
   87,  /* vprotbxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vprotbxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vprotd: vector res reg reg */
   84,  /* vprotdx: vector res mem reg */
   86,  /* vprotdxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vprotdxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vprotdxr: vector res reg mem */
   87,  /* vprotdxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vprotdxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vprotq: vector res reg reg */
   84,  /* vprotqx: vector res mem reg */
   86,  /* vprotqxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vprotqxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vprotqxr: vector res reg mem */
   87,  /* vprotqxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vprotqxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vprotw: vector res reg reg */
   84,  /* vprotwx: vector res mem reg */
   86,  /* vprotwxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vprotwxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vprotwxr: vector res reg mem */
   87,  /* vprotwxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vprotwxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshab: vector res reg reg */
   84,  /* vpshabx: vector res mem reg */
   86,  /* vpshabxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshabxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshabxr: vector res reg mem */
   87,  /* vpshabxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshabxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshad: vector res reg reg */
   84,  /* vpshadx: vector res mem reg */
   86,  /* vpshadxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshadxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshadxr: vector res reg mem */
   87,  /* vpshadxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshadxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshaq: vector res reg reg */
   84,  /* vpshaqx: vector res mem reg */
   86,  /* vpshaqxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshaqxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshaqxr: vector res reg mem */
   87,  /* vpshaqxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshaqxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshaw: vector res reg reg */
   84,  /* vpshawx: vector res mem reg */
   86,  /* vpshawxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshawxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshawxr: vector res reg mem */
   87,  /* vpshawxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshawxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshlb: vector res reg reg */
   84,  /* vpshlbx: vector res mem reg */
   86,  /* vpshlbxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshlbxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshlbxr: vector res reg mem */
   87,  /* vpshlbxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshlbxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshld: vector res reg reg */
   84,  /* vpshldx: vector res mem reg */
   86,  /* vpshldxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshldxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshldxr: vector res reg mem */
   87,  /* vpshldxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshldxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshlq: vector res reg reg */
   84,  /* vpshlqx: vector res mem reg */
   86,  /* vpshlqxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshlqxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshlqxr: vector res reg mem */
   87,  /* vpshlqxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshlqxxxr: vector res reg mem w/ scaled index w/o base */
   83,  /* vpshlw: vector res reg reg */
   84,  /* vpshlwx: vector res mem reg */
   86,  /* vpshlwxx: vector res mem w/ scaled index w/ base reg */
   88,  /* vpshlwxxx: vector res mem w/ scaled index w/o base reg */
   85,  /* vpshlwxr: vector res reg mem */
   87,  /* vpshlwxxr: vector res reg mem w/ scaled index w/ base */
   89,  /* vpshlwxxxr: vector res reg mem w/ scaled index w/o base */
   90,  /* vpcmov: vector res reg reg reg */
   91,  /* vpcmovx: vector res reg mem reg */
   92,  /* vpcmovxx: vector res reg mem reg w/ scaled index */
   93,  /* vpcmovxxx: vector res reg mem reg w/ scaled index w/o base */
   94,  /* vpcmovxr: vector res reg reg memr */
   95,  /* vpcmovxxr: vector res reg reg memr w/ scaled index */
   96,  /* vpcmovxxxr: vector res reg reg memr w/ scaled index w/o base */
   90,  /* vpmacsdd: vector res reg reg reg */
   91,  /* vpmacsddx: vector res reg mem reg */
   92,  /* vpmacsddxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacsddxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacsdqh: vector res reg reg reg */
   91,  /* vpmacsdqhx: vector res reg mem reg */
   92,  /* vpmacsdqhxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacsdqhxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacsdql: vector res reg reg reg */
   91,  /* vpmacsdqlx: vector res reg mem reg */
   92,  /* vpmacsdqlxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacsdqlxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacssdd: vector res reg reg reg */
   91,  /* vpmacssddx: vector res reg mem reg */
   92,  /* vpmacssddxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacssddxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacssdqh: vector res reg reg reg */
   91,  /* vpmacssdqhx: vector res reg mem reg */
   92,  /* vpmacssdqhxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacssdqhxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacssdql: vector res reg reg reg */
   91,  /* vpmacssdqlx: vector res reg mem reg */
   92,  /* vpmacssdqlxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacssdqlxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacsswd: vector res reg reg reg */
   91,  /* vpmacsswdx: vector res reg mem reg */
   92,  /* vpmacsswdxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacsswdxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacssww: vector res reg reg reg */
   91,  /* vpmacsswwx: vector res reg mem reg */
   92,  /* vpmacsswwxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacsswwxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacswd: vector res reg reg reg */
   91,  /* vpmacswdx: vector res reg mem reg */
   92,  /* vpmacswdxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacswdxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmacsww: vector res reg reg reg */
   91,  /* vpmacswwx: vector res reg mem reg */
   92,  /* vpmacswwxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmacswwxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmadcsswd: vector res reg reg reg */
   91,  /* vpmadcsswdx: vector res reg mem reg */
   92,  /* vpmadcsswdxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmadcsswdxxx: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vpmadcswd: vector res reg reg reg */
   91,  /* vpmadcswdx: vector res reg mem reg */
   92,  /* vpmadcswdxx: vector res reg mem reg w/ scaled index */
   93,  /* vpmadcswdxxx: vector res reg mem reg w/ scaled index w/o base */
   57,  /* vfadd128v64: vector arithmetic */
   58,  /* vfaddx128v64: vector arithmetic mem opnd */
   59,  /* vfaddxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfaddxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfadd128v32: vector arithmetic */
   58,  /* vfaddx128v32: vector arithmetic mem opnd */
   59,  /* vfaddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfaddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfaddsd: vector arithmetic */
   58,  /* vfaddxsd: vector arithmetic mem opnd */
   59,  /* vfaddxxsd: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfaddxxxsd: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfaddss: vector arithmetic */
   58,  /* vfaddxss: vector arithmetic mem opnd */
   59,  /* vfaddxxss: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfaddxxxss: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfaddsub128v64: vector arithmetic */
   58,  /* vfaddsubx128v64: vector arithmetic mem opnd */
   59,  /* vfaddsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfaddsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfaddsub128v32: vector arithmetic */
   58,  /* vfaddsubx128v32: vector arithmetic mem opnd */
   59,  /* vfaddsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfaddsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vaesenc: vector arithmetic */
   58,  /* vaesencx: vector arithmetic mem opnd */
   59,  /* vaesencxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaesencxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vaesenclast: vector arithmetic */
   58,  /* vaesenclastx: vector arithmetic mem opnd */
   59,  /* vaesenclastxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaesenclastxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vaesdec: vector arithmetic */
   58,  /* vaesdecx: vector arithmetic mem opnd */
   59,  /* vaesdecxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaesdecxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vaesdeclast: vector arithmetic */
   58,  /* vaesdeclastx: vector arithmetic mem opnd */
   59,  /* vaesdeclastxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaesdeclastxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   45,  /* vaesimc: vector unary reg */
   46,  /* vaesimcx: vector unary mem opnd */
   47,  /* vaesimcxx: vector unary mem opnd w/ scaled index */
   48,  /* vaesimcxxx: vector unary mem opnd w/ scaled index w/o base */
   49,  /* vaeskeygenassist: aeskeygenassist reg */
   50,  /* vaeskeygenassistx: aeskeygenassist mem opnd */
   51,  /* vaeskeygenassistxx: aeskeygenassist mem opnd w/ scaled index */
   52,  /* vaeskeygenassistxxx: aeskeygenassist mem opnd w/ scaled index w/o base */
   57,  /* vandpd: vector arithmetic */
   57,  /* vfand128v64: vector arithmetic */
   58,  /* vfandx128v64: vector arithmetic mem opnd */
   59,  /* vfandxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfandxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandps: vector arithmetic */
   57,  /* vfand128v32: vector arithmetic */
   58,  /* vfandx128v32: vector arithmetic mem opnd */
   59,  /* vfandxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfandxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandnpd: vector arithmetic */
   57,  /* vfandn128v64: vector arithmetic */
   58,  /* vfandnx128v64: vector arithmetic mem opnd */
   59,  /* vfandnxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfandnxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandnps: vector arithmetic */
   57,  /* vfandn128v32: vector arithmetic */
   58,  /* vfandnx128v32: vector arithmetic mem opnd */
   59,  /* vfandnxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfandnxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   75,  /* vfblend128v64: vector res reg reg imm */
   76,  /* vfblendx128v64: vector res reg mem imm */
   77,  /* vfblendxx128v64: vector res reg mem imm w/ scaled index */
   78,  /* vfblendxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vfblend128v32: vector res reg reg imm */
   76,  /* vfblendx128v32: vector res reg mem imm */
   77,  /* vfblendxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* vfblendxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   90,  /* vfblendv128v64: vector res reg reg reg */
   91,  /* vfblendvx128v64: vector res reg mem reg */
   92,  /* vfblendvxx128v64: vector res reg mem reg w/ scaled index */
   93,  /* vfblendvxxx128v64: vector res reg mem reg w/ scaled index w/o base */
   90,  /* vfblendv128v32: vector res reg reg reg */
   91,  /* vfblendvx128v32: vector res reg mem reg */
   92,  /* vfblendvxx128v32: vector res reg mem reg w/ scaled index */
   93,  /* vfblendvxxx128v32: vector res reg mem reg w/ scaled index w/o base */
   33,  /* vfbroadcastss: vector broadcast mem */
   34,  /* vfbroadcastxss: vector broadcast mem w/ scaled index */
   35,  /* vfbroadcastxxss: vector broadcast mem w/ scaled index w/o base */
   33,  /* vfbroadcastsd: vector broadcast mem */
   34,  /* vfbroadcastxsd: vector broadcast mem w/ scaled index */
   35,  /* vfbroadcastxxsd: vector broadcast mem w/ scaled index w/o base */
   33,  /* vfbroadcastf128: vector broadcast mem */
   34,  /* vfbroadcastxf128: vector broadcast mem w/ scaled index */
   35,  /* vfbroadcastxxf128: vector broadcast mem w/ scaled index w/o base */
   75,  /* vcmppd: vector res reg reg imm */
   75,  /* vfcmp128v64: vector res reg reg imm */
   76,  /* vfcmpx128v64: vector res reg mem imm */
   77,  /* vfcmpxx128v64: vector res reg mem imm w/ scaled index */
   78,  /* vfcmpxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vcmpps: vector res reg reg imm */
   75,  /* vfcmp128v32: vector res reg reg imm */
   76,  /* vfcmpx128v32: vector res reg mem imm */
   77,  /* vfcmpxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* vfcmpxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vfcmpsd: vector res reg reg imm */
   76,  /* vfcmpxsd: vector res reg mem imm */
   77,  /* vfcmpxxsd: vector res reg mem imm w/ scaled index */
   78,  /* vfcmpxxxsd: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vfcmpss: vector res reg reg imm */
   76,  /* vfcmpxss: vector res reg mem imm */
   77,  /* vfcmpxxss: vector res reg mem imm w/ scaled index */
   78,  /* vfcmpxxxss: vector res reg mem imm w/ scaled index w/o base */
  309,  /* vcomisd: fp ordered compare */
  310,  /* vcomixsd: fp ordered compare mem opnd */
  311,  /* vcomixxsd: fp ordered compare mem opnd w/ scaled-index */
  312,  /* vcomixxxsd: fp ordered compare mem opnd w/ scaled-index w/o base */
  309,  /* vcomiss: fp ordered compare */
  310,  /* vcomixss: fp ordered compare mem opnd */
  311,  /* vcomixxss: fp ordered compare mem opnd w/ scaled-index */
  312,  /* vcomixxxss: fp ordered compare mem opnd w/ scaled-index w/o base */
  194,  /* vcvtdq2pd: vector cvt */
  197,  /* vcvtdq2pdx: vector cvt I */
  199,  /* vcvtdq2pdxx: vector cvt II */
  201,  /* vcvtdq2pdxxx: vector cvt III */
  194,  /* vcvtdq2ps: vector cvt */
  197,  /* vcvtdq2psx: vector cvt I */
  199,  /* vcvtdq2psxx: vector cvt II */
  201,  /* vcvtdq2psxxx: vector cvt III */
  195,  /* vcvtpd2dq: vector cvt w/ trunc */
  198,  /* vcvtpd2dqx: vector cvt w/ trunc I */
  200,  /* vcvtpd2dqxx: vector cvt w/ trunc II */
  202,  /* vcvtpd2dqxxx: vector cvt w/ trunc III */
  196,  /* vcvtpd2dqy: vector cvt 256bit */
  198,  /* vcvtpd2dqyx: vector cvt w/ trunc I */
  200,  /* vcvtpd2dqyxx: vector cvt w/ trunc II */
  202,  /* vcvtpd2dqyxxx: vector cvt w/ trunc III */
  194,  /* vcvtpd2ps: vector cvt */
  197,  /* vcvtpd2psx: vector cvt I */
  199,  /* vcvtpd2psxx: vector cvt II */
  201,  /* vcvtpd2psxxx: vector cvt III */
  196,  /* vcvtpd2psy: vector cvt 256bit */
  197,  /* vcvtpd2psyx: vector cvt I */
  199,  /* vcvtpd2psyxx: vector cvt II */
  201,  /* vcvtpd2psyxxx: vector cvt III */
  195,  /* vcvtps2dq: vector cvt w/ trunc */
  198,  /* vcvtps2dqx: vector cvt w/ trunc I */
  200,  /* vcvtps2dqxx: vector cvt w/ trunc II */
  202,  /* vcvtps2dqxxx: vector cvt w/ trunc III */
  194,  /* vcvtps2pd: vector cvt */
  197,  /* vcvtps2pdx: vector cvt I */
  199,  /* vcvtps2pdxx: vector cvt II */
  201,  /* vcvtps2pdxxx: vector cvt III */
  207,  /* vcvtsd2si: fp 2 int32 */
  208,  /* vcvtsd2siq: fp 2 int64 */
   57,  /* vcvtsd2ss: vector arithmetic */
   58,  /* vcvtsd2ssx: vector arithmetic mem opnd */
   59,  /* vcvtsd2ssxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcvtsd2ssxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  204,  /* vcvtsi2sd: avx int32 2 float */
  223,  /* vcvtsi2sdx: avx float convert */
  350,  /* vcvtsi2sdxx: avx fp convert w/ indx */
  354,  /* vcvtsi2sdxxx: avx fp convert w/ indx w/o base */
  206,  /* vcvtsi2sdq: avx int64 2 float */
  223,  /* vcvtsi2sdqx: avx float convert */
  350,  /* vcvtsi2sdqxx: avx fp convert w/ indx */
  354,  /* vcvtsi2sdqxxx: avx fp convert w/ indx w/o base */
  204,  /* vcvtsi2ss: avx int32 2 float */
  223,  /* vcvtsi2ssx: avx float convert */
  350,  /* vcvtsi2ssxx: avx fp convert w/ indx */
  354,  /* vcvtsi2ssxxx: avx fp convert w/ indx w/o base */
  206,  /* vcvtsi2ssq: avx int64 2 float */
  223,  /* vcvtsi2ssqx: avx float convert */
  350,  /* vcvtsi2ssqxx: avx fp convert w/ indx */
  354,  /* vcvtsi2ssqxxx: avx fp convert w/ indx w/o base */
   57,  /* vcvtss2sd: vector arithmetic */
   58,  /* vcvtss2sdx: vector arithmetic mem opnd */
   59,  /* vcvtss2sdxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcvtss2sdxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  207,  /* vcvtss2si: fp 2 int32 */
  208,  /* vcvtss2siq: fp 2 int64 */
  195,  /* vcvttpd2dq: vector cvt w/ trunc */
  198,  /* vcvttpd2dqx: vector cvt w/ trunc I */
  200,  /* vcvttpd2dqxx: vector cvt w/ trunc II */
  202,  /* vcvttpd2dqxxx: vector cvt w/ trunc III */
  196,  /* vcvttpd2dqy: vector cvt 256bit */
  198,  /* vcvttpd2dqyx: vector cvt w/ trunc I */
  200,  /* vcvttpd2dqyxx: vector cvt w/ trunc II */
  202,  /* vcvttpd2dqyxxx: vector cvt w/ trunc III */
  195,  /* vcvttps2dq: vector cvt w/ trunc */
  198,  /* vcvttps2dqx: vector cvt w/ trunc I */
  200,  /* vcvttps2dqxx: vector cvt w/ trunc II */
  202,  /* vcvttps2dqxxx: vector cvt w/ trunc III */
  207,  /* vcvttsd2si: fp 2 int32 */
  208,  /* vcvttsd2siq: fp 2 int64 */
  207,  /* vcvttss2si: fp 2 int32 */
  208,  /* vcvttss2siq: fp 2 int64 */
   57,  /* vfdiv128v64: vector arithmetic */
   58,  /* vfdivx128v64: vector arithmetic mem opnd */
   59,  /* vfdivxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfdivxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfdiv128v32: vector arithmetic */
   58,  /* vfdivx128v32: vector arithmetic mem opnd */
   59,  /* vfdivxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfdivxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vdivsd: vector arithmetic */
   58,  /* vdivxsd: vector arithmetic mem opnd */
   59,  /* vdivxxsd: vector arithmetic mem opnd w/ scaled index */
   60,  /* vdivxxxsd: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vdivss: vector arithmetic */
   58,  /* vdivxss: vector arithmetic mem opnd */
   59,  /* vdivxxss: vector arithmetic mem opnd w/ scaled index */
   60,  /* vdivxxxss: vector arithmetic mem opnd w/ scaled index w/o base */
   75,  /* vfdp128v64: vector res reg reg imm */
   76,  /* vfdpx128v64: vector res reg mem imm */
   77,  /* vfdpxx128v64: vector res reg mem imm w/ scaled index */
   78,  /* vfdpxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vfdp128v32: vector res reg reg imm */
   76,  /* vfdpx128v32: vector res reg mem imm */
   77,  /* vfdpxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* vfdpxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   66,  /* vfextrf128: vector res reg imm */
   63,  /* vfextrxf128: vector extract mem reg imm */
   64,  /* vfextrxxf128: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* vfextrxxxf128: vector extract mem w/ scaled index w/o base reg imm */
   66,  /* vfextr128v32: vector res reg imm */
   63,  /* vfextrx128v32: vector extract mem reg imm */
   64,  /* vfextrxx128v32: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* vfextrxxx128v32: vector extract mem w/ scaled index w/o base reg imm */
   57,  /* vfhadd128v64: vector arithmetic */
   58,  /* vfhaddx128v64: vector arithmetic mem opnd */
   59,  /* vfhaddxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfhaddxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfhadd128v32: vector arithmetic */
   58,  /* vfhaddx128v32: vector arithmetic mem opnd */
   59,  /* vfhaddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfhaddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfhsub128v64: vector arithmetic */
   58,  /* vfhsubx128v64: vector arithmetic mem opnd */
   59,  /* vfhsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfhsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfhsub128v32: vector arithmetic */
   58,  /* vfhsubx128v32: vector arithmetic mem opnd */
   59,  /* vfhsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfhsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   75,  /* vfinsrf128: vector res reg reg imm */
   76,  /* vfinsrxf128: vector res reg mem imm */
   77,  /* vfinsrxxf128: vector res reg mem imm w/ scaled index */
   78,  /* vfinsrxxxf128: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vfinsr128v32: vector res reg reg imm */
   76,  /* vfinsrx128v32: vector res reg mem imm */
   77,  /* vfinsrxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* vfinsrxxx128v32: vector res reg mem imm w/ scaled index w/o base */
  230,  /* vlddqu: float load vector */
  351,  /* vlddqux: fp load vector w/ indx */
  355,  /* vlddquxx: fp load vector w/ indx w/o base */
  229,  /* vlddqu_n32: float load vector w/o base or index */
  360,  /* vldmxcsr: load mxcsr */
   38,  /* vmaskmovdqu: vector maskmov */
   39,  /* vfmaskld128v32: vector mask load */
   40,  /* vfmaskldx128v32: vector mask load w/ scaled index w/ base */
   41,  /* vfmaskldxx128v32: vector mask load w/ scaled index w/o base */
   39,  /* vfmaskld128v64: vector mask load */
   40,  /* vfmaskldx128v64: vector mask load w/ scaled index w/ base */
   41,  /* vfmaskldxx128v64: vector mask load w/ scaled index w/o base */
   42,  /* vfmaskst128v32: vector mask store */
   43,  /* vfmaskstx128v32: vector mask store w/ scaled index w/ base */
   44,  /* vfmaskstxx128v32: vector mask store w/ scaled index w/o base */
   42,  /* vfmaskst128v64: vector mask store */
   43,  /* vfmaskstx128v64: vector mask store w/ scaled index w/ base */
   44,  /* vfmaskstxx128v64: vector mask store w/ scaled index w/o base */
   57,  /* vfmax128v64: vector arithmetic */
   58,  /* vfmaxx128v64: vector arithmetic mem opnd */
   59,  /* vfmaxxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfmaxxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfmax128v32: vector arithmetic */
   58,  /* vfmaxx128v32: vector arithmetic mem opnd */
   59,  /* vfmaxxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfmaxxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfmaxsd: vector arithmetic */
   58,  /* vfmaxxsd: vector arithmetic mem opnd */
   59,  /* vfmaxxxsd: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfmaxxxxsd: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfmaxss: vector arithmetic */
   58,  /* vfmaxxss: vector arithmetic mem opnd */
   59,  /* vfmaxxxss: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfmaxxxxss: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfmin128v64: vector arithmetic */
   58,  /* vfminx128v64: vector arithmetic mem opnd */
   59,  /* vfminxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfminxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfmin128v32: vector arithmetic */
   58,  /* vfminx128v32: vector arithmetic mem opnd */
   59,  /* vfminxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfminxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfminsd: vector arithmetic */
   58,  /* vfminxsd: vector arithmetic mem opnd */
   59,  /* vfminxxsd: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfminxxxsd: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfminss: vector arithmetic */
   58,  /* vfminxss: vector arithmetic mem opnd */
   59,  /* vfminxxss: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfminxxxss: vector arithmetic mem opnd w/ scaled index w/o base */
   36,  /* vmovapd: vector mov */
  230,  /* vldapd: float load vector */
  351,  /* vldapdx: fp load vector w/ indx */
  355,  /* vldapdxx: fp load vector w/ indx w/o base */
  229,  /* vldapd_n32: float load vector w/o base or index */
  234,  /* vstapd: float store vector */
  357,  /* vstapdx: fp store vector w/ indx */
  359,  /* vstapdxx: fp store vector w/ indx w/o base */
  233,  /* vstapd_n32: float store vector w/o base or index */
   36,  /* vmovaps: vector mov */
  230,  /* vldaps: float load vector */
  351,  /* vldapsx: fp load vector w/ indx */
  355,  /* vldapsxx: fp load vector w/ indx w/o base */
  229,  /* vldaps_n32: float load vector w/o base or index */
  234,  /* vstaps: float store vector */
  357,  /* vstapsx: fp store vector w/ indx */
  359,  /* vstapsxx: fp store vector w/ indx w/o base */
  233,  /* vstaps_n32: float store vector w/o base or index */
  203,  /* vmovg2x: int32 2 float */
  205,  /* vmovg2x64: int64 2 float */
  207,  /* vmovx2g: fp 2 int32 */
  208,  /* vmovx2g64: fp 2 int64 */
  412,  /* vld64_2sse: int64 load to sse */
  413,  /* vldx64_2sse: int64 load to sse w/ scaled index w/ base */
  414,  /* vldxx64_2sse: int64 load to sse w/ scaled index w/o base */
  415,  /* vld64_2sse_n32: int64 load to sse w/o base or index */
  416,  /* vst64_fsse: int64 store from sse */
  417,  /* vstx64_fsse: int64 store from sse w/ scaled index w/ base */
  418,  /* vstxx64_fsse: int64 store from sse w/ scaled index w/o base */
  419,  /* vst64_fsse_n32: int64 store from sse w/o base or index */
   45,  /* vmovddup: vector unary reg */
   46,  /* vmovddupx: vector unary mem opnd */
   47,  /* vmovddupxx: vector unary mem opnd w/ scaled index */
   48,  /* vmovddupxxx: vector unary mem opnd w/ scaled index w/o base */
  230,  /* vlddqa: float load vector */
  351,  /* vlddqax: fp load vector w/ indx */
  355,  /* vlddqaxx: fp load vector w/ indx w/o base */
  229,  /* vlddqa_n32: float load vector w/o base or index */
   36,  /* vmovdqa: vector mov */
  234,  /* vstdqa: float store vector */
  357,  /* vstdqax: fp store vector w/ indx */
  359,  /* vstdqaxx: fp store vector w/ indx w/o base */
  233,  /* vstdqa_n32: float store vector w/o base or index */
  234,  /* vstdqu: float store vector */
  357,  /* vstdqux: fp store vector w/ indx */
  359,  /* vstdquxx: fp store vector w/ indx w/o base */
  233,  /* vstdqu_n32: float store vector w/o base or index */
  230,  /* vldhpd: float load vector */
  351,  /* vldhpdx: fp load vector w/ indx */
  355,  /* vldhpdxx: fp load vector w/ indx w/o base */
  229,  /* vldhpd_n32: float load vector w/o base or index */
  234,  /* vsthpd: float store vector */
  357,  /* vsthpdx: fp store vector w/ indx */
  359,  /* vsthpdxx: fp store vector w/ indx w/o base */
  233,  /* vsthpd_n32: float store vector w/o base or index */
  230,  /* vldhps: float load vector */
  351,  /* vldhpsx: fp load vector w/ indx */
  355,  /* vldhpsxx: fp load vector w/ indx w/o base */
  229,  /* vldhps_n32: float load vector w/o base or index */
  234,  /* vsthps: float store vector */
  357,  /* vsthpsx: fp store vector w/ indx */
  359,  /* vsthpsxx: fp store vector w/ indx w/o base */
  233,  /* vsthps_n32: float store vector w/o base or index */
  230,  /* vldlpd: float load vector */
  351,  /* vldlpdx: fp load vector w/ indx */
  355,  /* vldlpdxx: fp load vector w/ indx w/o base */
  229,  /* vldlpd_n32: float load vector w/o base or index */
  234,  /* vstorelpd: float store vector */
  234,  /* vstlpd: float store vector */
  357,  /* vstlpdx: fp store vector w/ indx */
  359,  /* vstlpdxx: fp store vector w/ indx w/o base */
  233,  /* vstlpd_n32: float store vector w/o base or index */
  230,  /* vldlps: float load vector */
  351,  /* vldlpsx: fp load vector w/ indx */
  355,  /* vldlpsxx: fp load vector w/ indx w/o base */
  229,  /* vldlps_n32: float load vector w/o base or index */
  234,  /* vstlps: float store vector */
  357,  /* vstlpsx: fp store vector w/ indx */
  359,  /* vstlpsxx: fp store vector w/ indx w/o base */
  233,  /* vstlps_n32: float store vector w/o base or index */
  209,  /* vmovmskpd: avx move mask */
  209,  /* vmovmskps: avx move mask */
  234,  /* vstorenti128: float store vector */
  357,  /* vstorentxi128: fp store vector w/ indx */
  359,  /* vstorentxxi128: fp store vector w/ indx w/o base */
  230,  /* vldntdqa: float load vector */
  351,  /* vldntdqax: fp load vector w/ indx */
  355,  /* vldntdqaxx: fp load vector w/ indx w/o base */
  234,  /* vstntdq: float store vector */
  357,  /* vstntdqx: fp store vector w/ indx */
  359,  /* vstntdqxx: fp store vector w/ indx w/o base */
  234,  /* vstntpd: float store vector */
  357,  /* vstntpdx: fp store vector w/ indx */
  359,  /* vstntpdxx: fp store vector w/ indx w/o base */
  234,  /* vstntps: float store vector */
  357,  /* vstntpsx: fp store vector w/ indx */
  359,  /* vstntpsxx: fp store vector w/ indx w/o base */
  234,  /* vstntsd: float store vector */
  357,  /* vstntsdx: fp store vector w/ indx */
  359,  /* vstntsdxx: fp store vector w/ indx w/o base */
  234,  /* vstntss: float store vector */
  357,  /* vstntssx: fp store vector w/ indx */
  359,  /* vstntssxx: fp store vector w/ indx w/o base */
   37,  /* vmovsd: vector mov II */
  230,  /* vldsd: float load vector */
  351,  /* vldsdx: fp load vector w/ indx */
  355,  /* vldsdxx: fp load vector w/ indx w/o base */
  220,  /* vldsd_n32: float load w/o base or index */
  234,  /* vstsd: float store vector */
  357,  /* vstsdx: fp store vector w/ indx */
  359,  /* vstsdxx: fp store vector w/ indx w/o base */
  231,  /* vstsd_n32: float store w/o base or index */
   37,  /* vmovss: vector mov II */
  230,  /* vldss: float load vector */
  351,  /* vldssx: fp load vector w/ indx */
  355,  /* vldssxx: fp load vector w/ indx w/o base */
  220,  /* vldss_n32: float load w/o base or index */
  234,  /* vstss: float store vector */
  357,  /* vstssx: fp store vector w/ indx */
  359,  /* vstssxx: fp store vector w/ indx w/o base */
  231,  /* vstss_n32: float store w/o base or index */
  249,  /* vmovlhps: move-high-low */
   57,  /* vmovhlps: vector arithmetic */
   45,  /* vmovshdup: vector unary reg */
   46,  /* vmovshdupx: vector unary mem opnd */
   47,  /* vmovshdupxx: vector unary mem opnd w/ scaled index */
   48,  /* vmovshdupxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vmovsldup: vector unary reg */
   46,  /* vmovsldupx: vector unary mem opnd */
   47,  /* vmovsldupxx: vector unary mem opnd w/ scaled index */
   48,  /* vmovsldupxxx: vector unary mem opnd w/ scaled index w/o base */
  230,  /* vldupd: float load vector */
  351,  /* vldupdx: fp load vector w/ indx */
  355,  /* vldupdxx: fp load vector w/ indx w/o base */
  229,  /* vldupd_n32: float load vector w/o base or index */
  234,  /* vstupd: float store vector */
  357,  /* vstupdx: fp store vector w/ indx */
  359,  /* vstupdxx: fp store vector w/ indx w/o base */
  233,  /* vstupd_n32: float store vector w/o base or index */
  230,  /* vldups: float load vector */
  351,  /* vldupsx: fp load vector w/ indx */
  355,  /* vldupsxx: fp load vector w/ indx w/o base */
  229,  /* vldups_n32: float load vector w/o base or index */
  234,  /* vstups: float store vector */
  357,  /* vstupsx: fp store vector w/ indx */
  359,  /* vstupsxx: fp store vector w/ indx w/o base */
  233,  /* vstups_n32: float store vector w/o base or index */
   75,  /* vmpsadbw: vector res reg reg imm */
   76,  /* vmpsadbwx: vector res reg mem imm */
   77,  /* vmpsadbwxx: vector res reg mem imm w/ scaled index */
   78,  /* vmpsadbwxxx: vector res reg mem imm w/ scaled index w/o base */
   57,  /* vfmul128v64: vector arithmetic */
   58,  /* vfmulx128v64: vector arithmetic mem opnd */
   59,  /* vfmulxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfmulxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfmul128v32: vector arithmetic */
   58,  /* vfmulx128v32: vector arithmetic mem opnd */
   59,  /* vfmulxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfmulxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmulsd: vector arithmetic */
   58,  /* vmulxsd: vector arithmetic mem opnd */
   59,  /* vmulxxsd: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulxxxsd: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmulss: vector arithmetic */
   58,  /* vmulxss: vector arithmetic mem opnd */
   59,  /* vmulxxss: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulxxxss: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vorpd: vector arithmetic */
   57,  /* vfor128v64: vector arithmetic */
   58,  /* vforx128v64: vector arithmetic mem opnd */
   59,  /* vforxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vforxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vorps: vector arithmetic */
   57,  /* vfor128v32: vector arithmetic */
   58,  /* vforx128v32: vector arithmetic mem opnd */
   59,  /* vforxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vforxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   45,  /* vabs128v8: vector unary reg */
   46,  /* vabsx128v8: vector unary mem opnd */
   47,  /* vabsxx128v8: vector unary mem opnd w/ scaled index */
   48,  /* vabsxxx128v8: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vabs128v32: vector unary reg */
   46,  /* vabsx128v32: vector unary mem opnd */
   47,  /* vabsxx128v32: vector unary mem opnd w/ scaled index */
   48,  /* vabsxxx128v32: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vabs128v16: vector unary reg */
   46,  /* vabsx128v16: vector unary mem opnd */
   47,  /* vabsxx128v16: vector unary mem opnd w/ scaled index */
   48,  /* vabsxxx128v16: vector unary mem opnd w/ scaled index w/o base */
   57,  /* vpackssdw: vector arithmetic */
   58,  /* vpackssdwx: vector arithmetic mem opnd */
   59,  /* vpackssdwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpackssdwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpacksswb: vector arithmetic */
   58,  /* vpacksswbx: vector arithmetic mem opnd */
   59,  /* vpacksswbxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpacksswbxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpackusdw: vector arithmetic */
   58,  /* vpackusdwx: vector arithmetic mem opnd */
   59,  /* vpackusdwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpackusdwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpackuswb: vector arithmetic */
   58,  /* vpackuswbx: vector arithmetic mem opnd */
   59,  /* vpackuswbxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpackuswbxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vadd128v8: vector arithmetic */
   58,  /* vaddx128v8: vector arithmetic mem opnd */
   59,  /* vaddxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vadd128v32: vector arithmetic */
   58,  /* vaddx128v32: vector arithmetic mem opnd */
   59,  /* vaddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vadd128v64: vector arithmetic */
   58,  /* vaddx128v64: vector arithmetic mem opnd */
   59,  /* vaddxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vadd128v16: vector arithmetic */
   58,  /* vaddx128v16: vector arithmetic mem opnd */
   59,  /* vaddxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vadds128v8: vector arithmetic */
   58,  /* vaddsx128v8: vector arithmetic mem opnd */
   59,  /* vaddsxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddsxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vadds128v16: vector arithmetic */
   58,  /* vaddsx128v16: vector arithmetic mem opnd */
   59,  /* vaddsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vaddus128v8: vector arithmetic */
   58,  /* vaddusx128v8: vector arithmetic mem opnd */
   59,  /* vaddusxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddusxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vaddus128v16: vector arithmetic */
   58,  /* vaddusx128v16: vector arithmetic mem opnd */
   59,  /* vaddusxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vaddusxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   75,  /* vpalignr128: vector res reg reg imm */
   76,  /* vpalignrx128: vector res reg mem imm */
   77,  /* vpalignrxx128: vector res reg mem imm w/ scaled index */
   78,  /* vpalignrxxx128: vector res reg mem imm w/ scaled index w/o base */
   57,  /* vand128v8: vector arithmetic */
   58,  /* vandx128v8: vector arithmetic mem opnd */
   59,  /* vandxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vand128v16: vector arithmetic */
   58,  /* vandx128v16: vector arithmetic mem opnd */
   59,  /* vandxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vand128v32: vector arithmetic */
   58,  /* vandx128v32: vector arithmetic mem opnd */
   59,  /* vandxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vand128v64: vector arithmetic */
   58,  /* vandx128v64: vector arithmetic mem opnd */
   59,  /* vandxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandn128v8: vector arithmetic */
   58,  /* vandnx128v8: vector arithmetic mem opnd */
   59,  /* vandnxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandnxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandn128v16: vector arithmetic */
   58,  /* vandnx128v16: vector arithmetic mem opnd */
   59,  /* vandnxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandnxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandn128v32: vector arithmetic */
   58,  /* vandnx128v32: vector arithmetic mem opnd */
   59,  /* vandnxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandnxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vandn128v64: vector arithmetic */
   58,  /* vandnx128v64: vector arithmetic mem opnd */
   59,  /* vandnxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vandnxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpavgb: vector arithmetic */
   58,  /* vpavgbx: vector arithmetic mem opnd */
   59,  /* vpavgbxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpavgbxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpavgw: vector arithmetic */
   58,  /* vpavgwx: vector arithmetic mem opnd */
   59,  /* vpavgwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpavgwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   90,  /* vblendv128v8: vector res reg reg reg */
   91,  /* vblendvx128v8: vector res reg mem reg */
   92,  /* vblendvxx128v8: vector res reg mem reg w/ scaled index */
   93,  /* vblendvxxx128v8: vector res reg mem reg w/ scaled index w/o base */
   75,  /* vblend128v16: vector res reg reg imm */
   76,  /* vblendx128v16: vector res reg mem imm */
   77,  /* vblendxx128v16: vector res reg mem imm w/ scaled index */
   78,  /* vblendxxx128v16: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vpclmulqdq: vector res reg reg imm */
   76,  /* vpclmulqdqx: vector res reg mem imm */
   77,  /* vpclmulqdqxx: vector res reg mem imm w/ scaled index */
   78,  /* vpclmulqdqxxx: vector res reg mem imm w/ scaled index w/o base */
   57,  /* vcmpeq128v8: vector arithmetic */
   58,  /* vcmpeqx128v8: vector arithmetic mem opnd */
   59,  /* vcmpeqxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpeqxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vcmpeq128v32: vector arithmetic */
   58,  /* vcmpeqx128v32: vector arithmetic mem opnd */
   59,  /* vcmpeqxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpeqxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vcmpeq128v64: vector arithmetic */
   58,  /* vcmpeqx128v64: vector arithmetic mem opnd */
   59,  /* vcmpeqxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpeqxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vcmpeq128v16: vector arithmetic */
   58,  /* vcmpeqx128v16: vector arithmetic mem opnd */
   59,  /* vcmpeqxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpeqxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
  438,  /* vcmpestri: pcmpestri reg */
  439,  /* vcmpestrix: pcmpestri mem opnd */
  440,  /* vcmpestrixx: pcmpestri mem opnd w/ scaled index */
  441,  /* vcmpestrixxx: pcmpestri mem opnd w/ scaled index w/o base */
  442,  /* vcmpestrm: pcmpestrm reg */
  443,  /* vcmpestrmx: pcmpestrm mem opnd */
  444,  /* vcmpestrmxx: pcmpestrm mem opnd w/ scaled index */
  445,  /* vcmpestrmxxx: pcmpestrm mem opnd w/ scaled index w/o base */
   57,  /* vcmpgt128v8: vector arithmetic */
   58,  /* vcmpgtx128v8: vector arithmetic mem opnd */
   59,  /* vcmpgtxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpgtxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vcmpgt128v32: vector arithmetic */
   58,  /* vcmpgtx128v32: vector arithmetic mem opnd */
   59,  /* vcmpgtxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpgtxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vcmpgt128v64: vector arithmetic */
   58,  /* vcmpgtx128v64: vector arithmetic mem opnd */
   59,  /* vcmpgtxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpgtxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vcmpgt128v16: vector arithmetic */
   58,  /* vcmpgtx128v16: vector arithmetic mem opnd */
   59,  /* vcmpgtxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vcmpgtxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
  446,  /* vcmpistri: pcmpistri reg */
  447,  /* vcmpistrix: pcmpistri mem opnd */
  448,  /* vcmpistrixx: pcmpistri mem opnd w/ scaled index */
  449,  /* vcmpistrixxx: pcmpistri mem opnd w/ scaled index w/o base */
  450,  /* vcmpistrm: pcmpistrm reg */
  451,  /* vcmpistrmx: pcmpistrm mem opnd */
  452,  /* vcmpistrmxx: pcmpistrm mem opnd w/ scaled index */
  453,  /* vcmpistrmxxx: pcmpistrm mem opnd w/ scaled index w/o base */
   57,  /* vfperm128v64: vector arithmetic */
   58,  /* vfpermx128v64: vector arithmetic mem opnd */
   59,  /* vfpermxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfpermxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   66,  /* vfpermi128v64: vector res reg imm */
   67,  /* vfpermix128v64: vector res mem imm */
   68,  /* vfpermixx128v64: vector res reg mem imm w/ scaled index */
   69,  /* vfpermixxx128v64: vector res reg mem imm w/ scaled index w/o base */
   57,  /* vfperm128v32: vector arithmetic */
   58,  /* vfpermx128v32: vector arithmetic mem opnd */
   59,  /* vfpermxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfpermxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   66,  /* vfpermi128v32: vector res reg imm */
   67,  /* vfpermix128v32: vector res mem imm */
   68,  /* vfpermixx128v32: vector res reg mem imm w/ scaled index */
   69,  /* vfpermixxx128v32: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vfperm2f128: vector res reg reg imm */
   76,  /* vfperm2xf128: vector res reg mem imm */
   77,  /* vfperm2xxf128: vector res reg mem imm w/ scaled index */
   78,  /* vfperm2xxxf128: vector res reg mem imm w/ scaled index w/o base */
   61,  /* vextr128v8: vector extract int32 reg imm */
   63,  /* vextrx128v8: vector extract mem reg imm */
   64,  /* vextrxx128v8: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* vextrxxx128v8: vector extract mem w/ scaled index w/o base reg imm */
   61,  /* vextr128v32: vector extract int32 reg imm */
   63,  /* vextrx128v32: vector extract mem reg imm */
   64,  /* vextrxx128v32: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* vextrxxx128v32: vector extract mem w/ scaled index w/o base reg imm */
   62,  /* vextr128v64: vector extract int64 reg imm */
   63,  /* vextrx128v64: vector extract mem reg imm */
   64,  /* vextrxx128v64: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* vextrxxx128v64: vector extract mem w/ scaled index w/o base reg imm */
   61,  /* vextr128v16: vector extract int32 reg imm */
   63,  /* vextrx128v16: vector extract mem reg imm */
   64,  /* vextrxx128v16: vector extract mem w/ scaled index w/ base reg imm */
   65,  /* vextrxxx128v16: vector extract mem w/ scaled index w/o base reg imm */
   57,  /* vphadd128v32: vector arithmetic */
   58,  /* vphaddx128v32: vector arithmetic mem opnd */
   59,  /* vphaddxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vphaddxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vphadds128v16: vector arithmetic */
   58,  /* vphaddsx128v16: vector arithmetic mem opnd */
   59,  /* vphaddsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vphaddsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vphadd128v16: vector arithmetic */
   58,  /* vphaddx128v16: vector arithmetic mem opnd */
   59,  /* vphaddxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vphaddxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   45,  /* vphminposuw: vector unary reg */
   46,  /* vphminposuwx: vector unary mem opnd */
   47,  /* vphminposuwxx: vector unary mem opnd w/ scaled index */
   48,  /* vphminposuwxxx: vector unary mem opnd w/ scaled index w/o base */
   57,  /* vphsub128v32: vector arithmetic */
   58,  /* vphsubx128v32: vector arithmetic mem opnd */
   59,  /* vphsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vphsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vphsubs128v16: vector arithmetic */
   58,  /* vphsubsx128v16: vector arithmetic mem opnd */
   59,  /* vphsubsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vphsubsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vphsub128v16: vector arithmetic */
   58,  /* vphsubx128v16: vector arithmetic mem opnd */
   59,  /* vphsubxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vphsubxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   70,  /* vinsr128v8: vector pinsr 8/16/32 */
   72,  /* vinsrx128v8: vector pinsr 8/16/32 mem */
   73,  /* vinsrxx128v8: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* vinsrxxx128v8: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   70,  /* vinsr128v32: vector pinsr 8/16/32 */
   72,  /* vinsrx128v32: vector pinsr 8/16/32 mem */
   73,  /* vinsrxx128v32: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* vinsrxxx128v32: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   71,  /* vinsr128v64: vector pinsr 64 */
   72,  /* vinsrx128v64: vector pinsr 8/16/32 mem */
   73,  /* vinsrxx128v64: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* vinsrxxx128v64: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   70,  /* vinsr128v16: vector pinsr 8/16/32 */
   72,  /* vinsrx128v16: vector pinsr 8/16/32 mem */
   73,  /* vinsrxx128v16: vector pinsr 8/16/32 mem w/ scaled index */
   74,  /* vinsrxxx128v16: vector pinsr 8/16/32 mem w/ scaled index w/o base */
   57,  /* vpmaddwd: vector arithmetic */
   58,  /* vpmaddwdx: vector arithmetic mem opnd */
   59,  /* vpmaddwdxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpmaddwdxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpmaddubsw128: vector arithmetic */
   58,  /* vpmaddubswx128: vector arithmetic mem opnd */
   59,  /* vpmaddubswxx128: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpmaddubswxxx128: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmaxs128v8: vector arithmetic */
   58,  /* vmaxsx128v8: vector arithmetic mem opnd */
   59,  /* vmaxsxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmaxsxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmaxs128v16: vector arithmetic */
   58,  /* vmaxsx128v16: vector arithmetic mem opnd */
   59,  /* vmaxsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmaxsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmaxs128v32: vector arithmetic */
   58,  /* vmaxsx128v32: vector arithmetic mem opnd */
   59,  /* vmaxsxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmaxsxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmaxu128v8: vector arithmetic */
   58,  /* vmaxux128v8: vector arithmetic mem opnd */
   59,  /* vmaxuxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmaxuxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmaxu128v16: vector arithmetic */
   58,  /* vmaxux128v16: vector arithmetic mem opnd */
   59,  /* vmaxuxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmaxuxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmaxu128v32: vector arithmetic */
   58,  /* vmaxux128v32: vector arithmetic mem opnd */
   59,  /* vmaxuxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmaxuxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmins128v8: vector arithmetic */
   58,  /* vminsx128v8: vector arithmetic mem opnd */
   59,  /* vminsxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vminsxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmins128v16: vector arithmetic */
   58,  /* vminsx128v16: vector arithmetic mem opnd */
   59,  /* vminsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vminsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmins128v32: vector arithmetic */
   58,  /* vminsx128v32: vector arithmetic mem opnd */
   59,  /* vminsxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vminsxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vminu128v8: vector arithmetic */
   58,  /* vminux128v8: vector arithmetic mem opnd */
   59,  /* vminuxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vminuxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vminu128v16: vector arithmetic */
   58,  /* vminux128v16: vector arithmetic mem opnd */
   59,  /* vminuxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vminuxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vminu128v32: vector arithmetic */
   58,  /* vminux128v32: vector arithmetic mem opnd */
   59,  /* vminuxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vminuxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
  397,  /* vpmovmskb128: sse packed move */
   45,  /* vpmovsxbd: vector unary reg */
   46,  /* vpmovsxbdx: vector unary mem opnd */
   47,  /* vpmovsxbdxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovsxbdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovsxbq: vector unary reg */
   46,  /* vpmovsxbqx: vector unary mem opnd */
   47,  /* vpmovsxbqxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovsxbqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovsxbw: vector unary reg */
   46,  /* vpmovsxbwx: vector unary mem opnd */
   47,  /* vpmovsxbwxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovsxbwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovsxdq: vector unary reg */
   46,  /* vpmovsxdqx: vector unary mem opnd */
   47,  /* vpmovsxdqxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovsxdqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovsxwd: vector unary reg */
   46,  /* vpmovsxwdx: vector unary mem opnd */
   47,  /* vpmovsxwdxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovsxwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovsxwq: vector unary reg */
   46,  /* vpmovsxwqx: vector unary mem opnd */
   47,  /* vpmovsxwqxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovsxwqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovzxbd: vector unary reg */
   46,  /* vpmovzxbdx: vector unary mem opnd */
   47,  /* vpmovzxbdxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovzxbdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovzxbq: vector unary reg */
   46,  /* vpmovzxbqx: vector unary mem opnd */
   47,  /* vpmovzxbqxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovzxbqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovzxbw: vector unary reg */
   46,  /* vpmovzxbwx: vector unary mem opnd */
   47,  /* vpmovzxbwxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovzxbwxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovzxdq: vector unary reg */
   46,  /* vpmovzxdqx: vector unary mem opnd */
   47,  /* vpmovzxdqxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovzxdqxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovzxwd: vector unary reg */
   46,  /* vpmovzxwdx: vector unary mem opnd */
   47,  /* vpmovzxwdxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovzxwdxxx: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vpmovzxwq: vector unary reg */
   46,  /* vpmovzxwqx: vector unary mem opnd */
   47,  /* vpmovzxwqxx: vector unary mem opnd w/ scaled index */
   48,  /* vpmovzxwqxxx: vector unary mem opnd w/ scaled index w/o base */
   57,  /* vmulhuw: vector arithmetic */
   58,  /* vmulhuwx: vector arithmetic mem opnd */
   59,  /* vmulhuwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulhuwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmulhrsw: vector arithmetic */
   58,  /* vmulhrswx: vector arithmetic mem opnd */
   59,  /* vmulhrswxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulhrswxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmulhw: vector arithmetic */
   58,  /* vmulhwx: vector arithmetic mem opnd */
   59,  /* vmulhwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulhwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmulld: vector arithmetic */
   58,  /* vmulldx: vector arithmetic mem opnd */
   59,  /* vmulldxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulldxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmul128v16: vector arithmetic */
   58,  /* vmulx128v16: vector arithmetic mem opnd */
   59,  /* vmulxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmul128v32: vector arithmetic */
   58,  /* vmulx128v32: vector arithmetic mem opnd */
   59,  /* vmulxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmulxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmuludq: vector arithmetic */
   58,  /* vmuludqx: vector arithmetic mem opnd */
   59,  /* vmuludqxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmuludqxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vmuldq: vector arithmetic */
   58,  /* vmuldqx: vector arithmetic mem opnd */
   59,  /* vmuldqxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vmuldqxxx: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vor128v8: vector arithmetic */
   58,  /* vorx128v8: vector arithmetic mem opnd */
   59,  /* vorxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vorxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vor128v16: vector arithmetic */
   58,  /* vorx128v16: vector arithmetic mem opnd */
   59,  /* vorxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vorxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vor128v32: vector arithmetic */
   58,  /* vorx128v32: vector arithmetic mem opnd */
   59,  /* vorxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vorxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vor128v64: vector arithmetic */
   58,  /* vorx128v64: vector arithmetic mem opnd */
   59,  /* vorxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vorxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpsadbw: vector arithmetic */
   58,  /* vpsadbwx: vector arithmetic mem opnd */
   59,  /* vpsadbwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsadbwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  241,  /* vpshuf128v8: pshufb */
  242,  /* vpshufx128v8: pshufb mem */
  243,  /* vpshufxx128v8: pshufb mem w/ scaled index w/ base */
  244,  /* vpshufxxx128v8: pshufb mem w/ scaled index w/o base */
  245,  /* vpshuf128v32: shuffle-int */
  246,  /* vpshufx128v32: shuffle-int mem */
  247,  /* vpshufxx128v32: shuffle-int mem w/ scaled index w/ base */
  248,  /* vpshufxxx128v32: shuffle-int mem w/ scaled index w/o base */
  245,  /* vpshufw64v16: shuffle-int */
  246,  /* vpshufwx64v16: shuffle-int mem */
  247,  /* vpshufwxx64v16: shuffle-int mem w/ scaled index w/ base */
  248,  /* vpshufwxxx64v16: shuffle-int mem w/ scaled index w/o base */
  245,  /* vpshufhw: shuffle-int */
  246,  /* vpshufhwx: shuffle-int mem */
  247,  /* vpshufhwxx: shuffle-int mem w/ scaled index w/ base */
  248,  /* vpshufhwxxx: shuffle-int mem w/ scaled index w/o base */
  245,  /* vpshuflw: shuffle-int */
  246,  /* vpshuflwx: shuffle-int mem */
  247,  /* vpshuflwxx: shuffle-int mem w/ scaled index w/ base */
  248,  /* vpshuflwxxx: shuffle-int mem w/ scaled index w/o base */
   57,  /* vpsign128v8: vector arithmetic */
   58,  /* vpsignx128v8: vector arithmetic mem opnd */
   59,  /* vpsignxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsignxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpsign128v32: vector arithmetic */
   58,  /* vpsignx128v32: vector arithmetic mem opnd */
   59,  /* vpsignxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsignxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpsign128v16: vector arithmetic */
   58,  /* vpsignx128v16: vector arithmetic mem opnd */
   59,  /* vpsignxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsignxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpslldq: packed shifts w/ immediate */
  250,  /* vpsrldq: packed shifts w/ immediate */
   57,  /* vpslld: vector arithmetic */
   58,  /* vpslldx: vector arithmetic mem opnd */
   59,  /* vpslldxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpslldxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpslldi: packed shifts w/ immediate */
   57,  /* vpsllq: vector arithmetic */
   58,  /* vpsllqx: vector arithmetic mem opnd */
   59,  /* vpsllqxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsllqxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsllqi: packed shifts w/ immediate */
   57,  /* vpsllw: vector arithmetic */
   58,  /* vpsllwx: vector arithmetic mem opnd */
   59,  /* vpsllwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsllwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsllwi: packed shifts w/ immediate */
   57,  /* vpsrad: vector arithmetic */
   58,  /* vpsradx: vector arithmetic mem opnd */
   59,  /* vpsradxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsradxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsradi: packed shifts w/ immediate */
   57,  /* vpsraw: vector arithmetic */
   58,  /* vpsrawx: vector arithmetic mem opnd */
   59,  /* vpsrawxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsrawxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsrawi: packed shifts w/ immediate */
   57,  /* vpsrld: vector arithmetic */
   58,  /* vpsrldx: vector arithmetic mem opnd */
   59,  /* vpsrldxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsrldxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsrldi: packed shifts w/ immediate */
   57,  /* vpsrlq: vector arithmetic */
   58,  /* vpsrlqx: vector arithmetic mem opnd */
   59,  /* vpsrlqxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsrlqxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsrlqi: packed shifts w/ immediate */
   57,  /* vpsrlw: vector arithmetic */
   58,  /* vpsrlwx: vector arithmetic mem opnd */
   59,  /* vpsrlwxx: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpsrlwxxx: vector arithmetic mem opnd w/ scaled index w/o base */
  250,  /* vpsrlwi: packed shifts w/ immediate */
   57,  /* vsub128v8: vector arithmetic */
   58,  /* vsubx128v8: vector arithmetic mem opnd */
   59,  /* vsubxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsub128v32: vector arithmetic */
   58,  /* vsubx128v32: vector arithmetic mem opnd */
   59,  /* vsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsub128v64: vector arithmetic */
   58,  /* vsubx128v64: vector arithmetic mem opnd */
   59,  /* vsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsub128v16: vector arithmetic */
   58,  /* vsubx128v16: vector arithmetic mem opnd */
   59,  /* vsubxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsubs128v8: vector arithmetic */
   58,  /* vsubsx128v8: vector arithmetic mem opnd */
   59,  /* vsubsxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubsxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsubs128v16: vector arithmetic */
   58,  /* vsubsx128v16: vector arithmetic mem opnd */
   59,  /* vsubsxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubsxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsubus128v8: vector arithmetic */
   58,  /* vsubusx128v8: vector arithmetic mem opnd */
   59,  /* vsubusxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubusxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsubus128v16: vector arithmetic */
   58,  /* vsubusx128v16: vector arithmetic mem opnd */
   59,  /* vsubusxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubusxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
  316,  /* vptest128: vector ptest reg */
  317,  /* vptestx128: vector ptest mem opnd */
  318,  /* vptestxx128: vector ptest mem opnd w/ scaled index */
  319,  /* vptestxxx128: vector ptest mem opnd w/ scaled index w/o base */
  316,  /* vtestpd: vector ptest reg */
  317,  /* vtestxpd: vector ptest mem opnd */
  318,  /* vtestxxpd: vector ptest mem opnd w/ scaled index */
  319,  /* vtestxxxpd: vector ptest mem opnd w/ scaled index w/o base */
  316,  /* vtestps: vector ptest reg */
  317,  /* vtestxps: vector ptest mem opnd */
  318,  /* vtestxxps: vector ptest mem opnd w/ scaled index */
  319,  /* vtestxxxps: vector ptest mem opnd w/ scaled index w/o base */
   57,  /* vpunpckh64v8: vector arithmetic */
   58,  /* vpunpckhx64v8: vector arithmetic mem opnd */
   59,  /* vpunpckhxx64v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpckhxxx64v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckh64v32: vector arithmetic */
   58,  /* vpunpckhx64v32: vector arithmetic mem opnd */
   59,  /* vpunpckhxx64v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpckhxxx64v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckh64v16: vector arithmetic */
   58,  /* vpunpckhx64v16: vector arithmetic mem opnd */
   59,  /* vpunpckhxx64v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpckhxxx64v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckh64v64: vector arithmetic */
   58,  /* vpunpckhx64v64: vector arithmetic mem opnd */
   59,  /* vpunpckhxx64v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpckhxxx64v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckl64v8: vector arithmetic */
   58,  /* vpunpcklx64v8: vector arithmetic mem opnd */
   59,  /* vpunpcklxx64v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpcklxxx64v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckl64v32: vector arithmetic */
   58,  /* vpunpcklx64v32: vector arithmetic mem opnd */
   59,  /* vpunpcklxx64v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpcklxxx64v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckl64v16: vector arithmetic */
   58,  /* vpunpcklx64v16: vector arithmetic mem opnd */
   59,  /* vpunpcklxx64v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpcklxxx64v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vpunpckl64v64: vector arithmetic */
   58,  /* vpunpcklx64v64: vector arithmetic mem opnd */
   59,  /* vpunpcklxx64v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vpunpcklxxx64v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vxor128v8: vector arithmetic */
   58,  /* vxorx128v8: vector arithmetic mem opnd */
   59,  /* vxorxx128v8: vector arithmetic mem opnd w/ scaled index */
   60,  /* vxorxxx128v8: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vxor128v16: vector arithmetic */
   58,  /* vxorx128v16: vector arithmetic mem opnd */
   59,  /* vxorxx128v16: vector arithmetic mem opnd w/ scaled index */
   60,  /* vxorxxx128v16: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vxor128v32: vector arithmetic */
   58,  /* vxorx128v32: vector arithmetic mem opnd */
   59,  /* vxorxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vxorxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vxor128v64: vector arithmetic */
   58,  /* vxorx128v64: vector arithmetic mem opnd */
   59,  /* vxorxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vxorxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   45,  /* vfrcp128v32: vector unary reg */
   46,  /* vfrcpx128v32: vector unary mem opnd */
   47,  /* vfrcpxx128v32: vector unary mem opnd w/ scaled index */
   48,  /* vfrcpxxx128v32: vector unary mem opnd w/ scaled index w/o base */
   53,  /* vfrcpss: vector arithmetic special */
   54,  /* vfrcpxss: vector arithmetic special mem opnd */
   55,  /* vfrcpxxss: vector arithmetic special mem opnd w/ scaled index */
   56,  /* vfrcpxxxss: vector arithmetic special mem opnd w/ scaled index w/o base */
   66,  /* vround128v64: vector res reg imm */
   67,  /* vroundx128v64: vector res mem imm */
   68,  /* vroundxx128v64: vector res reg mem imm w/ scaled index */
   69,  /* vroundxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   66,  /* vround128v32: vector res reg imm */
   67,  /* vroundx128v32: vector res mem imm */
   68,  /* vroundxx128v32: vector res reg mem imm w/ scaled index */
   69,  /* vroundxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vroundsd: vector res reg reg imm */
   76,  /* vroundxsd: vector res reg mem imm */
   77,  /* vroundxxsd: vector res reg mem imm w/ scaled index */
   78,  /* vroundxxxsd: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vroundss: vector res reg reg imm */
   76,  /* vroundxss: vector res reg mem imm */
   77,  /* vroundxxss: vector res reg mem imm w/ scaled index */
   78,  /* vroundxxxss: vector res reg mem imm w/ scaled index w/o base */
   45,  /* vfrsqrt128v32: vector unary reg */
   46,  /* vfrsqrtx128v32: vector unary mem opnd */
   47,  /* vfrsqrtxx128v32: vector unary mem opnd w/ scaled index */
   48,  /* vfrsqrtxxx128v32: vector unary mem opnd w/ scaled index w/o base */
   53,  /* vfrsqrtss: vector arithmetic special */
   54,  /* vfrsqrtxss: vector arithmetic special mem opnd */
   55,  /* vfrsqrtxxss: vector arithmetic special mem opnd w/ scaled index */
   56,  /* vfrsqrtxxxss: vector arithmetic special mem opnd w/ scaled index w/o base */
   75,  /* vshufpd: vector res reg reg imm */
   75,  /* vfshuf128v64: vector res reg reg imm */
   76,  /* vfshufx128v64: vector res reg mem imm */
   77,  /* vfshufxx128v64: vector res reg mem imm w/ scaled index */
   78,  /* vfshufxxx128v64: vector res reg mem imm w/ scaled index w/o base */
   75,  /* vshufps: vector res reg reg imm */
   75,  /* vfshuf128v32: vector res reg reg imm */
   76,  /* vfshufx128v32: vector res reg mem imm */
   77,  /* vfshufxx128v32: vector res reg mem imm w/ scaled index */
   78,  /* vfshufxxx128v32: vector res reg mem imm w/ scaled index w/o base */
   45,  /* vfsqrt128v64: vector unary reg */
   46,  /* vfsqrtx128v64: vector unary mem opnd */
   47,  /* vfsqrtxx128v64: vector unary mem opnd w/ scaled index */
   48,  /* vfsqrtxxx128v64: vector unary mem opnd w/ scaled index w/o base */
   45,  /* vfsqrt128v32: vector unary reg */
   46,  /* vfsqrtx128v32: vector unary mem opnd */
   47,  /* vfsqrtxx128v32: vector unary mem opnd w/ scaled index */
   48,  /* vfsqrtxxx128v32: vector unary mem opnd w/ scaled index w/o base */
   53,  /* vfsqrtsd: vector arithmetic special */
   54,  /* vfsqrtxsd: vector arithmetic special mem opnd */
   55,  /* vfsqrtxxsd: vector arithmetic special mem opnd w/ scaled index */
   56,  /* vfsqrtxxxsd: vector arithmetic special mem opnd w/ scaled index w/o base */
   53,  /* vfsqrtss: vector arithmetic special */
   54,  /* vfsqrtxss: vector arithmetic special mem opnd */
   55,  /* vfsqrtxxss: vector arithmetic special mem opnd w/ scaled index */
   56,  /* vfsqrtxxxss: vector arithmetic special mem opnd w/ scaled index w/o base */
  361,  /* vstmxcsr: store mxcsr */
   57,  /* vfsub128v64: vector arithmetic */
   58,  /* vfsubx128v64: vector arithmetic mem opnd */
   59,  /* vfsubxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfsubxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vfsub128v32: vector arithmetic */
   58,  /* vfsubx128v32: vector arithmetic mem opnd */
   59,  /* vfsubxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfsubxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsubsd: vector arithmetic */
   58,  /* vsubxsd: vector arithmetic mem opnd */
   59,  /* vsubxxsd: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubxxxsd: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vsubss: vector arithmetic */
   58,  /* vsubxss: vector arithmetic mem opnd */
   59,  /* vsubxxss: vector arithmetic mem opnd w/ scaled index */
   60,  /* vsubxxxss: vector arithmetic mem opnd w/ scaled index w/o base */
  309,  /* vucomisd: fp ordered compare */
  310,  /* vucomixsd: fp ordered compare mem opnd */
  311,  /* vucomixxsd: fp ordered compare mem opnd w/ scaled-index */
  312,  /* vucomixxxsd: fp ordered compare mem opnd w/ scaled-index w/o base */
  309,  /* vucomiss: fp ordered compare */
  310,  /* vucomixss: fp ordered compare mem opnd */
  311,  /* vucomixxss: fp ordered compare mem opnd w/ scaled-index */
  312,  /* vucomixxxss: fp ordered compare mem opnd w/ scaled-index w/o base */
   57,  /* vunpckh128v64: vector arithmetic */
   58,  /* vunpckhx128v64: vector arithmetic mem opnd */
   59,  /* vunpckhxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vunpckhxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vunpckh128v32: vector arithmetic */
   58,  /* vunpckhx128v32: vector arithmetic mem opnd */
   59,  /* vunpckhxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vunpckhxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vunpckl128v64: vector arithmetic */
   58,  /* vunpcklx128v64: vector arithmetic mem opnd */
   59,  /* vunpcklxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vunpcklxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vunpckl128v32: vector arithmetic */
   58,  /* vunpcklx128v32: vector arithmetic mem opnd */
   59,  /* vunpcklxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vunpcklxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
   57,  /* vxorpd: vector arithmetic */
   57,  /* vfxor128v64: vector arithmetic */
   58,  /* vfxorx128v64: vector arithmetic mem opnd */
   59,  /* vfxorxx128v64: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfxorxxx128v64: vector arithmetic mem opnd w/ scaled index w/o base */
  376,  /* vxzero128v64: xzerov */
  375,  /* vxzero64: xzero */
   57,  /* vxorps: vector arithmetic */
   57,  /* vfxor128v32: vector arithmetic */
   58,  /* vfxorx128v32: vector arithmetic mem opnd */
   59,  /* vfxorxx128v32: vector arithmetic mem opnd w/ scaled index */
   60,  /* vfxorxxx128v32: vector arithmetic mem opnd w/ scaled index w/o base */
  376,  /* vxzero128v32: xzerov */
  375,  /* vxzero32: xzero */
    0,  /* vzeroall: no operand */
  434,  /* xfmadd132pd: avx fma reg */
  435,  /* xfmadd132xpd: avx fma mem opnd */
  436,  /* xfmadd132xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd132xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd213pd: avx fma reg */
  435,  /* xfmadd213xpd: avx fma mem opnd */
  436,  /* xfmadd213xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd213xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd231pd: avx fma reg */
  435,  /* xfmadd231xpd: avx fma mem opnd */
  436,  /* xfmadd231xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd231xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd132ps: avx fma reg */
  435,  /* xfmadd132xps: avx fma mem opnd */
  436,  /* xfmadd132xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd132xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd213ps: avx fma reg */
  435,  /* xfmadd213xps: avx fma mem opnd */
  436,  /* xfmadd213xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd213xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd231ps: avx fma reg */
  435,  /* xfmadd231xps: avx fma mem opnd */
  436,  /* xfmadd231xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd231xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd132sd: avx fma reg */
  435,  /* xfmadd132xsd: avx fma mem opnd */
  436,  /* xfmadd132xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd132xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd213sd: avx fma reg */
  435,  /* xfmadd213xsd: avx fma mem opnd */
  436,  /* xfmadd213xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd213xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd231sd: avx fma reg */
  435,  /* xfmadd231xsd: avx fma mem opnd */
  436,  /* xfmadd231xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd231xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd132ss: avx fma reg */
  435,  /* xfmadd132xss: avx fma mem opnd */
  436,  /* xfmadd132xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd132xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd213ss: avx fma reg */
  435,  /* xfmadd213xss: avx fma mem opnd */
  436,  /* xfmadd213xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd213xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmadd231ss: avx fma reg */
  435,  /* xfmadd231xss: avx fma mem opnd */
  436,  /* xfmadd231xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfmadd231xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmaddsub132pd: avx fma reg */
  435,  /* xfmaddsub132xpd: avx fma mem opnd */
  436,  /* xfmaddsub132xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmaddsub132xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmaddsub213pd: avx fma reg */
  435,  /* xfmaddsub213xpd: avx fma mem opnd */
  436,  /* xfmaddsub213xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmaddsub213xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmaddsub231pd: avx fma reg */
  435,  /* xfmaddsub231xpd: avx fma mem opnd */
  436,  /* xfmaddsub231xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmaddsub231xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmaddsub132ps: avx fma reg */
  435,  /* xfmaddsub132xps: avx fma mem opnd */
  436,  /* xfmaddsub132xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmaddsub132xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmaddsub213ps: avx fma reg */
  435,  /* xfmaddsub213xps: avx fma mem opnd */
  436,  /* xfmaddsub213xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmaddsub213xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmaddsub231ps: avx fma reg */
  435,  /* xfmaddsub231xps: avx fma mem opnd */
  436,  /* xfmaddsub231xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmaddsub231xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsubadd132pd: avx fma reg */
  435,  /* xfmsubadd132xpd: avx fma mem opnd */
  436,  /* xfmsubadd132xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsubadd132xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsubadd213pd: avx fma reg */
  435,  /* xfmsubadd213xpd: avx fma mem opnd */
  436,  /* xfmsubadd213xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsubadd213xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsubadd231pd: avx fma reg */
  435,  /* xfmsubadd231xpd: avx fma mem opnd */
  436,  /* xfmsubadd231xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsubadd231xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsubadd132ps: avx fma reg */
  435,  /* xfmsubadd132xps: avx fma mem opnd */
  436,  /* xfmsubadd132xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmsubadd132xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsubadd213ps: avx fma reg */
  435,  /* xfmsubadd213xps: avx fma mem opnd */
  436,  /* xfmsubadd213xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmsubadd213xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsubadd231ps: avx fma reg */
  435,  /* xfmsubadd231xps: avx fma mem opnd */
  436,  /* xfmsubadd231xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmsubadd231xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub132pd: avx fma reg */
  435,  /* xfmsub132xpd: avx fma mem opnd */
  436,  /* xfmsub132xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub132xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub213pd: avx fma reg */
  435,  /* xfmsub213xpd: avx fma mem opnd */
  436,  /* xfmsub213xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub213xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub231pd: avx fma reg */
  435,  /* xfmsub231xpd: avx fma mem opnd */
  436,  /* xfmsub231xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub231xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub132ps: avx fma reg */
  435,  /* xfmsub132xps: avx fma mem opnd */
  436,  /* xfmsub132xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub132xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub213ps: avx fma reg */
  435,  /* xfmsub213xps: avx fma mem opnd */
  436,  /* xfmsub213xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub213xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub231ps: avx fma reg */
  435,  /* xfmsub231xps: avx fma mem opnd */
  436,  /* xfmsub231xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub231xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub132sd: avx fma reg */
  435,  /* xfmsub132xsd: avx fma mem opnd */
  436,  /* xfmsub132xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub132xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub213sd: avx fma reg */
  435,  /* xfmsub213xsd: avx fma mem opnd */
  436,  /* xfmsub213xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub213xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub231sd: avx fma reg */
  435,  /* xfmsub231xsd: avx fma mem opnd */
  436,  /* xfmsub231xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub231xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub132ss: avx fma reg */
  435,  /* xfmsub132xss: avx fma mem opnd */
  436,  /* xfmsub132xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub132xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub213ss: avx fma reg */
  435,  /* xfmsub213xss: avx fma mem opnd */
  436,  /* xfmsub213xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub213xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfmsub231ss: avx fma reg */
  435,  /* xfmsub231xss: avx fma mem opnd */
  436,  /* xfmsub231xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfmsub231xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd132pd: avx fma reg */
  435,  /* xfnmadd132xpd: avx fma mem opnd */
  436,  /* xfnmadd132xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd132xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd213pd: avx fma reg */
  435,  /* xfnmadd213xpd: avx fma mem opnd */
  436,  /* xfnmadd213xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd213xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd231pd: avx fma reg */
  435,  /* xfnmadd231xpd: avx fma mem opnd */
  436,  /* xfnmadd231xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd231xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd132ps: avx fma reg */
  435,  /* xfnmadd132xps: avx fma mem opnd */
  436,  /* xfnmadd132xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd132xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd213ps: avx fma reg */
  435,  /* xfnmadd213xps: avx fma mem opnd */
  436,  /* xfnmadd213xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd213xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd231ps: avx fma reg */
  435,  /* xfnmadd231xps: avx fma mem opnd */
  436,  /* xfnmadd231xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd231xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd132sd: avx fma reg */
  435,  /* xfnmadd132xsd: avx fma mem opnd */
  436,  /* xfnmadd132xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd132xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd213sd: avx fma reg */
  435,  /* xfnmadd213xsd: avx fma mem opnd */
  436,  /* xfnmadd213xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd213xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd231sd: avx fma reg */
  435,  /* xfnmadd231xsd: avx fma mem opnd */
  436,  /* xfnmadd231xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd231xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd132ss: avx fma reg */
  435,  /* xfnmadd132xss: avx fma mem opnd */
  436,  /* xfnmadd132xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd132xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd213ss: avx fma reg */
  435,  /* xfnmadd213xss: avx fma mem opnd */
  436,  /* xfnmadd213xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd213xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmadd231ss: avx fma reg */
  435,  /* xfnmadd231xss: avx fma mem opnd */
  436,  /* xfnmadd231xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfnmadd231xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub132pd: avx fma reg */
  435,  /* xfnmsub132xpd: avx fma mem opnd */
  436,  /* xfnmsub132xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub132xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub213pd: avx fma reg */
  435,  /* xfnmsub213xpd: avx fma mem opnd */
  436,  /* xfnmsub213xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub213xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub231pd: avx fma reg */
  435,  /* xfnmsub231xpd: avx fma mem opnd */
  436,  /* xfnmsub231xxpd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub231xxxpd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub132ps: avx fma reg */
  435,  /* xfnmsub132xps: avx fma mem opnd */
  436,  /* xfnmsub132xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub132xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub213ps: avx fma reg */
  435,  /* xfnmsub213xps: avx fma mem opnd */
  436,  /* xfnmsub213xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub213xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub231ps: avx fma reg */
  435,  /* xfnmsub231xps: avx fma mem opnd */
  436,  /* xfnmsub231xxps: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub231xxxps: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub132sd: avx fma reg */
  435,  /* xfnmsub132xsd: avx fma mem opnd */
  436,  /* xfnmsub132xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub132xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub213sd: avx fma reg */
  435,  /* xfnmsub213xsd: avx fma mem opnd */
  436,  /* xfnmsub213xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub213xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub231sd: avx fma reg */
  435,  /* xfnmsub231xsd: avx fma mem opnd */
  436,  /* xfnmsub231xxsd: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub231xxxsd: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub132ss: avx fma reg */
  435,  /* xfnmsub132xss: avx fma mem opnd */
  436,  /* xfnmsub132xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub132xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub213ss: avx fma reg */
  435,  /* xfnmsub213xss: avx fma mem opnd */
  436,  /* xfnmsub213xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub213xxxss: avx fma mem opnd w/ scaled index w/o base */
  434,  /* xfnmsub231ss: avx fma reg */
  435,  /* xfnmsub231xss: avx fma mem opnd */
  436,  /* xfnmsub231xxss: avx fma mem opnd w/ scaled index */
  437,  /* xfnmsub231xxxss: avx fma mem opnd w/ scaled index w/o base */
    6,  /* movabsq: int load imm64 */
  151,  /* store8_abs: int8 store w/o base or index (movabs) */
  153,  /* store16_abs: int16 store w/o base or index (movabs) */
  155,  /* store32_abs: int32 store w/o base or index (movabs) */
  158,  /* store64_abs: int64 store w/o base or index (movabs) */
  141,  /* ld8_abs: int8 load w/o base or index (movabs) */
  142,  /* ld16_abs: int16 load w/o base or index (movabs) */
  143,  /* ld32_abs: int32 load w/o base or index (movabs) */
  146,  /* ld64_abs: int64 load w/o base or index (movabs) */
  379,  /* lock_add32: int32 arithmetic lock */
  379,  /* lock_adc32: int32 arithmetic lock */
  380,  /* lock_add64: int64 arithmetic lock */
  387,  /* lock_xchg32: int32 exchange arithmetic lock */
  388,  /* lock_xchg64: int64 exchange arithmetic lock */
  383,  /* lock_cmpxchg32: int32 compare & exchange mem opnd lock */
  384,  /* lock_cmpxchg64: int64 compare & exchange mem opnd lock */
  379,  /* lock_and32: int32 arithmetic lock */
  380,  /* lock_and64: int64 arithmetic lock */
  379,  /* lock_or32: int32 arithmetic lock */
  380,  /* lock_or64: int64 arithmetic lock */
  379,  /* lock_xor32: int32 arithmetic lock */
  380,  /* lock_xor64: int64 arithmetic lock */
  379,  /* lock_sub32: int32 arithmetic lock */
  380,  /* lock_sub64: int64 arithmetic lock */
  377,  /* lock_add8: int8 arithmetic lock */
  378,  /* lock_add16: int16 arithmetic lock */
  385,  /* lock_xchg8: int8 exchange arithmetic lock */
  386,  /* lock_xchg16: int16 exchange arithmetic lock */
  381,  /* lock_cmpxchg8: int8 compare & exchange mem opnd lock */
  382,  /* lock_cmpxchg16: int16 compare & exchange mem opnd lock */
  377,  /* lock_and8: int8 arithmetic lock */
  378,  /* lock_and16: int16 arithmetic lock */
  377,  /* lock_or8: int8 arithmetic lock */
  378,  /* lock_or16: int16 arithmetic lock */
  377,  /* lock_xor8: int8 arithmetic lock */
  378,  /* lock_xor16: int16 arithmetic lock */
  377,  /* lock_sub8: int8 arithmetic lock */
  378,  /* lock_sub16: int16 arithmetic lock */
  385,  /* lock_xadd8: int8 exchange arithmetic lock */
  386,  /* lock_xadd16: int16 exchange arithmetic lock */
  387,  /* lock_xadd32: int32 exchange arithmetic lock */
  388,  /* lock_xadd64: int64 exchange arithmetic lock */
  389,  /* bsf32: bsf32 */
  390,  /* bsf64: bsf64 */
  389,  /* bsr32: bsf32 */
  390,  /* bsr64: bsf64 */
  425,  /* tls_global_dynamic_64: tls_get_addr_64 */
  426,  /* tls_global_dynamic_32: tls_get_addr_32 */
  425,  /* tls_local_dynamic_64: tls_get_addr_64 */
  426,  /* tls_local_dynamic_32: tls_get_addr_32 */
    0,  /* begin_pregtn: no operand */
    0,  /* end_pregtn: no operand */
    0,  /* bwd_bar: no operand */
    0,  /* fwd_bar: no operand */
  367,  /* label: label */
    0,  /* nop: no operand */
    0,  /* noop: no operand */
};

const mINT8 ISA_OPERAND_relocatable_opnd[] = {
  -1,  /* add8 */
  -1,  /* add16 */
  -1,  /* add32 */
  -1,  /* adc32 */
  -1,  /* add64 */
  -1,  /* addx32 */
  -1,  /* addxx32 */
  -1,  /* addxxx32 */
  -1,  /* addx64 */
  -1,  /* addxx64 */
  -1,  /* addxxx64 */
  -1,  /* addi8 */
  -1,  /* addi16 */
  -1,  /* addi32 */
  -1,  /* adci32 */
  -1,  /* addi64 */
  -1,  /* addxr8 */
  -1,  /* addxxr8 */
  -1,  /* addxxxr8 */
  -1,  /* addxr8_n32 */
  -1,  /* addxr16 */
  -1,  /* addxxr16 */
  -1,  /* addxxxr16 */
  -1,  /* addxr16_n32 */
  -1,  /* addxr32 */
  -1,  /* addxxr32 */
  -1,  /* addxxxr32 */
  -1,  /* addxr32_n32 */
  -1,  /* addxr64 */
  -1,  /* addxxr64 */
  -1,  /* addxxxr64 */
  -1,  /* addxr64_off */
  -1,  /* addixr8 */
  -1,  /* addixxr8 */
  -1,  /* addixxxr8 */
  -1,  /* addixr8_n32 */
  -1,  /* addixr16 */
  -1,  /* addixxr16 */
  -1,  /* addixxxr16 */
  -1,  /* addixr16_n32 */
  -1,  /* addixr32 */
  -1,  /* addixxr32 */
  -1,  /* addixxxr32 */
  -1,  /* addixr32_n32 */
  -1,  /* addixr64 */
  -1,  /* addixxr64 */
  -1,  /* addixxxr64 */
  -1,  /* addixr64_off */
  -1,  /* add128v8 */
  -1,  /* addx128v8 */
  -1,  /* addxx128v8 */
  -1,  /* addxxx128v8 */
  -1,  /* add128v16 */
  -1,  /* addx128v16 */
  -1,  /* addxx128v16 */
  -1,  /* addxxx128v16 */
  -1,  /* add128v32 */
  -1,  /* addx128v32 */
  -1,  /* addxx128v32 */
  -1,  /* addxxx128v32 */
  -1,  /* add128v64 */
  -1,  /* addx128v64 */
  -1,  /* addxx128v64 */
  -1,  /* addxxx128v64 */
  -1,  /* add64v8 */
  -1,  /* add64v16 */
  -1,  /* add64v32 */
  -1,  /* paddsb */
  -1,  /* paddsw */
  -1,  /* paddq */
  -1,  /* psubsb */
  -1,  /* psubsw */
  -1,  /* psubq */
  -1,  /* paddusb */
  -1,  /* paddusw */
  -1,  /* psubusb */
  -1,  /* psubusw */
  -1,  /* pmullw */
  -1,  /* pmulhw */
  -1,  /* pmulhuw */
  -1,  /* pmuludq */
  -1,  /* pmaddwd */
  -1,  /* paddsb128 */
  -1,  /* paddsw128 */
  -1,  /* paddq128 */
  -1,  /* psubsb128 */
  -1,  /* psubsw128 */
  -1,  /* psubq128 */
  -1,  /* paddusb128 */
  -1,  /* paddusw128 */
  -1,  /* psubusb128 */
  -1,  /* psubusw128 */
  -1,  /* pmullw128 */
  -1,  /* pmulhw128 */
  -1,  /* pmulhuw128 */
  -1,  /* pmuludq128 */
  -1,  /* pmaddwd128 */
  -1,  /* and8 */
  -1,  /* and16 */
  -1,  /* and32 */
  -1,  /* andx32 */
  -1,  /* andxx32 */
  -1,  /* andxxx32 */
  -1,  /* and64 */
  -1,  /* andx64 */
  -1,  /* andxx64 */
  -1,  /* andxxx64 */
  -1,  /* andx8 */
  -1,  /* andx16 */
  -1,  /* andxx8 */
  -1,  /* andxxx8 */
  -1,  /* andxx16 */
  -1,  /* andxxx16 */
  -1,  /* and128v8 */
  -1,  /* andx128v8 */
  -1,  /* andxx128v8 */
  -1,  /* andxxx128v8 */
  -1,  /* andxr8 */
  -1,  /* andxxr8 */
  -1,  /* andxxxr8 */
  -1,  /* andxr8_n32 */
  -1,  /* andxr16 */
  -1,  /* andxxr16 */
  -1,  /* andxxxr16 */
  -1,  /* andxr16_n32 */
  -1,  /* andxr32 */
  -1,  /* andxxr32 */
  -1,  /* andxxxr32 */
  -1,  /* andxr32_n32 */
  -1,  /* andxr64 */
  -1,  /* andxxr64 */
  -1,  /* andxxxr64 */
  -1,  /* andxr64_off */
  -1,  /* andixr8 */
  -1,  /* andixxr8 */
  -1,  /* andixxxr8 */
  -1,  /* andixr8_n32 */
  -1,  /* andixr16 */
  -1,  /* andixxr16 */
  -1,  /* andixxxr16 */
  -1,  /* andixr16_n32 */
  -1,  /* andixr32 */
  -1,  /* andixxr32 */
  -1,  /* andixxxr32 */
  -1,  /* andixr32_n32 */
  -1,  /* andixr64 */
  -1,  /* andixxr64 */
  -1,  /* andixxxr64 */
  -1,  /* andixr64_off */
  -1,  /* and128v16 */
  -1,  /* andx128v16 */
  -1,  /* andxx128v16 */
  -1,  /* andxxx128v16 */
  -1,  /* and128v32 */
  -1,  /* andx128v32 */
  -1,  /* andxx128v32 */
  -1,  /* andxxx128v32 */
  -1,  /* and128v64 */
  -1,  /* andx128v64 */
  -1,  /* andxx128v64 */
  -1,  /* andxxx128v64 */
  -1,  /* andi8 */
  -1,  /* andi16 */
  -1,  /* andi32 */
  -1,  /* andi64 */
  -1,  /* call */
  -1,  /* icall */
  -1,  /* icallx */
  -1,  /* icallxx */
  -1,  /* icallxxx */
  -1,  /* cmp8 */
  -1,  /* cmpx8 */
  -1,  /* cmpxx8 */
  -1,  /* cmpxxx8 */
  -1,  /* cmp16 */
  -1,  /* cmpx16 */
  -1,  /* cmpxx16 */
  -1,  /* cmpxxx16 */
  -1,  /* cmp32 */
  -1,  /* cmpx32 */
  -1,  /* cmpxx32 */
  -1,  /* cmpxxx32 */
  -1,  /* cmp64 */
  -1,  /* cmpx64 */
  -1,  /* cmpxx64 */
  -1,  /* cmpxxx64 */
  -1,  /* cmpi8 */
  -1,  /* cmpxr8 */
  -1,  /* cmpxi8 */
  -1,  /* cmpxxr8 */
  -1,  /* cmpxxi8 */
  -1,  /* cmpxxxr8 */
  -1,  /* cmpxxxi8 */
  -1,  /* cmpi16 */
  -1,  /* cmpxr16 */
  -1,  /* cmpxi16 */
  -1,  /* cmpxxr16 */
  -1,  /* cmpxxi16 */
  -1,  /* cmpxxxr16 */
  -1,  /* cmpxxxi16 */
  -1,  /* cmpi32 */
  -1,  /* cmpxr32 */
  -1,  /* cmpxi32 */
  -1,  /* cmpxxr32 */
  -1,  /* cmpxxi32 */
  -1,  /* cmpxxxr32 */
  -1,  /* cmpxxxi32 */
  -1,  /* cmpi64 */
  -1,  /* cmpxr64 */
  -1,  /* cmpxi64 */
  -1,  /* cmpxxr64 */
  -1,  /* cmpxxi64 */
  -1,  /* cmpxxxr64 */
  -1,  /* cmpxxxi64 */
  -1,  /* cmovb */
  -1,  /* cmovae */
  -1,  /* cmovp */
  -1,  /* cmovnp */
  -1,  /* cmove */
  -1,  /* cmovne */
  -1,  /* cmovbe */
  -1,  /* cmova */
  -1,  /* cmovl */
  -1,  /* cmovge */
  -1,  /* cmovle */
  -1,  /* cmovg */
  -1,  /* cmovs */
  -1,  /* cmovns */
  -1,  /* div32 */
  -1,  /* div64 */
  -1,  /* enter */
  -1,  /* idiv32 */
  -1,  /* idiv64 */
  -1,  /* imul32 */
  -1,  /* imulx32 */
  -1,  /* imul64 */
  -1,  /* imuli32 */
  -1,  /* imuli64 */
  -1,  /* imulx64 */
  -1,  /* mul128v16 */
  -1,  /* inc8 */
  -1,  /* dec8 */
  -1,  /* inc16 */
  -1,  /* dec16 */
  -1,  /* inc32 */
  -1,  /* dec32 */
  -1,  /* inc64 */
  -1,  /* dec64 */
  -1,  /* incxr8 */
  -1,  /* incxxr8 */
  -1,  /* incxxxr8 */
  -1,  /* incxr8_n32 */
  -1,  /* incxr16 */
  -1,  /* incxxr16 */
  -1,  /* incxxxr16 */
  -1,  /* incxr16_n32 */
  -1,  /* incxr32 */
  -1,  /* incxxr32 */
  -1,  /* incxxxr32 */
  -1,  /* incxr32_n32 */
  -1,  /* incxr64 */
  -1,  /* incxxr64 */
  -1,  /* incxxxr64 */
  -1,  /* incxr64_off */
  -1,  /* decxr8 */
  -1,  /* decxxr8 */
  -1,  /* decxxxr8 */
  -1,  /* decxr8_n32 */
  -1,  /* decxr16 */
  -1,  /* decxxr16 */
  -1,  /* decxxxr16 */
  -1,  /* decxr16_n32 */
  -1,  /* decxr32 */
  -1,  /* decxxr32 */
  -1,  /* decxxxr32 */
  -1,  /* decxr32_n32 */
  -1,  /* decxr64 */
  -1,  /* decxxr64 */
  -1,  /* decxxxr64 */
  -1,  /* decxr64_off */
  -1,  /* jb */
  -1,  /* jae */
  -1,  /* jp */
  -1,  /* jnp */
  -1,  /* je */
  -1,  /* jne */
  -1,  /* jbe */
  -1,  /* ja */
  -1,  /* jl */
  -1,  /* jge */
  -1,  /* jle */
  -1,  /* jg */
  -1,  /* jcxz */
  -1,  /* jecxz */
  -1,  /* jrcxz */
  -1,  /* js */
  -1,  /* jns */
  -1,  /* jmp */
  -1,  /* ijmp */
  -1,  /* ijmpx */
  -1,  /* ijmpxx */
  -1,  /* ijmpxxx */
  -1,  /* ld64 */
  -1,  /* ldx64 */
  -1,  /* ldxx64 */
  -1,  /* ld64_2m */
  -1,  /* ld64_2sse */
  -1,  /* lea32 */
  -1,  /* lea64 */
  -1,  /* leax32 */
  -1,  /* leax64 */
  -1,  /* leaxx32 */
  -1,  /* leaxx64 */
  -1,  /* leave */
  -1,  /* ldc32 */
  -1,  /* ldc64 */
  -1,  /* mul32 */
  -1,  /* mulx64 */
  -1,  /* mov32 */
  -1,  /* mov64 */
  -1,  /* mov64_m */
  -1,  /* ld32_64_off */
  -1,  /* ld64_off */
  -1,  /* store64_off */
  -1,  /* storei64_off */
  -1,  /* ld8_32_n32 */
  -1,  /* ldu8_32_n32 */
  -1,  /* ld16_32_n32 */
  -1,  /* ldu16_32_n32 */
  -1,  /* ld32_n32 */
  -1,  /* ldss_n32 */
  -1,  /* ldsd_n32 */
  -1,  /* ldaps_n32 */
  -1,  /* ldapd_n32 */
  -1,  /* ldups_n32 */
  -1,  /* ldupd_n32 */
  -1,  /* lddqa_n32 */
  -1,  /* lddqu_n32 */
  -1,  /* ldlps_n32 */
  -1,  /* ldlpd_n32 */
  -1,  /* ldhps_n32 */
  -1,  /* ldhpd_n32 */
  -1,  /* ld64_2m_n32 */
  -1,  /* ld64_2sse_n32 */
  -1,  /* store8_n32 */
  -1,  /* storei8_n32 */
  -1,  /* store16_n32 */
  -1,  /* storei16_n32 */
  -1,  /* store32_n32 */
  -1,  /* storei32_n32 */
  -1,  /* stss_n32 */
  -1,  /* stsd_n32 */
  -1,  /* staps_n32 */
  -1,  /* stapd_n32 */
  -1,  /* stdqa_n32 */
  -1,  /* stdqu_n32 */
  -1,  /* stlps_n32 */
  -1,  /* sthps_n32 */
  -1,  /* stlpd_n32 */
  -1,  /* sthpd_n32 */
  -1,  /* store64_fm_n32 */
  -1,  /* store64_fsse_n32 */
  -1,  /* ld32_gs_seg_off */
  -1,  /* ld64_fs_seg_off */
  -1,  /* movsbl */
  -1,  /* ld8_32 */
  -1,  /* ldx8_32 */
  -1,  /* ldxx8_32 */
  -1,  /* movzbl */
  -1,  /* ldu8_32 */
  -1,  /* ldxu8_32 */
  -1,  /* ldxxu8_32 */
  -1,  /* movswl */
  -1,  /* ld16_32 */
  -1,  /* ldx16_32 */
  -1,  /* ldxx16_32 */
  -1,  /* movzwl */
  -1,  /* ldu16_32 */
  -1,  /* ldxu16_32 */
  -1,  /* ldxxu16_32 */
  -1,  /* movsbq */
  -1,  /* ld8_64 */
  -1,  /* ldx8_64 */
  -1,  /* ldxx8_64 */
  -1,  /* ld8_64_off */
  -1,  /* movzbq */
  -1,  /* ldu8_64 */
  -1,  /* ldxu8_64 */
  -1,  /* ldxxu8_64 */
  -1,  /* ldu8_64_off */
  -1,  /* movswq */
  -1,  /* ld16_64 */
  -1,  /* ldx16_64 */
  -1,  /* ldxx16_64 */
  -1,  /* ld16_64_off */
  -1,  /* movzwq */
  -1,  /* ldu16_64 */
  -1,  /* ldxu16_64 */
  -1,  /* ldxxu16_64 */
  -1,  /* ldu16_64_off */
  -1,  /* movslq */
  -1,  /* ld32_64 */
  -1,  /* ldx32_64 */
  -1,  /* ldxx32_64 */
  -1,  /* ld32 */
  -1,  /* ldx32 */
  -1,  /* ldxx32 */
  -1,  /* movzlq */
  -1,  /* neg8 */
  -1,  /* neg16 */
  -1,  /* neg32 */
  -1,  /* neg64 */
  -1,  /* negxr8 */
  -1,  /* negxxr8 */
  -1,  /* negxxxr8 */
  -1,  /* negxr8_n32 */
  -1,  /* negxr16 */
  -1,  /* negxxr16 */
  -1,  /* negxxxr16 */
  -1,  /* negxr16_n32 */
  -1,  /* negxr32 */
  -1,  /* negxxr32 */
  -1,  /* negxxxr32 */
  -1,  /* negxr32_n32 */
  -1,  /* negxr64 */
  -1,  /* negxxr64 */
  -1,  /* negxxxr64 */
  -1,  /* negxr64_off */
  -1,  /* not8 */
  -1,  /* not16 */
  -1,  /* not32 */
  -1,  /* not64 */
  -1,  /* notxr8 */
  -1,  /* notxxr8 */
  -1,  /* notxxxr8 */
  -1,  /* notxr8_n32 */
  -1,  /* notxr16 */
  -1,  /* notxxr16 */
  -1,  /* notxxxr16 */
  -1,  /* notxr16_n32 */
  -1,  /* notxr32 */
  -1,  /* notxxr32 */
  -1,  /* notxxxr32 */
  -1,  /* notxr32_n32 */
  -1,  /* notxr64 */
  -1,  /* notxxr64 */
  -1,  /* notxxxr64 */
  -1,  /* notxr64_off */
  -1,  /* or8 */
  -1,  /* or16 */
  -1,  /* or32 */
  -1,  /* orx32 */
  -1,  /* orxx32 */
  -1,  /* orxxx32 */
  -1,  /* or64 */
  -1,  /* orx64 */
  -1,  /* orxx64 */
  -1,  /* orxxx64 */
  -1,  /* orx8 */
  -1,  /* orx16 */
  -1,  /* orxx8 */
  -1,  /* orxxx8 */
  -1,  /* orxx16 */
  -1,  /* orxxx16 */
  -1,  /* orxr8 */
  -1,  /* orxxr8 */
  -1,  /* orxxxr8 */
  -1,  /* orxr8_n32 */
  -1,  /* orxr16 */
  -1,  /* orxxr16 */
  -1,  /* orxxxr16 */
  -1,  /* orxr16_n32 */
  -1,  /* orxr32 */
  -1,  /* orxxr32 */
  -1,  /* orxxxr32 */
  -1,  /* orxr32_n32 */
  -1,  /* orxr64 */
  -1,  /* orxxr64 */
  -1,  /* orxxxr64 */
  -1,  /* orxr64_off */
  -1,  /* orixr8 */
  -1,  /* orixxr8 */
  -1,  /* orixxxr8 */
  -1,  /* orixr8_n32 */
  -1,  /* orixr16 */
  -1,  /* orixxr16 */
  -1,  /* orixxxr16 */
  -1,  /* orixr16_n32 */
  -1,  /* orixr32 */
  -1,  /* orixxr32 */
  -1,  /* orixxxr32 */
  -1,  /* orixr32_n32 */
  -1,  /* orixr64 */
  -1,  /* orixxr64 */
  -1,  /* orixxxr64 */
  -1,  /* orixr64_off */
  -1,  /* or128v8 */
  -1,  /* orx128v8 */
  -1,  /* orxx128v8 */
  -1,  /* orxxx128v8 */
  -1,  /* or128v16 */
  -1,  /* orx128v16 */
  -1,  /* orxx128v16 */
  -1,  /* orxxx128v16 */
  -1,  /* or128v32 */
  -1,  /* orx128v32 */
  -1,  /* orxx128v32 */
  -1,  /* orxxx128v32 */
  -1,  /* or128v64 */
  -1,  /* orx128v64 */
  -1,  /* orxx128v64 */
  -1,  /* orxxx128v64 */
  -1,  /* ori8 */
  -1,  /* ori16 */
  -1,  /* ori32 */
  -1,  /* ori64 */
  -1,  /* popl */
  -1,  /* popq */
  -1,  /* pushl */
  -1,  /* pushq */
  -1,  /* ret */
  -1,  /* reti */
  -1,  /* ror8 */
  -1,  /* ror16 */
  -1,  /* ror32 */
  -1,  /* ror64 */
  -1,  /* rori8 */
  -1,  /* rori16 */
  -1,  /* rori32 */
  -1,  /* rori64 */
  -1,  /* rol8 */
  -1,  /* rol16 */
  -1,  /* rol32 */
  -1,  /* rol64 */
  -1,  /* roli8 */
  -1,  /* roli16 */
  -1,  /* roli32 */
  -1,  /* roli64 */
  -1,  /* prefetch */
  -1,  /* prefetchw */
  -1,  /* prefetcht0 */
  -1,  /* prefetcht1 */
  -1,  /* prefetchnta */
  -1,  /* prefetchx */
  -1,  /* prefetchxx */
  -1,  /* prefetchwx */
  -1,  /* prefetchwxx */
  -1,  /* prefetcht0x */
  -1,  /* prefetcht0xx */
  -1,  /* prefetcht1x */
  -1,  /* prefetcht1xx */
  -1,  /* prefetchntax */
  -1,  /* prefetchntaxx */
  -1,  /* setb */
  -1,  /* setae */
  -1,  /* setp */
  -1,  /* setnp */
  -1,  /* sete */
  -1,  /* setne */
  -1,  /* setbe */
  -1,  /* seta */
  -1,  /* setl */
  -1,  /* setge */
  -1,  /* setle */
  -1,  /* setg */
  -1,  /* setc */
  -1,  /* seto */
  -1,  /* sets */
  -1,  /* setz */
  -1,  /* store8 */
  -1,  /* storei8 */
  -1,  /* storex8 */
  -1,  /* storeix8 */
  -1,  /* storexx8 */
  -1,  /* storeixx8 */
  -1,  /* store16 */
  -1,  /* storei16 */
  -1,  /* storex16 */
  -1,  /* storeix16 */
  -1,  /* storexx16 */
  -1,  /* storeixx16 */
  -1,  /* store32 */
  -1,  /* storei32 */
  -1,  /* storex32 */
  -1,  /* storeix32 */
  -1,  /* storexx32 */
  -1,  /* storeixx32 */
  -1,  /* store64 */
  -1,  /* storei64 */
  -1,  /* storex64 */
  -1,  /* storeix64 */
  -1,  /* storexx64 */
  -1,  /* storeixx64 */
  -1,  /* store64_fm */
  -1,  /* store64_fsse */
  -1,  /* storenti32 */
  -1,  /* storentix32 */
  -1,  /* storentixx32 */
  -1,  /* storenti64 */
  -1,  /* storentix64 */
  -1,  /* storentixx64 */
  -1,  /* storenti128 */
  -1,  /* sar32 */
  -1,  /* sar64 */
  -1,  /* sari32 */
  -1,  /* sari64 */
  -1,  /* shl32 */
  -1,  /* shld32 */
  -1,  /* shldi32 */
  -1,  /* shrd32 */
  -1,  /* shrdi32 */
  -1,  /* shl64 */
  -1,  /* shli32 */
  -1,  /* shli64 */
  -1,  /* shr32 */
  -1,  /* shr64 */
  -1,  /* shri32 */
  -1,  /* shri64 */
  -1,  /* sub8 */
  -1,  /* sub16 */
  -1,  /* sub32 */
  -1,  /* sbb32 */
  -1,  /* sub64 */
  -1,  /* subx32 */
  -1,  /* subx64 */
  -1,  /* subxx32 */
  -1,  /* subxxx32 */
  -1,  /* subxx64 */
  -1,  /* subxxx64 */
  -1,  /* subi8 */
  -1,  /* subi16 */
  -1,  /* subi32 */
  -1,  /* sbbi32 */
  -1,  /* subi64 */
  -1,  /* subxr8 */
  -1,  /* subxxr8 */
  -1,  /* subxxxr8 */
  -1,  /* subxr8_n32 */
  -1,  /* subxr16 */
  -1,  /* subxxr16 */
  -1,  /* subxxxr16 */
  -1,  /* subxr16_n32 */
  -1,  /* subxr32 */
  -1,  /* subxxr32 */
  -1,  /* subxxxr32 */
  -1,  /* subxr32_n32 */
  -1,  /* subxr64 */
  -1,  /* subxxr64 */
  -1,  /* subxxxr64 */
  -1,  /* subxr64_off */
  -1,  /* subixr8 */
  -1,  /* subixxr8 */
  -1,  /* subixxxr8 */
  -1,  /* subixr8_n32 */
  -1,  /* subixr16 */
  -1,  /* subixxr16 */
  -1,  /* subixxxr16 */
  -1,  /* subixr16_n32 */
  -1,  /* subixr32 */
  -1,  /* subixxr32 */
  -1,  /* subixxxr32 */
  -1,  /* subixr32_n32 */
  -1,  /* subixr64 */
  -1,  /* subixxr64 */
  -1,  /* subixxxr64 */
  -1,  /* subixr64_off */
  -1,  /* sub128v8 */
  -1,  /* subx128v8 */
  -1,  /* subxx128v8 */
  -1,  /* subxxx128v8 */
  -1,  /* sub128v16 */
  -1,  /* subx128v16 */
  -1,  /* subxx128v16 */
  -1,  /* subxxx128v16 */
  -1,  /* sub128v32 */
  -1,  /* subx128v32 */
  -1,  /* subxx128v32 */
  -1,  /* subxxx128v32 */
  -1,  /* sub128v64 */
  -1,  /* subx128v64 */
  -1,  /* subxx128v64 */
  -1,  /* subxxx128v64 */
  -1,  /* sub64v8 */
  -1,  /* sub64v16 */
  -1,  /* sub64v32 */
  -1,  /* test8 */
  -1,  /* testx8 */
  -1,  /* testxx8 */
  -1,  /* testxxx8 */
  -1,  /* test16 */
  -1,  /* testx16 */
  -1,  /* testxx16 */
  -1,  /* testxxx16 */
  -1,  /* test32 */
  -1,  /* testx32 */
  -1,  /* testxx32 */
  -1,  /* testxxx32 */
  -1,  /* test64 */
  -1,  /* testx64 */
  -1,  /* testxx64 */
  -1,  /* testxxx64 */
  -1,  /* testi8 */
  -1,  /* testi16 */
  -1,  /* testi32 */
  -1,  /* testi64 */
  -1,  /* xor8 */
  -1,  /* xor16 */
  -1,  /* xor32 */
  -1,  /* xorx32 */
  -1,  /* xorxx32 */
  -1,  /* xorxxx32 */
  -1,  /* xor64 */
  -1,  /* xorx64 */
  -1,  /* xorxx64 */
  -1,  /* xorxxx64 */
  -1,  /* xorx8 */
  -1,  /* xorx16 */
  -1,  /* xorxx8 */
  -1,  /* xorxxx8 */
  -1,  /* xorxx16 */
  -1,  /* xorxxx16 */
  -1,  /* xorxr8 */
  -1,  /* xorxxr8 */
  -1,  /* xorxxxr8 */
  -1,  /* xorxr8_n32 */
  -1,  /* xorxr16 */
  -1,  /* xorxxr16 */
  -1,  /* xorxxxr16 */
  -1,  /* xorxr16_n32 */
  -1,  /* xorxr32 */
  -1,  /* xorxxr32 */
  -1,  /* xorxxxr32 */
  -1,  /* xorxr32_n32 */
  -1,  /* xorxr64 */
  -1,  /* xorxxr64 */
  -1,  /* xorxxxr64 */
  -1,  /* xorxr64_off */
  -1,  /* xorixr8 */
  -1,  /* xorixxr8 */
  -1,  /* xorixxxr8 */
  -1,  /* xorixr8_n32 */
  -1,  /* xorixr16 */
  -1,  /* xorixxr16 */
  -1,  /* xorixxxr16 */
  -1,  /* xorixr16_n32 */
  -1,  /* xorixr32 */
  -1,  /* xorixxr32 */
  -1,  /* xorixxxr32 */
  -1,  /* xorixr32_n32 */
  -1,  /* xorixr64 */
  -1,  /* xorixxr64 */
  -1,  /* xorixxxr64 */
  -1,  /* xorixr64_off */
  -1,  /* xor128v8 */
  -1,  /* xorx128v8 */
  -1,  /* xorxx128v8 */
  -1,  /* xorxxx128v8 */
  -1,  /* xor128v16 */
  -1,  /* xorx128v16 */
  -1,  /* xorxx128v16 */
  -1,  /* xorxxx128v16 */
  -1,  /* xor128v32 */
  -1,  /* xorx128v32 */
  -1,  /* xorxx128v32 */
  -1,  /* xorxxx128v32 */
  -1,  /* xor128v64 */
  -1,  /* xorx128v64 */
  -1,  /* xorxx128v64 */
  -1,  /* xorxxx128v64 */
  -1,  /* xori8 */
  -1,  /* xori16 */
  -1,  /* xori32 */
  -1,  /* xori64 */
  -1,  /* fxor128v32 */
  -1,  /* fxorx128v32 */
  -1,  /* fxorxx128v32 */
  -1,  /* fxorxxx128v32 */
  -1,  /* fxor128v64 */
  -1,  /* fxorx128v64 */
  -1,  /* fxorxx128v64 */
  -1,  /* fxorxxx128v64 */
  -1,  /* xorps */
  -1,  /* xorpd */
  -1,  /* addsd */
  -1,  /* addss */
  -1,  /* addxsd */
  -1,  /* addxss */
  -1,  /* addxxsd */
  -1,  /* addxxxsd */
  -1,  /* addxxss */
  -1,  /* addxxxss */
  -1,  /* faddsub128v32 */
  -1,  /* faddsubx128v32 */
  -1,  /* faddsubxx128v32 */
  -1,  /* faddsubxxx128v32 */
  -1,  /* faddsub128v64 */
  -1,  /* faddsubx128v64 */
  -1,  /* faddsubxx128v64 */
  -1,  /* faddsubxxx128v64 */
  -1,  /* fadd128v32 */
  -1,  /* faddx128v32 */
  -1,  /* faddxx128v32 */
  -1,  /* faddxxx128v32 */
  -1,  /* fadd128v64 */
  -1,  /* faddx128v64 */
  -1,  /* faddxx128v64 */
  -1,  /* faddxxx128v64 */
  -1,  /* fhadd128v32 */
  -1,  /* fhaddx128v32 */
  -1,  /* fhaddxx128v32 */
  -1,  /* fhaddxxx128v32 */
  -1,  /* fhadd128v64 */
  -1,  /* fhaddx128v64 */
  -1,  /* fhaddxx128v64 */
  -1,  /* fhaddxxx128v64 */
  -1,  /* fand128v32 */
  -1,  /* fandx128v32 */
  -1,  /* fandxx128v32 */
  -1,  /* fandxxx128v32 */
  -1,  /* fand128v64 */
  -1,  /* fandx128v64 */
  -1,  /* fandxx128v64 */
  -1,  /* fandxxx128v64 */
  -1,  /* andps */
  -1,  /* andpd */
  -1,  /* andnps */
  -1,  /* andnpd */
  -1,  /* for128v32 */
  -1,  /* forx128v32 */
  -1,  /* forxx128v32 */
  -1,  /* forxxx128v32 */
  -1,  /* for128v64 */
  -1,  /* forx128v64 */
  -1,  /* forxx128v64 */
  -1,  /* forxxx128v64 */
  -1,  /* orps */
  -1,  /* orpd */
  -1,  /* comisd */
  -1,  /* comixsd */
  -1,  /* comixxsd */
  -1,  /* comixxxsd */
  -1,  /* comiss */
  -1,  /* comixss */
  -1,  /* comixxss */
  -1,  /* comixxxss */
  -1,  /* cmpss */
  -1,  /* cmpsd */
  -1,  /* cmpps */
  -1,  /* cmppd */
  -1,  /* cmpeq128v8 */
  -1,  /* cmpeq128v16 */
  -1,  /* cmpeq128v32 */
  -1,  /* cmpeqx128v8 */
  -1,  /* cmpeqx128v16 */
  -1,  /* cmpeqx128v32 */
  -1,  /* cmpeqxx128v8 */
  -1,  /* cmpeqxx128v16 */
  -1,  /* cmpeqxx128v32 */
  -1,  /* cmpeqxxx128v8 */
  -1,  /* cmpeqxxx128v16 */
  -1,  /* cmpeqxxx128v32 */
  -1,  /* cmpgt128v8 */
  -1,  /* cmpgt128v16 */
  -1,  /* cmpgt128v32 */
  -1,  /* cmpgtx128v8 */
  -1,  /* cmpgtx128v16 */
  -1,  /* cmpgtx128v32 */
  -1,  /* cmpgtxx128v8 */
  -1,  /* cmpgtxx128v16 */
  -1,  /* cmpgtxx128v32 */
  -1,  /* cmpgtxxx128v8 */
  -1,  /* cmpgtxxx128v16 */
  -1,  /* cmpgtxxx128v32 */
  -1,  /* pcmpeqb */
  -1,  /* pcmpeqw */
  -1,  /* pcmpeqd */
  -1,  /* pcmpgtb */
  -1,  /* pcmpgtw */
  -1,  /* pcmpgtd */
  -1,  /* fmovsldup */
  -1,  /* fmovshdup */
  -1,  /* fmovddup */
  -1,  /* fmovsldupx */
  -1,  /* fmovshdupx */
  -1,  /* fmovddupx */
  -1,  /* fmovsldupxx */
  -1,  /* fmovshdupxx */
  -1,  /* fmovddupxx */
  -1,  /* fmovsldupxxx */
  -1,  /* fmovshdupxxx */
  -1,  /* fmovddupxxx */
  -1,  /* cltd */
  -1,  /* cqto */
  -1,  /* cvtss2sd */
  -1,  /* cvtsd2ss */
  -1,  /* cvtsd2ss_x */
  -1,  /* cvtsd2ss_xx */
  -1,  /* cvtsd2ss_xxx */
  -1,  /* cvtsi2sd */
  -1,  /* cvtsi2sd_x */
  -1,  /* cvtsi2sd_xx */
  -1,  /* cvtsi2sd_xxx */
  -1,  /* cvtsi2ss */
  -1,  /* cvtsi2ss_x */
  -1,  /* cvtsi2ss_xx */
  -1,  /* cvtsi2ss_xxx */
  -1,  /* cvtsi2sdq */
  -1,  /* cvtsi2sdq_x */
  -1,  /* cvtsi2sdq_xx */
  -1,  /* cvtsi2sdq_xxx */
  -1,  /* cvtsi2ssq */
  -1,  /* cvtsi2ssq_x */
  -1,  /* cvtsi2ssq_xx */
  -1,  /* cvtsi2ssq_xxx */
  -1,  /* cvtss2si */
  -1,  /* cvtsd2si */
  -1,  /* cvtss2siq */
  -1,  /* cvtsd2siq */
  -1,  /* cvttss2si */
  -1,  /* cvttsd2si */
  -1,  /* cvttss2siq */
  -1,  /* cvttsd2siq */
  -1,  /* cvtdq2pd */
  -1,  /* cvtdq2ps */
  -1,  /* cvtps2pd */
  -1,  /* cvtpd2ps */
  -1,  /* cvtps2dq */
  -1,  /* cvttps2dq */
  -1,  /* cvtpd2dq */
  -1,  /* cvttpd2dq */
  -1,  /* cvtdq2pd_x */
  -1,  /* cvtdq2ps_x */
  -1,  /* cvtps2pd_x */
  -1,  /* cvtpd2ps_x */
  -1,  /* cvtps2dq_x */
  -1,  /* cvtpd2dq_x */
  -1,  /* cvttps2dq_x */
  -1,  /* cvttpd2dq_x */
  -1,  /* cvtdq2pd_xx */
  -1,  /* cvtdq2ps_xx */
  -1,  /* cvtps2pd_xx */
  -1,  /* cvtpd2ps_xx */
  -1,  /* cvtps2dq_xx */
  -1,  /* cvtpd2dq_xx */
  -1,  /* cvttps2dq_xx */
  -1,  /* cvttpd2dq_xx */
  -1,  /* cvtdq2pd_xxx */
  -1,  /* cvtdq2ps_xxx */
  -1,  /* cvtps2pd_xxx */
  -1,  /* cvtpd2ps_xxx */
  -1,  /* cvtps2dq_xxx */
  -1,  /* cvtpd2dq_xxx */
  -1,  /* cvttps2dq_xxx */
  -1,  /* cvttpd2dq_xxx */
  -1,  /* cvtpi2ps */
  -1,  /* cvtps2pi */
  -1,  /* cvttps2pi */
  -1,  /* cvtpi2pd */
  -1,  /* cvtpd2pi */
  -1,  /* cvttpd2pi */
  -1,  /* ldsd */
  -1,  /* ldsdx */
  -1,  /* ldsdxx */
  -1,  /* ldss */
  -1,  /* ldssx */
  -1,  /* ldssxx */
  -1,  /* lddqa */
  -1,  /* lddqu */
  -1,  /* ldlps */
  -1,  /* ldhps */
  -1,  /* ldlpd */
  -1,  /* ldhpd */
  -1,  /* stdqa */
  -1,  /* stdqu */
  -1,  /* stlps */
  -1,  /* sthps */
  -1,  /* stlpd */
  -1,  /* storelpd */
  -1,  /* sthpd */
  -1,  /* stntpd */
  -1,  /* stntps */
  -1,  /* storent64_fm */
  -1,  /* lddqax */
  -1,  /* lddqux */
  -1,  /* ldlpsx */
  -1,  /* ldhpsx */
  -1,  /* ldlpdx */
  -1,  /* ldhpdx */
  -1,  /* stdqax */
  -1,  /* stntpdx */
  -1,  /* stntpsx */
  -1,  /* stdqux */
  -1,  /* stlpsx */
  -1,  /* sthpsx */
  -1,  /* stlpdx */
  -1,  /* sthpdx */
  -1,  /* lddqaxx */
  -1,  /* lddquxx */
  -1,  /* ldlpsxx */
  -1,  /* ldhpsxx */
  -1,  /* ldlpdxx */
  -1,  /* ldhpdxx */
  -1,  /* ldaps */
  -1,  /* ldapsx */
  -1,  /* ldapsxx */
  -1,  /* ldapd */
  -1,  /* ldapdx */
  -1,  /* ldapdxx */
  -1,  /* ldups */
  -1,  /* ldupsx */
  -1,  /* ldupsxx */
  -1,  /* ldupd */
  -1,  /* ldupdx */
  -1,  /* ldupdxx */
  -1,  /* stdqaxx */
  -1,  /* stntpdxx */
  -1,  /* stntpsxx */
  -1,  /* stdquxx */
  -1,  /* stlpsxx */
  -1,  /* sthpsxx */
  -1,  /* stlpdxx */
  -1,  /* sthpdxx */
  -1,  /* staps */
  -1,  /* stapsx */
  -1,  /* stapsxx */
  -1,  /* stapd */
  -1,  /* stapdx */
  -1,  /* stapdxx */
  -1,  /* stups */
  -1,  /* stupsx */
  -1,  /* stupsxx */
  -1,  /* stups_n32 */
  -1,  /* stupd */
  -1,  /* stupdx */
  -1,  /* stupdxx */
  -1,  /* stupd_n32 */
  -1,  /* maxsd */
  -1,  /* maxss */
  -1,  /* fmax128v32 */
  -1,  /* fmaxx128v32 */
  -1,  /* fmaxxx128v32 */
  -1,  /* fmaxxxx128v32 */
  -1,  /* fmax128v64 */
  -1,  /* fmaxx128v64 */
  -1,  /* fmaxxx128v64 */
  -1,  /* fmaxxxx128v64 */
  -1,  /* max64v8 */
  -1,  /* max64v16 */
  -1,  /* min64v8 */
  -1,  /* min64v16 */
  -1,  /* minsd */
  -1,  /* minss */
  -1,  /* fmin128v32 */
  -1,  /* fminx128v32 */
  -1,  /* fminxx128v32 */
  -1,  /* fminxxx128v32 */
  -1,  /* fmin128v64 */
  -1,  /* fminx128v64 */
  -1,  /* fminxx128v64 */
  -1,  /* fminxxx128v64 */
  -1,  /* movx2g64 */
  -1,  /* movx2g */
  -1,  /* movg2x64 */
  -1,  /* movg2x */
  -1,  /* movsd */
  -1,  /* movss */
  -1,  /* movdq */
  -1,  /* movapd */
  -1,  /* movaps */
  -1,  /* movq2dq */
  -1,  /* movdq2q */
  -1,  /* divsd */
  -1,  /* divxsd */
  -1,  /* divxxsd */
  -1,  /* divxxxsd */
  -1,  /* divss */
  -1,  /* divxss */
  -1,  /* divxxss */
  -1,  /* divxxxss */
  -1,  /* fdiv128v32 */
  -1,  /* fdivx128v32 */
  -1,  /* fdivxx128v32 */
  -1,  /* fdivxxx128v32 */
  -1,  /* fdiv128v64 */
  -1,  /* fdivx128v64 */
  -1,  /* fdivxx128v64 */
  -1,  /* fdivxxx128v64 */
  -1,  /* mulsd */
  -1,  /* mulss */
  -1,  /* fmul128v32 */
  -1,  /* fmulx128v32 */
  -1,  /* fmulxx128v32 */
  -1,  /* fmulxxx128v32 */
  -1,  /* fmul128v64 */
  -1,  /* fmulx128v64 */
  -1,  /* fmulxx128v64 */
  -1,  /* fmulxxx128v64 */
  -1,  /* mulxsd */
  -1,  /* mulxss */
  -1,  /* mulxxsd */
  -1,  /* mulxxxsd */
  -1,  /* mulxxss */
  -1,  /* mulxxxss */
  -1,  /* subsd */
  -1,  /* subss */
  -1,  /* subxsd */
  -1,  /* subxss */
  -1,  /* subxxsd */
  -1,  /* subxxxsd */
  -1,  /* subxxss */
  -1,  /* subxxxss */
  -1,  /* ucomisd */
  -1,  /* ucomixsd */
  -1,  /* ucomixxsd */
  -1,  /* ucomixxxsd */
  -1,  /* ucomiss */
  -1,  /* ucomixss */
  -1,  /* ucomixxss */
  -1,  /* ucomixxxss */
  -1,  /* fsub128v32 */
  -1,  /* fsubx128v32 */
  -1,  /* fsubxx128v32 */
  -1,  /* fsubxxx128v32 */
  -1,  /* fsub128v64 */
  -1,  /* fsubx128v64 */
  -1,  /* fsubxx128v64 */
  -1,  /* fsubxxx128v64 */
  -1,  /* fhsub128v32 */
  -1,  /* fhsubx128v32 */
  -1,  /* fhsubxx128v32 */
  -1,  /* fhsubxxx128v32 */
  -1,  /* fhsub128v64 */
  -1,  /* fhsubx128v64 */
  -1,  /* fhsubxx128v64 */
  -1,  /* fhsubxxx128v64 */
  -1,  /* stss */
  -1,  /* stntss */
  -1,  /* stssx */
  -1,  /* stntssx */
  -1,  /* stssxx */
  -1,  /* stntssxx */
  -1,  /* stsd */
  -1,  /* stntsd */
  -1,  /* stsdx */
  -1,  /* stntsdx */
  -1,  /* stsdxx */
  -1,  /* stntsdxx */
  -1,  /* rcpss */
  -1,  /* frcp128v32 */
  -1,  /* sqrtsd */
  -1,  /* sqrtss */
  -1,  /* rsqrtss */
  -1,  /* fsqrt128v32 */
  -1,  /* frsqrt128v32 */
  -1,  /* fsqrt128v64 */
  -1,  /* punpcklwd */
  -1,  /* punpcklbw */
  -1,  /* punpckldq */
  -1,  /* punpcklbw128 */
  -1,  /* punpcklwd128 */
  -1,  /* punpckldq128 */
  -1,  /* punpckhbw */
  -1,  /* punpckhwd */
  -1,  /* punpckhdq */
  -1,  /* punpckhbw128 */
  -1,  /* punpckhwd128 */
  -1,  /* punpckhdq128 */
  -1,  /* punpcklqdq */
  -1,  /* punpckhqdq */
  -1,  /* packsswb */
  -1,  /* packssdw */
  -1,  /* packuswb */
  -1,  /* packsswb128 */
  -1,  /* packssdw128 */
  -1,  /* packuswb128 */
  -1,  /* pshufd */
  -1,  /* pshufw */
  -1,  /* pshuflw */
  -1,  /* pshufhw */
  -1,  /* pslldq */
  -1,  /* psllw */
  -1,  /* psllwi */
  -1,  /* pslld */
  -1,  /* pslldi */
  -1,  /* psllq */
  -1,  /* psllqi */
  -1,  /* psrlw */
  -1,  /* psrlwi */
  -1,  /* psrld */
  -1,  /* psrldi */
  -1,  /* psrlq */
  -1,  /* psrlqi */
  -1,  /* psraw */
  -1,  /* psrawi */
  -1,  /* psrad */
  -1,  /* psradi */
  -1,  /* psllw_mmx */
  -1,  /* psllwi_mmx */
  -1,  /* pslld_mmx */
  -1,  /* pslldi_mmx */
  -1,  /* psllq_mmx */
  -1,  /* psllqi_mmx */
  -1,  /* psrlw_mmx */
  -1,  /* psrlwi_mmx */
  -1,  /* psrld_mmx */
  -1,  /* psrldi_mmx */
  -1,  /* psrlq_mmx */
  -1,  /* psrlqi_mmx */
  -1,  /* psraw_mmx */
  -1,  /* psrawi_mmx */
  -1,  /* psrad_mmx */
  -1,  /* psradi_mmx */
  -1,  /* pand_mmx */
  -1,  /* pandn_mmx */
  -1,  /* por_mmx */
  -1,  /* pxor_mmx */
  -1,  /* pand */
  -1,  /* pandn */
  -1,  /* por */
  -1,  /* pxor */
  -1,  /* unpckhpd */
  -1,  /* unpckhps */
  -1,  /* unpcklpd */
  -1,  /* unpcklps */
  -1,  /* shufpd */
  -1,  /* shufps */
  -1,  /* movhlps */
  -1,  /* movlhps */
  -1,  /* psrldq */
  -1,  /* psrlq128v64 */
  -1,  /* subus128v16 */
  -1,  /* pavgb */
  -1,  /* pavgw */
  -1,  /* psadbw */
  -1,  /* pavgb128 */
  -1,  /* pavgw128 */
  -1,  /* psadbw128 */
  -1,  /* pextrw */
  -1,  /* pinsrw */
  -1,  /* pmovmskb */
  -1,  /* pmovmskb128 */
  -1,  /* movi32_2m */
  -1,  /* movi64_2m */
  -1,  /* movm_2i32 */
  -1,  /* movm_2i64 */
  -1,  /* pshufw64v16 */
  -1,  /* movmskps */
  -1,  /* movmskpd */
  -1,  /* maskmovdqu */
  -1,  /* maskmovq */
  -1,  /* extrq */
  -1,  /* insertq */
  -1,  /* vfmaddss */
  -1,  /* vfmaddxss */
  -1,  /* vfmaddxxss */
  -1,  /* vfmaddxxxss */
  -1,  /* vfmaddxrss */
  -1,  /* vfmaddxxrss */
  -1,  /* vfmaddxxxrss */
  -1,  /* vfmaddsd */
  -1,  /* vfmaddxsd */
  -1,  /* vfmaddxxsd */
  -1,  /* vfmaddxxxsd */
  -1,  /* vfmaddxrsd */
  -1,  /* vfmaddxxrsd */
  -1,  /* vfmaddxxxrsd */
  -1,  /* vfnmaddss */
  -1,  /* vfnmaddxss */
  -1,  /* vfnmaddxxss */
  -1,  /* vfnmaddxxxss */
  -1,  /* vfnmaddxrss */
  -1,  /* vfnmaddxxrss */
  -1,  /* vfnmaddxxxrss */
  -1,  /* vfnmaddsd */
  -1,  /* vfnmaddxsd */
  -1,  /* vfnmaddxxsd */
  -1,  /* vfnmaddxxxsd */
  -1,  /* vfnmaddxrsd */
  -1,  /* vfnmaddxxrsd */
  -1,  /* vfnmaddxxxrsd */
  -1,  /* vfmaddps */
  -1,  /* vfmaddxps */
  -1,  /* vfmaddxxps */
  -1,  /* vfmaddxxxps */
  -1,  /* vfmaddxrps */
  -1,  /* vfmaddxxrps */
  -1,  /* vfmaddxxxrps */
  -1,  /* vfmaddpd */
  -1,  /* vfmaddxpd */
  -1,  /* vfmaddxxpd */
  -1,  /* vfmaddxxxpd */
  -1,  /* vfmaddxrpd */
  -1,  /* vfmaddxxrpd */
  -1,  /* vfmaddxxxrpd */
  -1,  /* vfmaddsubps */
  -1,  /* vfmaddsubxps */
  -1,  /* vfmaddsubxxps */
  -1,  /* vfmaddsubxxxps */
  -1,  /* vfmaddsubxrps */
  -1,  /* vfmaddsubxxrps */
  -1,  /* vfmaddsubxxxrps */
  -1,  /* vfmaddsubpd */
  -1,  /* vfmaddsubxpd */
  -1,  /* vfmaddsubxxpd */
  -1,  /* vfmaddsubxxxpd */
  -1,  /* vfmaddsubxrpd */
  -1,  /* vfmaddsubxxrpd */
  -1,  /* vfmaddsubxxxrpd */
  -1,  /* vfnmaddps */
  -1,  /* vfnmaddxps */
  -1,  /* vfnmaddxxps */
  -1,  /* vfnmaddxxxps */
  -1,  /* vfnmaddxrps */
  -1,  /* vfnmaddxxrps */
  -1,  /* vfnmaddxxxrps */
  -1,  /* vfnmaddpd */
  -1,  /* vfnmaddxpd */
  -1,  /* vfnmaddxxpd */
  -1,  /* vfnmaddxxxpd */
  -1,  /* vfnmaddxrpd */
  -1,  /* vfnmaddxxrpd */
  -1,  /* vfnmaddxxxrpd */
  -1,  /* vfmsubss */
  -1,  /* vfmsubxss */
  -1,  /* vfmsubxxss */
  -1,  /* vfmsubxxxss */
  -1,  /* vfmsubxrss */
  -1,  /* vfmsubxxrss */
  -1,  /* vfmsubxxxrss */
  -1,  /* vfmsubsd */
  -1,  /* vfmsubxsd */
  -1,  /* vfmsubxxsd */
  -1,  /* vfmsubxxxsd */
  -1,  /* vfmsubxrsd */
  -1,  /* vfmsubxxrsd */
  -1,  /* vfmsubxxxrsd */
  -1,  /* vfnmsubss */
  -1,  /* vfnmsubxss */
  -1,  /* vfnmsubxxss */
  -1,  /* vfnmsubxxxss */
  -1,  /* vfnmsubxrss */
  -1,  /* vfnmsubxxrss */
  -1,  /* vfnmsubxxxrss */
  -1,  /* vfnmsubsd */
  -1,  /* vfnmsubxsd */
  -1,  /* vfnmsubxxsd */
  -1,  /* vfnmsubxxxsd */
  -1,  /* vfnmsubxrsd */
  -1,  /* vfnmsubxxrsd */
  -1,  /* vfnmsubxxxrsd */
  -1,  /* vfmsubps */
  -1,  /* vfmsubxps */
  -1,  /* vfmsubxxps */
  -1,  /* vfmsubxxxps */
  -1,  /* vfmsubxrps */
  -1,  /* vfmsubxxrps */
  -1,  /* vfmsubxxxrps */
  -1,  /* vfmsubpd */
  -1,  /* vfmsubxpd */
  -1,  /* vfmsubxxpd */
  -1,  /* vfmsubxxxpd */
  -1,  /* vfmsubxrpd */
  -1,  /* vfmsubxxrpd */
  -1,  /* vfmsubxxxrpd */
  -1,  /* vfmsubaddps */
  -1,  /* vfmsubaddxps */
  -1,  /* vfmsubaddxxps */
  -1,  /* vfmsubaddxxxps */
  -1,  /* vfmsubaddxrps */
  -1,  /* vfmsubaddxxrps */
  -1,  /* vfmsubaddxxxrps */
  -1,  /* vfmsubaddpd */
  -1,  /* vfmsubaddxpd */
  -1,  /* vfmsubaddxxpd */
  -1,  /* vfmsubaddxxxpd */
  -1,  /* vfmsubaddxrpd */
  -1,  /* vfmsubaddxxrpd */
  -1,  /* vfmsubaddxxxrpd */
  -1,  /* vfnmsubps */
  -1,  /* vfnmsubxps */
  -1,  /* vfnmsubxxps */
  -1,  /* vfnmsubxxxps */
  -1,  /* vfnmsubxrps */
  -1,  /* vfnmsubxxrps */
  -1,  /* vfnmsubxxxrps */
  -1,  /* vfnmsubpd */
  -1,  /* vfnmsubxpd */
  -1,  /* vfnmsubxxpd */
  -1,  /* vfnmsubxxxpd */
  -1,  /* vfnmsubxrpd */
  -1,  /* vfnmsubxxrpd */
  -1,  /* vfnmsubxxxrpd */
  -1,  /* vzeroupper */
  -1,  /* mfence */
  -1,  /* lfence */
  -1,  /* sfence */
  -1,  /* monitor */
  -1,  /* mwait */
  -1,  /* asm */
  -1,  /* intrncall */
  -1,  /* spadjust */
  -1,  /* savexmms */
  -1,  /* zero32 */
  -1,  /* zero64 */
  -1,  /* xzero32 */
  -1,  /* xzero64 */
  -1,  /* xzero128v32 */
  -1,  /* xzero128v64 */
  -1,  /* fadd */
  -1,  /* faddp */
  -1,  /* flds */
  -1,  /* flds_n32 */
  -1,  /* fldl */
  -1,  /* fldl_n32 */
  -1,  /* fldt */
  -1,  /* fldt_n32 */
  -1,  /* fld */
  -1,  /* fst */
  -1,  /* fstp */
  -1,  /* fstps */
  -1,  /* fstps_n32 */
  -1,  /* fstpl */
  -1,  /* fstpl_n32 */
  -1,  /* fstpt */
  -1,  /* fstpt_n32 */
  -1,  /* fsts */
  -1,  /* fsts_n32 */
  -1,  /* fstl */
  -1,  /* fstl_n32 */
  -1,  /* fxch */
  -1,  /* fmov */
  -1,  /* fsub */
  -1,  /* fsubr */
  -1,  /* fsubp */
  -1,  /* fsubrp */
  -1,  /* fmul */
  -1,  /* fmulp */
  -1,  /* fdiv */
  -1,  /* fdivp */
  -1,  /* fdivr */
  -1,  /* fdivrp */
  -1,  /* fucomi */
  -1,  /* fucomip */
  -1,  /* fchs */
  -1,  /* frndint */
  -1,  /* fnstcw */
  -1,  /* fldcw */
  -1,  /* fistps */
  -1,  /* fistpl */
  -1,  /* fists */
  -1,  /* fistl */
  -1,  /* fistpll */
  -1,  /* filds */
  -1,  /* fildl */
  -1,  /* fildll */
  -1,  /* fldz */
  -1,  /* fabs */
  -1,  /* fsqrt */
  -1,  /* fcmovb */
  -1,  /* fcmovbe */
  -1,  /* fcmovnb */
  -1,  /* fcmovnbe */
  -1,  /* fcmove */
  -1,  /* fcmovne */
  -1,  /* fcmovu */
  -1,  /* fcmovnu */
  -1,  /* fcos */
  -1,  /* fsin */
  -1,  /* cmpeqpd */
  -1,  /* cmpltpd */
  -1,  /* cmplepd */
  -1,  /* cmpunordpd */
  -1,  /* cmpneqpd */
  -1,  /* cmpnltpd */
  -1,  /* cmpnlepd */
  -1,  /* cmpordpd */
  -1,  /* cmpeqps */
  -1,  /* cmpltps */
  -1,  /* cmpleps */
  -1,  /* cmpunordps */
  -1,  /* cmpneqps */
  -1,  /* cmpnltps */
  -1,  /* cmpnleps */
  -1,  /* cmpordps */
  -1,  /* cmpeqsd */
  -1,  /* cmpltsd */
  -1,  /* cmplesd */
  -1,  /* cmpunordsd */
  -1,  /* cmpneqsd */
  -1,  /* cmpnltsd */
  -1,  /* cmpnlesd */
  -1,  /* cmpordsd */
  -1,  /* cmpeqss */
  -1,  /* cmpltss */
  -1,  /* cmpless */
  -1,  /* cmpunordss */
  -1,  /* cmpneqss */
  -1,  /* cmpnltss */
  -1,  /* cmpnless */
  -1,  /* cmpordss */
  -1,  /* emms */
  -1,  /* stmxcsr */
  -1,  /* ldmxcsr */
  -1,  /* clflush */
  -1,  /* fisttps */
  -1,  /* fisttpl */
  -1,  /* fisttpll */
  -1,  /* pabs128v8 */
  -1,  /* pabsx128v8 */
  -1,  /* pabsxx128v8 */
  -1,  /* pabsxxx128v8 */
  -1,  /* pabs128v16 */
  -1,  /* pabsx128v16 */
  -1,  /* pabsxx128v16 */
  -1,  /* pabsxxx128v16 */
  -1,  /* pabs128v32 */
  -1,  /* pabsx128v32 */
  -1,  /* pabsxx128v32 */
  -1,  /* pabsxxx128v32 */
  -1,  /* psign128v8 */
  -1,  /* psignx128v8 */
  -1,  /* psignxx128v8 */
  -1,  /* psignxxx128v8 */
  -1,  /* psign128v16 */
  -1,  /* psignx128v16 */
  -1,  /* psignxx128v16 */
  -1,  /* psignxxx128v16 */
  -1,  /* psign128v32 */
  -1,  /* psignx128v32 */
  -1,  /* psignxx128v32 */
  -1,  /* psignxxx128v32 */
  -1,  /* pshuf128v8 */
  -1,  /* pshufx128v8 */
  -1,  /* pshufxx128v8 */
  -1,  /* pshufxxx128v8 */
  -1,  /* phsub128v16 */
  -1,  /* phsubx128v16 */
  -1,  /* phsubxx128v16 */
  -1,  /* phsubxxx128v16 */
  -1,  /* phsub128v32 */
  -1,  /* phsubx128v32 */
  -1,  /* phsubxx128v32 */
  -1,  /* phsubxxx128v32 */
  -1,  /* phsubs128v16 */
  -1,  /* phsubsx128v16 */
  -1,  /* phsubsxx128v16 */
  -1,  /* phsubsxxx128v16 */
  -1,  /* phadd128v16 */
  -1,  /* phaddx128v16 */
  -1,  /* phaddxx128v16 */
  -1,  /* phaddxxx128v16 */
  -1,  /* phadd128v32 */
  -1,  /* phaddx128v32 */
  -1,  /* phaddxx128v32 */
  -1,  /* phaddxxx128v32 */
  -1,  /* phadds128v16 */
  -1,  /* phaddsx128v16 */
  -1,  /* phaddsxx128v16 */
  -1,  /* phaddsxxx128v16 */
  -1,  /* pmulhrsw128 */
  -1,  /* pmulhrswx128 */
  -1,  /* pmulhrswxx128 */
  -1,  /* pmulhrswxxx128 */
  -1,  /* pmaddubsw128 */
  -1,  /* pmaddubswx128 */
  -1,  /* pmaddubswxx128 */
  -1,  /* pmaddubswxxx128 */
  -1,  /* palignr128 */
  -1,  /* palignrx128 */
  -1,  /* palignrxx128 */
  -1,  /* palignrxxx128 */
  -1,  /* muldq */
  -1,  /* muldqx */
  -1,  /* muldqxx */
  -1,  /* muldqxxx */
  -1,  /* ldntdqa */
  -1,  /* ldntdqax */
  -1,  /* ldntdqaxx */
  -1,  /* stntdq */
  -1,  /* stntdqx */
  -1,  /* stntdqxx */
  -1,  /* minu128v8 */
  -1,  /* minux128v8 */
  -1,  /* minuxx128v8 */
  -1,  /* minuxxx128v8 */
  -1,  /* mins128v8 */
  -1,  /* minsx128v8 */
  -1,  /* minsxx128v8 */
  -1,  /* minsxxx128v8 */
  -1,  /* maxu128v8 */
  -1,  /* maxux128v8 */
  -1,  /* maxuxx128v8 */
  -1,  /* maxuxxx128v8 */
  -1,  /* maxs128v8 */
  -1,  /* maxsx128v8 */
  -1,  /* maxsxx128v8 */
  -1,  /* maxsxxx128v8 */
  -1,  /* mins128v16 */
  -1,  /* minsx128v16 */
  -1,  /* minsxx128v16 */
  -1,  /* minsxxx128v16 */
  -1,  /* maxs128v16 */
  -1,  /* maxsx128v16 */
  -1,  /* maxsxx128v16 */
  -1,  /* maxsxxx128v16 */
  -1,  /* minu128v16 */
  -1,  /* minux128v16 */
  -1,  /* minuxx128v16 */
  -1,  /* minuxxx128v16 */
  -1,  /* maxu128v16 */
  -1,  /* maxux128v16 */
  -1,  /* maxuxx128v16 */
  -1,  /* maxuxxx128v16 */
  -1,  /* minu128v32 */
  -1,  /* minux128v32 */
  -1,  /* minuxx128v32 */
  -1,  /* minuxxx128v32 */
  -1,  /* maxu128v32 */
  -1,  /* maxux128v32 */
  -1,  /* maxuxx128v32 */
  -1,  /* maxuxxx128v32 */
  -1,  /* mins128v32 */
  -1,  /* minsx128v32 */
  -1,  /* minsxx128v32 */
  -1,  /* minsxxx128v32 */
  -1,  /* maxs128v32 */
  -1,  /* maxsx128v32 */
  -1,  /* maxsxx128v32 */
  -1,  /* maxsxxx128v32 */
  -1,  /* pmovsxbw */
  -1,  /* pmovsxbwx */
  -1,  /* pmovsxbwxx */
  -1,  /* pmovsxbwxxx */
  -1,  /* pmovzxbw */
  -1,  /* pmovzxbwx */
  -1,  /* pmovzxbwxx */
  -1,  /* pmovzxbwxxx */
  -1,  /* pmovsxbd */
  -1,  /* pmovsxbdx */
  -1,  /* pmovsxbdxx */
  -1,  /* pmovsxbdxxx */
  -1,  /* pmovzxbd */
  -1,  /* pmovzxbdx */
  -1,  /* pmovzxbdxx */
  -1,  /* pmovzxbdxxx */
  -1,  /* pmovsxbq */
  -1,  /* pmovsxbqx */
  -1,  /* pmovsxbqxx */
  -1,  /* pmovsxbqxxx */
  -1,  /* pmovzxbq */
  -1,  /* pmovzxbqx */
  -1,  /* pmovzxbqxx */
  -1,  /* pmovzxbqxxx */
  -1,  /* pmovsxwd */
  -1,  /* pmovsxwdx */
  -1,  /* pmovsxwdxx */
  -1,  /* pmovsxwdxxx */
  -1,  /* pmovzxwd */
  -1,  /* pmovzxwdx */
  -1,  /* pmovzxwdxx */
  -1,  /* pmovzxwdxxx */
  -1,  /* pmovsxwq */
  -1,  /* pmovsxwqx */
  -1,  /* pmovsxwqxx */
  -1,  /* pmovsxwqxxx */
  -1,  /* pmovzxwq */
  -1,  /* pmovzxwqx */
  -1,  /* pmovzxwqxx */
  -1,  /* pmovzxwqxxx */
  -1,  /* pmovsxdq */
  -1,  /* pmovsxdqx */
  -1,  /* pmovsxdqxx */
  -1,  /* pmovsxdqxxx */
  -1,  /* pmovzxdq */
  -1,  /* pmovzxdqx */
  -1,  /* pmovzxdqxx */
  -1,  /* pmovzxdqxxx */
  -1,  /* mul128v32 */
  -1,  /* mulx128v32 */
  -1,  /* mulxx128v32 */
  -1,  /* mulxxx128v32 */
  -1,  /* cmpeq128v64 */
  -1,  /* cmpeqx128v64 */
  -1,  /* cmpeqxx128v64 */
  -1,  /* cmpeqxxx128v64 */
  -1,  /* packusdw */
  -1,  /* packusdwx */
  -1,  /* packusdwxx */
  -1,  /* packusdwxxx */
  -1,  /* phminposuw */
  -1,  /* phminposuwx */
  -1,  /* phminposuwxx */
  -1,  /* phminposuwxxx */
  -1,  /* ptest128 */
  -1,  /* ptestx128 */
  -1,  /* ptestxx128 */
  -1,  /* ptestxxx128 */
  -1,  /* roundsd */
  -1,  /* roundxsd */
  -1,  /* roundxxsd */
  -1,  /* roundxxxsd */
  -1,  /* mpsadbw */
  -1,  /* mpsadbwx */
  -1,  /* mpsadbwxx */
  -1,  /* mpsadbwxxx */
  -1,  /* insr128v8 */
  -1,  /* insrx128v8 */
  -1,  /* insrxx128v8 */
  -1,  /* insrxxx128v8 */
  -1,  /* insr128v16 */
  -1,  /* insrx128v16 */
  -1,  /* insrxx128v16 */
  -1,  /* insrxxx128v16 */
  -1,  /* insr128v32 */
  -1,  /* insrx128v32 */
  -1,  /* insrxx128v32 */
  -1,  /* insrxxx128v32 */
  -1,  /* insr128v64 */
  -1,  /* insrx128v64 */
  -1,  /* insrxx128v64 */
  -1,  /* insrxxx128v64 */
  -1,  /* extr128v8 */
  -1,  /* extrx128v8 */
  -1,  /* extrxx128v8 */
  -1,  /* extrxxx128v8 */
  -1,  /* extr128v16 */
  -1,  /* extrx128v16 */
  -1,  /* extrxx128v16 */
  -1,  /* extrxxx128v16 */
  -1,  /* extr128v32 */
  -1,  /* extrx128v32 */
  -1,  /* extrxx128v32 */
  -1,  /* extrxxx128v32 */
  -1,  /* extr128v64 */
  -1,  /* extrx128v64 */
  -1,  /* extrxx128v64 */
  -1,  /* extrxxx128v64 */
  -1,  /* finsr128v32 */
  -1,  /* finsrx128v32 */
  -1,  /* finsrxx128v32 */
  -1,  /* finsrxxx128v32 */
  -1,  /* fextr128v32 */
  -1,  /* fextrx128v32 */
  -1,  /* fextrxx128v32 */
  -1,  /* fextrxxx128v32 */
  -1,  /* fblendv128v32 */
  -1,  /* fblendvx128v32 */
  -1,  /* fblendvxx128v32 */
  -1,  /* fblendvxxx128v32 */
  -1,  /* fblendv128v64 */
  -1,  /* fblendvx128v64 */
  -1,  /* fblendvxx128v64 */
  -1,  /* fblendvxxx128v64 */
  -1,  /* blendv128v8 */
  -1,  /* blendvx128v8 */
  -1,  /* blendvxx128v8 */
  -1,  /* blendvxxx128v8 */
  -1,  /* round128v32 */
  -1,  /* roundx128v32 */
  -1,  /* roundxx128v32 */
  -1,  /* roundxxx128v32 */
  -1,  /* roundss */
  -1,  /* roundxss */
  -1,  /* roundxxss */
  -1,  /* roundxxxss */
  -1,  /* fblend128v64 */
  -1,  /* fblendx128v64 */
  -1,  /* fblendxx128v64 */
  -1,  /* fblendxxx128v64 */
  -1,  /* blend128v16 */
  -1,  /* blendx128v16 */
  -1,  /* blendxx128v16 */
  -1,  /* blendxxx128v16 */
  -1,  /* fdp128v32 */
  -1,  /* fdpx128v32 */
  -1,  /* fdpxx128v32 */
  -1,  /* fdpxxx128v32 */
  -1,  /* fdp128v64 */
  -1,  /* fdpx128v64 */
  -1,  /* fdpxx128v64 */
  -1,  /* fdpxxx128v64 */
  -1,  /* round128v64 */
  -1,  /* roundx128v64 */
  -1,  /* roundxx128v64 */
  -1,  /* roundxxx128v64 */
  -1,  /* fblend128v32 */
  -1,  /* fblendx128v32 */
  -1,  /* fblendxx128v32 */
  -1,  /* fblendxxx128v32 */
  -1,  /* cmpgt128v64 */
  -1,  /* cmpgtx128v64 */
  -1,  /* cmpgtxx128v64 */
  -1,  /* cmpgtxxx128v64 */
  -1,  /* crc32w */
  -1,  /* crc32wx */
  -1,  /* crc32wxx */
  -1,  /* crc32wxxx */
  -1,  /* crc32d */
  -1,  /* crc32dx */
  -1,  /* crc32dxx */
  -1,  /* crc32dxxx */
  -1,  /* crc32q */
  -1,  /* crc32qx */
  -1,  /* crc32qxx */
  -1,  /* crc32qxxx */
  -1,  /* crc32b */
  -1,  /* crc32bx */
  -1,  /* crc32bxx */
  -1,  /* crc32bxxx */
  -1,  /* cmpestrm */
  -1,  /* cmpestrmx */
  -1,  /* cmpestrmxx */
  -1,  /* cmpestrmxxx */
  -1,  /* cmpestri */
  -1,  /* cmpestrix */
  -1,  /* cmpestrixx */
  -1,  /* cmpestrixxx */
  -1,  /* cmpistrm */
  -1,  /* cmpistrmx */
  -1,  /* cmpistrmxx */
  -1,  /* cmpistrmxxx */
  -1,  /* cmpistri */
  -1,  /* cmpistrix */
  -1,  /* cmpistrixx */
  -1,  /* cmpistrixxx */
  -1,  /* popcnt16 */
  -1,  /* popcntx16 */
  -1,  /* popcntxx16 */
  -1,  /* popcntxxx16 */
  -1,  /* popcnt32 */
  -1,  /* popcntx32 */
  -1,  /* popcntxx32 */
  -1,  /* popcntxxx32 */
  -1,  /* popcnt64 */
  -1,  /* popcntx64 */
  -1,  /* popcntxx64 */
  -1,  /* popcntxxx64 */
  -1,  /* aesimc */
  -1,  /* aesimcx */
  -1,  /* aesimcxx */
  -1,  /* aesimcxxx */
  -1,  /* aeskeygenassist */
  -1,  /* aeskeygenassistx */
  -1,  /* aeskeygenassistxx */
  -1,  /* aeskeygenassistxxx */
  -1,  /* aesenc */
  -1,  /* aesencx */
  -1,  /* aesencxx */
  -1,  /* aesencxxx */
  -1,  /* aesenclast */
  -1,  /* aesenclastx */
  -1,  /* aesenclastxx */
  -1,  /* aesenclastxxx */
  -1,  /* aesdec */
  -1,  /* aesdecx */
  -1,  /* aesdecxx */
  -1,  /* aesdecxxx */
  -1,  /* aesdeclast */
  -1,  /* aesdeclastx */
  -1,  /* aesdeclastxx */
  -1,  /* aesdeclastxxx */
  -1,  /* pclmulqdq */
  -1,  /* pclmulqdqx */
  -1,  /* pclmulqdqxx */
  -1,  /* pclmulqdqxxx */
  -1,  /* vphaddbd */
  -1,  /* vphaddbdx */
  -1,  /* vphaddbdxx */
  -1,  /* vphaddbdxxx */
  -1,  /* vphaddbq */
  -1,  /* vphaddbqx */
  -1,  /* vphaddbqxx */
  -1,  /* vphaddbqxxx */
  -1,  /* vphaddbw */
  -1,  /* vphaddbwx */
  -1,  /* vphaddbwxx */
  -1,  /* vphaddbwxxx */
  -1,  /* vphadddq */
  -1,  /* vphadddqx */
  -1,  /* vphadddqxx */
  -1,  /* vphadddqxxx */
  -1,  /* vphaddubd */
  -1,  /* vphaddubdx */
  -1,  /* vphaddubdxx */
  -1,  /* vphaddubdxxx */
  -1,  /* vphaddubq */
  -1,  /* vphaddubqx */
  -1,  /* vphaddubqxx */
  -1,  /* vphaddubqxxx */
  -1,  /* vphaddubw */
  -1,  /* vphaddubwx */
  -1,  /* vphaddubwxx */
  -1,  /* vphaddubwxxx */
  -1,  /* vphaddudq */
  -1,  /* vphaddudqx */
  -1,  /* vphaddudqxx */
  -1,  /* vphaddudqxxx */
  -1,  /* vphadduwd */
  -1,  /* vphadduwdx */
  -1,  /* vphadduwdxx */
  -1,  /* vphadduwdxxx */
  -1,  /* vphadduwq */
  -1,  /* vphadduwqx */
  -1,  /* vphadduwqxx */
  -1,  /* vphadduwqxxx */
  -1,  /* vphaddwd */
  -1,  /* vphaddwdx */
  -1,  /* vphaddwdxx */
  -1,  /* vphaddwdxxx */
  -1,  /* vphaddwq */
  -1,  /* vphaddwqx */
  -1,  /* vphaddwqxx */
  -1,  /* vphaddwqxxx */
  -1,  /* vphsubbw */
  -1,  /* vphsubbwx */
  -1,  /* vphsubbwxx */
  -1,  /* vphsubbwxxx */
  -1,  /* vphsubdq */
  -1,  /* vphsubdqx */
  -1,  /* vphsubdqxx */
  -1,  /* vphsubdqxxx */
  -1,  /* vphsubwd */
  -1,  /* vphsubwdx */
  -1,  /* vphsubwdxx */
  -1,  /* vphsubwdxxx */
  -1,  /* vfrczpd */
  -1,  /* vfrczpdx */
  -1,  /* vfrczpdxx */
  -1,  /* vfrczpdxxx */
  -1,  /* vfrczps */
  -1,  /* vfrczpsx */
  -1,  /* vfrczpsxx */
  -1,  /* vfrczpsxxx */
  -1,  /* vfrczsd */
  -1,  /* vfrczsdx */
  -1,  /* vfrczsdxx */
  -1,  /* vfrczsdxxx */
  -1,  /* vfrczss */
  -1,  /* vfrczssx */
  -1,  /* vfrczssxx */
  -1,  /* vfrczssxxx */
  -1,  /* vprotbi */
  -1,  /* vprotbix */
  -1,  /* vprotbixx */
  -1,  /* vprotbixxx */
  -1,  /* vprotdi */
  -1,  /* vprotdix */
  -1,  /* vprotdixx */
  -1,  /* vprotdixxx */
  -1,  /* vprotqi */
  -1,  /* vprotqix */
  -1,  /* vprotqixx */
  -1,  /* vprotqixxx */
  -1,  /* vprotwi */
  -1,  /* vprotwix */
  -1,  /* vprotwixx */
  -1,  /* vprotwixxx */
  -1,  /* vpcomb */
  -1,  /* vpcombx */
  -1,  /* vpcombxx */
  -1,  /* vpcombxxx */
  -1,  /* vpcomd */
  -1,  /* vpcomdx */
  -1,  /* vpcomdxx */
  -1,  /* vpcomdxxx */
  -1,  /* vpcomq */
  -1,  /* vpcomqx */
  -1,  /* vpcomqxx */
  -1,  /* vpcomqxxx */
  -1,  /* vpcomw */
  -1,  /* vpcomwx */
  -1,  /* vpcomwxx */
  -1,  /* vpcomwxxx */
  -1,  /* vpcomub */
  -1,  /* vpcomubx */
  -1,  /* vpcomubxx */
  -1,  /* vpcomubxxx */
  -1,  /* vpcomud */
  -1,  /* vpcomudx */
  -1,  /* vpcomudxx */
  -1,  /* vpcomudxxx */
  -1,  /* vpcomuq */
  -1,  /* vpcomuqx */
  -1,  /* vpcomuqxx */
  -1,  /* vpcomuqxxx */
  -1,  /* vpcomuw */
  -1,  /* vpcomuwx */
  -1,  /* vpcomuwxx */
  -1,  /* vpcomuwxxx */
  -1,  /* vpperm */
  -1,  /* vppermx */
  -1,  /* vppermxx */
  -1,  /* vppermxxx */
  -1,  /* vppermxr */
  -1,  /* vppermxxr */
  -1,  /* vppermxxxr */
  -1,  /* vprotb */
  -1,  /* vprotbx */
  -1,  /* vprotbxx */
  -1,  /* vprotbxxx */
  -1,  /* vprotbxr */
  -1,  /* vprotbxxr */
  -1,  /* vprotbxxxr */
  -1,  /* vprotd */
  -1,  /* vprotdx */
  -1,  /* vprotdxx */
  -1,  /* vprotdxxx */
  -1,  /* vprotdxr */
  -1,  /* vprotdxxr */
  -1,  /* vprotdxxxr */
  -1,  /* vprotq */
  -1,  /* vprotqx */
  -1,  /* vprotqxx */
  -1,  /* vprotqxxx */
  -1,  /* vprotqxr */
  -1,  /* vprotqxxr */
  -1,  /* vprotqxxxr */
  -1,  /* vprotw */
  -1,  /* vprotwx */
  -1,  /* vprotwxx */
  -1,  /* vprotwxxx */
  -1,  /* vprotwxr */
  -1,  /* vprotwxxr */
  -1,  /* vprotwxxxr */
  -1,  /* vpshab */
  -1,  /* vpshabx */
  -1,  /* vpshabxx */
  -1,  /* vpshabxxx */
  -1,  /* vpshabxr */
  -1,  /* vpshabxxr */
  -1,  /* vpshabxxxr */
  -1,  /* vpshad */
  -1,  /* vpshadx */
  -1,  /* vpshadxx */
  -1,  /* vpshadxxx */
  -1,  /* vpshadxr */
  -1,  /* vpshadxxr */
  -1,  /* vpshadxxxr */
  -1,  /* vpshaq */
  -1,  /* vpshaqx */
  -1,  /* vpshaqxx */
  -1,  /* vpshaqxxx */
  -1,  /* vpshaqxr */
  -1,  /* vpshaqxxr */
  -1,  /* vpshaqxxxr */
  -1,  /* vpshaw */
  -1,  /* vpshawx */
  -1,  /* vpshawxx */
  -1,  /* vpshawxxx */
  -1,  /* vpshawxr */
  -1,  /* vpshawxxr */
  -1,  /* vpshawxxxr */
  -1,  /* vpshlb */
  -1,  /* vpshlbx */
  -1,  /* vpshlbxx */
  -1,  /* vpshlbxxx */
  -1,  /* vpshlbxr */
  -1,  /* vpshlbxxr */
  -1,  /* vpshlbxxxr */
  -1,  /* vpshld */
  -1,  /* vpshldx */
  -1,  /* vpshldxx */
  -1,  /* vpshldxxx */
  -1,  /* vpshldxr */
  -1,  /* vpshldxxr */
  -1,  /* vpshldxxxr */
  -1,  /* vpshlq */
  -1,  /* vpshlqx */
  -1,  /* vpshlqxx */
  -1,  /* vpshlqxxx */
  -1,  /* vpshlqxr */
  -1,  /* vpshlqxxr */
  -1,  /* vpshlqxxxr */
  -1,  /* vpshlw */
  -1,  /* vpshlwx */
  -1,  /* vpshlwxx */
  -1,  /* vpshlwxxx */
  -1,  /* vpshlwxr */
  -1,  /* vpshlwxxr */
  -1,  /* vpshlwxxxr */
  -1,  /* vpcmov */
  -1,  /* vpcmovx */
  -1,  /* vpcmovxx */
  -1,  /* vpcmovxxx */
  -1,  /* vpcmovxr */
  -1,  /* vpcmovxxr */
  -1,  /* vpcmovxxxr */
  -1,  /* vpmacsdd */
  -1,  /* vpmacsddx */
  -1,  /* vpmacsddxx */
  -1,  /* vpmacsddxxx */
  -1,  /* vpmacsdqh */
  -1,  /* vpmacsdqhx */
  -1,  /* vpmacsdqhxx */
  -1,  /* vpmacsdqhxxx */
  -1,  /* vpmacsdql */
  -1,  /* vpmacsdqlx */
  -1,  /* vpmacsdqlxx */
  -1,  /* vpmacsdqlxxx */
  -1,  /* vpmacssdd */
  -1,  /* vpmacssddx */
  -1,  /* vpmacssddxx */
  -1,  /* vpmacssddxxx */
  -1,  /* vpmacssdqh */
  -1,  /* vpmacssdqhx */
  -1,  /* vpmacssdqhxx */
  -1,  /* vpmacssdqhxxx */
  -1,  /* vpmacssdql */
  -1,  /* vpmacssdqlx */
  -1,  /* vpmacssdqlxx */
  -1,  /* vpmacssdqlxxx */
  -1,  /* vpmacsswd */
  -1,  /* vpmacsswdx */
  -1,  /* vpmacsswdxx */
  -1,  /* vpmacsswdxxx */
  -1,  /* vpmacssww */
  -1,  /* vpmacsswwx */
  -1,  /* vpmacsswwxx */
  -1,  /* vpmacsswwxxx */
  -1,  /* vpmacswd */
  -1,  /* vpmacswdx */
  -1,  /* vpmacswdxx */
  -1,  /* vpmacswdxxx */
  -1,  /* vpmacsww */
  -1,  /* vpmacswwx */
  -1,  /* vpmacswwxx */
  -1,  /* vpmacswwxxx */
  -1,  /* vpmadcsswd */
  -1,  /* vpmadcsswdx */
  -1,  /* vpmadcsswdxx */
  -1,  /* vpmadcsswdxxx */
  -1,  /* vpmadcswd */
  -1,  /* vpmadcswdx */
  -1,  /* vpmadcswdxx */
  -1,  /* vpmadcswdxxx */
  -1,  /* vfadd128v64 */
  -1,  /* vfaddx128v64 */
  -1,  /* vfaddxx128v64 */
  -1,  /* vfaddxxx128v64 */
  -1,  /* vfadd128v32 */
  -1,  /* vfaddx128v32 */
  -1,  /* vfaddxx128v32 */
  -1,  /* vfaddxxx128v32 */
  -1,  /* vfaddsd */
  -1,  /* vfaddxsd */
  -1,  /* vfaddxxsd */
  -1,  /* vfaddxxxsd */
  -1,  /* vfaddss */
  -1,  /* vfaddxss */
  -1,  /* vfaddxxss */
  -1,  /* vfaddxxxss */
  -1,  /* vfaddsub128v64 */
  -1,  /* vfaddsubx128v64 */
  -1,  /* vfaddsubxx128v64 */
  -1,  /* vfaddsubxxx128v64 */
  -1,  /* vfaddsub128v32 */
  -1,  /* vfaddsubx128v32 */
  -1,  /* vfaddsubxx128v32 */
  -1,  /* vfaddsubxxx128v32 */
  -1,  /* vaesenc */
  -1,  /* vaesencx */
  -1,  /* vaesencxx */
  -1,  /* vaesencxxx */
  -1,  /* vaesenclast */
  -1,  /* vaesenclastx */
  -1,  /* vaesenclastxx */
  -1,  /* vaesenclastxxx */
  -1,  /* vaesdec */
  -1,  /* vaesdecx */
  -1,  /* vaesdecxx */
  -1,  /* vaesdecxxx */
  -1,  /* vaesdeclast */
  -1,  /* vaesdeclastx */
  -1,  /* vaesdeclastxx */
  -1,  /* vaesdeclastxxx */
  -1,  /* vaesimc */
  -1,  /* vaesimcx */
  -1,  /* vaesimcxx */
  -1,  /* vaesimcxxx */
  -1,  /* vaeskeygenassist */
  -1,  /* vaeskeygenassistx */
  -1,  /* vaeskeygenassistxx */
  -1,  /* vaeskeygenassistxxx */
  -1,  /* vandpd */
  -1,  /* vfand128v64 */
  -1,  /* vfandx128v64 */
  -1,  /* vfandxx128v64 */
  -1,  /* vfandxxx128v64 */
  -1,  /* vandps */
  -1,  /* vfand128v32 */
  -1,  /* vfandx128v32 */
  -1,  /* vfandxx128v32 */
  -1,  /* vfandxxx128v32 */
  -1,  /* vandnpd */
  -1,  /* vfandn128v64 */
  -1,  /* vfandnx128v64 */
  -1,  /* vfandnxx128v64 */
  -1,  /* vfandnxxx128v64 */
  -1,  /* vandnps */
  -1,  /* vfandn128v32 */
  -1,  /* vfandnx128v32 */
  -1,  /* vfandnxx128v32 */
  -1,  /* vfandnxxx128v32 */
  -1,  /* vfblend128v64 */
  -1,  /* vfblendx128v64 */
  -1,  /* vfblendxx128v64 */
  -1,  /* vfblendxxx128v64 */
  -1,  /* vfblend128v32 */
  -1,  /* vfblendx128v32 */
  -1,  /* vfblendxx128v32 */
  -1,  /* vfblendxxx128v32 */
  -1,  /* vfblendv128v64 */
  -1,  /* vfblendvx128v64 */
  -1,  /* vfblendvxx128v64 */
  -1,  /* vfblendvxxx128v64 */
  -1,  /* vfblendv128v32 */
  -1,  /* vfblendvx128v32 */
  -1,  /* vfblendvxx128v32 */
  -1,  /* vfblendvxxx128v32 */
  -1,  /* vfbroadcastss */
  -1,  /* vfbroadcastxss */
  -1,  /* vfbroadcastxxss */
  -1,  /* vfbroadcastsd */
  -1,  /* vfbroadcastxsd */
  -1,  /* vfbroadcastxxsd */
  -1,  /* vfbroadcastf128 */
  -1,  /* vfbroadcastxf128 */
  -1,  /* vfbroadcastxxf128 */
  -1,  /* vcmppd */
  -1,  /* vfcmp128v64 */
  -1,  /* vfcmpx128v64 */
  -1,  /* vfcmpxx128v64 */
  -1,  /* vfcmpxxx128v64 */
  -1,  /* vcmpps */
  -1,  /* vfcmp128v32 */
  -1,  /* vfcmpx128v32 */
  -1,  /* vfcmpxx128v32 */
  -1,  /* vfcmpxxx128v32 */
  -1,  /* vfcmpsd */
  -1,  /* vfcmpxsd */
  -1,  /* vfcmpxxsd */
  -1,  /* vfcmpxxxsd */
  -1,  /* vfcmpss */
  -1,  /* vfcmpxss */
  -1,  /* vfcmpxxss */
  -1,  /* vfcmpxxxss */
  -1,  /* vcomisd */
  -1,  /* vcomixsd */
  -1,  /* vcomixxsd */
  -1,  /* vcomixxxsd */
  -1,  /* vcomiss */
  -1,  /* vcomixss */
  -1,  /* vcomixxss */
  -1,  /* vcomixxxss */
  -1,  /* vcvtdq2pd */
  -1,  /* vcvtdq2pdx */
  -1,  /* vcvtdq2pdxx */
  -1,  /* vcvtdq2pdxxx */
  -1,  /* vcvtdq2ps */
  -1,  /* vcvtdq2psx */
  -1,  /* vcvtdq2psxx */
  -1,  /* vcvtdq2psxxx */
  -1,  /* vcvtpd2dq */
  -1,  /* vcvtpd2dqx */
  -1,  /* vcvtpd2dqxx */
  -1,  /* vcvtpd2dqxxx */
  -1,  /* vcvtpd2dqy */
  -1,  /* vcvtpd2dqyx */
  -1,  /* vcvtpd2dqyxx */
  -1,  /* vcvtpd2dqyxxx */
  -1,  /* vcvtpd2ps */
  -1,  /* vcvtpd2psx */
  -1,  /* vcvtpd2psxx */
  -1,  /* vcvtpd2psxxx */
  -1,  /* vcvtpd2psy */
  -1,  /* vcvtpd2psyx */
  -1,  /* vcvtpd2psyxx */
  -1,  /* vcvtpd2psyxxx */
  -1,  /* vcvtps2dq */
  -1,  /* vcvtps2dqx */
  -1,  /* vcvtps2dqxx */
  -1,  /* vcvtps2dqxxx */
  -1,  /* vcvtps2pd */
  -1,  /* vcvtps2pdx */
  -1,  /* vcvtps2pdxx */
  -1,  /* vcvtps2pdxxx */
  -1,  /* vcvtsd2si */
  -1,  /* vcvtsd2siq */
  -1,  /* vcvtsd2ss */
  -1,  /* vcvtsd2ssx */
  -1,  /* vcvtsd2ssxx */
  -1,  /* vcvtsd2ssxxx */
  -1,  /* vcvtsi2sd */
  -1,  /* vcvtsi2sdx */
  -1,  /* vcvtsi2sdxx */
  -1,  /* vcvtsi2sdxxx */
  -1,  /* vcvtsi2sdq */
  -1,  /* vcvtsi2sdqx */
  -1,  /* vcvtsi2sdqxx */
  -1,  /* vcvtsi2sdqxxx */
  -1,  /* vcvtsi2ss */
  -1,  /* vcvtsi2ssx */
  -1,  /* vcvtsi2ssxx */
  -1,  /* vcvtsi2ssxxx */
  -1,  /* vcvtsi2ssq */
  -1,  /* vcvtsi2ssqx */
  -1,  /* vcvtsi2ssqxx */
  -1,  /* vcvtsi2ssqxxx */
  -1,  /* vcvtss2sd */
  -1,  /* vcvtss2sdx */
  -1,  /* vcvtss2sdxx */
  -1,  /* vcvtss2sdxxx */
  -1,  /* vcvtss2si */
  -1,  /* vcvtss2siq */
  -1,  /* vcvttpd2dq */
  -1,  /* vcvttpd2dqx */
  -1,  /* vcvttpd2dqxx */
  -1,  /* vcvttpd2dqxxx */
  -1,  /* vcvttpd2dqy */
  -1,  /* vcvttpd2dqyx */
  -1,  /* vcvttpd2dqyxx */
  -1,  /* vcvttpd2dqyxxx */
  -1,  /* vcvttps2dq */
  -1,  /* vcvttps2dqx */
  -1,  /* vcvttps2dqxx */
  -1,  /* vcvttps2dqxxx */
  -1,  /* vcvttsd2si */
  -1,  /* vcvttsd2siq */
  -1,  /* vcvttss2si */
  -1,  /* vcvttss2siq */
  -1,  /* vfdiv128v64 */
  -1,  /* vfdivx128v64 */
  -1,  /* vfdivxx128v64 */
  -1,  /* vfdivxxx128v64 */
  -1,  /* vfdiv128v32 */
  -1,  /* vfdivx128v32 */
  -1,  /* vfdivxx128v32 */
  -1,  /* vfdivxxx128v32 */
  -1,  /* vdivsd */
  -1,  /* vdivxsd */
  -1,  /* vdivxxsd */
  -1,  /* vdivxxxsd */
  -1,  /* vdivss */
  -1,  /* vdivxss */
  -1,  /* vdivxxss */
  -1,  /* vdivxxxss */
  -1,  /* vfdp128v64 */
  -1,  /* vfdpx128v64 */
  -1,  /* vfdpxx128v64 */
  -1,  /* vfdpxxx128v64 */
  -1,  /* vfdp128v32 */
  -1,  /* vfdpx128v32 */
  -1,  /* vfdpxx128v32 */
  -1,  /* vfdpxxx128v32 */
  -1,  /* vfextrf128 */
  -1,  /* vfextrxf128 */
  -1,  /* vfextrxxf128 */
  -1,  /* vfextrxxxf128 */
  -1,  /* vfextr128v32 */
  -1,  /* vfextrx128v32 */
  -1,  /* vfextrxx128v32 */
  -1,  /* vfextrxxx128v32 */
  -1,  /* vfhadd128v64 */
  -1,  /* vfhaddx128v64 */
  -1,  /* vfhaddxx128v64 */
  -1,  /* vfhaddxxx128v64 */
  -1,  /* vfhadd128v32 */
  -1,  /* vfhaddx128v32 */
  -1,  /* vfhaddxx128v32 */
  -1,  /* vfhaddxxx128v32 */
  -1,  /* vfhsub128v64 */
  -1,  /* vfhsubx128v64 */
  -1,  /* vfhsubxx128v64 */
  -1,  /* vfhsubxxx128v64 */
  -1,  /* vfhsub128v32 */
  -1,  /* vfhsubx128v32 */
  -1,  /* vfhsubxx128v32 */
  -1,  /* vfhsubxxx128v32 */
  -1,  /* vfinsrf128 */
  -1,  /* vfinsrxf128 */
  -1,  /* vfinsrxxf128 */
  -1,  /* vfinsrxxxf128 */
  -1,  /* vfinsr128v32 */
  -1,  /* vfinsrx128v32 */
  -1,  /* vfinsrxx128v32 */
  -1,  /* vfinsrxxx128v32 */
  -1,  /* vlddqu */
  -1,  /* vlddqux */
  -1,  /* vlddquxx */
  -1,  /* vlddqu_n32 */
  -1,  /* vldmxcsr */
  -1,  /* vmaskmovdqu */
  -1,  /* vfmaskld128v32 */
  -1,  /* vfmaskldx128v32 */
  -1,  /* vfmaskldxx128v32 */
  -1,  /* vfmaskld128v64 */
  -1,  /* vfmaskldx128v64 */
  -1,  /* vfmaskldxx128v64 */
  -1,  /* vfmaskst128v32 */
  -1,  /* vfmaskstx128v32 */
  -1,  /* vfmaskstxx128v32 */
  -1,  /* vfmaskst128v64 */
  -1,  /* vfmaskstx128v64 */
  -1,  /* vfmaskstxx128v64 */
  -1,  /* vfmax128v64 */
  -1,  /* vfmaxx128v64 */
  -1,  /* vfmaxxx128v64 */
  -1,  /* vfmaxxxx128v64 */
  -1,  /* vfmax128v32 */
  -1,  /* vfmaxx128v32 */
  -1,  /* vfmaxxx128v32 */
  -1,  /* vfmaxxxx128v32 */
  -1,  /* vfmaxsd */
  -1,  /* vfmaxxsd */
  -1,  /* vfmaxxxsd */
  -1,  /* vfmaxxxxsd */
  -1,  /* vfmaxss */
  -1,  /* vfmaxxss */
  -1,  /* vfmaxxxss */
  -1,  /* vfmaxxxxss */
  -1,  /* vfmin128v64 */
  -1,  /* vfminx128v64 */
  -1,  /* vfminxx128v64 */
  -1,  /* vfminxxx128v64 */
  -1,  /* vfmin128v32 */
  -1,  /* vfminx128v32 */
  -1,  /* vfminxx128v32 */
  -1,  /* vfminxxx128v32 */
  -1,  /* vfminsd */
  -1,  /* vfminxsd */
  -1,  /* vfminxxsd */
  -1,  /* vfminxxxsd */
  -1,  /* vfminss */
  -1,  /* vfminxss */
  -1,  /* vfminxxss */
  -1,  /* vfminxxxss */
  -1,  /* vmovapd */
  -1,  /* vldapd */
  -1,  /* vldapdx */
  -1,  /* vldapdxx */
  -1,  /* vldapd_n32 */
  -1,  /* vstapd */
  -1,  /* vstapdx */
  -1,  /* vstapdxx */
  -1,  /* vstapd_n32 */
  -1,  /* vmovaps */
  -1,  /* vldaps */
  -1,  /* vldapsx */
  -1,  /* vldapsxx */
  -1,  /* vldaps_n32 */
  -1,  /* vstaps */
  -1,  /* vstapsx */
  -1,  /* vstapsxx */
  -1,  /* vstaps_n32 */
  -1,  /* vmovg2x */
  -1,  /* vmovg2x64 */
  -1,  /* vmovx2g */
  -1,  /* vmovx2g64 */
  -1,  /* vld64_2sse */
  -1,  /* vldx64_2sse */
  -1,  /* vldxx64_2sse */
  -1,  /* vld64_2sse_n32 */
  -1,  /* vst64_fsse */
  -1,  /* vstx64_fsse */
  -1,  /* vstxx64_fsse */
  -1,  /* vst64_fsse_n32 */
  -1,  /* vmovddup */
  -1,  /* vmovddupx */
  -1,  /* vmovddupxx */
  -1,  /* vmovddupxxx */
  -1,  /* vlddqa */
  -1,  /* vlddqax */
  -1,  /* vlddqaxx */
  -1,  /* vlddqa_n32 */
  -1,  /* vmovdqa */
  -1,  /* vstdqa */
  -1,  /* vstdqax */
  -1,  /* vstdqaxx */
  -1,  /* vstdqa_n32 */
  -1,  /* vstdqu */
  -1,  /* vstdqux */
  -1,  /* vstdquxx */
  -1,  /* vstdqu_n32 */
  -1,  /* vldhpd */
  -1,  /* vldhpdx */
  -1,  /* vldhpdxx */
  -1,  /* vldhpd_n32 */
  -1,  /* vsthpd */
  -1,  /* vsthpdx */
  -1,  /* vsthpdxx */
  -1,  /* vsthpd_n32 */
  -1,  /* vldhps */
  -1,  /* vldhpsx */
  -1,  /* vldhpsxx */
  -1,  /* vldhps_n32 */
  -1,  /* vsthps */
  -1,  /* vsthpsx */
  -1,  /* vsthpsxx */
  -1,  /* vsthps_n32 */
  -1,  /* vldlpd */
  -1,  /* vldlpdx */
  -1,  /* vldlpdxx */
  -1,  /* vldlpd_n32 */
  -1,  /* vstorelpd */
  -1,  /* vstlpd */
  -1,  /* vstlpdx */
  -1,  /* vstlpdxx */
  -1,  /* vstlpd_n32 */
  -1,  /* vldlps */
  -1,  /* vldlpsx */
  -1,  /* vldlpsxx */
  -1,  /* vldlps_n32 */
  -1,  /* vstlps */
  -1,  /* vstlpsx */
  -1,  /* vstlpsxx */
  -1,  /* vstlps_n32 */
  -1,  /* vmovmskpd */
  -1,  /* vmovmskps */
  -1,  /* vstorenti128 */
  -1,  /* vstorentxi128 */
  -1,  /* vstorentxxi128 */
  -1,  /* vldntdqa */
  -1,  /* vldntdqax */
  -1,  /* vldntdqaxx */
  -1,  /* vstntdq */
  -1,  /* vstntdqx */
  -1,  /* vstntdqxx */
  -1,  /* vstntpd */
  -1,  /* vstntpdx */
  -1,  /* vstntpdxx */
  -1,  /* vstntps */
  -1,  /* vstntpsx */
  -1,  /* vstntpsxx */
  -1,  /* vstntsd */
  -1,  /* vstntsdx */
  -1,  /* vstntsdxx */
  -1,  /* vstntss */
  -1,  /* vstntssx */
  -1,  /* vstntssxx */
  -1,  /* vmovsd */
  -1,  /* vldsd */
  -1,  /* vldsdx */
  -1,  /* vldsdxx */
  -1,  /* vldsd_n32 */
  -1,  /* vstsd */
  -1,  /* vstsdx */
  -1,  /* vstsdxx */
  -1,  /* vstsd_n32 */
  -1,  /* vmovss */
  -1,  /* vldss */
  -1,  /* vldssx */
  -1,  /* vldssxx */
  -1,  /* vldss_n32 */
  -1,  /* vstss */
  -1,  /* vstssx */
  -1,  /* vstssxx */
  -1,  /* vstss_n32 */
  -1,  /* vmovlhps */
  -1,  /* vmovhlps */
  -1,  /* vmovshdup */
  -1,  /* vmovshdupx */
  -1,  /* vmovshdupxx */
  -1,  /* vmovshdupxxx */
  -1,  /* vmovsldup */
  -1,  /* vmovsldupx */
  -1,  /* vmovsldupxx */
  -1,  /* vmovsldupxxx */
  -1,  /* vldupd */
  -1,  /* vldupdx */
  -1,  /* vldupdxx */
  -1,  /* vldupd_n32 */
  -1,  /* vstupd */
  -1,  /* vstupdx */
  -1,  /* vstupdxx */
  -1,  /* vstupd_n32 */
  -1,  /* vldups */
  -1,  /* vldupsx */
  -1,  /* vldupsxx */
  -1,  /* vldups_n32 */
  -1,  /* vstups */
  -1,  /* vstupsx */
  -1,  /* vstupsxx */
  -1,  /* vstups_n32 */
  -1,  /* vmpsadbw */
  -1,  /* vmpsadbwx */
  -1,  /* vmpsadbwxx */
  -1,  /* vmpsadbwxxx */
  -1,  /* vfmul128v64 */
  -1,  /* vfmulx128v64 */
  -1,  /* vfmulxx128v64 */
  -1,  /* vfmulxxx128v64 */
  -1,  /* vfmul128v32 */
  -1,  /* vfmulx128v32 */
  -1,  /* vfmulxx128v32 */
  -1,  /* vfmulxxx128v32 */
  -1,  /* vmulsd */
  -1,  /* vmulxsd */
  -1,  /* vmulxxsd */
  -1,  /* vmulxxxsd */
  -1,  /* vmulss */
  -1,  /* vmulxss */
  -1,  /* vmulxxss */
  -1,  /* vmulxxxss */
  -1,  /* vorpd */
  -1,  /* vfor128v64 */
  -1,  /* vforx128v64 */
  -1,  /* vforxx128v64 */
  -1,  /* vforxxx128v64 */
  -1,  /* vorps */
  -1,  /* vfor128v32 */
  -1,  /* vforx128v32 */
  -1,  /* vforxx128v32 */
  -1,  /* vforxxx128v32 */
  -1,  /* vabs128v8 */
  -1,  /* vabsx128v8 */
  -1,  /* vabsxx128v8 */
  -1,  /* vabsxxx128v8 */
  -1,  /* vabs128v32 */
  -1,  /* vabsx128v32 */
  -1,  /* vabsxx128v32 */
  -1,  /* vabsxxx128v32 */
  -1,  /* vabs128v16 */
  -1,  /* vabsx128v16 */
  -1,  /* vabsxx128v16 */
  -1,  /* vabsxxx128v16 */
  -1,  /* vpackssdw */
  -1,  /* vpackssdwx */
  -1,  /* vpackssdwxx */
  -1,  /* vpackssdwxxx */
  -1,  /* vpacksswb */
  -1,  /* vpacksswbx */
  -1,  /* vpacksswbxx */
  -1,  /* vpacksswbxxx */
  -1,  /* vpackusdw */
  -1,  /* vpackusdwx */
  -1,  /* vpackusdwxx */
  -1,  /* vpackusdwxxx */
  -1,  /* vpackuswb */
  -1,  /* vpackuswbx */
  -1,  /* vpackuswbxx */
  -1,  /* vpackuswbxxx */
  -1,  /* vadd128v8 */
  -1,  /* vaddx128v8 */
  -1,  /* vaddxx128v8 */
  -1,  /* vaddxxx128v8 */
  -1,  /* vadd128v32 */
  -1,  /* vaddx128v32 */
  -1,  /* vaddxx128v32 */
  -1,  /* vaddxxx128v32 */
  -1,  /* vadd128v64 */
  -1,  /* vaddx128v64 */
  -1,  /* vaddxx128v64 */
  -1,  /* vaddxxx128v64 */
  -1,  /* vadd128v16 */
  -1,  /* vaddx128v16 */
  -1,  /* vaddxx128v16 */
  -1,  /* vaddxxx128v16 */
  -1,  /* vadds128v8 */
  -1,  /* vaddsx128v8 */
  -1,  /* vaddsxx128v8 */
  -1,  /* vaddsxxx128v8 */
  -1,  /* vadds128v16 */
  -1,  /* vaddsx128v16 */
  -1,  /* vaddsxx128v16 */
  -1,  /* vaddsxxx128v16 */
  -1,  /* vaddus128v8 */
  -1,  /* vaddusx128v8 */
  -1,  /* vaddusxx128v8 */
  -1,  /* vaddusxxx128v8 */
  -1,  /* vaddus128v16 */
  -1,  /* vaddusx128v16 */
  -1,  /* vaddusxx128v16 */
  -1,  /* vaddusxxx128v16 */
  -1,  /* vpalignr128 */
  -1,  /* vpalignrx128 */
  -1,  /* vpalignrxx128 */
  -1,  /* vpalignrxxx128 */
  -1,  /* vand128v8 */
  -1,  /* vandx128v8 */
  -1,  /* vandxx128v8 */
  -1,  /* vandxxx128v8 */
  -1,  /* vand128v16 */
  -1,  /* vandx128v16 */
  -1,  /* vandxx128v16 */
  -1,  /* vandxxx128v16 */
  -1,  /* vand128v32 */
  -1,  /* vandx128v32 */
  -1,  /* vandxx128v32 */
  -1,  /* vandxxx128v32 */
  -1,  /* vand128v64 */
  -1,  /* vandx128v64 */
  -1,  /* vandxx128v64 */
  -1,  /* vandxxx128v64 */
  -1,  /* vandn128v8 */
  -1,  /* vandnx128v8 */
  -1,  /* vandnxx128v8 */
  -1,  /* vandnxxx128v8 */
  -1,  /* vandn128v16 */
  -1,  /* vandnx128v16 */
  -1,  /* vandnxx128v16 */
  -1,  /* vandnxxx128v16 */
  -1,  /* vandn128v32 */
  -1,  /* vandnx128v32 */
  -1,  /* vandnxx128v32 */
  -1,  /* vandnxxx128v32 */
  -1,  /* vandn128v64 */
  -1,  /* vandnx128v64 */
  -1,  /* vandnxx128v64 */
  -1,  /* vandnxxx128v64 */
  -1,  /* vpavgb */
  -1,  /* vpavgbx */
  -1,  /* vpavgbxx */
  -1,  /* vpavgbxxx */
  -1,  /* vpavgw */
  -1,  /* vpavgwx */
  -1,  /* vpavgwxx */
  -1,  /* vpavgwxxx */
  -1,  /* vblendv128v8 */
  -1,  /* vblendvx128v8 */
  -1,  /* vblendvxx128v8 */
  -1,  /* vblendvxxx128v8 */
  -1,  /* vblend128v16 */
  -1,  /* vblendx128v16 */
  -1,  /* vblendxx128v16 */
  -1,  /* vblendxxx128v16 */
  -1,  /* vpclmulqdq */
  -1,  /* vpclmulqdqx */
  -1,  /* vpclmulqdqxx */
  -1,  /* vpclmulqdqxxx */
  -1,  /* vcmpeq128v8 */
  -1,  /* vcmpeqx128v8 */
  -1,  /* vcmpeqxx128v8 */
  -1,  /* vcmpeqxxx128v8 */
  -1,  /* vcmpeq128v32 */
  -1,  /* vcmpeqx128v32 */
  -1,  /* vcmpeqxx128v32 */
  -1,  /* vcmpeqxxx128v32 */
  -1,  /* vcmpeq128v64 */
  -1,  /* vcmpeqx128v64 */
  -1,  /* vcmpeqxx128v64 */
  -1,  /* vcmpeqxxx128v64 */
  -1,  /* vcmpeq128v16 */
  -1,  /* vcmpeqx128v16 */
  -1,  /* vcmpeqxx128v16 */
  -1,  /* vcmpeqxxx128v16 */
  -1,  /* vcmpestri */
  -1,  /* vcmpestrix */
  -1,  /* vcmpestrixx */
  -1,  /* vcmpestrixxx */
  -1,  /* vcmpestrm */
  -1,  /* vcmpestrmx */
  -1,  /* vcmpestrmxx */
  -1,  /* vcmpestrmxxx */
  -1,  /* vcmpgt128v8 */
  -1,  /* vcmpgtx128v8 */
  -1,  /* vcmpgtxx128v8 */
  -1,  /* vcmpgtxxx128v8 */
  -1,  /* vcmpgt128v32 */
  -1,  /* vcmpgtx128v32 */
  -1,  /* vcmpgtxx128v32 */
  -1,  /* vcmpgtxxx128v32 */
  -1,  /* vcmpgt128v64 */
  -1,  /* vcmpgtx128v64 */
  -1,  /* vcmpgtxx128v64 */
  -1,  /* vcmpgtxxx128v64 */
  -1,  /* vcmpgt128v16 */
  -1,  /* vcmpgtx128v16 */
  -1,  /* vcmpgtxx128v16 */
  -1,  /* vcmpgtxxx128v16 */
  -1,  /* vcmpistri */
  -1,  /* vcmpistrix */
  -1,  /* vcmpistrixx */
  -1,  /* vcmpistrixxx */
  -1,  /* vcmpistrm */
  -1,  /* vcmpistrmx */
  -1,  /* vcmpistrmxx */
  -1,  /* vcmpistrmxxx */
  -1,  /* vfperm128v64 */
  -1,  /* vfpermx128v64 */
  -1,  /* vfpermxx128v64 */
  -1,  /* vfpermxxx128v64 */
  -1,  /* vfpermi128v64 */
  -1,  /* vfpermix128v64 */
  -1,  /* vfpermixx128v64 */
  -1,  /* vfpermixxx128v64 */
  -1,  /* vfperm128v32 */
  -1,  /* vfpermx128v32 */
  -1,  /* vfpermxx128v32 */
  -1,  /* vfpermxxx128v32 */
  -1,  /* vfpermi128v32 */
  -1,  /* vfpermix128v32 */
  -1,  /* vfpermixx128v32 */
  -1,  /* vfpermixxx128v32 */
  -1,  /* vfperm2f128 */
  -1,  /* vfperm2xf128 */
  -1,  /* vfperm2xxf128 */
  -1,  /* vfperm2xxxf128 */
  -1,  /* vextr128v8 */
  -1,  /* vextrx128v8 */
  -1,  /* vextrxx128v8 */
  -1,  /* vextrxxx128v8 */
  -1,  /* vextr128v32 */
  -1,  /* vextrx128v32 */
  -1,  /* vextrxx128v32 */
  -1,  /* vextrxxx128v32 */
  -1,  /* vextr128v64 */
  -1,  /* vextrx128v64 */
  -1,  /* vextrxx128v64 */
  -1,  /* vextrxxx128v64 */
  -1,  /* vextr128v16 */
  -1,  /* vextrx128v16 */
  -1,  /* vextrxx128v16 */
  -1,  /* vextrxxx128v16 */
  -1,  /* vphadd128v32 */
  -1,  /* vphaddx128v32 */
  -1,  /* vphaddxx128v32 */
  -1,  /* vphaddxxx128v32 */
  -1,  /* vphadds128v16 */
  -1,  /* vphaddsx128v16 */
  -1,  /* vphaddsxx128v16 */
  -1,  /* vphaddsxxx128v16 */
  -1,  /* vphadd128v16 */
  -1,  /* vphaddx128v16 */
  -1,  /* vphaddxx128v16 */
  -1,  /* vphaddxxx128v16 */
  -1,  /* vphminposuw */
  -1,  /* vphminposuwx */
  -1,  /* vphminposuwxx */
  -1,  /* vphminposuwxxx */
  -1,  /* vphsub128v32 */
  -1,  /* vphsubx128v32 */
  -1,  /* vphsubxx128v32 */
  -1,  /* vphsubxxx128v32 */
  -1,  /* vphsubs128v16 */
  -1,  /* vphsubsx128v16 */
  -1,  /* vphsubsxx128v16 */
  -1,  /* vphsubsxxx128v16 */
  -1,  /* vphsub128v16 */
  -1,  /* vphsubx128v16 */
  -1,  /* vphsubxx128v16 */
  -1,  /* vphsubxxx128v16 */
  -1,  /* vinsr128v8 */
  -1,  /* vinsrx128v8 */
  -1,  /* vinsrxx128v8 */
  -1,  /* vinsrxxx128v8 */
  -1,  /* vinsr128v32 */
  -1,  /* vinsrx128v32 */
  -1,  /* vinsrxx128v32 */
  -1,  /* vinsrxxx128v32 */
  -1,  /* vinsr128v64 */
  -1,  /* vinsrx128v64 */
  -1,  /* vinsrxx128v64 */
  -1,  /* vinsrxxx128v64 */
  -1,  /* vinsr128v16 */
  -1,  /* vinsrx128v16 */
  -1,  /* vinsrxx128v16 */
  -1,  /* vinsrxxx128v16 */
  -1,  /* vpmaddwd */
  -1,  /* vpmaddwdx */
  -1,  /* vpmaddwdxx */
  -1,  /* vpmaddwdxxx */
  -1,  /* vpmaddubsw128 */
  -1,  /* vpmaddubswx128 */
  -1,  /* vpmaddubswxx128 */
  -1,  /* vpmaddubswxxx128 */
  -1,  /* vmaxs128v8 */
  -1,  /* vmaxsx128v8 */
  -1,  /* vmaxsxx128v8 */
  -1,  /* vmaxsxxx128v8 */
  -1,  /* vmaxs128v16 */
  -1,  /* vmaxsx128v16 */
  -1,  /* vmaxsxx128v16 */
  -1,  /* vmaxsxxx128v16 */
  -1,  /* vmaxs128v32 */
  -1,  /* vmaxsx128v32 */
  -1,  /* vmaxsxx128v32 */
  -1,  /* vmaxsxxx128v32 */
  -1,  /* vmaxu128v8 */
  -1,  /* vmaxux128v8 */
  -1,  /* vmaxuxx128v8 */
  -1,  /* vmaxuxxx128v8 */
  -1,  /* vmaxu128v16 */
  -1,  /* vmaxux128v16 */
  -1,  /* vmaxuxx128v16 */
  -1,  /* vmaxuxxx128v16 */
  -1,  /* vmaxu128v32 */
  -1,  /* vmaxux128v32 */
  -1,  /* vmaxuxx128v32 */
  -1,  /* vmaxuxxx128v32 */
  -1,  /* vmins128v8 */
  -1,  /* vminsx128v8 */
  -1,  /* vminsxx128v8 */
  -1,  /* vminsxxx128v8 */
  -1,  /* vmins128v16 */
  -1,  /* vminsx128v16 */
  -1,  /* vminsxx128v16 */
  -1,  /* vminsxxx128v16 */
  -1,  /* vmins128v32 */
  -1,  /* vminsx128v32 */
  -1,  /* vminsxx128v32 */
  -1,  /* vminsxxx128v32 */
  -1,  /* vminu128v8 */
  -1,  /* vminux128v8 */
  -1,  /* vminuxx128v8 */
  -1,  /* vminuxxx128v8 */
  -1,  /* vminu128v16 */
  -1,  /* vminux128v16 */
  -1,  /* vminuxx128v16 */
  -1,  /* vminuxxx128v16 */
  -1,  /* vminu128v32 */
  -1,  /* vminux128v32 */
  -1,  /* vminuxx128v32 */
  -1,  /* vminuxxx128v32 */
  -1,  /* vpmovmskb128 */
  -1,  /* vpmovsxbd */
  -1,  /* vpmovsxbdx */
  -1,  /* vpmovsxbdxx */
  -1,  /* vpmovsxbdxxx */
  -1,  /* vpmovsxbq */
  -1,  /* vpmovsxbqx */
  -1,  /* vpmovsxbqxx */
  -1,  /* vpmovsxbqxxx */
  -1,  /* vpmovsxbw */
  -1,  /* vpmovsxbwx */
  -1,  /* vpmovsxbwxx */
  -1,  /* vpmovsxbwxxx */
  -1,  /* vpmovsxdq */
  -1,  /* vpmovsxdqx */
  -1,  /* vpmovsxdqxx */
  -1,  /* vpmovsxdqxxx */
  -1,  /* vpmovsxwd */
  -1,  /* vpmovsxwdx */
  -1,  /* vpmovsxwdxx */
  -1,  /* vpmovsxwdxxx */
  -1,  /* vpmovsxwq */
  -1,  /* vpmovsxwqx */
  -1,  /* vpmovsxwqxx */
  -1,  /* vpmovsxwqxxx */
  -1,  /* vpmovzxbd */
  -1,  /* vpmovzxbdx */
  -1,  /* vpmovzxbdxx */
  -1,  /* vpmovzxbdxxx */
  -1,  /* vpmovzxbq */
  -1,  /* vpmovzxbqx */
  -1,  /* vpmovzxbqxx */
  -1,  /* vpmovzxbqxxx */
  -1,  /* vpmovzxbw */
  -1,  /* vpmovzxbwx */
  -1,  /* vpmovzxbwxx */
  -1,  /* vpmovzxbwxxx */
  -1,  /* vpmovzxdq */
  -1,  /* vpmovzxdqx */
  -1,  /* vpmovzxdqxx */
  -1,  /* vpmovzxdqxxx */
  -1,  /* vpmovzxwd */
  -1,  /* vpmovzxwdx */
  -1,  /* vpmovzxwdxx */
  -1,  /* vpmovzxwdxxx */
  -1,  /* vpmovzxwq */
  -1,  /* vpmovzxwqx */
  -1,  /* vpmovzxwqxx */
  -1,  /* vpmovzxwqxxx */
  -1,  /* vmulhuw */
  -1,  /* vmulhuwx */
  -1,  /* vmulhuwxx */
  -1,  /* vmulhuwxxx */
  -1,  /* vmulhrsw */
  -1,  /* vmulhrswx */
  -1,  /* vmulhrswxx */
  -1,  /* vmulhrswxxx */
  -1,  /* vmulhw */
  -1,  /* vmulhwx */
  -1,  /* vmulhwxx */
  -1,  /* vmulhwxxx */
  -1,  /* vmulld */
  -1,  /* vmulldx */
  -1,  /* vmulldxx */
  -1,  /* vmulldxxx */
  -1,  /* vmul128v16 */
  -1,  /* vmulx128v16 */
  -1,  /* vmulxx128v16 */
  -1,  /* vmulxxx128v16 */
  -1,  /* vmul128v32 */
  -1,  /* vmulx128v32 */
  -1,  /* vmulxx128v32 */
  -1,  /* vmulxxx128v32 */
  -1,  /* vmuludq */
  -1,  /* vmuludqx */
  -1,  /* vmuludqxx */
  -1,  /* vmuludqxxx */
  -1,  /* vmuldq */
  -1,  /* vmuldqx */
  -1,  /* vmuldqxx */
  -1,  /* vmuldqxxx */
  -1,  /* vor128v8 */
  -1,  /* vorx128v8 */
  -1,  /* vorxx128v8 */
  -1,  /* vorxxx128v8 */
  -1,  /* vor128v16 */
  -1,  /* vorx128v16 */
  -1,  /* vorxx128v16 */
  -1,  /* vorxxx128v16 */
  -1,  /* vor128v32 */
  -1,  /* vorx128v32 */
  -1,  /* vorxx128v32 */
  -1,  /* vorxxx128v32 */
  -1,  /* vor128v64 */
  -1,  /* vorx128v64 */
  -1,  /* vorxx128v64 */
  -1,  /* vorxxx128v64 */
  -1,  /* vpsadbw */
  -1,  /* vpsadbwx */
  -1,  /* vpsadbwxx */
  -1,  /* vpsadbwxxx */
  -1,  /* vpshuf128v8 */
  -1,  /* vpshufx128v8 */
  -1,  /* vpshufxx128v8 */
  -1,  /* vpshufxxx128v8 */
  -1,  /* vpshuf128v32 */
  -1,  /* vpshufx128v32 */
  -1,  /* vpshufxx128v32 */
  -1,  /* vpshufxxx128v32 */
  -1,  /* vpshufw64v16 */
  -1,  /* vpshufwx64v16 */
  -1,  /* vpshufwxx64v16 */
  -1,  /* vpshufwxxx64v16 */
  -1,  /* vpshufhw */
  -1,  /* vpshufhwx */
  -1,  /* vpshufhwxx */
  -1,  /* vpshufhwxxx */
  -1,  /* vpshuflw */
  -1,  /* vpshuflwx */
  -1,  /* vpshuflwxx */
  -1,  /* vpshuflwxxx */
  -1,  /* vpsign128v8 */
  -1,  /* vpsignx128v8 */
  -1,  /* vpsignxx128v8 */
  -1,  /* vpsignxxx128v8 */
  -1,  /* vpsign128v32 */
  -1,  /* vpsignx128v32 */
  -1,  /* vpsignxx128v32 */
  -1,  /* vpsignxxx128v32 */
  -1,  /* vpsign128v16 */
  -1,  /* vpsignx128v16 */
  -1,  /* vpsignxx128v16 */
  -1,  /* vpsignxxx128v16 */
  -1,  /* vpslldq */
  -1,  /* vpsrldq */
  -1,  /* vpslld */
  -1,  /* vpslldx */
  -1,  /* vpslldxx */
  -1,  /* vpslldxxx */
  -1,  /* vpslldi */
  -1,  /* vpsllq */
  -1,  /* vpsllqx */
  -1,  /* vpsllqxx */
  -1,  /* vpsllqxxx */
  -1,  /* vpsllqi */
  -1,  /* vpsllw */
  -1,  /* vpsllwx */
  -1,  /* vpsllwxx */
  -1,  /* vpsllwxxx */
  -1,  /* vpsllwi */
  -1,  /* vpsrad */
  -1,  /* vpsradx */
  -1,  /* vpsradxx */
  -1,  /* vpsradxxx */
  -1,  /* vpsradi */
  -1,  /* vpsraw */
  -1,  /* vpsrawx */
  -1,  /* vpsrawxx */
  -1,  /* vpsrawxxx */
  -1,  /* vpsrawi */
  -1,  /* vpsrld */
  -1,  /* vpsrldx */
  -1,  /* vpsrldxx */
  -1,  /* vpsrldxxx */
  -1,  /* vpsrldi */
  -1,  /* vpsrlq */
  -1,  /* vpsrlqx */
  -1,  /* vpsrlqxx */
  -1,  /* vpsrlqxxx */
  -1,  /* vpsrlqi */
  -1,  /* vpsrlw */
  -1,  /* vpsrlwx */
  -1,  /* vpsrlwxx */
  -1,  /* vpsrlwxxx */
  -1,  /* vpsrlwi */
  -1,  /* vsub128v8 */
  -1,  /* vsubx128v8 */
  -1,  /* vsubxx128v8 */
  -1,  /* vsubxxx128v8 */
  -1,  /* vsub128v32 */
  -1,  /* vsubx128v32 */
  -1,  /* vsubxx128v32 */
  -1,  /* vsubxxx128v32 */
  -1,  /* vsub128v64 */
  -1,  /* vsubx128v64 */
  -1,  /* vsubxx128v64 */
  -1,  /* vsubxxx128v64 */
  -1,  /* vsub128v16 */
  -1,  /* vsubx128v16 */
  -1,  /* vsubxx128v16 */
  -1,  /* vsubxxx128v16 */
  -1,  /* vsubs128v8 */
  -1,  /* vsubsx128v8 */
  -1,  /* vsubsxx128v8 */
  -1,  /* vsubsxxx128v8 */
  -1,  /* vsubs128v16 */
  -1,  /* vsubsx128v16 */
  -1,  /* vsubsxx128v16 */
  -1,  /* vsubsxxx128v16 */
  -1,  /* vsubus128v8 */
  -1,  /* vsubusx128v8 */
  -1,  /* vsubusxx128v8 */
  -1,  /* vsubusxxx128v8 */
  -1,  /* vsubus128v16 */
  -1,  /* vsubusx128v16 */
  -1,  /* vsubusxx128v16 */
  -1,  /* vsubusxxx128v16 */
  -1,  /* vptest128 */
  -1,  /* vptestx128 */
  -1,  /* vptestxx128 */
  -1,  /* vptestxxx128 */
  -1,  /* vtestpd */
  -1,  /* vtestxpd */
  -1,  /* vtestxxpd */
  -1,  /* vtestxxxpd */
  -1,  /* vtestps */
  -1,  /* vtestxps */
  -1,  /* vtestxxps */
  -1,  /* vtestxxxps */
  -1,  /* vpunpckh64v8 */
  -1,  /* vpunpckhx64v8 */
  -1,  /* vpunpckhxx64v8 */
  -1,  /* vpunpckhxxx64v8 */
  -1,  /* vpunpckh64v32 */
  -1,  /* vpunpckhx64v32 */
  -1,  /* vpunpckhxx64v32 */
  -1,  /* vpunpckhxxx64v32 */
  -1,  /* vpunpckh64v16 */
  -1,  /* vpunpckhx64v16 */
  -1,  /* vpunpckhxx64v16 */
  -1,  /* vpunpckhxxx64v16 */
  -1,  /* vpunpckh64v64 */
  -1,  /* vpunpckhx64v64 */
  -1,  /* vpunpckhxx64v64 */
  -1,  /* vpunpckhxxx64v64 */
  -1,  /* vpunpckl64v8 */
  -1,  /* vpunpcklx64v8 */
  -1,  /* vpunpcklxx64v8 */
  -1,  /* vpunpcklxxx64v8 */
  -1,  /* vpunpckl64v32 */
  -1,  /* vpunpcklx64v32 */
  -1,  /* vpunpcklxx64v32 */
  -1,  /* vpunpcklxxx64v32 */
  -1,  /* vpunpckl64v16 */
  -1,  /* vpunpcklx64v16 */
  -1,  /* vpunpcklxx64v16 */
  -1,  /* vpunpcklxxx64v16 */
  -1,  /* vpunpckl64v64 */
  -1,  /* vpunpcklx64v64 */
  -1,  /* vpunpcklxx64v64 */
  -1,  /* vpunpcklxxx64v64 */
  -1,  /* vxor128v8 */
  -1,  /* vxorx128v8 */
  -1,  /* vxorxx128v8 */
  -1,  /* vxorxxx128v8 */
  -1,  /* vxor128v16 */
  -1,  /* vxorx128v16 */
  -1,  /* vxorxx128v16 */
  -1,  /* vxorxxx128v16 */
  -1,  /* vxor128v32 */
  -1,  /* vxorx128v32 */
  -1,  /* vxorxx128v32 */
  -1,  /* vxorxxx128v32 */
  -1,  /* vxor128v64 */
  -1,  /* vxorx128v64 */
  -1,  /* vxorxx128v64 */
  -1,  /* vxorxxx128v64 */
  -1,  /* vfrcp128v32 */
  -1,  /* vfrcpx128v32 */
  -1,  /* vfrcpxx128v32 */
  -1,  /* vfrcpxxx128v32 */
  -1,  /* vfrcpss */
  -1,  /* vfrcpxss */
  -1,  /* vfrcpxxss */
  -1,  /* vfrcpxxxss */
  -1,  /* vround128v64 */
  -1,  /* vroundx128v64 */
  -1,  /* vroundxx128v64 */
  -1,  /* vroundxxx128v64 */
  -1,  /* vround128v32 */
  -1,  /* vroundx128v32 */
  -1,  /* vroundxx128v32 */
  -1,  /* vroundxxx128v32 */
  -1,  /* vroundsd */
  -1,  /* vroundxsd */
  -1,  /* vroundxxsd */
  -1,  /* vroundxxxsd */
  -1,  /* vroundss */
  -1,  /* vroundxss */
  -1,  /* vroundxxss */
  -1,  /* vroundxxxss */
  -1,  /* vfrsqrt128v32 */
  -1,  /* vfrsqrtx128v32 */
  -1,  /* vfrsqrtxx128v32 */
  -1,  /* vfrsqrtxxx128v32 */
  -1,  /* vfrsqrtss */
  -1,  /* vfrsqrtxss */
  -1,  /* vfrsqrtxxss */
  -1,  /* vfrsqrtxxxss */
  -1,  /* vshufpd */
  -1,  /* vfshuf128v64 */
  -1,  /* vfshufx128v64 */
  -1,  /* vfshufxx128v64 */
  -1,  /* vfshufxxx128v64 */
  -1,  /* vshufps */
  -1,  /* vfshuf128v32 */
  -1,  /* vfshufx128v32 */
  -1,  /* vfshufxx128v32 */
  -1,  /* vfshufxxx128v32 */
  -1,  /* vfsqrt128v64 */
  -1,  /* vfsqrtx128v64 */
  -1,  /* vfsqrtxx128v64 */
  -1,  /* vfsqrtxxx128v64 */
  -1,  /* vfsqrt128v32 */
  -1,  /* vfsqrtx128v32 */
  -1,  /* vfsqrtxx128v32 */
  -1,  /* vfsqrtxxx128v32 */
  -1,  /* vfsqrtsd */
  -1,  /* vfsqrtxsd */
  -1,  /* vfsqrtxxsd */
  -1,  /* vfsqrtxxxsd */
  -1,  /* vfsqrtss */
  -1,  /* vfsqrtxss */
  -1,  /* vfsqrtxxss */
  -1,  /* vfsqrtxxxss */
  -1,  /* vstmxcsr */
  -1,  /* vfsub128v64 */
  -1,  /* vfsubx128v64 */
  -1,  /* vfsubxx128v64 */
  -1,  /* vfsubxxx128v64 */
  -1,  /* vfsub128v32 */
  -1,  /* vfsubx128v32 */
  -1,  /* vfsubxx128v32 */
  -1,  /* vfsubxxx128v32 */
  -1,  /* vsubsd */
  -1,  /* vsubxsd */
  -1,  /* vsubxxsd */
  -1,  /* vsubxxxsd */
  -1,  /* vsubss */
  -1,  /* vsubxss */
  -1,  /* vsubxxss */
  -1,  /* vsubxxxss */
  -1,  /* vucomisd */
  -1,  /* vucomixsd */
  -1,  /* vucomixxsd */
  -1,  /* vucomixxxsd */
  -1,  /* vucomiss */
  -1,  /* vucomixss */
  -1,  /* vucomixxss */
  -1,  /* vucomixxxss */
  -1,  /* vunpckh128v64 */
  -1,  /* vunpckhx128v64 */
  -1,  /* vunpckhxx128v64 */
  -1,  /* vunpckhxxx128v64 */
  -1,  /* vunpckh128v32 */
  -1,  /* vunpckhx128v32 */
  -1,  /* vunpckhxx128v32 */
  -1,  /* vunpckhxxx128v32 */
  -1,  /* vunpckl128v64 */
  -1,  /* vunpcklx128v64 */
  -1,  /* vunpcklxx128v64 */
  -1,  /* vunpcklxxx128v64 */
  -1,  /* vunpckl128v32 */
  -1,  /* vunpcklx128v32 */
  -1,  /* vunpcklxx128v32 */
  -1,  /* vunpcklxxx128v32 */
  -1,  /* vxorpd */
  -1,  /* vfxor128v64 */
  -1,  /* vfxorx128v64 */
  -1,  /* vfxorxx128v64 */
  -1,  /* vfxorxxx128v64 */
  -1,  /* vxzero128v64 */
  -1,  /* vxzero64 */
  -1,  /* vxorps */
  -1,  /* vfxor128v32 */
  -1,  /* vfxorx128v32 */
  -1,  /* vfxorxx128v32 */
  -1,  /* vfxorxxx128v32 */
  -1,  /* vxzero128v32 */
  -1,  /* vxzero32 */
  -1,  /* vzeroall */
  -1,  /* xfmadd132pd */
  -1,  /* xfmadd132xpd */
  -1,  /* xfmadd132xxpd */
  -1,  /* xfmadd132xxxpd */
  -1,  /* xfmadd213pd */
  -1,  /* xfmadd213xpd */
  -1,  /* xfmadd213xxpd */
  -1,  /* xfmadd213xxxpd */
  -1,  /* xfmadd231pd */
  -1,  /* xfmadd231xpd */
  -1,  /* xfmadd231xxpd */
  -1,  /* xfmadd231xxxpd */
  -1,  /* xfmadd132ps */
  -1,  /* xfmadd132xps */
  -1,  /* xfmadd132xxps */
  -1,  /* xfmadd132xxxps */
  -1,  /* xfmadd213ps */
  -1,  /* xfmadd213xps */
  -1,  /* xfmadd213xxps */
  -1,  /* xfmadd213xxxps */
  -1,  /* xfmadd231ps */
  -1,  /* xfmadd231xps */
  -1,  /* xfmadd231xxps */
  -1,  /* xfmadd231xxxps */
  -1,  /* xfmadd132sd */
  -1,  /* xfmadd132xsd */
  -1,  /* xfmadd132xxsd */
  -1,  /* xfmadd132xxxsd */
  -1,  /* xfmadd213sd */
  -1,  /* xfmadd213xsd */
  -1,  /* xfmadd213xxsd */
  -1,  /* xfmadd213xxxsd */
  -1,  /* xfmadd231sd */
  -1,  /* xfmadd231xsd */
  -1,  /* xfmadd231xxsd */
  -1,  /* xfmadd231xxxsd */
  -1,  /* xfmadd132ss */
  -1,  /* xfmadd132xss */
  -1,  /* xfmadd132xxss */
  -1,  /* xfmadd132xxxss */
  -1,  /* xfmadd213ss */
  -1,  /* xfmadd213xss */
  -1,  /* xfmadd213xxss */
  -1,  /* xfmadd213xxxss */
  -1,  /* xfmadd231ss */
  -1,  /* xfmadd231xss */
  -1,  /* xfmadd231xxss */
  -1,  /* xfmadd231xxxss */
  -1,  /* xfmaddsub132pd */
  -1,  /* xfmaddsub132xpd */
  -1,  /* xfmaddsub132xxpd */
  -1,  /* xfmaddsub132xxxpd */
  -1,  /* xfmaddsub213pd */
  -1,  /* xfmaddsub213xpd */
  -1,  /* xfmaddsub213xxpd */
  -1,  /* xfmaddsub213xxxpd */
  -1,  /* xfmaddsub231pd */
  -1,  /* xfmaddsub231xpd */
  -1,  /* xfmaddsub231xxpd */
  -1,  /* xfmaddsub231xxxpd */
  -1,  /* xfmaddsub132ps */
  -1,  /* xfmaddsub132xps */
  -1,  /* xfmaddsub132xxps */
  -1,  /* xfmaddsub132xxxps */
  -1,  /* xfmaddsub213ps */
  -1,  /* xfmaddsub213xps */
  -1,  /* xfmaddsub213xxps */
  -1,  /* xfmaddsub213xxxps */
  -1,  /* xfmaddsub231ps */
  -1,  /* xfmaddsub231xps */
  -1,  /* xfmaddsub231xxps */
  -1,  /* xfmaddsub231xxxps */
  -1,  /* xfmsubadd132pd */
  -1,  /* xfmsubadd132xpd */
  -1,  /* xfmsubadd132xxpd */
  -1,  /* xfmsubadd132xxxpd */
  -1,  /* xfmsubadd213pd */
  -1,  /* xfmsubadd213xpd */
  -1,  /* xfmsubadd213xxpd */
  -1,  /* xfmsubadd213xxxpd */
  -1,  /* xfmsubadd231pd */
  -1,  /* xfmsubadd231xpd */
  -1,  /* xfmsubadd231xxpd */
  -1,  /* xfmsubadd231xxxpd */
  -1,  /* xfmsubadd132ps */
  -1,  /* xfmsubadd132xps */
  -1,  /* xfmsubadd132xxps */
  -1,  /* xfmsubadd132xxxps */
  -1,  /* xfmsubadd213ps */
  -1,  /* xfmsubadd213xps */
  -1,  /* xfmsubadd213xxps */
  -1,  /* xfmsubadd213xxxps */
  -1,  /* xfmsubadd231ps */
  -1,  /* xfmsubadd231xps */
  -1,  /* xfmsubadd231xxps */
  -1,  /* xfmsubadd231xxxps */
  -1,  /* xfmsub132pd */
  -1,  /* xfmsub132xpd */
  -1,  /* xfmsub132xxpd */
  -1,  /* xfmsub132xxxpd */
  -1,  /* xfmsub213pd */
  -1,  /* xfmsub213xpd */
  -1,  /* xfmsub213xxpd */
  -1,  /* xfmsub213xxxpd */
  -1,  /* xfmsub231pd */
  -1,  /* xfmsub231xpd */
  -1,  /* xfmsub231xxpd */
  -1,  /* xfmsub231xxxpd */
  -1,  /* xfmsub132ps */
  -1,  /* xfmsub132xps */
  -1,  /* xfmsub132xxps */
  -1,  /* xfmsub132xxxps */
  -1,  /* xfmsub213ps */
  -1,  /* xfmsub213xps */
  -1,  /* xfmsub213xxps */
  -1,  /* xfmsub213xxxps */
  -1,  /* xfmsub231ps */
  -1,  /* xfmsub231xps */
  -1,  /* xfmsub231xxps */
  -1,  /* xfmsub231xxxps */
  -1,  /* xfmsub132sd */
  -1,  /* xfmsub132xsd */
  -1,  /* xfmsub132xxsd */
  -1,  /* xfmsub132xxxsd */
  -1,  /* xfmsub213sd */
  -1,  /* xfmsub213xsd */
  -1,  /* xfmsub213xxsd */
  -1,  /* xfmsub213xxxsd */
  -1,  /* xfmsub231sd */
  -1,  /* xfmsub231xsd */
  -1,  /* xfmsub231xxsd */
  -1,  /* xfmsub231xxxsd */
  -1,  /* xfmsub132ss */
  -1,  /* xfmsub132xss */
  -1,  /* xfmsub132xxss */
  -1,  /* xfmsub132xxxss */
  -1,  /* xfmsub213ss */
  -1,  /* xfmsub213xss */
  -1,  /* xfmsub213xxss */
  -1,  /* xfmsub213xxxss */
  -1,  /* xfmsub231ss */
  -1,  /* xfmsub231xss */
  -1,  /* xfmsub231xxss */
  -1,  /* xfmsub231xxxss */
  -1,  /* xfnmadd132pd */
  -1,  /* xfnmadd132xpd */
  -1,  /* xfnmadd132xxpd */
  -1,  /* xfnmadd132xxxpd */
  -1,  /* xfnmadd213pd */
  -1,  /* xfnmadd213xpd */
  -1,  /* xfnmadd213xxpd */
  -1,  /* xfnmadd213xxxpd */
  -1,  /* xfnmadd231pd */
  -1,  /* xfnmadd231xpd */
  -1,  /* xfnmadd231xxpd */
  -1,  /* xfnmadd231xxxpd */
  -1,  /* xfnmadd132ps */
  -1,  /* xfnmadd132xps */
  -1,  /* xfnmadd132xxps */
  -1,  /* xfnmadd132xxxps */
  -1,  /* xfnmadd213ps */
  -1,  /* xfnmadd213xps */
  -1,  /* xfnmadd213xxps */
  -1,  /* xfnmadd213xxxps */
  -1,  /* xfnmadd231ps */
  -1,  /* xfnmadd231xps */
  -1,  /* xfnmadd231xxps */
  -1,  /* xfnmadd231xxxps */
  -1,  /* xfnmadd132sd */
  -1,  /* xfnmadd132xsd */
  -1,  /* xfnmadd132xxsd */
  -1,  /* xfnmadd132xxxsd */
  -1,  /* xfnmadd213sd */
  -1,  /* xfnmadd213xsd */
  -1,  /* xfnmadd213xxsd */
  -1,  /* xfnmadd213xxxsd */
  -1,  /* xfnmadd231sd */
  -1,  /* xfnmadd231xsd */
  -1,  /* xfnmadd231xxsd */
  -1,  /* xfnmadd231xxxsd */
  -1,  /* xfnmadd132ss */
  -1,  /* xfnmadd132xss */
  -1,  /* xfnmadd132xxss */
  -1,  /* xfnmadd132xxxss */
  -1,  /* xfnmadd213ss */
  -1,  /* xfnmadd213xss */
  -1,  /* xfnmadd213xxss */
  -1,  /* xfnmadd213xxxss */
  -1,  /* xfnmadd231ss */
  -1,  /* xfnmadd231xss */
  -1,  /* xfnmadd231xxss */
  -1,  /* xfnmadd231xxxss */
  -1,  /* xfnmsub132pd */
  -1,  /* xfnmsub132xpd */
  -1,  /* xfnmsub132xxpd */
  -1,  /* xfnmsub132xxxpd */
  -1,  /* xfnmsub213pd */
  -1,  /* xfnmsub213xpd */
  -1,  /* xfnmsub213xxpd */
  -1,  /* xfnmsub213xxxpd */
  -1,  /* xfnmsub231pd */
  -1,  /* xfnmsub231xpd */
  -1,  /* xfnmsub231xxpd */
  -1,  /* xfnmsub231xxxpd */
  -1,  /* xfnmsub132ps */
  -1,  /* xfnmsub132xps */
  -1,  /* xfnmsub132xxps */
  -1,  /* xfnmsub132xxxps */
  -1,  /* xfnmsub213ps */
  -1,  /* xfnmsub213xps */
  -1,  /* xfnmsub213xxps */
  -1,  /* xfnmsub213xxxps */
  -1,  /* xfnmsub231ps */
  -1,  /* xfnmsub231xps */
  -1,  /* xfnmsub231xxps */
  -1,  /* xfnmsub231xxxps */
  -1,  /* xfnmsub132sd */
  -1,  /* xfnmsub132xsd */
  -1,  /* xfnmsub132xxsd */
  -1,  /* xfnmsub132xxxsd */
  -1,  /* xfnmsub213sd */
  -1,  /* xfnmsub213xsd */
  -1,  /* xfnmsub213xxsd */
  -1,  /* xfnmsub213xxxsd */
  -1,  /* xfnmsub231sd */
  -1,  /* xfnmsub231xsd */
  -1,  /* xfnmsub231xxsd */
  -1,  /* xfnmsub231xxxsd */
  -1,  /* xfnmsub132ss */
  -1,  /* xfnmsub132xss */
  -1,  /* xfnmsub132xxss */
  -1,  /* xfnmsub132xxxss */
  -1,  /* xfnmsub213ss */
  -1,  /* xfnmsub213xss */
  -1,  /* xfnmsub213xxss */
  -1,  /* xfnmsub213xxxss */
  -1,  /* xfnmsub231ss */
  -1,  /* xfnmsub231xss */
  -1,  /* xfnmsub231xxss */
  -1,  /* xfnmsub231xxxss */
  -1,  /* movabsq */
  -1,  /* store8_abs */
  -1,  /* store16_abs */
  -1,  /* store32_abs */
  -1,  /* store64_abs */
  -1,  /* ld8_abs */
  -1,  /* ld16_abs */
  -1,  /* ld32_abs */
  -1,  /* ld64_abs */
  -1,  /* lock_add32 */
  -1,  /* lock_adc32 */
  -1,  /* lock_add64 */
  -1,  /* lock_xchg32 */
  -1,  /* lock_xchg64 */
  -1,  /* lock_cmpxchg32 */
  -1,  /* lock_cmpxchg64 */
  -1,  /* lock_and32 */
  -1,  /* lock_and64 */
  -1,  /* lock_or32 */
  -1,  /* lock_or64 */
  -1,  /* lock_xor32 */
  -1,  /* lock_xor64 */
  -1,  /* lock_sub32 */
  -1,  /* lock_sub64 */
  -1,  /* lock_add8 */
  -1,  /* lock_add16 */
  -1,  /* lock_xchg8 */
  -1,  /* lock_xchg16 */
  -1,  /* lock_cmpxchg8 */
  -1,  /* lock_cmpxchg16 */
  -1,  /* lock_and8 */
  -1,  /* lock_and16 */
  -1,  /* lock_or8 */
  -1,  /* lock_or16 */
  -1,  /* lock_xor8 */
  -1,  /* lock_xor16 */
  -1,  /* lock_sub8 */
  -1,  /* lock_sub16 */
  -1,  /* lock_xadd8 */
  -1,  /* lock_xadd16 */
  -1,  /* lock_xadd32 */
  -1,  /* lock_xadd64 */
  -1,  /* bsf32 */
  -1,  /* bsf64 */
  -1,  /* bsr32 */
  -1,  /* bsr64 */
  -1,  /* tls_global_dynamic_64 */
  -1,  /* tls_global_dynamic_32 */
  -1,  /* tls_local_dynamic_64 */
  -1,  /* tls_local_dynamic_32 */
  -1,  /* begin_pregtn */
  -1,  /* end_pregtn */
  -1,  /* bwd_bar */
  -1,  /* fwd_bar */
   0,  /* label */
  -1,  /* nop */
  -1,  /* noop */
};

INT TOP_Immediate_Operand(TOP topcode, ISA_LIT_CLASS *lclass)
{
  INT iopnd;
  const ISA_OPERAND_INFO *opinfo = ISA_OPERAND_Info(topcode);
  INT opnds = ISA_OPERAND_INFO_Operands(opinfo);
  const INT first = 0;

  for (iopnd = first; iopnd < opnds; ++iopnd) {
    const ISA_OPERAND_VALTYP *vtype = ISA_OPERAND_INFO_Operand(opinfo, iopnd);
    ISA_LIT_CLASS lit_class = ISA_OPERAND_VALTYP_Literal_Class(vtype);
    if (lit_class != LC_UNDEFINED) {
      if (lclass) *lclass = lit_class;
      return iopnd;
    }
  }

  return -1;
}

INT TOP_Relocatable_Operand(TOP topcode, ISA_LIT_CLASS *lclass)
{
  extern const mINT8 ISA_OPERAND_relocatable_opnd[];
  INT iopnd = ISA_OPERAND_relocatable_opnd[(INT)topcode];
  if (lclass && iopnd >= 0) {
    const ISA_OPERAND_INFO *opinfo = ISA_OPERAND_Info(topcode);
    const ISA_OPERAND_VALTYP *vtype = ISA_OPERAND_INFO_Operand(opinfo,iopnd);
    *lclass = (ISA_LIT_CLASS)ISA_OPERAND_VALTYP_Literal_Class(vtype);
  }
  return iopnd;
}

BOOL TOP_Can_Have_Immediate(INT64 value, TOP topcode)
{
  ISA_LIT_CLASS lclass;
  if (TOP_Immediate_Operand(topcode, &lclass) < 0) return 0;
  return ISA_LC_Value_In_Class(value, lclass);
}

INT TOP_Find_Operand_Use(TOP topcode, ISA_OPERAND_USE use)
{
  INT i;
  const ISA_OPERAND_INFO *oinfo = ISA_OPERAND_Info(topcode);
  INT opnds = ISA_OPERAND_INFO_Operands(oinfo);
  for (i = 0; i < opnds; ++i) {
    ISA_OPERAND_USE this_use = ISA_OPERAND_INFO_Use(oinfo, i);
    if (this_use == use) return i;
  }
  return -1;
}

void TOP_Operand_Uses(TOP topcode, ISA_OPERAND_USE *uses)
{
  INT i;
  const ISA_OPERAND_INFO *oinfo = ISA_OPERAND_Info(topcode);
  INT opnds = ISA_OPERAND_INFO_Operands(oinfo);
  for (i = 0; i < opnds; ++i) {
    ISA_OPERAND_USE this_use = ISA_OPERAND_INFO_Use(oinfo, i);
    uses[i] = this_use;
  }
}
