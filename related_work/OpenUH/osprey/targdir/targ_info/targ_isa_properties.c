#include "targ_isa_properties.h"

const mUINT64 ISA_PROPERTIES_flags[] = {
  0x000a000040000004ULL, /* add8: change_rflags iadd commutative x86_style */
  0x000a000040000004ULL, /* add16: change_rflags iadd commutative x86_style */
  0x000a000040000044ULL, /* add32: change_rflags opcode_1 iadd commutative x86_style */
  0x001a000000000044ULL, /* adc32: change_rflags opcode_1 commutative x86_style read_rflags */
  0x000a000040000044ULL, /* add64: change_rflags opcode_1 iadd commutative x86_style */
  0x0008000040004044ULL, /* addx32: change_rflags opcode_1 load_exe iadd x86_style */
  0x0008000040004044ULL, /* addxx32: change_rflags opcode_1 load_exe iadd x86_style */
  0x0008000040004044ULL, /* addxxx32: change_rflags opcode_1 load_exe iadd x86_style */
  0x0008000040004044ULL, /* addx64: change_rflags opcode_1 load_exe iadd x86_style */
  0x0008000040004044ULL, /* addxx64: change_rflags opcode_1 load_exe iadd x86_style */
  0x0008000040004044ULL, /* addxxx64: change_rflags opcode_1 load_exe iadd x86_style */
  0x0008000040000004ULL, /* addi8: change_rflags iadd x86_style */
  0x0008000040000004ULL, /* addi16: change_rflags iadd x86_style */
  0x0008000040000044ULL, /* addi32: change_rflags opcode_1 iadd x86_style */
  0x0018000000000044ULL, /* adci32: change_rflags opcode_1 x86_style read_rflags */
  0x0008000040000044ULL, /* addi64: change_rflags opcode_1 iadd x86_style */
  0x0000000000008004ULL, /* addxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addxr64_off: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* addixr64_off: change_rflags load_exe_store */
  0x000e000c00000100ULL, /* add128v8: opcode_3 flop fadd commutative vector_op x86_style */
  0x000c000c00004100ULL, /* addx128v8: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxx128v8: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxxx128v8: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000e000c00000100ULL, /* add128v16: opcode_3 flop fadd commutative vector_op x86_style */
  0x000c000c00004100ULL, /* addx128v16: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxx128v16: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxxx128v16: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000e000c00000100ULL, /* add128v32: opcode_3 flop fadd commutative vector_op x86_style */
  0x000c000c00004100ULL, /* addx128v32: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxx128v32: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxxx128v32: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000e000c00000100ULL, /* add128v64: opcode_3 flop fadd commutative vector_op x86_style */
  0x000c000c00004100ULL, /* addx128v64: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxx128v64: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000c000c00004100ULL, /* addxxx128v64: opcode_3 load_exe flop fadd vector_op x86_style */
  0x000e000c00002080ULL, /* add64v8: opcode_2 mmx flop fadd commutative vector_op x86_style */
  0x000e000c00002080ULL, /* add64v16: opcode_2 mmx flop fadd commutative vector_op x86_style */
  0x000e000c00002080ULL, /* add64v32: opcode_2 mmx flop fadd commutative vector_op x86_style */
  0x000e000040002080ULL, /* paddsb: opcode_2 mmx iadd commutative vector_op x86_style */
  0x000e000040002080ULL, /* paddsw: opcode_2 mmx iadd commutative vector_op x86_style */
  0x000a000040002080ULL, /* paddq: opcode_2 mmx iadd commutative x86_style */
  0x000c000080002080ULL, /* psubsb: opcode_2 mmx isub vector_op x86_style */
  0x000c000080002080ULL, /* psubsw: opcode_2 mmx isub vector_op x86_style */
  0x0008000080002080ULL, /* psubq: opcode_2 mmx isub x86_style */
  0x000e000040002080ULL, /* paddusb: opcode_2 mmx iadd commutative vector_op x86_style */
  0x000e000040002080ULL, /* paddusw: opcode_2 mmx iadd commutative vector_op x86_style */
  0x000c000080002080ULL, /* psubusb: opcode_2 mmx isub vector_op x86_style */
  0x000c000080002080ULL, /* psubusw: opcode_2 mmx isub vector_op x86_style */
  0x000e000100002080ULL, /* pmullw: opcode_2 mmx imul commutative vector_op x86_style */
  0x000e000100002080ULL, /* pmulhw: opcode_2 mmx imul commutative vector_op x86_style */
  0x000e000100002080ULL, /* pmulhuw: opcode_2 mmx imul commutative vector_op x86_style */
  0x000e000100002080ULL, /* pmuludq: opcode_2 mmx imul commutative vector_op x86_style */
  0x0006000000002080ULL, /* pmaddwd: opcode_2 mmx commutative vector_op */
  0x000e000040000100ULL, /* paddsb128: opcode_3 iadd commutative vector_op x86_style */
  0x000e000040000100ULL, /* paddsw128: opcode_3 iadd commutative vector_op x86_style */
  0x000a000040000100ULL, /* paddq128: opcode_3 iadd commutative x86_style */
  0x000c000080000100ULL, /* psubsb128: opcode_3 isub vector_op x86_style */
  0x000c000080000100ULL, /* psubsw128: opcode_3 isub vector_op x86_style */
  0x0008000080000100ULL, /* psubq128: opcode_3 isub x86_style */
  0x000e000040000100ULL, /* paddusb128: opcode_3 iadd commutative vector_op x86_style */
  0x000e000040000100ULL, /* paddusw128: opcode_3 iadd commutative vector_op x86_style */
  0x000c000080000100ULL, /* psubusb128: opcode_3 isub vector_op x86_style */
  0x000c000080000100ULL, /* psubusw128: opcode_3 isub vector_op x86_style */
  0x000e000100000100ULL, /* pmullw128: opcode_3 imul commutative vector_op x86_style */
  0x000e000100000100ULL, /* pmulhw128: opcode_3 imul commutative vector_op x86_style */
  0x000e000100000100ULL, /* pmulhuw128: opcode_3 imul commutative vector_op x86_style */
  0x000e000100000100ULL, /* pmuludq128: opcode_3 imul commutative vector_op x86_style */
  0x0006000000000100ULL, /* pmaddwd128: opcode_3 commutative vector_op */
  0x000a400000000044ULL, /* and8: change_rflags opcode_1 iand commutative x86_style */
  0x000a400000000044ULL, /* and16: change_rflags opcode_1 iand commutative x86_style */
  0x000a400000000044ULL, /* and32: change_rflags opcode_1 iand commutative x86_style */
  0x0008400000004044ULL, /* andx32: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxx32: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxxx32: change_rflags opcode_1 load_exe iand x86_style */
  0x000a400000000044ULL, /* and64: change_rflags opcode_1 iand commutative x86_style */
  0x0008400000004044ULL, /* andx64: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxx64: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxxx64: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andx8: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andx16: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxx8: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxxx8: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxx16: change_rflags opcode_1 load_exe iand x86_style */
  0x0008400000004044ULL, /* andxxx16: change_rflags opcode_1 load_exe iand x86_style */
  0x000e000400000100ULL, /* and128v8: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* andx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxxx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x0000000000008004ULL, /* andxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andxr64_off: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* andixr64_off: change_rflags load_exe_store */
  0x000e000400000100ULL, /* and128v16: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* andx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxxx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* and128v32: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* andx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxxx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* and128v64: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* andx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* andxxx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x0008400000000004ULL, /* andi8: change_rflags iand x86_style */
  0x0008400000000004ULL, /* andi16: change_rflags iand x86_style */
  0x0008400000000044ULL, /* andi32: change_rflags opcode_1 iand x86_style */
  0x0008400000000044ULL, /* andi64: change_rflags opcode_1 iand x86_style */
  0x0000080000180040ULL, /* call: opcode_1 xfer call jump */
  0x0000100000180040ULL, /* icall: opcode_1 xfer call ijump */
  0x0000100000184040ULL, /* icallx: opcode_1 load_exe xfer call ijump */
  0x0000100000184040ULL, /* icallxx: opcode_1 load_exe xfer call ijump */
  0x0000100000184040ULL, /* icallxxx: opcode_1 load_exe xfer call ijump */
  0x0000800000000044ULL, /* cmp8: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpx8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxx8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxx8: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmp16: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpx16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxx16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxx16: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmp32: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpx32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxx32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxx32: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmp64: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpx64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxx64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxx64: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmpi8: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpxr8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxi8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxr8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxi8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxr8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxi8: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmpi16: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpxr16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxi16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxr16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxi16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxr16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxi16: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmpi32: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpxr32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxi32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxr32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxi32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxr32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxi32: change_rflags opcode_1 load_exe icmp */
  0x0000800000000044ULL, /* cmpi64: change_rflags opcode_1 icmp */
  0x0000800000004044ULL, /* cmpxr64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxi64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxr64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxi64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxr64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* cmpxxxi64: change_rflags opcode_1 load_exe icmp */
  0x0010000001000080ULL, /* cmovb: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovae: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovp: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovnp: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmove: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovne: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovbe: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmova: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovl: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovge: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovle: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovg: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovs: opcode_2 cond_move read_rflags */
  0x0010000001000080ULL, /* cmovns: opcode_2 cond_move read_rflags */
  0x0000000200000044ULL, /* div32: change_rflags opcode_1 idiv */
  0x0000000200000044ULL, /* div64: change_rflags opcode_1 idiv */
  0x0000000000000040ULL, /* enter: opcode_1 */
  0x0000000200000044ULL, /* idiv32: change_rflags opcode_1 idiv */
  0x0000000200000044ULL, /* idiv64: change_rflags opcode_1 idiv */
  0x000a000100000044ULL, /* imul32: change_rflags opcode_1 imul commutative x86_style */
  0x0000000100000044ULL, /* imulx32: change_rflags opcode_1 imul */
  0x000a000100000044ULL, /* imul64: change_rflags opcode_1 imul commutative x86_style */
  0x0008000100000044ULL, /* imuli32: change_rflags opcode_1 imul x86_style */
  0x0008000100000044ULL, /* imuli64: change_rflags opcode_1 imul x86_style */
  0x0000000100000044ULL, /* imulx64: change_rflags opcode_1 imul */
  0x000e002400000100ULL, /* mul128v16: opcode_3 flop fmul commutative vector_op x86_style */
  0x0008000040000044ULL, /* inc8: change_rflags opcode_1 iadd x86_style */
  0x0008000080000044ULL, /* dec8: change_rflags opcode_1 isub x86_style */
  0x0008000040000044ULL, /* inc16: change_rflags opcode_1 iadd x86_style */
  0x0008000080000044ULL, /* dec16: change_rflags opcode_1 isub x86_style */
  0x0008000040000044ULL, /* inc32: change_rflags opcode_1 iadd x86_style */
  0x0008000080000044ULL, /* dec32: change_rflags opcode_1 isub x86_style */
  0x0008000040000044ULL, /* inc64: change_rflags opcode_1 iadd x86_style */
  0x0008000080000044ULL, /* dec64: change_rflags opcode_1 isub x86_style */
  0x0000000000008004ULL, /* incxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* incxr64_off: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* decxr64_off: change_rflags load_exe_store */
  0x0010000000280040ULL, /* jb: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jae: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jp: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jnp: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* je: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jne: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jbe: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* ja: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jl: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jge: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jle: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jg: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jcxz: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jecxz: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jrcxz: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* js: opcode_1 xfer cond read_rflags */
  0x0010000000280040ULL, /* jns: opcode_1 xfer cond read_rflags */
  0x0000080000080040ULL, /* jmp: opcode_1 xfer jump */
  0x0000100000080040ULL, /* ijmp: opcode_1 xfer ijump */
  0x0000100000084040ULL, /* ijmpx: opcode_1 load_exe xfer ijump */
  0x0000100000084040ULL, /* ijmpxx: opcode_1 load_exe xfer ijump */
  0x0000100000084040ULL, /* ijmpxxx: opcode_1 load_exe xfer ijump */
  0x0000000000000440ULL, /* ld64: opcode_1 load */
  0x0000000000000440ULL, /* ldx64: opcode_1 load */
  0x0000000000000440ULL, /* ldxx64: opcode_1 load */
  0x0000000000002480ULL, /* ld64_2m: opcode_2 load mmx */
  0x0004000000000500ULL, /* ld64_2sse: opcode_3 load vector_op */
  0x0000000040000040ULL, /* lea32: opcode_1 iadd */
  0x0000000040000040ULL, /* lea64: opcode_1 iadd */
  0x0000000000000040ULL, /* leax32: opcode_1 */
  0x0000000000000040ULL, /* leax64: opcode_1 */
  0x0000000000000040ULL, /* leaxx32: opcode_1 */
  0x0000000000000040ULL, /* leaxx64: opcode_1 */
  0x0000000000000040ULL, /* leave: opcode_1 */
  0x0000000000000048ULL, /* ldc32: move opcode_1 */
  0x0000000000000048ULL, /* ldc64: move opcode_1 */
  0x0000000100000044ULL, /* mul32: change_rflags opcode_1 imul */
  0x0000000100000044ULL, /* mulx64: change_rflags opcode_1 imul */
  0x0000000000000048ULL, /* mov32: move opcode_1 */
  0x0000000000000048ULL, /* mov64: move opcode_1 */
  0x0000000000002088ULL, /* mov64_m: move opcode_2 mmx */
  0x0000000000000440ULL, /* ld32_64_off: opcode_1 load */
  0x0000000000000440ULL, /* ld64_off: opcode_1 load */
  0x0000000000020040ULL, /* store64_off: opcode_1 store */
  0x0000000000020000ULL, /* storei64_off: store */
  0x0000000000000c40ULL, /* ld8_32_n32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldu8_32_n32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ld16_32_n32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldu16_32_n32: opcode_1 load load_ext */
  0x0000000000000440ULL, /* ld32_n32: opcode_1 load */
  0x0000000400000500ULL, /* ldss_n32: opcode_3 load flop */
  0x0000000400000500ULL, /* ldsd_n32: opcode_3 load flop */
  0x0404000400000500ULL, /* ldaps_n32: opcode_3 load flop vector_op vector_packed_single */
  0x0804000400000500ULL, /* ldapd_n32: opcode_3 load flop vector_op vector_packed_double */
  0x0404000400000480ULL, /* ldups_n32: opcode_2 load flop vector_op vector_packed_single */
  0x0804000400000500ULL, /* ldupd_n32: opcode_3 load flop vector_op vector_packed_double */
  0x0004000400000500ULL, /* lddqa_n32: opcode_3 load flop vector_op */
  0x0004000404000500ULL, /* lddqu_n32: opcode_3 load unalign_ld flop vector_op */
  0x0404000400000480ULL, /* ldlps_n32: opcode_2 load flop vector_op vector_packed_single */
  0x0804000400000500ULL, /* ldlpd_n32: opcode_3 load flop vector_op vector_packed_double */
  0x0404000400000480ULL, /* ldhps_n32: opcode_2 load flop vector_op vector_packed_single */
  0x0804000400000500ULL, /* ldhpd_n32: opcode_3 load flop vector_op vector_packed_double */
  0x00000000000024c0ULL, /* ld64_2m_n32: opcode_1 opcode_2 load mmx */
  0x0004000000000540ULL, /* ld64_2sse_n32: opcode_1 opcode_3 load vector_op */
  0x0000000000020040ULL, /* store8_n32: opcode_1 store */
  0x0000000000020000ULL, /* storei8_n32: store */
  0x0000000000020040ULL, /* store16_n32: opcode_1 store */
  0x0000000000020000ULL, /* storei16_n32: store */
  0x0000000000020040ULL, /* store32_n32: opcode_1 store */
  0x0000000000020000ULL, /* storei32_n32: store */
  0x0000000400020100ULL, /* stss_n32: opcode_3 store flop */
  0x0000000400020100ULL, /* stsd_n32: opcode_3 store flop */
  0x0004000400020100ULL, /* staps_n32: opcode_3 store flop vector_op */
  0x0004000400020100ULL, /* stapd_n32: opcode_3 store flop vector_op */
  0x0004000400020100ULL, /* stdqa_n32: opcode_3 store flop vector_op */
  0x0004000408020100ULL, /* stdqu_n32: opcode_3 store unalign_store flop vector_op */
  0x0004000400020080ULL, /* stlps_n32: opcode_2 store flop vector_op */
  0x0084000400020080ULL, /* sthps_n32: opcode_2 store flop vector_op fastpath_db */
  0x0004000400020100ULL, /* stlpd_n32: opcode_3 store flop vector_op */
  0x0084000400020100ULL, /* sthpd_n32: opcode_3 store flop vector_op fastpath_db */
  0x0000000000022080ULL, /* store64_fm_n32: opcode_2 mmx store */
  0x0004000000020140ULL, /* store64_fsse_n32: opcode_1 opcode_3 store vector_op */
  0x0000000000000040ULL, /* ld32_gs_seg_off: opcode_1 */
  0x0000000000000040ULL, /* ld64_fs_seg_off: opcode_1 */
  0x0000000000000050ULL, /* movsbl: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ld8_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldx8_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxx8_32: opcode_1 load load_ext */
  0x0000000000000050ULL, /* movzbl: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ldu8_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxu8_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxxu8_32: opcode_1 load load_ext */
  0x0000000000000050ULL, /* movswl: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ld16_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldx16_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxx16_32: opcode_1 load load_ext */
  0x0000000000000050ULL, /* movzwl: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ldu16_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxu16_32: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxxu16_32: opcode_1 load load_ext */
  0x0000000000000050ULL, /* movsbq: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ld8_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldx8_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxx8_64: opcode_1 load load_ext */
  0x0000000000000440ULL, /* ld8_64_off: opcode_1 load */
  0x0000000000000050ULL, /* movzbq: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ldu8_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxu8_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxxu8_64: opcode_1 load load_ext */
  0x0000000000000440ULL, /* ldu8_64_off: opcode_1 load */
  0x0000000000000050ULL, /* movswq: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ld16_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldx16_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxx16_64: opcode_1 load load_ext */
  0x0000000000000440ULL, /* ld16_64_off: opcode_1 load */
  0x0000000000000050ULL, /* movzwq: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ldu16_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxu16_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxxu16_64: opcode_1 load load_ext */
  0x0000000000000440ULL, /* ldu16_64_off: opcode_1 load */
  0x0000000000000050ULL, /* movslq: move_ext opcode_1 */
  0x0000000000000c40ULL, /* ld32_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldx32_64: opcode_1 load load_ext */
  0x0000000000000c40ULL, /* ldxx32_64: opcode_1 load load_ext */
  0x0000000000000440ULL, /* ld32: opcode_1 load */
  0x0000000000000440ULL, /* ldx32: opcode_1 load */
  0x0000000000000440ULL, /* ldxx32: opcode_1 load */
  0x0000000000000050ULL, /* movzlq: move_ext opcode_1 */
  0x0000000000000040ULL, /* neg8: opcode_1 */
  0x0000000000000040ULL, /* neg16: opcode_1 */
  0x0008000000000044ULL, /* neg32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* neg64: change_rflags opcode_1 x86_style */
  0x0000000000008004ULL, /* negxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* negxr64_off: change_rflags load_exe_store */
  0x0000000000000040ULL, /* not8: opcode_1 */
  0x0000000000000040ULL, /* not16: opcode_1 */
  0x0008000000000040ULL, /* not32: opcode_1 x86_style */
  0x0008000000000040ULL, /* not64: opcode_1 x86_style */
  0x0000000000008000ULL, /* notxr8: load_exe_store */
  0x0000000000008000ULL, /* notxxr8: load_exe_store */
  0x0000000000008000ULL, /* notxxxr8: load_exe_store */
  0x0000000000008000ULL, /* notxr8_n32: load_exe_store */
  0x0000000000008000ULL, /* notxr16: load_exe_store */
  0x0000000000008000ULL, /* notxxr16: load_exe_store */
  0x0000000000008000ULL, /* notxxxr16: load_exe_store */
  0x0000000000008000ULL, /* notxr16_n32: load_exe_store */
  0x0000000000008000ULL, /* notxr32: load_exe_store */
  0x0000000000008000ULL, /* notxxr32: load_exe_store */
  0x0000000000008000ULL, /* notxxxr32: load_exe_store */
  0x0000000000008000ULL, /* notxr32_n32: load_exe_store */
  0x0000000000008000ULL, /* notxr64: load_exe_store */
  0x0000000000008000ULL, /* notxxr64: load_exe_store */
  0x0000000000008000ULL, /* notxxxr64: load_exe_store */
  0x0000000000008000ULL, /* notxr64_off: load_exe_store */
  0x000a040000000044ULL, /* or8: change_rflags opcode_1 ior commutative x86_style */
  0x000a040000000044ULL, /* or16: change_rflags opcode_1 ior commutative x86_style */
  0x000a040000000044ULL, /* or32: change_rflags opcode_1 ior commutative x86_style */
  0x0008040000004044ULL, /* orx32: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxx32: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxxx32: change_rflags opcode_1 load_exe ior x86_style */
  0x000a040000000044ULL, /* or64: change_rflags opcode_1 ior commutative x86_style */
  0x0008040000004044ULL, /* orx64: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxx64: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxxx64: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orx8: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orx16: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxx8: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxxx8: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxx16: change_rflags opcode_1 load_exe ior x86_style */
  0x0008040000004044ULL, /* orxxx16: change_rflags opcode_1 load_exe ior x86_style */
  0x0000000000008004ULL, /* orxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orxr64_off: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* orixr64_off: change_rflags load_exe_store */
  0x000e000400000100ULL, /* or128v8: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* orx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxxx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* or128v16: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* orx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxxx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* or128v32: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* orx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxxx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* or128v64: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* orx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* orxxx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x0008040000000004ULL, /* ori8: change_rflags ior x86_style */
  0x0008040000000004ULL, /* ori16: change_rflags ior x86_style */
  0x0008040000000044ULL, /* ori32: change_rflags opcode_1 ior x86_style */
  0x0008040000000044ULL, /* ori64: change_rflags opcode_1 ior x86_style */
  0x0020000000000040ULL, /* popl: opcode_1 side_effects */
  0x0020000000000040ULL, /* popq: opcode_1 side_effects */
  0x0000000000000040ULL, /* pushl: opcode_1 */
  0x0000000000000040ULL, /* pushq: opcode_1 */
  0x0000100000080040ULL, /* ret: opcode_1 xfer ijump */
  0x0000100000080040ULL, /* reti: opcode_1 xfer ijump */
  0x0008000000000044ULL, /* ror8: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* ror16: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* ror32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* ror64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rori8: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rori16: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rori32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rori64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rol8: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rol16: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rol32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* rol64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* roli8: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* roli16: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* roli32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* roli64: change_rflags opcode_1 x86_style */
  0x0000000000040040ULL, /* prefetch: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchw: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetcht0: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetcht1: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchnta: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchx: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchxx: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchwx: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchwxx: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetcht0x: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetcht0xx: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetcht1x: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetcht1xx: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchntax: opcode_1 prefetch */
  0x0000000000040040ULL, /* prefetchntaxx: opcode_1 prefetch */
  0x0010000000800040ULL, /* setb: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setae: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setp: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setnp: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* sete: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setne: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setbe: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* seta: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setl: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setge: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setle: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setg: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setc: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* seto: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* sets: opcode_1 cond_set read_rflags */
  0x0010000000800040ULL, /* setz: opcode_1 cond_set read_rflags */
  0x0000000000020040ULL, /* store8: opcode_1 store */
  0x0000000000020000ULL, /* storei8: store */
  0x0000000000020040ULL, /* storex8: opcode_1 store */
  0x0000000000020000ULL, /* storeix8: store */
  0x0000000000020040ULL, /* storexx8: opcode_1 store */
  0x0000000000020000ULL, /* storeixx8: store */
  0x0000000000020040ULL, /* store16: opcode_1 store */
  0x0000000000020000ULL, /* storei16: store */
  0x0000000000020040ULL, /* storex16: opcode_1 store */
  0x0000000000020000ULL, /* storeix16: store */
  0x0000000000020040ULL, /* storexx16: opcode_1 store */
  0x0000000000020000ULL, /* storeixx16: store */
  0x0000000000020040ULL, /* store32: opcode_1 store */
  0x0000000000020000ULL, /* storei32: store */
  0x0000000000020040ULL, /* storex32: opcode_1 store */
  0x0000000000020000ULL, /* storeix32: store */
  0x0000000000020040ULL, /* storexx32: opcode_1 store */
  0x0000000000020000ULL, /* storeixx32: store */
  0x0000000000020040ULL, /* store64: opcode_1 store */
  0x0000000000020000ULL, /* storei64: store */
  0x0000000000020040ULL, /* storex64: opcode_1 store */
  0x0000000000020000ULL, /* storeix64: store */
  0x0000000000020040ULL, /* storexx64: opcode_1 store */
  0x0000000000020000ULL, /* storeixx64: store */
  0x0000000000022080ULL, /* store64_fm: opcode_2 mmx store */
  0x0004000000020100ULL, /* store64_fsse: opcode_3 store vector_op */
  0x0000000000030040ULL, /* storenti32: opcode_1 nt_store store */
  0x0000000000030040ULL, /* storentix32: opcode_1 nt_store store */
  0x0000000000030040ULL, /* storentixx32: opcode_1 nt_store store */
  0x0000000000030040ULL, /* storenti64: opcode_1 nt_store store */
  0x0000000000030040ULL, /* storentix64: opcode_1 nt_store store */
  0x0000000000030040ULL, /* storentixx64: opcode_1 nt_store store */
  0x0004000400030040ULL, /* storenti128: opcode_1 nt_store store flop vector_op */
  0x0008000000000044ULL, /* sar32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* sar64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* sari32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* sari64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shl32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shld32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shldi32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shrd32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shrdi32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shl64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shli32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shli64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shr32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shr64: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shri32: change_rflags opcode_1 x86_style */
  0x0008000000000044ULL, /* shri64: change_rflags opcode_1 x86_style */
  0x0008000080000004ULL, /* sub8: change_rflags isub x86_style */
  0x0008000080000004ULL, /* sub16: change_rflags isub x86_style */
  0x0008000080000044ULL, /* sub32: change_rflags opcode_1 isub x86_style */
  0x0018000000000044ULL, /* sbb32: change_rflags opcode_1 x86_style read_rflags */
  0x0008000080000044ULL, /* sub64: change_rflags opcode_1 isub x86_style */
  0x0008000080004044ULL, /* subx32: change_rflags opcode_1 load_exe isub x86_style */
  0x0008000080004044ULL, /* subx64: change_rflags opcode_1 load_exe isub x86_style */
  0x0008000080004044ULL, /* subxx32: change_rflags opcode_1 load_exe isub x86_style */
  0x0008000080004044ULL, /* subxxx32: change_rflags opcode_1 load_exe isub x86_style */
  0x0008000080004044ULL, /* subxx64: change_rflags opcode_1 load_exe isub x86_style */
  0x0008000080004044ULL, /* subxxx64: change_rflags opcode_1 load_exe isub x86_style */
  0x0008000080000004ULL, /* subi8: change_rflags isub x86_style */
  0x0008000080000004ULL, /* subi16: change_rflags isub x86_style */
  0x0008000080000044ULL, /* subi32: change_rflags opcode_1 isub x86_style */
  0x0018000000000044ULL, /* sbbi32: change_rflags opcode_1 x86_style read_rflags */
  0x0008000080000044ULL, /* subi64: change_rflags opcode_1 isub x86_style */
  0x0000000000008004ULL, /* subxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subxr64_off: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* subixr64_off: change_rflags load_exe_store */
  0x000c001400000100ULL, /* sub128v8: opcode_3 flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subx128v8: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxx128v8: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxxx128v8: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400000100ULL, /* sub128v16: opcode_3 flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subx128v16: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxx128v16: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxxx128v16: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400000100ULL, /* sub128v32: opcode_3 flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subx128v32: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxx128v32: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxxx128v32: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400000100ULL, /* sub128v64: opcode_3 flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subx128v64: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxx128v64: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400004100ULL, /* subxxx128v64: opcode_3 load_exe flop fsub vector_op x86_style */
  0x000c001400002080ULL, /* sub64v8: opcode_2 mmx flop fsub vector_op x86_style */
  0x000c001400002080ULL, /* sub64v16: opcode_2 mmx flop fsub vector_op x86_style */
  0x000c001400002080ULL, /* sub64v32: opcode_2 mmx flop fsub vector_op x86_style */
  0x0002800000000044ULL, /* test8: change_rflags opcode_1 icmp commutative */
  0x0000800000004044ULL, /* testx8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* testxx8: change_rflags opcode_1 load_exe icmp */
  0x0000800000004040ULL, /* testxxx8: opcode_1 load_exe icmp */
  0x0002800000000044ULL, /* test16: change_rflags opcode_1 icmp commutative */
  0x0000800000004044ULL, /* testx16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* testxx16: change_rflags opcode_1 load_exe icmp */
  0x0000800000004040ULL, /* testxxx16: opcode_1 load_exe icmp */
  0x0002800000000044ULL, /* test32: change_rflags opcode_1 icmp commutative */
  0x0000800000004044ULL, /* testx32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* testxx32: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* testxxx32: change_rflags opcode_1 load_exe icmp */
  0x0002800000000044ULL, /* test64: change_rflags opcode_1 icmp commutative */
  0x0000800000004044ULL, /* testx64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* testxx64: change_rflags opcode_1 load_exe icmp */
  0x0000800000004044ULL, /* testxxx64: change_rflags opcode_1 load_exe icmp */
  0x0000800000000004ULL, /* testi8: change_rflags icmp */
  0x0000800000000004ULL, /* testi16: change_rflags icmp */
  0x0000800000000044ULL, /* testi32: change_rflags opcode_1 icmp */
  0x0000800000000044ULL, /* testi64: change_rflags opcode_1 icmp */
  0x000a200000000044ULL, /* xor8: change_rflags opcode_1 ixor commutative x86_style */
  0x000a200000000044ULL, /* xor16: change_rflags opcode_1 ixor commutative x86_style */
  0x000a200000000044ULL, /* xor32: change_rflags opcode_1 ixor commutative x86_style */
  0x0008200000004044ULL, /* xorx32: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxx32: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxxx32: change_rflags opcode_1 load_exe ixor x86_style */
  0x000a200000000044ULL, /* xor64: change_rflags opcode_1 ixor commutative x86_style */
  0x0008200000004044ULL, /* xorx64: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxx64: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxxx64: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorx8: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorx16: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxx8: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxxx8: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxx16: change_rflags opcode_1 load_exe ixor x86_style */
  0x0008200000004044ULL, /* xorxxx16: change_rflags opcode_1 load_exe ixor x86_style */
  0x0000000000008004ULL, /* xorxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorxr64_off: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxxr8: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr8_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxxr16: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr16_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxxr32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr32_n32: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixxxr64: change_rflags load_exe_store */
  0x0000000000008004ULL, /* xorixr64_off: change_rflags load_exe_store */
  0x000e000400000100ULL, /* xor128v8: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* xorx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxxx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* xor128v16: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* xorx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxxx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* xor128v32: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* xorx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxxx128v32: opcode_3 load_exe flop vector_op x86_style */
  0x000e000400000100ULL, /* xor128v64: opcode_3 flop commutative vector_op x86_style */
  0x000c000400004100ULL, /* xorx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* xorxxx128v64: opcode_3 load_exe flop vector_op x86_style */
  0x0008200000000004ULL, /* xori8: change_rflags ixor x86_style */
  0x0008200000000004ULL, /* xori16: change_rflags ixor x86_style */
  0x0008200000000044ULL, /* xori32: change_rflags opcode_1 ixor x86_style */
  0x0008200000000044ULL, /* xori64: change_rflags opcode_1 ixor x86_style */
  0x040e000400000080ULL, /* fxor128v32: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fxorx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fxorxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fxorxxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x080e000400000080ULL, /* fxor128v64: opcode_2 flop commutative vector_op x86_style vector_packed_double */
  0x080c000400004080ULL, /* fxorx128v64: opcode_2 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004080ULL, /* fxorxx128v64: opcode_2 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004080ULL, /* fxorxxx128v64: opcode_2 load_exe flop vector_op x86_style vector_packed_double */
  0x040e000400000080ULL, /* xorps: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x080e000400000080ULL, /* xorpd: opcode_2 flop commutative vector_op x86_style vector_packed_double */
  0x000a000c00000100ULL, /* addsd: opcode_3 flop fadd commutative x86_style */
  0x000a000c00000100ULL, /* addss: opcode_3 flop fadd commutative x86_style */
  0x0008000c00004100ULL, /* addxsd: opcode_3 load_exe flop fadd x86_style */
  0x0008000c00004100ULL, /* addxss: opcode_3 load_exe flop fadd x86_style */
  0x0008000c00004100ULL, /* addxxsd: opcode_3 load_exe flop fadd x86_style */
  0x0008000400004100ULL, /* addxxxsd: opcode_3 load_exe flop x86_style */
  0x0008000c00004100ULL, /* addxxss: opcode_3 load_exe flop fadd x86_style */
  0x0008000400004100ULL, /* addxxxss: opcode_3 load_exe flop x86_style */
  0x040c000400000100ULL, /* faddsub128v32: opcode_3 flop vector_op x86_style vector_packed_single */
  0x040c000400004100ULL, /* faddsubx128v32: opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004100ULL, /* faddsubxx128v32: opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004100ULL, /* faddsubxxx128v32: opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x080c000400000100ULL, /* faddsub128v64: opcode_3 flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* faddsubx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* faddsubxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* faddsubxxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x040e000c00000080ULL, /* fadd128v32: opcode_2 flop fadd commutative vector_op x86_style vector_packed_single */
  0x040c000c00004080ULL, /* faddx128v32: opcode_2 load_exe flop fadd vector_op x86_style vector_packed_single */
  0x040c000c00004080ULL, /* faddxx128v32: opcode_2 load_exe flop fadd vector_op x86_style vector_packed_single */
  0x040c000c00004080ULL, /* faddxxx128v32: opcode_2 load_exe flop fadd vector_op x86_style vector_packed_single */
  0x080e000c00000100ULL, /* fadd128v64: opcode_3 flop fadd commutative vector_op x86_style vector_packed_double */
  0x080c000c00004100ULL, /* faddx128v64: opcode_3 load_exe flop fadd vector_op x86_style vector_packed_double */
  0x080c000c00004100ULL, /* faddxx128v64: opcode_3 load_exe flop fadd vector_op x86_style vector_packed_double */
  0x080c000c00004100ULL, /* faddxxx128v64: opcode_3 load_exe flop fadd vector_op x86_style vector_packed_double */
  0x040c000400000120ULL, /* fhadd128v32: mcode opcode_3 flop vector_op x86_style vector_packed_single */
  0x040c000400004120ULL, /* fhaddx128v32: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004120ULL, /* fhaddxx128v32: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004120ULL, /* fhaddxxx128v32: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x080c000400000120ULL, /* fhadd128v64: mcode opcode_3 flop vector_op x86_style vector_packed_double */
  0x080c000400004120ULL, /* fhaddx128v64: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004120ULL, /* fhaddxx128v64: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004120ULL, /* fhaddxxx128v64: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x040e000400000080ULL, /* fand128v32: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fandx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fandxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fandxxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x080e000400000100ULL, /* fand128v64: opcode_3 flop commutative vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fandx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fandxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fandxxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x040e000400000080ULL, /* andps: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x080e000400000100ULL, /* andpd: opcode_3 flop commutative vector_op x86_style vector_packed_double */
  0x0408000400000100ULL, /* andnps: opcode_3 flop x86_style vector_packed_single */
  0x0808000400000100ULL, /* andnpd: opcode_3 flop x86_style vector_packed_double */
  0x040e000400000080ULL, /* for128v32: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* forx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* forxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* forxxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x080e000400000100ULL, /* for128v64: opcode_3 flop commutative vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* forx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* forxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* forxxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x040e000400000080ULL, /* orps: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x080e000400000100ULL, /* orpd: opcode_3 flop commutative vector_op x86_style vector_packed_double */
  0x0080800400000104ULL, /* comisd: change_rflags opcode_3 flop icmp fastpath_db */
  0x0080800400004104ULL, /* comixsd: change_rflags opcode_3 load_exe flop icmp fastpath_db */
  0x0080800400004104ULL, /* comixxsd: change_rflags opcode_3 load_exe flop icmp fastpath_db */
  0x0080800400004104ULL, /* comixxxsd: change_rflags opcode_3 load_exe flop icmp fastpath_db */
  0x0080800400000084ULL, /* comiss: change_rflags opcode_2 flop icmp fastpath_db */
  0x0080800400004084ULL, /* comixss: change_rflags opcode_2 load_exe flop icmp fastpath_db */
  0x0080800400004084ULL, /* comixxss: change_rflags opcode_2 load_exe flop icmp fastpath_db */
  0x0080800400004084ULL, /* comixxxss: change_rflags opcode_2 load_exe flop icmp fastpath_db */
  0x0008000400000100ULL, /* cmpss: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpsd: opcode_3 flop x86_style */
  0x040c000400000080ULL, /* cmpps: opcode_2 flop vector_op x86_style vector_packed_single */
  0x080c000400000100ULL, /* cmppd: opcode_3 flop vector_op x86_style vector_packed_double */
  0x000c000400000100ULL, /* cmpeq128v8: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* cmpeq128v16: opcode_3 flop vector_op x86_style */
  0x040c000400000100ULL, /* cmpeq128v32: opcode_3 flop vector_op x86_style vector_packed_single */
  0x000c000400004100ULL, /* cmpeqx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* cmpeqx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x040c000400004100ULL, /* cmpeqx128v32: opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x0004000400004100ULL, /* cmpeqxx128v8: opcode_3 load_exe flop vector_op */
  0x0004000400004100ULL, /* cmpeqxx128v16: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cmpeqxx128v32: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0004000400004100ULL, /* cmpeqxxx128v8: opcode_3 load_exe flop vector_op */
  0x0004000400004100ULL, /* cmpeqxxx128v16: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cmpeqxxx128v32: opcode_3 load_exe flop vector_op vector_packed_single */
  0x000c000400000100ULL, /* cmpgt128v8: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* cmpgt128v16: opcode_3 flop vector_op x86_style */
  0x040c000400000100ULL, /* cmpgt128v32: opcode_3 flop vector_op x86_style vector_packed_single */
  0x000c000400004100ULL, /* cmpgtx128v8: opcode_3 load_exe flop vector_op x86_style */
  0x000c000400004100ULL, /* cmpgtx128v16: opcode_3 load_exe flop vector_op x86_style */
  0x040c000400004100ULL, /* cmpgtx128v32: opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x0004000400004100ULL, /* cmpgtxx128v8: opcode_3 load_exe flop vector_op */
  0x0004000400004100ULL, /* cmpgtxx128v16: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cmpgtxx128v32: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0004000400004100ULL, /* cmpgtxxx128v8: opcode_3 load_exe flop vector_op */
  0x0004000400004100ULL, /* cmpgtxxx128v16: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cmpgtxxx128v32: opcode_3 load_exe flop vector_op vector_packed_single */
  0x000c000400002100ULL, /* pcmpeqb: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* pcmpeqw: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* pcmpeqd: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* pcmpgtb: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* pcmpgtw: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* pcmpgtd: opcode_3 mmx flop vector_op x86_style */
  0x0000000000000100ULL, /* fmovsldup: opcode_3 */
  0x0000000000000100ULL, /* fmovshdup: opcode_3 */
  0x0000000000000100ULL, /* fmovddup: opcode_3 */
  0x0000000000000d00ULL, /* fmovsldupx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovshdupx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovddupx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovsldupxx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovshdupxx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovddupxx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovsldupxxx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovshdupxxx: opcode_3 load load_ext */
  0x0000000000000d00ULL, /* fmovddupxxx: opcode_3 load load_ext */
  0x0000000000000040ULL, /* cltd: opcode_1 */
  0x0000000000000040ULL, /* cqto: opcode_1 */
  0x0000000400000100ULL, /* cvtss2sd: opcode_3 flop */
  0x0000000400000100ULL, /* cvtsd2ss: opcode_3 flop */
  0x0000000400004100ULL, /* cvtsd2ss_x: opcode_3 load_exe flop */
  0x0000000400004100ULL, /* cvtsd2ss_xx: opcode_3 load_exe flop */
  0x0000000400004100ULL, /* cvtsd2ss_xxx: opcode_3 load_exe flop */
  0x0080000400000100ULL, /* cvtsi2sd: opcode_3 flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2sd_x: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2sd_xx: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2sd_xxx: opcode_3 load_exe flop fastpath_db */
  0x0080000400000100ULL, /* cvtsi2ss: opcode_3 flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2ss_x: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2ss_xx: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2ss_xxx: opcode_3 load_exe flop fastpath_db */
  0x0080000400000100ULL, /* cvtsi2sdq: opcode_3 flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2sdq_x: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2sdq_xx: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2sdq_xxx: opcode_3 load_exe flop fastpath_db */
  0x0080000400000100ULL, /* cvtsi2ssq: opcode_3 flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2ssq_x: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2ssq_xx: opcode_3 load_exe flop fastpath_db */
  0x0080000400004100ULL, /* cvtsi2ssq_xxx: opcode_3 load_exe flop fastpath_db */
  0x0080000400000100ULL, /* cvtss2si: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvtsd2si: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvtss2siq: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvtsd2siq: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvttss2si: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvttsd2si: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvttss2siq: opcode_3 flop fastpath_db */
  0x0080000400000100ULL, /* cvttsd2siq: opcode_3 flop fastpath_db */
  0x0884000400000100ULL, /* cvtdq2pd: opcode_3 flop vector_op fastpath_db vector_packed_double */
  0x0404000400000080ULL, /* cvtdq2ps: opcode_2 flop vector_op vector_packed_single */
  0x0084000400000080ULL, /* cvtps2pd: opcode_2 flop vector_op fastpath_db */
  0x0084000400000100ULL, /* cvtpd2ps: opcode_3 flop vector_op fastpath_db */
  0x0400000400000100ULL, /* cvtps2dq: opcode_3 flop vector_packed_single */
  0x0400000400000100ULL, /* cvttps2dq: opcode_3 flop vector_packed_single */
  0x0800000400000100ULL, /* cvtpd2dq: opcode_3 flop vector_packed_double */
  0x0880000400000100ULL, /* cvttpd2dq: opcode_3 flop fastpath_db vector_packed_double */
  0x0884000400004100ULL, /* cvtdq2pd_x: opcode_3 load_exe flop vector_op fastpath_db vector_packed_double */
  0x0404000400004080ULL, /* cvtdq2ps_x: opcode_2 load_exe flop vector_op vector_packed_single */
  0x0084000400004080ULL, /* cvtps2pd_x: opcode_2 load_exe flop vector_op fastpath_db */
  0x0084000400004100ULL, /* cvtpd2ps_x: opcode_3 load_exe flop vector_op fastpath_db */
  0x0404000400004100ULL, /* cvtps2dq_x: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0004000400004100ULL, /* cvtpd2dq_x: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cvttps2dq_x: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0884000400004100ULL, /* cvttpd2dq_x: opcode_3 load_exe flop vector_op fastpath_db vector_packed_double */
  0x0884000400004100ULL, /* cvtdq2pd_xx: opcode_3 load_exe flop vector_op fastpath_db vector_packed_double */
  0x0404000400004080ULL, /* cvtdq2ps_xx: opcode_2 load_exe flop vector_op vector_packed_single */
  0x0084000400004080ULL, /* cvtps2pd_xx: opcode_2 load_exe flop vector_op fastpath_db */
  0x0084000400004100ULL, /* cvtpd2ps_xx: opcode_3 load_exe flop vector_op fastpath_db */
  0x0404000400004100ULL, /* cvtps2dq_xx: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0004000400004100ULL, /* cvtpd2dq_xx: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cvttps2dq_xx: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0884000400004100ULL, /* cvttpd2dq_xx: opcode_3 load_exe flop vector_op fastpath_db vector_packed_double */
  0x0884000400004100ULL, /* cvtdq2pd_xxx: opcode_3 load_exe flop vector_op fastpath_db vector_packed_double */
  0x0404000400004080ULL, /* cvtdq2ps_xxx: opcode_2 load_exe flop vector_op vector_packed_single */
  0x0084000400004080ULL, /* cvtps2pd_xxx: opcode_2 load_exe flop vector_op fastpath_db */
  0x0084000400004100ULL, /* cvtpd2ps_xxx: opcode_3 load_exe flop vector_op fastpath_db */
  0x0404000400004100ULL, /* cvtps2dq_xxx: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0004000400004100ULL, /* cvtpd2dq_xxx: opcode_3 load_exe flop vector_op */
  0x0404000400004100ULL, /* cvttps2dq_xxx: opcode_3 load_exe flop vector_op vector_packed_single */
  0x0884000400004100ULL, /* cvttpd2dq_xxx: opcode_3 load_exe flop vector_op fastpath_db vector_packed_double */
  0x0404000400000080ULL, /* cvtpi2ps: opcode_2 flop vector_op vector_packed_single */
  0x0404000400000080ULL, /* cvtps2pi: opcode_2 flop vector_op vector_packed_single */
  0x0404000400000080ULL, /* cvttps2pi: opcode_2 flop vector_op vector_packed_single */
  0x0884000400000100ULL, /* cvtpi2pd: opcode_3 flop vector_op fastpath_db vector_packed_double */
  0x0884000400000100ULL, /* cvtpd2pi: opcode_3 flop vector_op fastpath_db vector_packed_double */
  0x0884000400000100ULL, /* cvttpd2pi: opcode_3 flop vector_op fastpath_db vector_packed_double */
  0x0000000400000500ULL, /* ldsd: opcode_3 load flop */
  0x0000000400000500ULL, /* ldsdx: opcode_3 load flop */
  0x0000000400000500ULL, /* ldsdxx: opcode_3 load flop */
  0x0000000400000500ULL, /* ldss: opcode_3 load flop */
  0x0000000400000500ULL, /* ldssx: opcode_3 load flop */
  0x0000000400000500ULL, /* ldssxx: opcode_3 load flop */
  0x0004000400000500ULL, /* lddqa: opcode_3 load flop vector_op */
  0x0004000404000500ULL, /* lddqu: opcode_3 load unalign_ld flop vector_op */
  0x0504000404000400ULL, /* ldlps: load unalign_ld flop vector_op vector_lo_loadstore vector_packed_single */
  0x0604000404000400ULL, /* ldhps: load unalign_ld flop vector_op vector_high_loadstore vector_packed_single */
  0x0904000404000500ULL, /* ldlpd: opcode_3 load unalign_ld flop vector_op vector_lo_loadstore vector_packed_double */
  0x0a04000404000500ULL, /* ldhpd: opcode_3 load unalign_ld flop vector_op vector_high_loadstore vector_packed_double */
  0x0004000400020100ULL, /* stdqa: opcode_3 store flop vector_op */
  0x0004000408020100ULL, /* stdqu: opcode_3 store unalign_store flop vector_op */
  0x0104000408020080ULL, /* stlps: opcode_2 store unalign_store flop vector_op vector_lo_loadstore */
  0x0284000408020080ULL, /* sthps: opcode_2 store unalign_store flop vector_op fastpath_db vector_high_loadstore */
  0x0104000408020100ULL, /* stlpd: opcode_3 store unalign_store flop vector_op vector_lo_loadstore */
  0x0104000408020100ULL, /* storelpd: opcode_3 store unalign_store flop vector_op vector_lo_loadstore */
  0x0284000408020100ULL, /* sthpd: opcode_3 store unalign_store flop vector_op fastpath_db vector_high_loadstore */
  0x0004000400030100ULL, /* stntpd: opcode_3 nt_store store flop vector_op */
  0x0004000400030080ULL, /* stntps: opcode_2 nt_store store flop vector_op */
  0x0004000000032080ULL, /* storent64_fm: opcode_2 mmx nt_store store vector_op */
  0x0004000400000500ULL, /* lddqax: opcode_3 load flop vector_op */
  0x0004000404000500ULL, /* lddqux: opcode_3 load unalign_ld flop vector_op */
  0x0504000404000480ULL, /* ldlpsx: opcode_2 load unalign_ld flop vector_op vector_lo_loadstore vector_packed_single */
  0x0604000404000480ULL, /* ldhpsx: opcode_2 load unalign_ld flop vector_op vector_high_loadstore vector_packed_single */
  0x0904000404000500ULL, /* ldlpdx: opcode_3 load unalign_ld flop vector_op vector_lo_loadstore vector_packed_double */
  0x0a04000404000500ULL, /* ldhpdx: opcode_3 load unalign_ld flop vector_op vector_high_loadstore vector_packed_double */
  0x0004000400020100ULL, /* stdqax: opcode_3 store flop vector_op */
  0x0004000400030100ULL, /* stntpdx: opcode_3 nt_store store flop vector_op */
  0x0004000400030080ULL, /* stntpsx: opcode_2 nt_store store flop vector_op */
  0x0004000408020100ULL, /* stdqux: opcode_3 store unalign_store flop vector_op */
  0x0104000408020080ULL, /* stlpsx: opcode_2 store unalign_store flop vector_op vector_lo_loadstore */
  0x0284000408020080ULL, /* sthpsx: opcode_2 store unalign_store flop vector_op fastpath_db vector_high_loadstore */
  0x0104000408020100ULL, /* stlpdx: opcode_3 store unalign_store flop vector_op vector_lo_loadstore */
  0x0284000408020100ULL, /* sthpdx: opcode_3 store unalign_store flop vector_op fastpath_db vector_high_loadstore */
  0x0004000400000500ULL, /* lddqaxx: opcode_3 load flop vector_op */
  0x0004000404000500ULL, /* lddquxx: opcode_3 load unalign_ld flop vector_op */
  0x0504000404000480ULL, /* ldlpsxx: opcode_2 load unalign_ld flop vector_op vector_lo_loadstore vector_packed_single */
  0x0604000404000480ULL, /* ldhpsxx: opcode_2 load unalign_ld flop vector_op vector_high_loadstore vector_packed_single */
  0x0904000404000500ULL, /* ldlpdxx: opcode_3 load unalign_ld flop vector_op vector_lo_loadstore vector_packed_double */
  0x0a04000404000500ULL, /* ldhpdxx: opcode_3 load unalign_ld flop vector_op vector_high_loadstore vector_packed_double */
  0x0404000400000480ULL, /* ldaps: opcode_2 load flop vector_op vector_packed_single */
  0x0404000400000480ULL, /* ldapsx: opcode_2 load flop vector_op vector_packed_single */
  0x0404000400000480ULL, /* ldapsxx: opcode_2 load flop vector_op vector_packed_single */
  0x0804000400000500ULL, /* ldapd: opcode_3 load flop vector_op vector_packed_double */
  0x0804000400000500ULL, /* ldapdx: opcode_3 load flop vector_op vector_packed_double */
  0x0804000400000500ULL, /* ldapdxx: opcode_3 load flop vector_op vector_packed_double */
  0x0404000404000480ULL, /* ldups: opcode_2 load unalign_ld flop vector_op vector_packed_single */
  0x0404000404000400ULL, /* ldupsx: load unalign_ld flop vector_op vector_packed_single */
  0x0404000404000400ULL, /* ldupsxx: load unalign_ld flop vector_op vector_packed_single */
  0x0804000404000480ULL, /* ldupd: opcode_2 load unalign_ld flop vector_op vector_packed_double */
  0x0804000404000480ULL, /* ldupdx: opcode_2 load unalign_ld flop vector_op vector_packed_double */
  0x0804000404000480ULL, /* ldupdxx: opcode_2 load unalign_ld flop vector_op vector_packed_double */
  0x0004000400020100ULL, /* stdqaxx: opcode_3 store flop vector_op */
  0x0004000400030100ULL, /* stntpdxx: opcode_3 nt_store store flop vector_op */
  0x0004000400030080ULL, /* stntpsxx: opcode_2 nt_store store flop vector_op */
  0x0004000408020100ULL, /* stdquxx: opcode_3 store unalign_store flop vector_op */
  0x0104000408020080ULL, /* stlpsxx: opcode_2 store unalign_store flop vector_op vector_lo_loadstore */
  0x0284000408020080ULL, /* sthpsxx: opcode_2 store unalign_store flop vector_op fastpath_db vector_high_loadstore */
  0x0104000408020100ULL, /* stlpdxx: opcode_3 store unalign_store flop vector_op vector_lo_loadstore */
  0x0284000408020100ULL, /* sthpdxx: opcode_3 store unalign_store flop vector_op fastpath_db vector_high_loadstore */
  0x0004000400020080ULL, /* staps: opcode_2 store flop vector_op */
  0x0004000400020080ULL, /* stapsx: opcode_2 store flop vector_op */
  0x0004000400020080ULL, /* stapsxx: opcode_2 store flop vector_op */
  0x0004000400020100ULL, /* stapd: opcode_3 store flop vector_op */
  0x0004000400020100ULL, /* stapdx: opcode_3 store flop vector_op */
  0x0004000400020100ULL, /* stapdxx: opcode_3 store flop vector_op */
  0x0004000408020080ULL, /* stups: opcode_2 store unalign_store flop vector_op */
  0x0004000408020080ULL, /* stupsx: opcode_2 store unalign_store flop vector_op */
  0x0004000408020080ULL, /* stupsxx: opcode_2 store unalign_store flop vector_op */
  0x0004000408020080ULL, /* stups_n32: opcode_2 store unalign_store flop vector_op */
  0x0004000408020100ULL, /* stupd: opcode_3 store unalign_store flop vector_op */
  0x0004000408020100ULL, /* stupdx: opcode_3 store unalign_store flop vector_op */
  0x0004000408020100ULL, /* stupdxx: opcode_3 store unalign_store flop vector_op */
  0x0004000408020100ULL, /* stupd_n32: opcode_3 store unalign_store flop vector_op */
  0x000a000400000100ULL, /* maxsd: opcode_3 flop commutative x86_style */
  0x000a000400000100ULL, /* maxss: opcode_3 flop commutative x86_style */
  0x040e000400000080ULL, /* fmax128v32: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fmaxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fmaxxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fmaxxxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x080e000400000100ULL, /* fmax128v64: opcode_3 flop commutative vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fmaxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fmaxxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fmaxxxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x000e000400002080ULL, /* max64v8: opcode_2 mmx flop commutative vector_op x86_style */
  0x000e000400002080ULL, /* max64v16: opcode_2 mmx flop commutative vector_op x86_style */
  0x000e000400002080ULL, /* min64v8: opcode_2 mmx flop commutative vector_op x86_style */
  0x000e000400002080ULL, /* min64v16: opcode_2 mmx flop commutative vector_op x86_style */
  0x000a000400000100ULL, /* minsd: opcode_3 flop commutative x86_style */
  0x000a000400000100ULL, /* minss: opcode_3 flop commutative x86_style */
  0x040e000400000080ULL, /* fmin128v32: opcode_2 flop commutative vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fminx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fminxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004080ULL, /* fminxxx128v32: opcode_2 load_exe flop vector_op x86_style vector_packed_single */
  0x080e000400000100ULL, /* fmin128v64: opcode_3 flop commutative vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fminx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fminxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004100ULL, /* fminxxx128v64: opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x0080000400000108ULL, /* movx2g64: move opcode_3 flop fastpath_db */
  0x0080000400000108ULL, /* movx2g: move opcode_3 flop fastpath_db */
  0x0080000400000108ULL, /* movg2x64: move opcode_3 flop fastpath_db */
  0x0080000400000108ULL, /* movg2x: move opcode_3 flop fastpath_db */
  0x0000000400000088ULL, /* movsd: move opcode_2 flop */
  0x0000000400000088ULL, /* movss: move opcode_2 flop */
  0x0000000400000108ULL, /* movdq: move opcode_3 flop */
  0x0800000400000108ULL, /* movapd: move opcode_3 flop vector_packed_double */
  0x0400000400000088ULL, /* movaps: move opcode_2 flop vector_packed_single */
  0x0004000000002108ULL, /* movq2dq: move opcode_3 mmx vector_op */
  0x0004000000002108ULL, /* movdq2q: move opcode_3 mmx vector_op */
  0x0008010400000100ULL, /* divsd: opcode_3 flop fdiv x86_style */
  0x0008010400004100ULL, /* divxsd: opcode_3 load_exe flop fdiv x86_style */
  0x0008010400004100ULL, /* divxxsd: opcode_3 load_exe flop fdiv x86_style */
  0x0008000400004100ULL, /* divxxxsd: opcode_3 load_exe flop x86_style */
  0x0008010400000100ULL, /* divss: opcode_3 flop fdiv x86_style */
  0x0008010400004100ULL, /* divxss: opcode_3 load_exe flop fdiv x86_style */
  0x0008010400004100ULL, /* divxxss: opcode_3 load_exe flop fdiv x86_style */
  0x0008000400004100ULL, /* divxxxss: opcode_3 load_exe flop x86_style */
  0x040c010400000080ULL, /* fdiv128v32: opcode_2 flop fdiv vector_op x86_style vector_packed_single */
  0x040c010400004080ULL, /* fdivx128v32: opcode_2 load_exe flop fdiv vector_op x86_style vector_packed_single */
  0x040c010400004080ULL, /* fdivxx128v32: opcode_2 load_exe flop fdiv vector_op x86_style vector_packed_single */
  0x040c010400004080ULL, /* fdivxxx128v32: opcode_2 load_exe flop fdiv vector_op x86_style vector_packed_single */
  0x080c010400000100ULL, /* fdiv128v64: opcode_3 flop fdiv vector_op x86_style vector_packed_double */
  0x080c010400004100ULL, /* fdivx128v64: opcode_3 load_exe flop fdiv vector_op x86_style vector_packed_double */
  0x080c010400004100ULL, /* fdivxx128v64: opcode_3 load_exe flop fdiv vector_op x86_style vector_packed_double */
  0x080c010400004100ULL, /* fdivxxx128v64: opcode_3 load_exe flop fdiv vector_op x86_style vector_packed_double */
  0x000a002400000100ULL, /* mulsd: opcode_3 flop fmul commutative x86_style */
  0x000a002400000100ULL, /* mulss: opcode_3 flop fmul commutative x86_style */
  0x040e002400000080ULL, /* fmul128v32: opcode_2 flop fmul commutative vector_op x86_style vector_packed_single */
  0x040c002400004080ULL, /* fmulx128v32: opcode_2 load_exe flop fmul vector_op x86_style vector_packed_single */
  0x040c002400004080ULL, /* fmulxx128v32: opcode_2 load_exe flop fmul vector_op x86_style vector_packed_single */
  0x040c002400004080ULL, /* fmulxxx128v32: opcode_2 load_exe flop fmul vector_op x86_style vector_packed_single */
  0x080e002400000100ULL, /* fmul128v64: opcode_3 flop fmul commutative vector_op x86_style vector_packed_double */
  0x080c002400004100ULL, /* fmulx128v64: opcode_3 load_exe flop fmul vector_op x86_style vector_packed_double */
  0x080c002400004100ULL, /* fmulxx128v64: opcode_3 load_exe flop fmul vector_op x86_style vector_packed_double */
  0x080c002400004100ULL, /* fmulxxx128v64: opcode_3 load_exe flop fmul vector_op x86_style vector_packed_double */
  0x0008002400004100ULL, /* mulxsd: opcode_3 load_exe flop fmul x86_style */
  0x0008002400004100ULL, /* mulxss: opcode_3 load_exe flop fmul x86_style */
  0x0008002400004100ULL, /* mulxxsd: opcode_3 load_exe flop fmul x86_style */
  0x0008000400004100ULL, /* mulxxxsd: opcode_3 load_exe flop x86_style */
  0x0008002400004100ULL, /* mulxxss: opcode_3 load_exe flop fmul x86_style */
  0x0008000400004100ULL, /* mulxxxss: opcode_3 load_exe flop x86_style */
  0x0008001400000100ULL, /* subsd: opcode_3 flop fsub x86_style */
  0x0008001400000100ULL, /* subss: opcode_3 flop fsub x86_style */
  0x0008001400004100ULL, /* subxsd: opcode_3 load_exe flop fsub x86_style */
  0x0008001400004100ULL, /* subxss: opcode_3 load_exe flop fsub x86_style */
  0x0008001400004100ULL, /* subxxsd: opcode_3 load_exe flop fsub x86_style */
  0x0008000400004100ULL, /* subxxxsd: opcode_3 load_exe flop x86_style */
  0x0008001400004100ULL, /* subxxss: opcode_3 load_exe flop fsub x86_style */
  0x0008000400004100ULL, /* subxxxss: opcode_3 load_exe flop x86_style */
  0x0088800400000104ULL, /* ucomisd: change_rflags opcode_3 flop icmp x86_style fastpath_db */
  0x0088800400004104ULL, /* ucomixsd: change_rflags opcode_3 load_exe flop icmp x86_style fastpath_db */
  0x0088800400004104ULL, /* ucomixxsd: change_rflags opcode_3 load_exe flop icmp x86_style fastpath_db */
  0x0088800400004104ULL, /* ucomixxxsd: change_rflags opcode_3 load_exe flop icmp x86_style fastpath_db */
  0x0088800400000084ULL, /* ucomiss: change_rflags opcode_2 flop icmp x86_style fastpath_db */
  0x0088800400004084ULL, /* ucomixss: change_rflags opcode_2 load_exe flop icmp x86_style fastpath_db */
  0x0088800400004084ULL, /* ucomixxss: change_rflags opcode_2 load_exe flop icmp x86_style fastpath_db */
  0x0088800400004084ULL, /* ucomixxxss: change_rflags opcode_2 load_exe flop icmp x86_style fastpath_db */
  0x040c0014000000a0ULL, /* fsub128v32: mcode opcode_2 flop fsub vector_op x86_style vector_packed_single */
  0x040c0014000040a0ULL, /* fsubx128v32: mcode opcode_2 load_exe flop fsub vector_op x86_style vector_packed_single */
  0x040c0014000040a0ULL, /* fsubxx128v32: mcode opcode_2 load_exe flop fsub vector_op x86_style vector_packed_single */
  0x040c0014000040a0ULL, /* fsubxxx128v32: mcode opcode_2 load_exe flop fsub vector_op x86_style vector_packed_single */
  0x080c001400000120ULL, /* fsub128v64: mcode opcode_3 flop fsub vector_op x86_style vector_packed_double */
  0x080c001400004120ULL, /* fsubx128v64: mcode opcode_3 load_exe flop fsub vector_op x86_style vector_packed_double */
  0x080c001400004120ULL, /* fsubxx128v64: mcode opcode_3 load_exe flop fsub vector_op x86_style vector_packed_double */
  0x080c001400004120ULL, /* fsubxxx128v64: mcode opcode_3 load_exe flop fsub vector_op x86_style vector_packed_double */
  0x040c000400000120ULL, /* fhsub128v32: mcode opcode_3 flop vector_op x86_style vector_packed_single */
  0x040c000400004120ULL, /* fhsubx128v32: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004120ULL, /* fhsubxx128v32: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x040c000400004120ULL, /* fhsubxxx128v32: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_single */
  0x080c000400000120ULL, /* fhsub128v64: mcode opcode_3 flop vector_op x86_style vector_packed_double */
  0x080c000400004120ULL, /* fhsubx128v64: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004120ULL, /* fhsubxx128v64: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x080c000400004120ULL, /* fhsubxxx128v64: mcode opcode_3 load_exe flop vector_op x86_style vector_packed_double */
  0x0000000400020100ULL, /* stss: opcode_3 store flop */
  0x0000000400030100ULL, /* stntss: opcode_3 nt_store store flop */
  0x0000000400020100ULL, /* stssx: opcode_3 store flop */
  0x0000000400030100ULL, /* stntssx: opcode_3 nt_store store flop */
  0x0000000400020100ULL, /* stssxx: opcode_3 store flop */
  0x0000000400030100ULL, /* stntssxx: opcode_3 nt_store store flop */
  0x0000000400020100ULL, /* stsd: opcode_3 store flop */
  0x0000000400030100ULL, /* stntsd: opcode_3 nt_store store flop */
  0x0000000400020100ULL, /* stsdx: opcode_3 store flop */
  0x0000000400030100ULL, /* stntsdx: opcode_3 nt_store store flop */
  0x0000000400020100ULL, /* stsdxx: opcode_3 store flop */
  0x0000000400030100ULL, /* stntsdxx: opcode_3 nt_store store flop */
  0x0000000400000100ULL, /* rcpss: opcode_3 flop */
  0x0404000400000080ULL, /* frcp128v32: opcode_2 flop vector_op vector_packed_single */
  0x0000020400000100ULL, /* sqrtsd: opcode_3 flop sqrt */
  0x0000020400000100ULL, /* sqrtss: opcode_3 flop sqrt */
  0x0000020400000100ULL, /* rsqrtss: opcode_3 flop sqrt */
  0x0404020400000080ULL, /* fsqrt128v32: opcode_2 flop sqrt vector_op vector_packed_single */
  0x0404020400000080ULL, /* frsqrt128v32: opcode_2 flop sqrt vector_op vector_packed_single */
  0x0804020400000100ULL, /* fsqrt128v64: opcode_3 flop sqrt vector_op vector_packed_double */
  0x000c000400002080ULL, /* punpcklwd: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* punpcklbw: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* punpckldq: opcode_2 mmx flop vector_op x86_style */
  0x000c000400000100ULL, /* punpcklbw128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* punpcklwd128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* punpckldq128: opcode_3 flop vector_op x86_style */
  0x000c000400002080ULL, /* punpckhbw: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* punpckhwd: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* punpckhdq: opcode_2 mmx flop vector_op x86_style */
  0x000c000400000100ULL, /* punpckhbw128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* punpckhwd128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* punpckhdq128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* punpcklqdq: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* punpckhqdq: opcode_3 flop vector_op x86_style */
  0x000c000400002100ULL, /* packsswb: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* packssdw: opcode_3 mmx flop vector_op x86_style */
  0x000c000400002100ULL, /* packuswb: opcode_3 mmx flop vector_op x86_style */
  0x000c000400000100ULL, /* packsswb128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* packssdw128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* packuswb128: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pshufd: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pshufw: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pshuflw: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pshufhw: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pslldq: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psllw: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psllwi: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pslld: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* pslldi: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psllq: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psllqi: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrlw: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrlwi: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrld: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrldi: opcode_3 flop vector_op x86_style */
  0x000c000000000100ULL, /* psrlq: opcode_3 vector_op x86_style */
  0x000c000400000100ULL, /* psrlqi: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psraw: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrawi: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrad: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psradi: opcode_3 flop vector_op x86_style */
  0x000c000400002080ULL, /* psllw_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psllwi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* pslld_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* pslldi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psllq_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psllqi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrlw_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrlwi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrld_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrldi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrlq_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrlqi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psraw_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrawi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psrad_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* psradi_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* pand_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* pandn_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* por_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000c000400002080ULL, /* pxor_mmx: opcode_2 mmx flop vector_op x86_style */
  0x000e000400000100ULL, /* pand: opcode_3 flop commutative vector_op x86_style */
  0x000e000400000100ULL, /* pandn: opcode_3 flop commutative vector_op x86_style */
  0x000e000400000100ULL, /* por: opcode_3 flop commutative vector_op x86_style */
  0x000e000400000100ULL, /* pxor: opcode_3 flop commutative vector_op x86_style */
  0x080c000400000100ULL, /* unpckhpd: opcode_3 flop vector_op x86_style vector_packed_double */
  0x040c000400000080ULL, /* unpckhps: opcode_2 flop vector_op x86_style vector_packed_single */
  0x080c000400000100ULL, /* unpcklpd: opcode_3 flop vector_op x86_style vector_packed_double */
  0x040c000400000080ULL, /* unpcklps: opcode_2 flop vector_op x86_style vector_packed_single */
  0x080c000400000100ULL, /* shufpd: opcode_3 flop vector_op x86_style vector_packed_double */
  0x040c000400000080ULL, /* shufps: opcode_2 flop vector_op x86_style vector_packed_single */
  0x0404000400000080ULL, /* movhlps: opcode_2 flop vector_op vector_packed_single */
  0x0604000400000080ULL, /* movlhps: opcode_2 flop vector_op vector_high_loadstore vector_packed_single */
  0x000c000400000100ULL, /* psrldq: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* psrlq128v64: opcode_3 flop vector_op x86_style */
  0x000c000400000100ULL, /* subus128v16: opcode_3 flop vector_op x86_style */
  0x000e000400002100ULL, /* pavgb: opcode_3 mmx flop commutative vector_op x86_style */
  0x000e000400002100ULL, /* pavgw: opcode_3 mmx flop commutative vector_op x86_style */
  0x000e000400002100ULL, /* psadbw: opcode_3 mmx flop commutative vector_op x86_style */
  0x000e000400000100ULL, /* pavgb128: opcode_3 flop commutative vector_op x86_style */
  0x000e000400000100ULL, /* pavgw128: opcode_3 flop commutative vector_op x86_style */
  0x008e000400000100ULL, /* psadbw128: opcode_3 flop commutative vector_op x86_style fastpath_db */
  0x0084000000002100ULL, /* pextrw: opcode_3 mmx vector_op fastpath_db */
  0x0084000000002100ULL, /* pinsrw: opcode_3 mmx vector_op fastpath_db */
  0x0084000000002080ULL, /* pmovmskb: opcode_2 mmx vector_op fastpath_db */
  0x0000000400000100ULL, /* pmovmskb128: opcode_3 flop */
  0x0004000000002088ULL, /* movi32_2m: move opcode_2 mmx vector_op */
  0x0004000000002088ULL, /* movi64_2m: move opcode_2 mmx vector_op */
  0x0004000000002088ULL, /* movm_2i32: move opcode_2 mmx vector_op */
  0x0004000000002088ULL, /* movm_2i64: move opcode_2 mmx vector_op */
  0x0004000400002080ULL, /* pshufw64v16: opcode_2 mmx flop vector_op */
  0x0484000000000080ULL, /* movmskps: opcode_2 vector_op fastpath_db vector_packed_single */
  0x0884000000000100ULL, /* movmskpd: opcode_3 vector_op fastpath_db vector_packed_double */
  0x0004000000000120ULL, /* maskmovdqu: mcode opcode_3 vector_op */
  0x00040000000020a0ULL, /* maskmovq: mcode opcode_2 mmx vector_op */
  0x0004000000000100ULL, /* extrq: opcode_3 vector_op */
  0x0004000000000100ULL, /* insertq: opcode_3 vector_op */
  0x3000000400400040ULL, /* vfmaddss: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400400040ULL, /* vfmaddsd: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmaddxxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400400040ULL, /* vfnmaddss: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400400040ULL, /* vfnmaddsd: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmaddxxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3404000400400040ULL, /* vfmaddps: opcode_1 avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddxxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddxxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3804000400400040ULL, /* vfmaddpd: opcode_1 avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddxxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddxxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3404000400400040ULL, /* vfmaddsubps: opcode_1 avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddsubxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddsubxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddsubxxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddsubxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddsubxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmaddsubxxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3804000400400040ULL, /* vfmaddsubpd: opcode_1 avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddsubxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddsubxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddsubxxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddsubxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddsubxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmaddsubxxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3404000400400040ULL, /* vfnmaddps: opcode_1 avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmaddxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmaddxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmaddxxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmaddxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmaddxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmaddxxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3804000400400040ULL, /* vfnmaddpd: opcode_1 avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmaddxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmaddxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmaddxxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmaddxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmaddxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmaddxxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3000000400400040ULL, /* vfmsubss: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400400040ULL, /* vfmsubsd: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfmsubxxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400400040ULL, /* vfnmsubss: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxxss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxxrss: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400400040ULL, /* vfnmsubsd: opcode_1 avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxxsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3000000400404040ULL, /* vfnmsubxxxrsd: opcode_1 load_exe avx flop non_destructive is4_reg */
  0x3404000400400040ULL, /* vfmsubps: opcode_1 avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubxxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubxxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3804000400400040ULL, /* vfmsubpd: opcode_1 avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubxxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubxxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3404000400400040ULL, /* vfmsubaddps: opcode_1 avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubaddxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubaddxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubaddxxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubaddxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubaddxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfmsubaddxxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3804000400400040ULL, /* vfmsubaddpd: opcode_1 avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubaddxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubaddxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubaddxxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubaddxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubaddxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfmsubaddxxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3404000400400040ULL, /* vfnmsubps: opcode_1 avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmsubxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmsubxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmsubxxxps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmsubxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmsubxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3404000400404040ULL, /* vfnmsubxxxrps: opcode_1 load_exe avx flop vector_op vector_packed_single non_destructive is4_reg */
  0x3804000400400040ULL, /* vfnmsubpd: opcode_1 avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmsubxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmsubxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmsubxxxpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmsubxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmsubxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x3804000400404040ULL, /* vfnmsubxxxrpd: opcode_1 load_exe avx flop vector_op vector_packed_double non_destructive is4_reg */
  0x0020000000400040ULL, /* vzeroupper: opcode_1 avx side_effects */
  0x0000000030000060ULL, /* mfence: mcode opcode_1 unknown_memdata unknown_addr */
  0x0000000030000040ULL, /* lfence: opcode_1 unknown_memdata unknown_addr */
  0x0000000030000040ULL, /* sfence: opcode_1 unknown_memdata unknown_addr */
  0x0000000000000040ULL, /* monitor: opcode_1 */
  0x0000000000000040ULL, /* mwait: opcode_1 */
  0x0061000002000044ULL, /* asm: change_rflags opcode_1 same_res simulated side_effects var_opnds */
  0x0001000000000040ULL, /* intrncall: opcode_1 simulated */
  0x0001000000000044ULL, /* spadjust: change_rflags opcode_1 simulated */
  0x0021000000000040ULL, /* savexmms: opcode_1 simulated side_effects */
  0x0000000000000044ULL, /* zero32: change_rflags opcode_1 */
  0x0000000000000044ULL, /* zero64: change_rflags opcode_1 */
  0x0000000400000040ULL, /* xzero32: opcode_1 flop */
  0x0000000400000040ULL, /* xzero64: opcode_1 flop */
  0x0404000400000100ULL, /* xzero128v32: opcode_3 flop vector_op vector_packed_single */
  0x0804000400000100ULL, /* xzero128v64: opcode_3 flop vector_op vector_packed_double */
  0x000a000c00001080ULL, /* fadd: opcode_2 x87 flop fadd commutative x86_style */
  0x000a000c00001080ULL, /* faddp: opcode_2 x87 flop fadd commutative x86_style */
  0x0000000400001440ULL, /* flds: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* flds_n32: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* fldl: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* fldl_n32: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* fldt: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* fldt_n32: opcode_1 load x87 flop */
  0x0000000000001040ULL, /* fld: opcode_1 x87 */
  0x0000000400001040ULL, /* fst: opcode_1 x87 flop */
  0x0000000400001040ULL, /* fstp: opcode_1 x87 flop */
  0x00a0000400021040ULL, /* fstps: opcode_1 x87 store flop side_effects fastpath_db */
  0x00a0000400021040ULL, /* fstps_n32: opcode_1 x87 store flop side_effects fastpath_db */
  0x00a0000400021040ULL, /* fstpl: opcode_1 x87 store flop side_effects fastpath_db */
  0x00a0000400021040ULL, /* fstpl_n32: opcode_1 x87 store flop side_effects fastpath_db */
  0x0020000400021040ULL, /* fstpt: opcode_1 x87 store flop side_effects */
  0x0020000400021040ULL, /* fstpt_n32: opcode_1 x87 store flop side_effects */
  0x00a0000400021040ULL, /* fsts: opcode_1 x87 store flop side_effects fastpath_db */
  0x00a0000400021040ULL, /* fsts_n32: opcode_1 x87 store flop side_effects fastpath_db */
  0x0020000400021040ULL, /* fstl: opcode_1 x87 store flop side_effects */
  0x0020000400021040ULL, /* fstl_n32: opcode_1 x87 store flop side_effects */
  0x0000000000001040ULL, /* fxch: opcode_1 x87 */
  0x0000000400001048ULL, /* fmov: move opcode_1 x87 flop */
  0x0008001400001040ULL, /* fsub: opcode_1 x87 flop fsub x86_style */
  0x0008001400001040ULL, /* fsubr: opcode_1 x87 flop fsub x86_style */
  0x0008001400001040ULL, /* fsubp: opcode_1 x87 flop fsub x86_style */
  0x0008001400001040ULL, /* fsubrp: opcode_1 x87 flop fsub x86_style */
  0x008a002400001040ULL, /* fmul: opcode_1 x87 flop fmul commutative x86_style fastpath_db */
  0x000a002400001040ULL, /* fmulp: opcode_1 x87 flop fmul commutative x86_style */
  0x0008010400001080ULL, /* fdiv: opcode_2 x87 flop fdiv x86_style */
  0x0008010400001080ULL, /* fdivp: opcode_2 x87 flop fdiv x86_style */
  0x0008010400001080ULL, /* fdivr: opcode_2 x87 flop fdiv x86_style */
  0x0008010400001080ULL, /* fdivrp: opcode_2 x87 flop fdiv x86_style */
  0x0080800400001044ULL, /* fucomi: change_rflags opcode_1 x87 flop icmp fastpath_db */
  0x0080800400001044ULL, /* fucomip: change_rflags opcode_1 x87 flop icmp fastpath_db */
  0x0008000400001080ULL, /* fchs: opcode_2 x87 flop x86_style */
  0x0008000400001042ULL, /* frndint: read_x87_cw opcode_1 x87 flop x86_style */
  0x0000000400021061ULL, /* fnstcw: change_x87_cw mcode opcode_1 x87 store flop */
  0x0000000400001461ULL, /* fldcw: change_x87_cw mcode opcode_1 load x87 flop */
  0x0080000400021042ULL, /* fistps: read_x87_cw opcode_1 x87 store flop fastpath_db */
  0x0080000400021042ULL, /* fistpl: read_x87_cw opcode_1 x87 store flop fastpath_db */
  0x0080000400021042ULL, /* fists: read_x87_cw opcode_1 x87 store flop fastpath_db */
  0x0080000400021042ULL, /* fistl: read_x87_cw opcode_1 x87 store flop fastpath_db */
  0x0080000400021042ULL, /* fistpll: read_x87_cw opcode_1 x87 store flop fastpath_db */
  0x0000000400001440ULL, /* filds: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* fildl: opcode_1 load x87 flop */
  0x0000000400001440ULL, /* fildll: opcode_1 load x87 flop */
  0x0000000400001040ULL, /* fldz: opcode_1 x87 flop */
  0x0008000400001080ULL, /* fabs: opcode_2 x87 flop x86_style */
  0x0008000400001040ULL, /* fsqrt: opcode_1 x87 flop x86_style */
  0x00100004010010a0ULL, /* fcmovb: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmovbe: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmovnb: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmovnbe: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmove: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmovne: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmovu: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00100004010010a0ULL, /* fcmovnu: mcode opcode_2 x87 cond_move flop read_rflags */
  0x00080004000010a0ULL, /* fcos: mcode opcode_2 x87 flop x86_style */
  0x0008000400001060ULL, /* fsin: mcode opcode_1 x87 flop x86_style */
  0x0000000000000100ULL, /* cmpeqpd: opcode_3 */
  0x0000000000000100ULL, /* cmpltpd: opcode_3 */
  0x0000000000000100ULL, /* cmplepd: opcode_3 */
  0x0000000000000100ULL, /* cmpunordpd: opcode_3 */
  0x0000000000000100ULL, /* cmpneqpd: opcode_3 */
  0x0000000000000100ULL, /* cmpnltpd: opcode_3 */
  0x0000000000000100ULL, /* cmpnlepd: opcode_3 */
  0x0000000000000100ULL, /* cmpordpd: opcode_3 */
  0x0008000400000080ULL, /* cmpeqps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpltps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpleps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpunordps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpneqps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpnltps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpnleps: opcode_2 flop x86_style */
  0x0008000400000080ULL, /* cmpordps: opcode_2 flop x86_style */
  0x0000000000000100ULL, /* cmpeqsd: opcode_3 */
  0x0000000000000100ULL, /* cmpltsd: opcode_3 */
  0x0000000000000100ULL, /* cmplesd: opcode_3 */
  0x0000000000000100ULL, /* cmpunordsd: opcode_3 */
  0x0000000000000100ULL, /* cmpneqsd: opcode_3 */
  0x0000000000000100ULL, /* cmpnltsd: opcode_3 */
  0x0000000000000100ULL, /* cmpnlesd: opcode_3 */
  0x0000000000000100ULL, /* cmpordsd: opcode_3 */
  0x0008000400000100ULL, /* cmpeqss: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpltss: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpless: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpunordss: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpneqss: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpnltss: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpnless: opcode_3 flop x86_style */
  0x0008000400000100ULL, /* cmpordss: opcode_3 flop x86_style */
  0x00000000000020c0ULL, /* emms: opcode_1 opcode_2 mmx */
  0x0020000000000060ULL, /* stmxcsr: mcode opcode_1 side_effects */
  0x0020000000000060ULL, /* ldmxcsr: mcode opcode_1 side_effects */
  0x0000000000000040ULL, /* clflush: opcode_1 */
  0x0000000400021040ULL, /* fisttps: opcode_1 x87 store flop */
  0x0000000400021040ULL, /* fisttpl: opcode_1 x87 store flop */
  0x0000000400021040ULL, /* fisttpll: opcode_1 x87 store flop */
  0x0004000000000100ULL, /* pabs128v8: opcode_3 vector_op */
  0x0004000000004100ULL, /* pabsx128v8: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* pabsxx128v8: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* pabsxxx128v8: opcode_3 load_exe vector_op */
  0x0004000000000100ULL, /* pabs128v16: opcode_3 vector_op */
  0x0004000000004100ULL, /* pabsx128v16: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* pabsxx128v16: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* pabsxxx128v16: opcode_3 load_exe vector_op */
  0x0004000000000100ULL, /* pabs128v32: opcode_3 vector_op */
  0x0004000000004100ULL, /* pabsx128v32: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* pabsxx128v32: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* pabsxxx128v32: opcode_3 load_exe vector_op */
  0x000c000000000100ULL, /* psign128v8: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* psignx128v8: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* psignxx128v8: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* psignxxx128v8: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* psign128v16: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* psignx128v16: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* psignxx128v16: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* psignxxx128v16: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* psign128v32: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* psignx128v32: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* psignxx128v32: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* psignxxx128v32: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* pshuf128v8: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* pshufx128v8: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* pshufxx128v8: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* pshufxxx128v8: opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* phsub128v16: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* phsubx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phsubxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phsubxxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* phsub128v32: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* phsubx128v32: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phsubxx128v32: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phsubxxx128v32: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* phsubs128v16: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* phsubsx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phsubsxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phsubsxxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* phadd128v16: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* phaddx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phaddxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phaddxxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* phadd128v32: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* phaddx128v32: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phaddxx128v32: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phaddxxx128v32: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* phadds128v16: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* phaddsx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phaddsxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* phaddsxxx128v16: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* pmulhrsw128: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* pmulhrswx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* pmulhrswxx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* pmulhrswxxx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* pmaddubsw128: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* pmaddubswx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* pmaddubswxx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* pmaddubswxxx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* palignr128: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* palignrx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* palignrxx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* palignrxxx128: opcode_3 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* muldq: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* muldqx: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* muldqxx: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* muldqxxx: opcode_4 load_exe vector_op x86_style */
  0x0004000000000600ULL, /* ldntdqa: opcode_4 load vector_op */
  0x0004000000000600ULL, /* ldntdqax: opcode_4 load vector_op */
  0x0004000000000600ULL, /* ldntdqaxx: opcode_4 load vector_op */
  0x0004000000030100ULL, /* stntdq: opcode_3 nt_store store vector_op */
  0x0004000000030100ULL, /* stntdqx: opcode_3 nt_store store vector_op */
  0x0004000000030100ULL, /* stntdqxx: opcode_3 nt_store store vector_op */
  0x0004000000000000ULL, /* minu128v8: vector_op */
  0x0004000000000000ULL, /* minux128v8: vector_op */
  0x0004000000000000ULL, /* minuxx128v8: vector_op */
  0x0004000000000000ULL, /* minuxxx128v8: vector_op */
  0x000c000000000200ULL, /* mins128v8: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* minsx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minsxx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minsxxx128v8: opcode_4 load_exe vector_op x86_style */
  0x0004000000000000ULL, /* maxu128v8: vector_op */
  0x0004000000000000ULL, /* maxux128v8: vector_op */
  0x0004000000000000ULL, /* maxuxx128v8: vector_op */
  0x0004000000000000ULL, /* maxuxxx128v8: vector_op */
  0x000c000000000200ULL, /* maxs128v8: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* maxsx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxsxx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxsxxx128v8: opcode_4 load_exe vector_op x86_style */
  0x0000000000000000ULL, /* mins128v16: */
  0x0000000000000000ULL, /* minsx128v16: */
  0x0000000000000000ULL, /* minsxx128v16: */
  0x0000000000000000ULL, /* minsxxx128v16: */
  0x0000000000000000ULL, /* maxs128v16: */
  0x0000000000000000ULL, /* maxsx128v16: */
  0x0000000000000000ULL, /* maxsxx128v16: */
  0x0000000000000000ULL, /* maxsxxx128v16: */
  0x000c000000000200ULL, /* minu128v16: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* minux128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minuxx128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minuxxx128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* maxu128v16: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* maxux128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxuxx128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxuxxx128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* minu128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* minux128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minuxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minuxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* maxu128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* maxux128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxuxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxuxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* mins128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* minsx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minsxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* minsxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* maxs128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* maxsx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxsxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* maxsxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x0004000000000200ULL, /* pmovsxbw: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovsxbwx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxbwxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxbwxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovzxbw: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovzxbwx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxbwxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxbwxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovsxbd: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovsxbdx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxbdxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxbdxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovzxbd: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovzxbdx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxbdxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxbdxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovsxbq: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovsxbqx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxbqxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxbqxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovzxbq: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovzxbqx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxbqxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxbqxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovsxwd: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovsxwdx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxwdxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxwdxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovzxwd: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovzxwdx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxwdxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxwdxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovsxwq: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovsxwqx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxwqxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxwqxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovzxwq: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovzxwqx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxwqxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxwqxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovsxdq: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovsxdqx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxdqxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovsxdqxxx: opcode_4 load_exe vector_op */
  0x0004000000000200ULL, /* pmovzxdq: opcode_4 vector_op */
  0x0004000000004200ULL, /* pmovzxdqx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxdqxx: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* pmovzxdqxxx: opcode_4 load_exe vector_op */
  0x000c000000000200ULL, /* mul128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* mulx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* mulxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* mulxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* cmpeq128v64: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* cmpeqx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* cmpeqxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* cmpeqxxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* packusdw: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* packusdwx: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* packusdwxx: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* packusdwxxx: opcode_4 load_exe vector_op x86_style */
  0x0000000000000200ULL, /* phminposuw: opcode_4 */
  0x0000000000004200ULL, /* phminposuwx: opcode_4 load_exe */
  0x0000000000004200ULL, /* phminposuwxx: opcode_4 load_exe */
  0x0000000000004200ULL, /* phminposuwxxx: opcode_4 load_exe */
  0x0004000000000204ULL, /* ptest128: change_rflags opcode_4 vector_op */
  0x0004000000004204ULL, /* ptestx128: change_rflags opcode_4 load_exe vector_op */
  0x0004000000004204ULL, /* ptestxx128: change_rflags opcode_4 load_exe vector_op */
  0x0004000000004204ULL, /* ptestxxx128: change_rflags opcode_4 load_exe vector_op */
  0x0000000000000200ULL, /* roundsd: opcode_4 */
  0x0000000000004200ULL, /* roundxsd: opcode_4 load_exe */
  0x0000000000004200ULL, /* roundxxsd: opcode_4 load_exe */
  0x0000000000004200ULL, /* roundxxxsd: opcode_4 load_exe */
  0x000c000000000220ULL, /* mpsadbw: mcode opcode_4 vector_op x86_style */
  0x000c000000004220ULL, /* mpsadbwx: mcode opcode_4 load_exe vector_op x86_style */
  0x000c000000004220ULL, /* mpsadbwxx: mcode opcode_4 load_exe vector_op x86_style */
  0x000c000000004220ULL, /* mpsadbwxxx: mcode opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* insr128v8: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* insrx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* insrxx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* insrxxx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* insr128v16: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* insrx128v16: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* insrxx128v16: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* insrxxx128v16: opcode_3 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* insr128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* insrx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* insrxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* insrxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* insr128v64: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* insrx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* insrxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* insrxxx128v64: opcode_4 load_exe vector_op x86_style */
  0x0008000000000200ULL, /* extr128v8: opcode_4 x86_style */
  0x0008000000004200ULL, /* extrx128v8: opcode_4 load_exe x86_style */
  0x0008000000004200ULL, /* extrxx128v8: opcode_4 load_exe x86_style */
  0x0008000000004200ULL, /* extrxxx128v8: opcode_4 load_exe x86_style */
  0x0088000000000300ULL, /* extr128v16: opcode_3 opcode_4 x86_style fastpath_db */
  0x0088000000004300ULL, /* extrx128v16: opcode_3 opcode_4 load_exe x86_style fastpath_db */
  0x0088000000004300ULL, /* extrxx128v16: opcode_3 opcode_4 load_exe x86_style fastpath_db */
  0x0088000000004300ULL, /* extrxxx128v16: opcode_3 opcode_4 load_exe x86_style fastpath_db */
  0x0008000000000200ULL, /* extr128v32: opcode_4 x86_style */
  0x0008000000004200ULL, /* extrx128v32: opcode_4 load_exe x86_style */
  0x0008000000004200ULL, /* extrxx128v32: opcode_4 load_exe x86_style */
  0x0008000000004200ULL, /* extrxxx128v32: opcode_4 load_exe x86_style */
  0x0008000000000200ULL, /* extr128v64: opcode_4 x86_style */
  0x0008000000004200ULL, /* extrx128v64: opcode_4 load_exe x86_style */
  0x0008000000004200ULL, /* extrxx128v64: opcode_4 load_exe x86_style */
  0x0008000000004200ULL, /* extrxxx128v64: opcode_4 load_exe x86_style */
  0x000c000400000200ULL, /* finsr128v32: opcode_4 flop vector_op x86_style */
  0x000c000400004200ULL, /* finsrx128v32: opcode_4 load_exe flop vector_op x86_style */
  0x000c000400004200ULL, /* finsrxx128v32: opcode_4 load_exe flop vector_op x86_style */
  0x000c000400004200ULL, /* finsrxxx128v32: opcode_4 load_exe flop vector_op x86_style */
  0x0004000400000200ULL, /* fextr128v32: opcode_4 flop vector_op */
  0x0004000400004200ULL, /* fextrx128v32: opcode_4 load_exe flop vector_op */
  0x0004000400004200ULL, /* fextrxx128v32: opcode_4 load_exe flop vector_op */
  0x0004000400004200ULL, /* fextrxxx128v32: opcode_4 load_exe flop vector_op */
  0x000c000000000200ULL, /* fblendv128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* fblendvx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendvxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendvxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* fblendv128v64: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* fblendvx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendvxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendvxxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* blendv128v8: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* blendvx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* blendvxx128v8: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* blendvxxx128v8: opcode_4 load_exe vector_op x86_style */
  0x0004000000000200ULL, /* round128v32: opcode_4 vector_op */
  0x0004000000004200ULL, /* roundx128v32: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* roundxx128v32: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* roundxxx128v32: opcode_4 load_exe vector_op */
  0x0000000000000200ULL, /* roundss: opcode_4 */
  0x0000000000004200ULL, /* roundxss: opcode_4 load_exe */
  0x0000000000004200ULL, /* roundxxss: opcode_4 load_exe */
  0x0000000000004200ULL, /* roundxxxss: opcode_4 load_exe */
  0x000c000000000200ULL, /* fblend128v64: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* fblendx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendxxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000000200ULL, /* blend128v16: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* blendx128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* blendxx128v16: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* blendxxx128v16: opcode_4 load_exe vector_op x86_style */
  0x000e000000000200ULL, /* fdp128v32: opcode_4 commutative vector_op x86_style */
  0x000c000000004200ULL, /* fdpx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fdpxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fdpxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000e000000000200ULL, /* fdp128v64: opcode_4 commutative vector_op x86_style */
  0x000c000000004200ULL, /* fdpx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fdpxx128v64: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fdpxxx128v64: opcode_4 load_exe vector_op x86_style */
  0x0004000000000200ULL, /* round128v64: opcode_4 vector_op */
  0x0004000000004200ULL, /* roundx128v64: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* roundxx128v64: opcode_4 load_exe vector_op */
  0x0004000000004200ULL, /* roundxxx128v64: opcode_4 load_exe vector_op */
  0x000c000000000200ULL, /* fblend128v32: opcode_4 vector_op x86_style */
  0x000c000000004200ULL, /* fblendx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendxx128v32: opcode_4 load_exe vector_op x86_style */
  0x000c000000004200ULL, /* fblendxxx128v32: opcode_4 load_exe vector_op x86_style */
  0x0000000000000200ULL, /* cmpgt128v64: opcode_4 */
  0x0000000000000200ULL, /* cmpgtx128v64: opcode_4 */
  0x0000000000000200ULL, /* cmpgtxx128v64: opcode_4 */
  0x0000000000000200ULL, /* cmpgtxxx128v64: opcode_4 */
  0x0008000000000220ULL, /* crc32w: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32wx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32wxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32wxxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32d: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32dx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32dxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32dxxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32q: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32qx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32qxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32qxxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32b: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32bx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32bxx: mcode opcode_4 x86_style */
  0x0008000000000220ULL, /* crc32bxxx: mcode opcode_4 x86_style */
  0x0000000000000224ULL, /* cmpestrm: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestrmx: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestrmxx: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestrmxxx: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestri: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestrix: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestrixx: change_rflags mcode opcode_4 */
  0x0000000000000224ULL, /* cmpestrixxx: change_rflags mcode opcode_4 */
  0x0000000000000204ULL, /* cmpistrm: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistrmx: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistrmxx: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistrmxxx: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistri: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistrix: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistrixx: change_rflags opcode_4 */
  0x0000000000000204ULL, /* cmpistrixxx: change_rflags opcode_4 */
  0x0000000000000200ULL, /* popcnt16: opcode_4 */
  0x0000000000000200ULL, /* popcntx16: opcode_4 */
  0x0000000000000200ULL, /* popcntxx16: opcode_4 */
  0x0000000000000200ULL, /* popcntxxx16: opcode_4 */
  0x0000000000000200ULL, /* popcnt32: opcode_4 */
  0x0000000000000200ULL, /* popcntx32: opcode_4 */
  0x0000000000000200ULL, /* popcntxx32: opcode_4 */
  0x0000000000000200ULL, /* popcntxxx32: opcode_4 */
  0x0000000000000200ULL, /* popcnt64: opcode_4 */
  0x0000000000000200ULL, /* popcntx64: opcode_4 */
  0x0000000000000200ULL, /* popcntxx64: opcode_4 */
  0x0000000000000200ULL, /* popcntxxx64: opcode_4 */
  0x0004000000000100ULL, /* aesimc: opcode_3 vector_op */
  0x0004000000004100ULL, /* aesimcx: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* aesimcxx: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* aesimcxxx: opcode_3 load_exe vector_op */
  0x0004000000000100ULL, /* aeskeygenassist: opcode_3 vector_op */
  0x0004000000004100ULL, /* aeskeygenassistx: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* aeskeygenassistxx: opcode_3 load_exe vector_op */
  0x0004000000004100ULL, /* aeskeygenassistxxx: opcode_3 load_exe vector_op */
  0x000c000000000100ULL, /* aesenc: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* aesencx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesencxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesencxxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* aesenclast: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* aesenclastx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesenclastxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesenclastxxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* aesdec: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* aesdecx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesdecxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesdecxxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000000100ULL, /* aesdeclast: opcode_3 vector_op x86_style */
  0x000c000000004100ULL, /* aesdeclastx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesdeclastxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000004100ULL, /* aesdeclastxxx: opcode_3 load_exe vector_op x86_style */
  0x000c000000000120ULL, /* pclmulqdq: mcode opcode_3 vector_op x86_style */
  0x000c000000004120ULL, /* pclmulqdqx: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* pclmulqdqxx: mcode opcode_3 load_exe vector_op x86_style */
  0x000c000000004120ULL, /* pclmulqdqxxx: mcode opcode_3 load_exe vector_op x86_style */
  0x1004000000400040ULL, /* vphaddbd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddbq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddbw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddbwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphadddq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadddqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadddqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadddqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddubd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddubq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddubw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddubwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddudq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddudqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddudqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddudqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphadduwd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadduwdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadduwdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadduwdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphadduwq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadduwqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadduwqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphadduwqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphaddwd: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddwdx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddwdxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddwdxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphaddwq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddwqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddwqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphaddwqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphsubbw: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubbwx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubbwxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubbwxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphsubdq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphsubdqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphsubdqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphsubdqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphsubwd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphsubwdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphsubwdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphsubwdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfrczpd: opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczpdx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczpdxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczpdxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfrczps: opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczpsx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczpsxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczpsxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfrczsd: opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczsdx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczsdxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczsdxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfrczss: opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczssx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczssxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vfrczssxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotbi: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbix: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbixx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbixxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotdi: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdix: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdixx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdixxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotqi: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqix: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqixx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqixxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotwi: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwix: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwixx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwixxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomb: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcombx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcombxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcombxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomub: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomubx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomubxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomubxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomud: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomudx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomudxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomudxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomuq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomuqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomuqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomuqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpcomuw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomuwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomuwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpcomuwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x3004000000400040ULL, /* vpperm: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vppermx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vppermxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vppermxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vppermxr: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vppermxxr: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vppermxxxr: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x1004000000400040ULL, /* vprotb: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotbxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotdxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotqxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vprotw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vprotwxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshab: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshabx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshabxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshabxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshabxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshabxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshabxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshad: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshadx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshadxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshadxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshadxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshadxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshadxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshaq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshaqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshaqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshaqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshaqxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshaqxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshaqxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshaw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshawx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshawxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshawxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshawxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshawxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshawxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshlb: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlbx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlbxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlbxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlbxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlbxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlbxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshld: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshldx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshldxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshldxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshldxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshldxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshldxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshlq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlqxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlqxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlqxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshlw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlwxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlwxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshlwxxxr: opcode_1 load_exe avx vector_op non_destructive */
  0x3004000000400040ULL, /* vpcmov: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpcmovx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpcmovxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpcmovxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpcmovxr: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpcmovxxr: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpcmovxxxr: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacsdd: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsddx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsddxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsddxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacsdqh: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsdqhx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsdqhxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsdqhxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacsdql: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsdqlx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsdqlxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsdqlxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacssdd: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssddx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssddxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssddxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacssdqh: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssdqhx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssdqhxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssdqhxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacssdql: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssdqlx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssdqlxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacssdqlxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacsswd: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsswdx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsswdxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsswdxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacssww: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsswwx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsswwxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacsswwxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacswd: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacswdx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacswdxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacswdxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmacsww: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacswwx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacswwxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmacswwxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmadcsswd: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmadcsswdx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmadcsswdxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmadcsswdxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000400040ULL, /* vpmadcswd: opcode_1 avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmadcswdx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmadcswdxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x3004000000404040ULL, /* vpmadcswdxxx: opcode_1 load_exe avx vector_op non_destructive is4_reg */
  0x1006000c00400040ULL, /* vfadd128v64: opcode_1 avx flop fadd commutative vector_op non_destructive */
  0x1004000c00404040ULL, /* vfaddx128v64: opcode_1 load_exe avx flop fadd vector_op non_destructive */
  0x1004000c00404040ULL, /* vfaddxx128v64: opcode_1 load_exe avx flop fadd vector_op non_destructive */
  0x1004000c00404040ULL, /* vfaddxxx128v64: opcode_1 load_exe avx flop fadd vector_op non_destructive */
  0x1006000c00400040ULL, /* vfadd128v32: opcode_1 avx flop fadd commutative vector_op non_destructive */
  0x1004000c00404040ULL, /* vfaddx128v32: opcode_1 load_exe avx flop fadd vector_op non_destructive */
  0x1004000c00404040ULL, /* vfaddxx128v32: opcode_1 load_exe avx flop fadd vector_op non_destructive */
  0x1004000c00404040ULL, /* vfaddxxx128v32: opcode_1 load_exe avx flop fadd vector_op non_destructive */
  0x1002000c00400040ULL, /* vfaddsd: opcode_1 avx flop fadd commutative non_destructive */
  0x1000000c00404040ULL, /* vfaddxsd: opcode_1 load_exe avx flop fadd non_destructive */
  0x1000000c00404040ULL, /* vfaddxxsd: opcode_1 load_exe avx flop fadd non_destructive */
  0x1000000c00404040ULL, /* vfaddxxxsd: opcode_1 load_exe avx flop fadd non_destructive */
  0x1002000c00400040ULL, /* vfaddss: opcode_1 avx flop fadd commutative non_destructive */
  0x1000000c00404040ULL, /* vfaddxss: opcode_1 load_exe avx flop fadd non_destructive */
  0x1000000c00404040ULL, /* vfaddxxss: opcode_1 load_exe avx flop fadd non_destructive */
  0x1000000c00404040ULL, /* vfaddxxxss: opcode_1 load_exe avx flop fadd non_destructive */
  0x1004000400400040ULL, /* vfaddsub128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfaddsubx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfaddsubxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfaddsubxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfaddsub128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfaddsubx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfaddsubxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfaddsubxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000000400040ULL, /* vaesenc: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesencx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesencxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesencxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vaesenclast: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesenclastx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesenclastxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesenclastxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vaesdec: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesdecx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesdecxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesdecxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vaesdeclast: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesdeclastx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesdeclastxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesdeclastxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vaesimc: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesimcx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesimcxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaesimcxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vaeskeygenassist: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaeskeygenassistx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaeskeygenassistxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vaeskeygenassistxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000400400040ULL, /* vandpd: opcode_1 avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfand128v64: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfandx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vandps: opcode_1 avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfand128v32: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfandx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vandnpd: opcode_1 avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfandn128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandnx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandnxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandnxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vandnps: opcode_1 avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfandn128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandnx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandnxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfandnxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfblend128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfblend128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfblendv128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendvx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendvxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendvxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfblendv128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendvx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendvxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfblendvxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastss: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastxss: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastxxss: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastsd: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastxsd: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastxxsd: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastf128: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastxf128: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfbroadcastxxf128: opcode_1 avx vector_op non_destructive */
  0x0000000000400040ULL, /* vcmppd: opcode_1 avx */
  0x1004000400400040ULL, /* vfcmp128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfcmpx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfcmpxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfcmpxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x0000000000400040ULL, /* vcmpps: opcode_1 avx */
  0x1004000400400040ULL, /* vfcmp128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfcmpx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfcmpxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfcmpxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000000400400040ULL, /* vcmpsd: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vcmpxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcmpxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcmpxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vcmpxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcmpxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcmpxxxss: opcode_1 load_exe avx flop non_destructive */
  0x0080800400400044ULL, /* vcomisd: change_rflags opcode_1 avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vcomixsd: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vcomixxsd: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vcomixxxsd: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400400044ULL, /* vcomiss: change_rflags opcode_1 avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vcomixss: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vcomixxss: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vcomixxxss: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x1084000000400040ULL, /* vcvtdq2pd: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtdq2pdx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtdq2pdxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtdq2pdxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1004000000400040ULL, /* vcvtdq2ps: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtdq2psx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtdq2psxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtdq2psxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcvtpd2dq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtpd2dqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtpd2dqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtpd2dqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcvtpd2dqy: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtpd2dqyx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtpd2dqyxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtpd2dqyxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1084000000400040ULL, /* vcvtpd2ps: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtpd2psx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtpd2psxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtpd2psxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvtpd2psy: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtpd2psyx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtpd2psyxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtpd2psyxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1004000000400040ULL, /* vcvtps2dq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtps2dqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtps2dqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvtps2dqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1084000000400040ULL, /* vcvtps2pd: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtps2pdx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtps2pdxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvtps2pdxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvtsd2si: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvtsd2siq: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1000000400400040ULL, /* vcvtsd2ss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vcvtsd2ssx: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcvtsd2ssxx: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcvtsd2ssxxx: opcode_1 load_exe avx flop non_destructive */
  0x1080000400400040ULL, /* vcvtsi2sd: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400404040ULL, /* vcvtsi2sdx: opcode_1 load_exe avx flop fastpath_db non_destructive */
  0x1080000400404040ULL, /* vcvtsi2sdxx: opcode_1 load_exe avx flop fastpath_db non_destructive */
  0x1080000400404040ULL, /* vcvtsi2sdxxx: opcode_1 load_exe avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2sdq: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2sdqx: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2sdqxx: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2sdqxxx: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2ss: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400404040ULL, /* vcvtsi2ssx: opcode_1 load_exe avx flop fastpath_db non_destructive */
  0x1080000400404040ULL, /* vcvtsi2ssxx: opcode_1 load_exe avx flop fastpath_db non_destructive */
  0x1080000400404040ULL, /* vcvtsi2ssxxx: opcode_1 load_exe avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2ssq: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2ssqx: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2ssqxx: opcode_1 avx flop fastpath_db non_destructive */
  0x1080000400400040ULL, /* vcvtsi2ssqxxx: opcode_1 avx flop fastpath_db non_destructive */
  0x1000000400400040ULL, /* vcvtss2sd: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vcvtss2sdx: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcvtss2sdxx: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vcvtss2sdxxx: opcode_1 load_exe avx flop non_destructive */
  0x1084000000400040ULL, /* vcvtss2si: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvtss2siq: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvttpd2dq: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvttpd2dqx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvttpd2dqxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvttpd2dqxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvttpd2dqy: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvttpd2dqyx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvttpd2dqyxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vcvttpd2dqyxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1004000000400040ULL, /* vcvttps2dq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvttps2dqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvttps2dqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcvttps2dqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcvttsd2si: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcvttsd2siq: opcode_1 avx vector_op non_destructive */
  0x1084000000400040ULL, /* vcvttss2si: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000400040ULL, /* vcvttss2siq: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1004000400400040ULL, /* vfdiv128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfdivx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfdivxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfdivxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfdiv128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfdivx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfdivxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfdivxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000000400400040ULL, /* vdivsd: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vdivxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vdivxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vdivxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400400040ULL, /* vdivss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vdivxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vdivxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vdivxxxss: opcode_1 load_exe avx flop non_destructive */
  0x1006000400400060ULL, /* vfdp128v64: mcode opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404060ULL, /* vfdpx128v64: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfdpxx128v64: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfdpxxx128v64: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1006000400400060ULL, /* vfdp128v32: mcode opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404060ULL, /* vfdpx128v32: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfdpxx128v32: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfdpxxx128v32: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfextrf128: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfextrxf128: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfextrxxf128: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfextrxxxf128: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfextr128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfextrx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfextrxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfextrxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400060ULL, /* vfhadd128v64: mcode opcode_1 avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfhaddx128v64: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfhaddxx128v64: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfhaddxxx128v64: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400060ULL, /* vfhadd128v32: mcode opcode_1 avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfhaddx128v32: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfhaddxx128v32: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404060ULL, /* vfhaddxxx128v32: mcode opcode_1 load_exe avx flop vector_op non_destructive */
  0x0000000000400060ULL, /* vfhsub128v64: mcode opcode_1 avx */
  0x0004000000404060ULL, /* vfhsubx128v64: mcode opcode_1 load_exe avx vector_op */
  0x0004000000404060ULL, /* vfhsubxx128v64: mcode opcode_1 load_exe avx vector_op */
  0x0004000000404060ULL, /* vfhsubxxx128v64: mcode opcode_1 load_exe avx vector_op */
  0x0000000000400060ULL, /* vfhsub128v32: mcode opcode_1 avx */
  0x0004000000404060ULL, /* vfhsubx128v32: mcode opcode_1 load_exe avx vector_op */
  0x0004000000404060ULL, /* vfhsubxx128v32: mcode opcode_1 load_exe avx vector_op */
  0x0004000000404060ULL, /* vfhsubxxx128v32: mcode opcode_1 load_exe avx vector_op */
  0x1004000400400040ULL, /* vfinsrf128: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfinsrxf128: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfinsrxxf128: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfinsrxxxf128: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfinsr128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfinsrx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfinsrxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfinsrxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x0004000004400440ULL, /* vlddqu: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vlddqux: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vlddquxx: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vlddqu_n32: opcode_1 load avx unalign_ld vector_op */
  0x0000000000400060ULL, /* vldmxcsr: mcode opcode_1 avx */
  0x1004000000400060ULL, /* vmaskmovdqu: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskld128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskldx128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskldxx128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskld128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskldx128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskldxx128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskst128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskstx128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskstxx128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskst128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskstx128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfmaskstxx128v64: opcode_1 avx vector_op non_destructive */
  0x1006000400400040ULL, /* vfmax128v64: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfmaxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfmaxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfmaxxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfmax128v32: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfmaxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfmaxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfmaxxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000000400400040ULL, /* vfmaxsd: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vfmaxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfmaxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfmaxxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400400040ULL, /* vfmaxss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vfmaxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfmaxxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfmaxxxxss: opcode_1 load_exe avx flop non_destructive */
  0x1006000400400040ULL, /* vfmin128v64: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfminx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfminxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfminxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfmin128v32: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfminx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfminxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfminxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000000400400040ULL, /* vfminsd: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vfminxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfminxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfminxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400400040ULL, /* vfminss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vfminxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfminxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfminxxxss: opcode_1 load_exe avx flop non_destructive */
  0x0000000000400048ULL, /* vmovapd: move opcode_1 avx */
  0x0004000400400440ULL, /* vldapd: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldapdx: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldapdxx: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldapd_n32: opcode_1 load avx flop vector_op */
  0x0004000400420040ULL, /* vstapd: opcode_1 store avx flop vector_op */
  0x0004000400420040ULL, /* vstapdx: opcode_1 store avx flop vector_op */
  0x0004000400420040ULL, /* vstapdxx: opcode_1 store avx flop vector_op */
  0x0004000400420040ULL, /* vstapd_n32: opcode_1 store avx flop vector_op */
  0x0000000000400048ULL, /* vmovaps: move opcode_1 avx */
  0x0004000400400440ULL, /* vldaps: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldapsx: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldapsxx: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldaps_n32: opcode_1 load avx flop vector_op */
  0x0004000400420040ULL, /* vstaps: opcode_1 store avx flop vector_op */
  0x0004000400420040ULL, /* vstapsx: opcode_1 store avx flop vector_op */
  0x0004000400420040ULL, /* vstapsxx: opcode_1 store avx flop vector_op */
  0x0004000400420040ULL, /* vstaps_n32: opcode_1 store avx flop vector_op */
  0x0084000000400040ULL, /* vmovg2x: opcode_1 avx vector_op fastpath_db */
  0x0084000000400040ULL, /* vmovg2x64: opcode_1 avx vector_op fastpath_db */
  0x0084000000400040ULL, /* vmovx2g: opcode_1 avx vector_op fastpath_db */
  0x0084000000400040ULL, /* vmovx2g64: opcode_1 avx vector_op fastpath_db */
  0x0004000000400440ULL, /* vld64_2sse: opcode_1 load avx vector_op */
  0x0004000000404440ULL, /* vldx64_2sse: opcode_1 load load_exe avx vector_op */
  0x0004000000404440ULL, /* vldxx64_2sse: opcode_1 load load_exe avx vector_op */
  0x0004000000400440ULL, /* vld64_2sse_n32: opcode_1 load avx vector_op */
  0x0004000000420440ULL, /* vst64_fsse: opcode_1 load store avx vector_op */
  0x0004000000424440ULL, /* vstx64_fsse: opcode_1 load load_exe store avx vector_op */
  0x0004000000424440ULL, /* vstxx64_fsse: opcode_1 load load_exe store avx vector_op */
  0x0004000000420440ULL, /* vst64_fsse_n32: opcode_1 load store avx vector_op */
  0x0004000000400040ULL, /* vmovddup: opcode_1 avx vector_op */
  0x0004000000400c40ULL, /* vmovddupx: opcode_1 load load_ext avx vector_op */
  0x0004000000400c40ULL, /* vmovddupxx: opcode_1 load load_ext avx vector_op */
  0x0004000000400c40ULL, /* vmovddupxxx: opcode_1 load load_ext avx vector_op */
  0x0004000000400440ULL, /* vlddqa: opcode_1 load avx vector_op */
  0x0004000000400440ULL, /* vlddqax: opcode_1 load avx vector_op */
  0x0004000000400440ULL, /* vlddqaxx: opcode_1 load avx vector_op */
  0x0004000000400440ULL, /* vlddqa_n32: opcode_1 load avx vector_op */
  0x0004000000400040ULL, /* vmovdqa: opcode_1 avx vector_op */
  0x0004000000420040ULL, /* vstdqa: opcode_1 store avx vector_op */
  0x0004000000420040ULL, /* vstdqax: opcode_1 store avx vector_op */
  0x0004000000420040ULL, /* vstdqaxx: opcode_1 store avx vector_op */
  0x0000000000420040ULL, /* vstdqa_n32: opcode_1 store avx */
  0x0004000008420040ULL, /* vstdqu: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstdqux: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstdquxx: opcode_1 store avx unalign_store vector_op */
  0x0004000000420040ULL, /* vstdqu_n32: opcode_1 store avx vector_op */
  0x0204000400404440ULL, /* vldhpd: opcode_1 load load_exe avx flop vector_op vector_high_loadstore */
  0x0204000400404440ULL, /* vldhpdx: opcode_1 load load_exe avx flop vector_op vector_high_loadstore */
  0x0204000400404440ULL, /* vldhpdxx: opcode_1 load load_exe avx flop vector_op vector_high_loadstore */
  0x0200000400400440ULL, /* vldhpd_n32: opcode_1 load avx flop vector_high_loadstore */
  0x0280000400420040ULL, /* vsthpd: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0280000400420040ULL, /* vsthpdx: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0280000400420040ULL, /* vsthpdxx: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0280000400420040ULL, /* vsthpd_n32: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0204000400404440ULL, /* vldhps: opcode_1 load load_exe avx flop vector_op vector_high_loadstore */
  0x0204000400404440ULL, /* vldhpsx: opcode_1 load load_exe avx flop vector_op vector_high_loadstore */
  0x0204000400404440ULL, /* vldhpsxx: opcode_1 load load_exe avx flop vector_op vector_high_loadstore */
  0x0200000400400440ULL, /* vldhps_n32: opcode_1 load avx flop vector_high_loadstore */
  0x0280000400420040ULL, /* vsthps: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0280000400420040ULL, /* vsthpsx: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0280000400420040ULL, /* vsthpsxx: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0280000400420040ULL, /* vsthps_n32: opcode_1 store avx flop fastpath_db vector_high_loadstore */
  0x0004000400404440ULL, /* vldlpd: opcode_1 load load_exe avx flop vector_op */
  0x0004000400404440ULL, /* vldlpdx: opcode_1 load load_exe avx flop vector_op */
  0x0004000400404440ULL, /* vldlpdxx: opcode_1 load load_exe avx flop vector_op */
  0x0000000400400440ULL, /* vldlpd_n32: opcode_1 load avx flop */
  0x0004000400420040ULL, /* vstorelpd: opcode_1 store avx flop vector_op */
  0x0000000400420040ULL, /* vstlpd: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstlpdx: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstlpdxx: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstlpd_n32: opcode_1 store avx flop */
  0x0104000400404440ULL, /* vldlps: opcode_1 load load_exe avx flop vector_op vector_lo_loadstore */
  0x0104000400404440ULL, /* vldlpsx: opcode_1 load load_exe avx flop vector_op vector_lo_loadstore */
  0x0104000400404440ULL, /* vldlpsxx: opcode_1 load load_exe avx flop vector_op vector_lo_loadstore */
  0x0100000400400440ULL, /* vldlps_n32: opcode_1 load avx flop vector_lo_loadstore */
  0x0100000400420040ULL, /* vstlps: opcode_1 store avx flop vector_lo_loadstore */
  0x0100000400420040ULL, /* vstlpsx: opcode_1 store avx flop vector_lo_loadstore */
  0x0100000400420040ULL, /* vstlpsxx: opcode_1 store avx flop vector_lo_loadstore */
  0x0100000400420040ULL, /* vstlps_n32: opcode_1 store avx flop vector_lo_loadstore */
  0x0080000400400040ULL, /* vmovmskpd: opcode_1 avx flop fastpath_db */
  0x0080000400400040ULL, /* vmovmskps: opcode_1 avx flop fastpath_db */
  0x0004000000430040ULL, /* vstorenti128: opcode_1 nt_store store avx vector_op */
  0x0004000000430040ULL, /* vstorentxi128: opcode_1 nt_store store avx vector_op */
  0x0004000000430040ULL, /* vstorentxxi128: opcode_1 nt_store store avx vector_op */
  0x0004000000400440ULL, /* vldntdqa: opcode_1 load avx vector_op */
  0x0004000000400440ULL, /* vldntdqax: opcode_1 load avx vector_op */
  0x0004000000400440ULL, /* vldntdqaxx: opcode_1 load avx vector_op */
  0x0004000000430040ULL, /* vstntdq: opcode_1 nt_store store avx vector_op */
  0x0004000000430040ULL, /* vstntdqx: opcode_1 nt_store store avx vector_op */
  0x0004000000430040ULL, /* vstntdqxx: opcode_1 nt_store store avx vector_op */
  0x0004000400430040ULL, /* vstntpd: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntpdx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntpdxx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntps: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntpsx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntpsxx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntsd: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntsdx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntsdxx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntss: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntssx: opcode_1 nt_store store avx flop vector_op */
  0x0004000400430040ULL, /* vstntssxx: opcode_1 nt_store store avx flop vector_op */
  0x0000000000400048ULL, /* vmovsd: move opcode_1 avx */
  0x0104000400400440ULL, /* vldsd: opcode_1 load avx flop vector_op vector_lo_loadstore */
  0x0104000400400440ULL, /* vldsdx: opcode_1 load avx flop vector_op vector_lo_loadstore */
  0x0104000400400440ULL, /* vldsdxx: opcode_1 load avx flop vector_op vector_lo_loadstore */
  0x0100000400400440ULL, /* vldsd_n32: opcode_1 load avx flop vector_lo_loadstore */
  0x0000000400420040ULL, /* vstsd: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstsdx: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstsdxx: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstsd_n32: opcode_1 store avx flop */
  0x0000000000400048ULL, /* vmovss: move opcode_1 avx */
  0x0004000400400440ULL, /* vldss: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldssx: opcode_1 load avx flop vector_op */
  0x0004000400400440ULL, /* vldssxx: opcode_1 load avx flop vector_op */
  0x0000000400400440ULL, /* vldss_n32: opcode_1 load avx flop */
  0x0000000400420040ULL, /* vstss: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstssx: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstssxx: opcode_1 store avx flop */
  0x0000000400420040ULL, /* vstss_n32: opcode_1 store avx flop */
  0x0000000000400040ULL, /* vmovlhps: opcode_1 avx */
  0x0000000000400040ULL, /* vmovhlps: opcode_1 avx */
  0x0004000000400040ULL, /* vmovshdup: opcode_1 avx vector_op */
  0x0004000000400c40ULL, /* vmovshdupx: opcode_1 load load_ext avx vector_op */
  0x0004000000400c40ULL, /* vmovshdupxx: opcode_1 load load_ext avx vector_op */
  0x0004000000400c40ULL, /* vmovshdupxxx: opcode_1 load load_ext avx vector_op */
  0x0004000000400040ULL, /* vmovsldup: opcode_1 avx vector_op */
  0x0004000000400c40ULL, /* vmovsldupx: opcode_1 load load_ext avx vector_op */
  0x0004000000400c40ULL, /* vmovsldupxx: opcode_1 load load_ext avx vector_op */
  0x0004000000400c40ULL, /* vmovsldupxxx: opcode_1 load load_ext avx vector_op */
  0x0004000004400440ULL, /* vldupd: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vldupdx: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vldupdxx: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vldupd_n32: opcode_1 load avx unalign_ld vector_op */
  0x0004000008420040ULL, /* vstupd: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstupdx: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstupdxx: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstupd_n32: opcode_1 store avx unalign_store vector_op */
  0x0004000004400440ULL, /* vldups: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vldupsx: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vldupsxx: opcode_1 load avx unalign_ld vector_op */
  0x0004000004400440ULL, /* vldups_n32: opcode_1 load avx unalign_ld vector_op */
  0x0004000008420040ULL, /* vstups: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstupsx: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstupsxx: opcode_1 store avx unalign_store vector_op */
  0x0004000008420040ULL, /* vstups_n32: opcode_1 store avx unalign_store vector_op */
  0x1004000000400060ULL, /* vmpsadbw: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vmpsadbwx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vmpsadbwxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vmpsadbwxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1006002400400040ULL, /* vfmul128v64: opcode_1 avx flop fmul commutative vector_op non_destructive */
  0x1004002400404040ULL, /* vfmulx128v64: opcode_1 load_exe avx flop fmul vector_op non_destructive */
  0x1004002400404040ULL, /* vfmulxx128v64: opcode_1 load_exe avx flop fmul vector_op non_destructive */
  0x1004002400404040ULL, /* vfmulxxx128v64: opcode_1 load_exe avx flop fmul vector_op non_destructive */
  0x1006002400400040ULL, /* vfmul128v32: opcode_1 avx flop fmul commutative vector_op non_destructive */
  0x1004002400404040ULL, /* vfmulx128v32: opcode_1 load_exe avx flop fmul vector_op non_destructive */
  0x1004002400404040ULL, /* vfmulxx128v32: opcode_1 load_exe avx flop fmul vector_op non_destructive */
  0x1004002400404040ULL, /* vfmulxxx128v32: opcode_1 load_exe avx flop fmul vector_op non_destructive */
  0x1002002400400040ULL, /* vmulsd: opcode_1 avx flop fmul commutative non_destructive */
  0x1000002400404040ULL, /* vmulxsd: opcode_1 load_exe avx flop fmul non_destructive */
  0x1000002400404040ULL, /* vmulxxsd: opcode_1 load_exe avx flop fmul non_destructive */
  0x1000002400404040ULL, /* vmulxxxsd: opcode_1 load_exe avx flop fmul non_destructive */
  0x1002002400400040ULL, /* vmulss: opcode_1 avx flop fmul commutative non_destructive */
  0x1000002400404040ULL, /* vmulxss: opcode_1 load_exe avx flop fmul non_destructive */
  0x1000002400404040ULL, /* vmulxxss: opcode_1 load_exe avx flop fmul non_destructive */
  0x1000002400404040ULL, /* vmulxxxss: opcode_1 load_exe avx flop fmul non_destructive */
  0x1004000400400040ULL, /* vorpd: opcode_1 avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfor128v64: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vforx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vforxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vforxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vorps: opcode_1 avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfor128v32: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vforx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vforxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vforxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000000400040ULL, /* vabs128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vabs128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vabs128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vabsxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpackssdw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackssdwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackssdwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackssdwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpacksswb: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpacksswbx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpacksswbxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpacksswbxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpackusdw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackusdwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackusdwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackusdwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpackuswb: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackuswbx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackuswbxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpackuswbxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000800400040ULL, /* vadd128v8: opcode_1 avx fadd commutative vector_op non_destructive */
  0x1004000800404040ULL, /* vaddx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxxx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1006000800400040ULL, /* vadd128v32: opcode_1 avx fadd commutative vector_op non_destructive */
  0x1004000800404040ULL, /* vaddx128v32: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxx128v32: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxxx128v32: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1006000800400040ULL, /* vadd128v64: opcode_1 avx fadd commutative vector_op non_destructive */
  0x1004000800404040ULL, /* vaddx128v64: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxx128v64: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxxx128v64: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1006000800400040ULL, /* vadd128v16: opcode_1 avx fadd commutative vector_op non_destructive */
  0x1004000800404040ULL, /* vaddx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddxxx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800400040ULL, /* vadds128v8: opcode_1 avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddsx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddsxx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddsxxx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800400040ULL, /* vadds128v16: opcode_1 avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddsx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddsxx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddsxxx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800400040ULL, /* vaddus128v8: opcode_1 avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddusx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddusxx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddusxxx128v8: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800400040ULL, /* vaddus128v16: opcode_1 avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddusx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddusxx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000800404040ULL, /* vaddusxxx128v16: opcode_1 load_exe avx fadd vector_op non_destructive */
  0x1004000000400040ULL, /* vpalignr128: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpalignrx128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpalignrxx128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpalignrxxx128: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vand128v8: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vandx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vand128v16: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vandx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vand128v32: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vandx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vand128v64: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vandx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vandn128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vandn128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vandn128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vandn128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vandnxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpavgb: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpavgbx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpavgbxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpavgbxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpavgw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpavgwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpavgwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpavgwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vblendv128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vblendvx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vblendvxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vblendvxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vblend128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vblendx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vblendxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vblendxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vpclmulqdq: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vpclmulqdqx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vpclmulqdqxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vpclmulqdqxxx: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpeq128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpeq128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpeq128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpeq128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpeqxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400064ULL, /* vcmpestri: change_rflags mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404064ULL, /* vcmpestrix: change_rflags mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404064ULL, /* vcmpestrixx: change_rflags mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404064ULL, /* vcmpestrixxx: change_rflags mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400064ULL, /* vcmpestrm: change_rflags mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404064ULL, /* vcmpestrmx: change_rflags mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404064ULL, /* vcmpestrmxx: change_rflags mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404064ULL, /* vcmpestrmxxx: change_rflags mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpgt128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpgt128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpgt128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vcmpgt128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vcmpgtxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400044ULL, /* vcmpistri: change_rflags opcode_1 avx vector_op non_destructive */
  0x1004000000404044ULL, /* vcmpistrix: change_rflags opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404044ULL, /* vcmpistrixx: change_rflags opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404044ULL, /* vcmpistrixxx: change_rflags opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400044ULL, /* vcmpistrm: change_rflags opcode_1 avx vector_op non_destructive */
  0x1004000000404044ULL, /* vcmpistrmx: change_rflags opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404044ULL, /* vcmpistrmxx: change_rflags opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404044ULL, /* vcmpistrmxxx: change_rflags opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfperm128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfpermi128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermix128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermixx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermixxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfperm128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfpermi128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermix128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermixx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfpermixxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vfperm2f128: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfperm2xf128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfperm2xxf128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vfperm2xxxf128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vextr128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vextr128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vextr128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vextrxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1084000000400040ULL, /* vextr128v16: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vextrx128v16: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vextrxx128v16: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vextrxxx128v16: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1004000000400060ULL, /* vphadd128v32: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddx128v32: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddxx128v32: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddxxx128v32: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphadds128v16: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddsx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddsxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddsxxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphadd128v16: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphaddxxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vphminposuw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphminposuwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphminposuwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vphminposuwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphsub128v32: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubx128v32: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubxx128v32: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubxxx128v32: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphsubs128v16: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubsx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubsxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubsxxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400060ULL, /* vphsub128v16: mcode opcode_1 avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404060ULL, /* vphsubxxx128v16: mcode opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vinsr128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vinsr128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vinsr128v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1084000000400040ULL, /* vinsr128v16: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1004000000404040ULL, /* vinsrx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vinsrxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmaddwd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmaddwdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmaddwdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmaddwdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmaddubsw128: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmaddubswx128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmaddubswxx128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmaddubswxxx128: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmaxs128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmaxs128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmaxs128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxsxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmaxu128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxux128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxuxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxuxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmaxu128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxux128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxuxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxuxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmaxu128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxux128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxuxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vmaxuxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmins128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmins128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vmins128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminsxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vminu128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminux128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminuxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminuxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vminu128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminux128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminuxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminuxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vminu128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminux128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminuxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vminuxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1084000000400040ULL, /* vpmovmskb128: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1004000000400040ULL, /* vpmovsxbd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovsxbq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovsxbw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxbwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovsxdq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxdqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxdqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxdqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovsxwd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxwdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxwdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxwdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovsxwq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxwqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxwqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovsxwqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovzxbd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovzxbq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovzxbw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxbwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovzxdq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxdqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxdqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxdqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovzxwd: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxwdx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxwdxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxwdxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpmovzxwq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxwqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxwqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpmovzxwqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004002000400040ULL, /* vmulhuw: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhuwx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhuwxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhuwxxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmulhrsw: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhrswx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhrswxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhrswxxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmulhw: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhwx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhwxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulhwxxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmulld: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulldx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulldxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulldxxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmul128v16: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulx128v16: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulxx128v16: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulxxx128v16: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmul128v32: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulx128v32: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulxx128v32: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmulxxx128v32: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmuludq: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmuludqx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmuludqxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmuludqxxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000400040ULL, /* vmuldq: opcode_1 avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmuldqx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmuldqxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1004002000404040ULL, /* vmuldqxxx: opcode_1 load_exe avx fmul vector_op non_destructive */
  0x1006000000400040ULL, /* vor128v8: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vorx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vor128v16: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vorx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vor128v32: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vorx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vor128v64: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vorx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vorxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1084000000400040ULL, /* vpsadbw: opcode_1 avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vpsadbwx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vpsadbwxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1084000000404040ULL, /* vpsadbwxxx: opcode_1 load_exe avx vector_op fastpath_db non_destructive */
  0x1004000000400040ULL, /* vpshuf128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshuf128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshufw64v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufwx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufwxx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufwxxx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshufhw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufhwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufhwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshufhwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpshuflw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshuflwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshuflwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpshuflwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsign128v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsign128v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsign128v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsignxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpslldq: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrldq: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpslld: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpslldx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpslldxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpslldxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpslldi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsllq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsllqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsllqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsllqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsllqi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsllw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsllwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsllwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsllwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsllwi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrad: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsradx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsradxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsradxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsradi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsraw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrawx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrawxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrawxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrawi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrld: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrldx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrldxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrldxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrldi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrlq: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrlqx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrlqxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrlqxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrlqi: opcode_1 avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrlw: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrlwx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrlwxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpsrlwxxx: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpsrlwi: opcode_1 avx vector_op non_destructive */
  0x1004001000400040ULL, /* vsub128v8: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxxx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsub128v32: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubx128v32: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxx128v32: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxxx128v32: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsub128v64: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubx128v64: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxx128v64: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxxx128v64: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsub128v16: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubxxx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsubs128v8: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubsx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubsxx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubsxxx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsubs128v16: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubsx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubsxx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubsxxx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsubus128v8: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubusx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubusxx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubusxxx128v8: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000400040ULL, /* vsubus128v16: opcode_1 avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubusx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubusxx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x1004001000404040ULL, /* vsubusxxx128v16: opcode_1 load_exe avx fsub vector_op non_destructive */
  0x0004000000400044ULL, /* vptest128: change_rflags opcode_1 avx vector_op */
  0x0004000000404044ULL, /* vptestx128: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000404044ULL, /* vptestxx128: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000404044ULL, /* vptestxxx128: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000400044ULL, /* vtestpd: change_rflags opcode_1 avx vector_op */
  0x0004000000404044ULL, /* vtestxpd: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000404044ULL, /* vtestxxpd: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000404044ULL, /* vtestxxxpd: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000400044ULL, /* vtestps: change_rflags opcode_1 avx vector_op */
  0x0004000000404044ULL, /* vtestxps: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000404044ULL, /* vtestxxps: change_rflags opcode_1 load_exe avx vector_op */
  0x0004000000404044ULL, /* vtestxxxps: change_rflags opcode_1 load_exe avx vector_op */
  0x1004000000400040ULL, /* vpunpckh64v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhx64v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxx64v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxxx64v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckh64v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhx64v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxx64v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxxx64v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckh64v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxxx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckh64v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhx64v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxx64v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpckhxxx64v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckl64v8: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklx64v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxx64v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxxx64v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckl64v32: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklx64v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxx64v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxxx64v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckl64v16: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxxx64v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000400040ULL, /* vpunpckl64v64: opcode_1 avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklx64v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxx64v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vpunpcklxxx64v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vxor128v8: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vxorx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxxx128v8: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vxor128v16: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vxorx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxxx128v16: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vxor128v32: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vxorx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxxx128v32: opcode_1 load_exe avx vector_op non_destructive */
  0x1006000000400040ULL, /* vxor128v64: opcode_1 avx commutative vector_op non_destructive */
  0x1004000000404040ULL, /* vxorx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000000404040ULL, /* vxorxxx128v64: opcode_1 load_exe avx vector_op non_destructive */
  0x1004000400400040ULL, /* vfrcp128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrcpx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrcpxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrcpxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfrcpss: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrcpxss: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrcpxxss: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrcpxxxss: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vround128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vroundx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vroundxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vroundxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vround128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vroundx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vroundxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vroundxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000000400400040ULL, /* vroundsd: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vroundxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vroundxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vroundxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400400040ULL, /* vroundss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vroundxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vroundxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vroundxxxss: opcode_1 load_exe avx flop non_destructive */
  0x1004000400400040ULL, /* vfrsqrt128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrsqrtx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrsqrtxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfrsqrtxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000000400400040ULL, /* vfrsqrtss: opcode_1 avx flop non_destructive */
  0x1000000400404040ULL, /* vfrsqrtxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfrsqrtxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfrsqrtxxxss: opcode_1 load_exe avx flop non_destructive */
  0x0000000000400040ULL, /* vshufpd: opcode_1 avx */
  0x1004000400400040ULL, /* vfshuf128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfshufx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfshufxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfshufxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x0000000000400040ULL, /* vshufps: opcode_1 avx */
  0x1004000400400040ULL, /* vfshuf128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfshufx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfshufxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfshufxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfsqrt128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfsqrtx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfsqrtxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfsqrtxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vfsqrt128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfsqrtx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfsqrtxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfsqrtxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1000020400400040ULL, /* vfsqrtsd: opcode_1 avx flop sqrt non_destructive */
  0x1000000400404040ULL, /* vfsqrtxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfsqrtxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfsqrtxxxsd: opcode_1 load_exe avx flop non_destructive */
  0x1000020400400040ULL, /* vfsqrtss: opcode_1 avx flop sqrt non_destructive */
  0x1000000400404040ULL, /* vfsqrtxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfsqrtxxss: opcode_1 load_exe avx flop non_destructive */
  0x1000000400404040ULL, /* vfsqrtxxxss: opcode_1 load_exe avx flop non_destructive */
  0x0000000000400060ULL, /* vstmxcsr: mcode opcode_1 avx */
  0x1004001400400060ULL, /* vfsub128v64: mcode opcode_1 avx flop fsub vector_op non_destructive */
  0x1004001400404060ULL, /* vfsubx128v64: mcode opcode_1 load_exe avx flop fsub vector_op non_destructive */
  0x1004001400404060ULL, /* vfsubxx128v64: mcode opcode_1 load_exe avx flop fsub vector_op non_destructive */
  0x1004001400404060ULL, /* vfsubxxx128v64: mcode opcode_1 load_exe avx flop fsub vector_op non_destructive */
  0x1004001400400060ULL, /* vfsub128v32: mcode opcode_1 avx flop fsub vector_op non_destructive */
  0x1004001400404060ULL, /* vfsubx128v32: mcode opcode_1 load_exe avx flop fsub vector_op non_destructive */
  0x1004001400404060ULL, /* vfsubxx128v32: mcode opcode_1 load_exe avx flop fsub vector_op non_destructive */
  0x1004001400404060ULL, /* vfsubxxx128v32: mcode opcode_1 load_exe avx flop fsub vector_op non_destructive */
  0x1000001400400040ULL, /* vsubsd: opcode_1 avx flop fsub non_destructive */
  0x1000001400404040ULL, /* vsubxsd: opcode_1 load_exe avx flop fsub non_destructive */
  0x1000001400404040ULL, /* vsubxxsd: opcode_1 load_exe avx flop fsub non_destructive */
  0x1000001400404040ULL, /* vsubxxxsd: opcode_1 load_exe avx flop fsub non_destructive */
  0x1000001400400040ULL, /* vsubss: opcode_1 avx flop fsub non_destructive */
  0x1000001400404040ULL, /* vsubxss: opcode_1 load_exe avx flop fsub non_destructive */
  0x1000001400404040ULL, /* vsubxxss: opcode_1 load_exe avx flop fsub non_destructive */
  0x1000001400404040ULL, /* vsubxxxss: opcode_1 load_exe avx flop fsub non_destructive */
  0x0080800400400044ULL, /* vucomisd: change_rflags opcode_1 avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vucomixsd: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vucomixxsd: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vucomixxxsd: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400400044ULL, /* vucomiss: change_rflags opcode_1 avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vucomixss: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vucomixxss: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x0080800400404044ULL, /* vucomixxxss: change_rflags opcode_1 load_exe avx flop icmp fastpath_db */
  0x1004000400400040ULL, /* vunpckh128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpckhx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpckhxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpckhxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vunpckh128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpckhx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpckhxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpckhxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vunpckl128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpcklx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpcklxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpcklxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vunpckl128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpcklx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpcklxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vunpcklxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vxorpd: opcode_1 avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfxor128v64: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfxorx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfxorxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfxorxxx128v64: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vxzero128v64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vxzero64: opcode_1 avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vxorps: opcode_1 avx flop vector_op non_destructive */
  0x1006000400400040ULL, /* vfxor128v32: opcode_1 avx flop commutative vector_op non_destructive */
  0x1004000400404040ULL, /* vfxorx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfxorxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400404040ULL, /* vfxorxxx128v32: opcode_1 load_exe avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vxzero128v32: opcode_1 avx flop vector_op non_destructive */
  0x1004000400400040ULL, /* vxzero32: opcode_1 avx flop vector_op non_destructive */
  0x0000000000400040ULL, /* vzeroall: opcode_1 avx */
  0x1000000400400040ULL, /* vcmpeqpd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpltpd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmplepd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpunordpd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpneqpd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnltpd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnlepd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpordpd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpeqps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpltps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpleps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpunordps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpneqps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnltps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnleps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpordps: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpeqsd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpltsd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmplesd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpunordsd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpneqsd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnltsd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnlesd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpordsd: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpeqss: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpltss: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpless: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpunordss: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpneqss: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnltss: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpnless: opcode_1 avx flop non_destructive */
  0x1000000400400040ULL, /* vcmpordss: opcode_1 avx flop non_destructive */
  0x000c000400000040ULL, /* xfmadd132pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd132xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd132xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd132xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmadd213pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd213xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd213xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd213xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmadd231pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd231xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd231xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd231xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmadd132ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd132xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd132xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd132xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmadd213ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd213xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd213xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd213xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmadd231ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd231xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd231xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmadd231xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x0008000400000040ULL, /* xfmadd132sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmadd132xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd132xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd132xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmadd213sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmadd213xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd213xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd213xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmadd231sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmadd231xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd231xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd231xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmadd132ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmadd132xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd132xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd132xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmadd213ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmadd213xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd213xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd213xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmadd231ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmadd231xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd231xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmadd231xxxss: opcode_1 load_exe avx flop x86_style */
  0x000c000400000040ULL, /* xfmaddsub132pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub132xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub132xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub132xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmaddsub213pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub213xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub213xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub213xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmaddsub231pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub231xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub231xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub231xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmaddsub132ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub132xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub132xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub132xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmaddsub213ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub213xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub213xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub213xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmaddsub231ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub231xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub231xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmaddsub231xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsubadd132pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd132xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd132xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd132xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsubadd213pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd213xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd213xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd213xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsubadd231pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd231xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd231xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd231xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsubadd132ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd132xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd132xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd132xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsubadd213ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd213xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd213xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd213xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsubadd231ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd231xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd231xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsubadd231xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsub132pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub132xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub132xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub132xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsub213pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub213xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub213xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub213xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsub231pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub231xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub231xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub231xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsub132ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub132xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub132xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub132xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsub213ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub213xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub213xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub213xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfmsub231ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub231xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub231xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfmsub231xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x0008000400000040ULL, /* xfmsub132sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmsub132xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub132xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub132xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmsub213sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmsub213xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub213xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub213xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmsub231sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmsub231xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub231xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub231xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmsub132ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmsub132xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub132xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub132xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmsub213ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmsub213xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub213xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub213xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfmsub231ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfmsub231xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub231xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfmsub231xxxss: opcode_1 load_exe avx flop x86_style */
  0x000c000400000040ULL, /* xfnmadd132pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd132xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd132xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd132xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmadd213pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd213xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd213xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd213xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmadd231pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd231xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd231xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd231xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmadd132ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd132xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd132xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd132xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmadd213ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd213xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd213xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd213xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmadd231ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd231xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd231xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmadd231xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x0008000400000040ULL, /* xfnmadd132sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmadd132xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd132xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd132xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmadd213sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmadd213xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd213xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd213xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmadd231sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmadd231xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd231xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd231xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmadd132ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmadd132xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd132xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd132xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmadd213ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmadd213xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd213xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd213xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmadd231ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmadd231xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd231xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmadd231xxxss: opcode_1 load_exe avx flop x86_style */
  0x000c000400000040ULL, /* xfnmsub132pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub132xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub132xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub132xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmsub213pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub213xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub213xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub213xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmsub231pd: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub231xpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub231xxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub231xxxpd: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmsub132ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub132xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub132xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub132xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmsub213ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub213xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub213xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub213xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400000040ULL, /* xfnmsub231ps: opcode_1 flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub231xps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub231xxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x000c000400404040ULL, /* xfnmsub231xxxps: opcode_1 load_exe avx flop vector_op x86_style */
  0x0008000400000040ULL, /* xfnmsub132sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmsub132xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub132xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub132xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmsub213sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmsub213xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub213xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub213xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmsub231sd: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmsub231xsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub231xxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub231xxxsd: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmsub132ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmsub132xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub132xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub132xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmsub213ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmsub213xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub213xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub213xxxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400000040ULL, /* xfnmsub231ss: opcode_1 flop x86_style */
  0x0008000400404040ULL, /* xfnmsub231xss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub231xxss: opcode_1 load_exe avx flop x86_style */
  0x0008000400404040ULL, /* xfnmsub231xxxss: opcode_1 load_exe avx flop x86_style */
  0x0000000000000048ULL, /* movabsq: move opcode_1 */
  0x0000000000020040ULL, /* store8_abs: opcode_1 store */
  0x0000000000020040ULL, /* store16_abs: opcode_1 store */
  0x0000000000020040ULL, /* store32_abs: opcode_1 store */
  0x0000000000020040ULL, /* store64_abs: opcode_1 store */
  0x0000000000000440ULL, /* ld8_abs: opcode_1 load */
  0x0000000000000440ULL, /* ld16_abs: opcode_1 load */
  0x0000000000000440ULL, /* ld32_abs: opcode_1 load */
  0x0000000000000440ULL, /* ld64_abs: opcode_1 load */
  0x400000000000c044ULL, /* lock_add32: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_adc32: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_add64: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x4028000000008044ULL, /* lock_xchg32: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4028000000008044ULL, /* lock_xchg64: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4020000000000044ULL, /* lock_cmpxchg32: change_rflags opcode_1 side_effects prefix_lock */
  0x4020000000000044ULL, /* lock_cmpxchg64: change_rflags opcode_1 side_effects prefix_lock */
  0x400000000000c044ULL, /* lock_and32: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_and64: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_or32: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_or64: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_xor32: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_xor64: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_sub32: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_sub64: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_add8: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_add16: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x4028000000008044ULL, /* lock_xchg8: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4028000000008044ULL, /* lock_xchg16: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4020000000000044ULL, /* lock_cmpxchg8: change_rflags opcode_1 side_effects prefix_lock */
  0x4020000000000044ULL, /* lock_cmpxchg16: change_rflags opcode_1 side_effects prefix_lock */
  0x400000000000c044ULL, /* lock_and8: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_and16: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_or8: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_or16: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_xor8: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_xor16: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_sub8: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x400000000000c044ULL, /* lock_sub16: change_rflags opcode_1 load_exe load_exe_store prefix_lock */
  0x4028000000008044ULL, /* lock_xadd8: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4028000000008044ULL, /* lock_xadd16: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4028000000008044ULL, /* lock_xadd32: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x4028000000008044ULL, /* lock_xadd64: change_rflags opcode_1 load_exe_store x86_style side_effects prefix_lock */
  0x0000000000000044ULL, /* bsf32: change_rflags opcode_1 */
  0x0000000000000044ULL, /* bsf64: change_rflags opcode_1 */
  0x0000000000000044ULL, /* bsr32: change_rflags opcode_1 */
  0x0000000000000044ULL, /* bsr64: change_rflags opcode_1 */
  0x0000080000180040ULL, /* tls_global_dynamic_64: opcode_1 xfer call jump */
  0x0000080000180040ULL, /* tls_global_dynamic_32: opcode_1 xfer call jump */
  0x0000080000180040ULL, /* tls_local_dynamic_64: opcode_1 xfer call jump */
  0x0000080000180040ULL, /* tls_local_dynamic_32: opcode_1 xfer call jump */
  0x0000008000000040ULL, /* begin_pregtn: opcode_1 dummy */
  0x0000008000000040ULL, /* end_pregtn: opcode_1 dummy */
  0x0000008000000040ULL, /* bwd_bar: opcode_1 dummy */
  0x0000008000000040ULL, /* fwd_bar: opcode_1 dummy */
  0x0000008000000040ULL, /* label: opcode_1 dummy */
  0x0000004000000040ULL, /* nop: opcode_1 noop */
  0x000000c000000040ULL, /* noop: opcode_1 noop dummy */
};
