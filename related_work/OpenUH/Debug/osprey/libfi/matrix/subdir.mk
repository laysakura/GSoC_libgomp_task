################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/matrix/MATMUL_C4C4dispatch.c \
../osprey/libfi/matrix/MATMUL_C4Cdispatch.c \
../osprey/libfi/matrix/MATMUL_C4S4dispatch.c \
../osprey/libfi/matrix/MATMUL_C4Sdispatch.c \
../osprey/libfi/matrix/MATMUL_CC4dispatch.c \
../osprey/libfi/matrix/MATMUL_CCdispatch.c \
../osprey/libfi/matrix/MATMUL_CS4dispatch.c \
../osprey/libfi/matrix/MATMUL_CSdispatch.c \
../osprey/libfi/matrix/MATMUL_S4C4dispatch.c \
../osprey/libfi/matrix/MATMUL_S4Cdispatch.c \
../osprey/libfi/matrix/MATMUL_S4S4dispatch.c \
../osprey/libfi/matrix/MATMUL_S4Sdispatch.c \
../osprey/libfi/matrix/MATMUL_SC4dispatch.c \
../osprey/libfi/matrix/MATMUL_SCdispatch.c \
../osprey/libfi/matrix/MATMUL_SS4dispatch.c \
../osprey/libfi/matrix/MATMUL_SSdispatch.c \
../osprey/libfi/matrix/f90_mmult_error.c \
../osprey/libfi/matrix/matmul_c4c.c \
../osprey/libfi/matrix/matmul_c4c4.c \
../osprey/libfi/matrix/matmul_c4d.c \
../osprey/libfi/matrix/matmul_c4i1.c \
../osprey/libfi/matrix/matmul_c4i2.c \
../osprey/libfi/matrix/matmul_c4i4.c \
../osprey/libfi/matrix/matmul_c4j.c \
../osprey/libfi/matrix/matmul_c4s.c \
../osprey/libfi/matrix/matmul_c4s4.c \
../osprey/libfi/matrix/matmul_c4z.c \
../osprey/libfi/matrix/matmul_cc4.c \
../osprey/libfi/matrix/matmul_cc@.c \
../osprey/libfi/matrix/matmul_cd@.c \
../osprey/libfi/matrix/matmul_ci1.c \
../osprey/libfi/matrix/matmul_ci2.c \
../osprey/libfi/matrix/matmul_ci4.c \
../osprey/libfi/matrix/matmul_ci@.c \
../osprey/libfi/matrix/matmul_cj@.c \
../osprey/libfi/matrix/matmul_cs4.c \
../osprey/libfi/matrix/matmul_cs@.c \
../osprey/libfi/matrix/matmul_cz@.c \
../osprey/libfi/matrix/matmul_dc4.c \
../osprey/libfi/matrix/matmul_dc@.c \
../osprey/libfi/matrix/matmul_dd@.c \
../osprey/libfi/matrix/matmul_di1.c \
../osprey/libfi/matrix/matmul_di2.c \
../osprey/libfi/matrix/matmul_di4.c \
../osprey/libfi/matrix/matmul_di@.c \
../osprey/libfi/matrix/matmul_dj@.c \
../osprey/libfi/matrix/matmul_ds4.c \
../osprey/libfi/matrix/matmul_ds@.c \
../osprey/libfi/matrix/matmul_dz@.c \
../osprey/libfi/matrix/matmul_i1c.c \
../osprey/libfi/matrix/matmul_i1c4.c \
../osprey/libfi/matrix/matmul_i1d.c \
../osprey/libfi/matrix/matmul_i1i1.c \
../osprey/libfi/matrix/matmul_i1i2.c \
../osprey/libfi/matrix/matmul_i1i4.c \
../osprey/libfi/matrix/matmul_i1j.c \
../osprey/libfi/matrix/matmul_i1s.c \
../osprey/libfi/matrix/matmul_i1s4.c \
../osprey/libfi/matrix/matmul_i1z.c \
../osprey/libfi/matrix/matmul_i2c.c \
../osprey/libfi/matrix/matmul_i2c4.c \
../osprey/libfi/matrix/matmul_i2d.c \
../osprey/libfi/matrix/matmul_i2i1.c \
../osprey/libfi/matrix/matmul_i2i2.c \
../osprey/libfi/matrix/matmul_i2i4.c \
../osprey/libfi/matrix/matmul_i2j.c \
../osprey/libfi/matrix/matmul_i2s.c \
../osprey/libfi/matrix/matmul_i2s4.c \
../osprey/libfi/matrix/matmul_i2z.c \
../osprey/libfi/matrix/matmul_i4c.c \
../osprey/libfi/matrix/matmul_i4c4.c \
../osprey/libfi/matrix/matmul_i4d.c \
../osprey/libfi/matrix/matmul_i4i1.c \
../osprey/libfi/matrix/matmul_i4i2.c \
../osprey/libfi/matrix/matmul_i4i4.c \
../osprey/libfi/matrix/matmul_i4j.c \
../osprey/libfi/matrix/matmul_i4s.c \
../osprey/libfi/matrix/matmul_i4s4.c \
../osprey/libfi/matrix/matmul_i4z.c \
../osprey/libfi/matrix/matmul_ic@.c \
../osprey/libfi/matrix/matmul_id@.c \
../osprey/libfi/matrix/matmul_ii@.c \
../osprey/libfi/matrix/matmul_is@.c \
../osprey/libfi/matrix/matmul_iz@.c \
../osprey/libfi/matrix/matmul_jc4.c \
../osprey/libfi/matrix/matmul_jc@.c \
../osprey/libfi/matrix/matmul_jd@.c \
../osprey/libfi/matrix/matmul_ji1.c \
../osprey/libfi/matrix/matmul_ji2.c \
../osprey/libfi/matrix/matmul_ji4.c \
../osprey/libfi/matrix/matmul_jj@.c \
../osprey/libfi/matrix/matmul_js4.c \
../osprey/libfi/matrix/matmul_js@.c \
../osprey/libfi/matrix/matmul_jz@.c \
../osprey/libfi/matrix/matmul_l1l.c \
../osprey/libfi/matrix/matmul_l1l1.c \
../osprey/libfi/matrix/matmul_l1l2.c \
../osprey/libfi/matrix/matmul_l1l4.c \
../osprey/libfi/matrix/matmul_l2l.c \
../osprey/libfi/matrix/matmul_l2l1.c \
../osprey/libfi/matrix/matmul_l2l2.c \
../osprey/libfi/matrix/matmul_l2l4.c \
../osprey/libfi/matrix/matmul_l4l.c \
../osprey/libfi/matrix/matmul_l4l1.c \
../osprey/libfi/matrix/matmul_l4l2.c \
../osprey/libfi/matrix/matmul_l4l4.c \
../osprey/libfi/matrix/matmul_ll1.c \
../osprey/libfi/matrix/matmul_ll2.c \
../osprey/libfi/matrix/matmul_ll4.c \
../osprey/libfi/matrix/matmul_ll@.c \
../osprey/libfi/matrix/matmul_s4c.c \
../osprey/libfi/matrix/matmul_s4c4.c \
../osprey/libfi/matrix/matmul_s4d.c \
../osprey/libfi/matrix/matmul_s4i1.c \
../osprey/libfi/matrix/matmul_s4i2.c \
../osprey/libfi/matrix/matmul_s4i4.c \
../osprey/libfi/matrix/matmul_s4j.c \
../osprey/libfi/matrix/matmul_s4s.c \
../osprey/libfi/matrix/matmul_s4s4.c \
../osprey/libfi/matrix/matmul_s4z.c \
../osprey/libfi/matrix/matmul_sc4.c \
../osprey/libfi/matrix/matmul_sc@.c \
../osprey/libfi/matrix/matmul_sd@.c \
../osprey/libfi/matrix/matmul_si1.c \
../osprey/libfi/matrix/matmul_si2.c \
../osprey/libfi/matrix/matmul_si4.c \
../osprey/libfi/matrix/matmul_si@.c \
../osprey/libfi/matrix/matmul_sj@.c \
../osprey/libfi/matrix/matmul_ss4.c \
../osprey/libfi/matrix/matmul_ss@.c \
../osprey/libfi/matrix/matmul_sz@.c \
../osprey/libfi/matrix/matmul_zc4.c \
../osprey/libfi/matrix/matmul_zc@.c \
../osprey/libfi/matrix/matmul_zd@.c \
../osprey/libfi/matrix/matmul_zi1.c \
../osprey/libfi/matrix/matmul_zi2.c \
../osprey/libfi/matrix/matmul_zi4.c \
../osprey/libfi/matrix/matmul_zi@.c \
../osprey/libfi/matrix/matmul_zj@.c \
../osprey/libfi/matrix/matmul_zs4.c \
../osprey/libfi/matrix/matmul_zs@.c \
../osprey/libfi/matrix/matmul_zz@.c \
../osprey/libfi/matrix/mmx_dlutil.c 

OBJS += \
./osprey/libfi/matrix/MATMUL_C4C4dispatch.o \
./osprey/libfi/matrix/MATMUL_C4Cdispatch.o \
./osprey/libfi/matrix/MATMUL_C4S4dispatch.o \
./osprey/libfi/matrix/MATMUL_C4Sdispatch.o \
./osprey/libfi/matrix/MATMUL_CC4dispatch.o \
./osprey/libfi/matrix/MATMUL_CCdispatch.o \
./osprey/libfi/matrix/MATMUL_CS4dispatch.o \
./osprey/libfi/matrix/MATMUL_CSdispatch.o \
./osprey/libfi/matrix/MATMUL_S4C4dispatch.o \
./osprey/libfi/matrix/MATMUL_S4Cdispatch.o \
./osprey/libfi/matrix/MATMUL_S4S4dispatch.o \
./osprey/libfi/matrix/MATMUL_S4Sdispatch.o \
./osprey/libfi/matrix/MATMUL_SC4dispatch.o \
./osprey/libfi/matrix/MATMUL_SCdispatch.o \
./osprey/libfi/matrix/MATMUL_SS4dispatch.o \
./osprey/libfi/matrix/MATMUL_SSdispatch.o \
./osprey/libfi/matrix/f90_mmult_error.o \
./osprey/libfi/matrix/matmul_c4c.o \
./osprey/libfi/matrix/matmul_c4c4.o \
./osprey/libfi/matrix/matmul_c4d.o \
./osprey/libfi/matrix/matmul_c4i1.o \
./osprey/libfi/matrix/matmul_c4i2.o \
./osprey/libfi/matrix/matmul_c4i4.o \
./osprey/libfi/matrix/matmul_c4j.o \
./osprey/libfi/matrix/matmul_c4s.o \
./osprey/libfi/matrix/matmul_c4s4.o \
./osprey/libfi/matrix/matmul_c4z.o \
./osprey/libfi/matrix/matmul_cc4.o \
./osprey/libfi/matrix/matmul_cc@.o \
./osprey/libfi/matrix/matmul_cd@.o \
./osprey/libfi/matrix/matmul_ci1.o \
./osprey/libfi/matrix/matmul_ci2.o \
./osprey/libfi/matrix/matmul_ci4.o \
./osprey/libfi/matrix/matmul_ci@.o \
./osprey/libfi/matrix/matmul_cj@.o \
./osprey/libfi/matrix/matmul_cs4.o \
./osprey/libfi/matrix/matmul_cs@.o \
./osprey/libfi/matrix/matmul_cz@.o \
./osprey/libfi/matrix/matmul_dc4.o \
./osprey/libfi/matrix/matmul_dc@.o \
./osprey/libfi/matrix/matmul_dd@.o \
./osprey/libfi/matrix/matmul_di1.o \
./osprey/libfi/matrix/matmul_di2.o \
./osprey/libfi/matrix/matmul_di4.o \
./osprey/libfi/matrix/matmul_di@.o \
./osprey/libfi/matrix/matmul_dj@.o \
./osprey/libfi/matrix/matmul_ds4.o \
./osprey/libfi/matrix/matmul_ds@.o \
./osprey/libfi/matrix/matmul_dz@.o \
./osprey/libfi/matrix/matmul_i1c.o \
./osprey/libfi/matrix/matmul_i1c4.o \
./osprey/libfi/matrix/matmul_i1d.o \
./osprey/libfi/matrix/matmul_i1i1.o \
./osprey/libfi/matrix/matmul_i1i2.o \
./osprey/libfi/matrix/matmul_i1i4.o \
./osprey/libfi/matrix/matmul_i1j.o \
./osprey/libfi/matrix/matmul_i1s.o \
./osprey/libfi/matrix/matmul_i1s4.o \
./osprey/libfi/matrix/matmul_i1z.o \
./osprey/libfi/matrix/matmul_i2c.o \
./osprey/libfi/matrix/matmul_i2c4.o \
./osprey/libfi/matrix/matmul_i2d.o \
./osprey/libfi/matrix/matmul_i2i1.o \
./osprey/libfi/matrix/matmul_i2i2.o \
./osprey/libfi/matrix/matmul_i2i4.o \
./osprey/libfi/matrix/matmul_i2j.o \
./osprey/libfi/matrix/matmul_i2s.o \
./osprey/libfi/matrix/matmul_i2s4.o \
./osprey/libfi/matrix/matmul_i2z.o \
./osprey/libfi/matrix/matmul_i4c.o \
./osprey/libfi/matrix/matmul_i4c4.o \
./osprey/libfi/matrix/matmul_i4d.o \
./osprey/libfi/matrix/matmul_i4i1.o \
./osprey/libfi/matrix/matmul_i4i2.o \
./osprey/libfi/matrix/matmul_i4i4.o \
./osprey/libfi/matrix/matmul_i4j.o \
./osprey/libfi/matrix/matmul_i4s.o \
./osprey/libfi/matrix/matmul_i4s4.o \
./osprey/libfi/matrix/matmul_i4z.o \
./osprey/libfi/matrix/matmul_ic@.o \
./osprey/libfi/matrix/matmul_id@.o \
./osprey/libfi/matrix/matmul_ii@.o \
./osprey/libfi/matrix/matmul_is@.o \
./osprey/libfi/matrix/matmul_iz@.o \
./osprey/libfi/matrix/matmul_jc4.o \
./osprey/libfi/matrix/matmul_jc@.o \
./osprey/libfi/matrix/matmul_jd@.o \
./osprey/libfi/matrix/matmul_ji1.o \
./osprey/libfi/matrix/matmul_ji2.o \
./osprey/libfi/matrix/matmul_ji4.o \
./osprey/libfi/matrix/matmul_jj@.o \
./osprey/libfi/matrix/matmul_js4.o \
./osprey/libfi/matrix/matmul_js@.o \
./osprey/libfi/matrix/matmul_jz@.o \
./osprey/libfi/matrix/matmul_l1l.o \
./osprey/libfi/matrix/matmul_l1l1.o \
./osprey/libfi/matrix/matmul_l1l2.o \
./osprey/libfi/matrix/matmul_l1l4.o \
./osprey/libfi/matrix/matmul_l2l.o \
./osprey/libfi/matrix/matmul_l2l1.o \
./osprey/libfi/matrix/matmul_l2l2.o \
./osprey/libfi/matrix/matmul_l2l4.o \
./osprey/libfi/matrix/matmul_l4l.o \
./osprey/libfi/matrix/matmul_l4l1.o \
./osprey/libfi/matrix/matmul_l4l2.o \
./osprey/libfi/matrix/matmul_l4l4.o \
./osprey/libfi/matrix/matmul_ll1.o \
./osprey/libfi/matrix/matmul_ll2.o \
./osprey/libfi/matrix/matmul_ll4.o \
./osprey/libfi/matrix/matmul_ll@.o \
./osprey/libfi/matrix/matmul_s4c.o \
./osprey/libfi/matrix/matmul_s4c4.o \
./osprey/libfi/matrix/matmul_s4d.o \
./osprey/libfi/matrix/matmul_s4i1.o \
./osprey/libfi/matrix/matmul_s4i2.o \
./osprey/libfi/matrix/matmul_s4i4.o \
./osprey/libfi/matrix/matmul_s4j.o \
./osprey/libfi/matrix/matmul_s4s.o \
./osprey/libfi/matrix/matmul_s4s4.o \
./osprey/libfi/matrix/matmul_s4z.o \
./osprey/libfi/matrix/matmul_sc4.o \
./osprey/libfi/matrix/matmul_sc@.o \
./osprey/libfi/matrix/matmul_sd@.o \
./osprey/libfi/matrix/matmul_si1.o \
./osprey/libfi/matrix/matmul_si2.o \
./osprey/libfi/matrix/matmul_si4.o \
./osprey/libfi/matrix/matmul_si@.o \
./osprey/libfi/matrix/matmul_sj@.o \
./osprey/libfi/matrix/matmul_ss4.o \
./osprey/libfi/matrix/matmul_ss@.o \
./osprey/libfi/matrix/matmul_sz@.o \
./osprey/libfi/matrix/matmul_zc4.o \
./osprey/libfi/matrix/matmul_zc@.o \
./osprey/libfi/matrix/matmul_zd@.o \
./osprey/libfi/matrix/matmul_zi1.o \
./osprey/libfi/matrix/matmul_zi2.o \
./osprey/libfi/matrix/matmul_zi4.o \
./osprey/libfi/matrix/matmul_zi@.o \
./osprey/libfi/matrix/matmul_zj@.o \
./osprey/libfi/matrix/matmul_zs4.o \
./osprey/libfi/matrix/matmul_zs@.o \
./osprey/libfi/matrix/matmul_zz@.o \
./osprey/libfi/matrix/mmx_dlutil.o 

C_DEPS += \
./osprey/libfi/matrix/MATMUL_C4C4dispatch.d \
./osprey/libfi/matrix/MATMUL_C4Cdispatch.d \
./osprey/libfi/matrix/MATMUL_C4S4dispatch.d \
./osprey/libfi/matrix/MATMUL_C4Sdispatch.d \
./osprey/libfi/matrix/MATMUL_CC4dispatch.d \
./osprey/libfi/matrix/MATMUL_CCdispatch.d \
./osprey/libfi/matrix/MATMUL_CS4dispatch.d \
./osprey/libfi/matrix/MATMUL_CSdispatch.d \
./osprey/libfi/matrix/MATMUL_S4C4dispatch.d \
./osprey/libfi/matrix/MATMUL_S4Cdispatch.d \
./osprey/libfi/matrix/MATMUL_S4S4dispatch.d \
./osprey/libfi/matrix/MATMUL_S4Sdispatch.d \
./osprey/libfi/matrix/MATMUL_SC4dispatch.d \
./osprey/libfi/matrix/MATMUL_SCdispatch.d \
./osprey/libfi/matrix/MATMUL_SS4dispatch.d \
./osprey/libfi/matrix/MATMUL_SSdispatch.d \
./osprey/libfi/matrix/f90_mmult_error.d \
./osprey/libfi/matrix/matmul_c4c.d \
./osprey/libfi/matrix/matmul_c4c4.d \
./osprey/libfi/matrix/matmul_c4d.d \
./osprey/libfi/matrix/matmul_c4i1.d \
./osprey/libfi/matrix/matmul_c4i2.d \
./osprey/libfi/matrix/matmul_c4i4.d \
./osprey/libfi/matrix/matmul_c4j.d \
./osprey/libfi/matrix/matmul_c4s.d \
./osprey/libfi/matrix/matmul_c4s4.d \
./osprey/libfi/matrix/matmul_c4z.d \
./osprey/libfi/matrix/matmul_cc4.d \
./osprey/libfi/matrix/matmul_cc@.d \
./osprey/libfi/matrix/matmul_cd@.d \
./osprey/libfi/matrix/matmul_ci1.d \
./osprey/libfi/matrix/matmul_ci2.d \
./osprey/libfi/matrix/matmul_ci4.d \
./osprey/libfi/matrix/matmul_ci@.d \
./osprey/libfi/matrix/matmul_cj@.d \
./osprey/libfi/matrix/matmul_cs4.d \
./osprey/libfi/matrix/matmul_cs@.d \
./osprey/libfi/matrix/matmul_cz@.d \
./osprey/libfi/matrix/matmul_dc4.d \
./osprey/libfi/matrix/matmul_dc@.d \
./osprey/libfi/matrix/matmul_dd@.d \
./osprey/libfi/matrix/matmul_di1.d \
./osprey/libfi/matrix/matmul_di2.d \
./osprey/libfi/matrix/matmul_di4.d \
./osprey/libfi/matrix/matmul_di@.d \
./osprey/libfi/matrix/matmul_dj@.d \
./osprey/libfi/matrix/matmul_ds4.d \
./osprey/libfi/matrix/matmul_ds@.d \
./osprey/libfi/matrix/matmul_dz@.d \
./osprey/libfi/matrix/matmul_i1c.d \
./osprey/libfi/matrix/matmul_i1c4.d \
./osprey/libfi/matrix/matmul_i1d.d \
./osprey/libfi/matrix/matmul_i1i1.d \
./osprey/libfi/matrix/matmul_i1i2.d \
./osprey/libfi/matrix/matmul_i1i4.d \
./osprey/libfi/matrix/matmul_i1j.d \
./osprey/libfi/matrix/matmul_i1s.d \
./osprey/libfi/matrix/matmul_i1s4.d \
./osprey/libfi/matrix/matmul_i1z.d \
./osprey/libfi/matrix/matmul_i2c.d \
./osprey/libfi/matrix/matmul_i2c4.d \
./osprey/libfi/matrix/matmul_i2d.d \
./osprey/libfi/matrix/matmul_i2i1.d \
./osprey/libfi/matrix/matmul_i2i2.d \
./osprey/libfi/matrix/matmul_i2i4.d \
./osprey/libfi/matrix/matmul_i2j.d \
./osprey/libfi/matrix/matmul_i2s.d \
./osprey/libfi/matrix/matmul_i2s4.d \
./osprey/libfi/matrix/matmul_i2z.d \
./osprey/libfi/matrix/matmul_i4c.d \
./osprey/libfi/matrix/matmul_i4c4.d \
./osprey/libfi/matrix/matmul_i4d.d \
./osprey/libfi/matrix/matmul_i4i1.d \
./osprey/libfi/matrix/matmul_i4i2.d \
./osprey/libfi/matrix/matmul_i4i4.d \
./osprey/libfi/matrix/matmul_i4j.d \
./osprey/libfi/matrix/matmul_i4s.d \
./osprey/libfi/matrix/matmul_i4s4.d \
./osprey/libfi/matrix/matmul_i4z.d \
./osprey/libfi/matrix/matmul_ic@.d \
./osprey/libfi/matrix/matmul_id@.d \
./osprey/libfi/matrix/matmul_ii@.d \
./osprey/libfi/matrix/matmul_is@.d \
./osprey/libfi/matrix/matmul_iz@.d \
./osprey/libfi/matrix/matmul_jc4.d \
./osprey/libfi/matrix/matmul_jc@.d \
./osprey/libfi/matrix/matmul_jd@.d \
./osprey/libfi/matrix/matmul_ji1.d \
./osprey/libfi/matrix/matmul_ji2.d \
./osprey/libfi/matrix/matmul_ji4.d \
./osprey/libfi/matrix/matmul_jj@.d \
./osprey/libfi/matrix/matmul_js4.d \
./osprey/libfi/matrix/matmul_js@.d \
./osprey/libfi/matrix/matmul_jz@.d \
./osprey/libfi/matrix/matmul_l1l.d \
./osprey/libfi/matrix/matmul_l1l1.d \
./osprey/libfi/matrix/matmul_l1l2.d \
./osprey/libfi/matrix/matmul_l1l4.d \
./osprey/libfi/matrix/matmul_l2l.d \
./osprey/libfi/matrix/matmul_l2l1.d \
./osprey/libfi/matrix/matmul_l2l2.d \
./osprey/libfi/matrix/matmul_l2l4.d \
./osprey/libfi/matrix/matmul_l4l.d \
./osprey/libfi/matrix/matmul_l4l1.d \
./osprey/libfi/matrix/matmul_l4l2.d \
./osprey/libfi/matrix/matmul_l4l4.d \
./osprey/libfi/matrix/matmul_ll1.d \
./osprey/libfi/matrix/matmul_ll2.d \
./osprey/libfi/matrix/matmul_ll4.d \
./osprey/libfi/matrix/matmul_ll@.d \
./osprey/libfi/matrix/matmul_s4c.d \
./osprey/libfi/matrix/matmul_s4c4.d \
./osprey/libfi/matrix/matmul_s4d.d \
./osprey/libfi/matrix/matmul_s4i1.d \
./osprey/libfi/matrix/matmul_s4i2.d \
./osprey/libfi/matrix/matmul_s4i4.d \
./osprey/libfi/matrix/matmul_s4j.d \
./osprey/libfi/matrix/matmul_s4s.d \
./osprey/libfi/matrix/matmul_s4s4.d \
./osprey/libfi/matrix/matmul_s4z.d \
./osprey/libfi/matrix/matmul_sc4.d \
./osprey/libfi/matrix/matmul_sc@.d \
./osprey/libfi/matrix/matmul_sd@.d \
./osprey/libfi/matrix/matmul_si1.d \
./osprey/libfi/matrix/matmul_si2.d \
./osprey/libfi/matrix/matmul_si4.d \
./osprey/libfi/matrix/matmul_si@.d \
./osprey/libfi/matrix/matmul_sj@.d \
./osprey/libfi/matrix/matmul_ss4.d \
./osprey/libfi/matrix/matmul_ss@.d \
./osprey/libfi/matrix/matmul_sz@.d \
./osprey/libfi/matrix/matmul_zc4.d \
./osprey/libfi/matrix/matmul_zc@.d \
./osprey/libfi/matrix/matmul_zd@.d \
./osprey/libfi/matrix/matmul_zi1.d \
./osprey/libfi/matrix/matmul_zi2.d \
./osprey/libfi/matrix/matmul_zi4.d \
./osprey/libfi/matrix/matmul_zi@.d \
./osprey/libfi/matrix/matmul_zj@.d \
./osprey/libfi/matrix/matmul_zs4.d \
./osprey/libfi/matrix/matmul_zs@.d \
./osprey/libfi/matrix/matmul_zz@.d \
./osprey/libfi/matrix/mmx_dlutil.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/matrix/%.o: ../osprey/libfi/matrix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_cc@.o: ../osprey/libfi/matrix/matmul_cc@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_cc@.d" -MT"osprey/libfi/matrix/matmul_cc@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_cd@.o: ../osprey/libfi/matrix/matmul_cd@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_cd@.d" -MT"osprey/libfi/matrix/matmul_cd@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_ci@.o: ../osprey/libfi/matrix/matmul_ci@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_ci@.d" -MT"osprey/libfi/matrix/matmul_ci@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_cj@.o: ../osprey/libfi/matrix/matmul_cj@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_cj@.d" -MT"osprey/libfi/matrix/matmul_cj@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_cs@.o: ../osprey/libfi/matrix/matmul_cs@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_cs@.d" -MT"osprey/libfi/matrix/matmul_cs@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_cz@.o: ../osprey/libfi/matrix/matmul_cz@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_cz@.d" -MT"osprey/libfi/matrix/matmul_cz@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_dc@.o: ../osprey/libfi/matrix/matmul_dc@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_dc@.d" -MT"osprey/libfi/matrix/matmul_dc@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_dd@.o: ../osprey/libfi/matrix/matmul_dd@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_dd@.d" -MT"osprey/libfi/matrix/matmul_dd@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_di@.o: ../osprey/libfi/matrix/matmul_di@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_di@.d" -MT"osprey/libfi/matrix/matmul_di@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_dj@.o: ../osprey/libfi/matrix/matmul_dj@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_dj@.d" -MT"osprey/libfi/matrix/matmul_dj@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_ds@.o: ../osprey/libfi/matrix/matmul_ds@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_ds@.d" -MT"osprey/libfi/matrix/matmul_ds@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_dz@.o: ../osprey/libfi/matrix/matmul_dz@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_dz@.d" -MT"osprey/libfi/matrix/matmul_dz@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_ic@.o: ../osprey/libfi/matrix/matmul_ic@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_ic@.d" -MT"osprey/libfi/matrix/matmul_ic@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_id@.o: ../osprey/libfi/matrix/matmul_id@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_id@.d" -MT"osprey/libfi/matrix/matmul_id@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_ii@.o: ../osprey/libfi/matrix/matmul_ii@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_ii@.d" -MT"osprey/libfi/matrix/matmul_ii@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_is@.o: ../osprey/libfi/matrix/matmul_is@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_is@.d" -MT"osprey/libfi/matrix/matmul_is@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_iz@.o: ../osprey/libfi/matrix/matmul_iz@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_iz@.d" -MT"osprey/libfi/matrix/matmul_iz@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_jc@.o: ../osprey/libfi/matrix/matmul_jc@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_jc@.d" -MT"osprey/libfi/matrix/matmul_jc@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_jd@.o: ../osprey/libfi/matrix/matmul_jd@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_jd@.d" -MT"osprey/libfi/matrix/matmul_jd@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_jj@.o: ../osprey/libfi/matrix/matmul_jj@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_jj@.d" -MT"osprey/libfi/matrix/matmul_jj@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_js@.o: ../osprey/libfi/matrix/matmul_js@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_js@.d" -MT"osprey/libfi/matrix/matmul_js@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_jz@.o: ../osprey/libfi/matrix/matmul_jz@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_jz@.d" -MT"osprey/libfi/matrix/matmul_jz@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_ll@.o: ../osprey/libfi/matrix/matmul_ll@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_ll@.d" -MT"osprey/libfi/matrix/matmul_ll@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_sc@.o: ../osprey/libfi/matrix/matmul_sc@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_sc@.d" -MT"osprey/libfi/matrix/matmul_sc@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_sd@.o: ../osprey/libfi/matrix/matmul_sd@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_sd@.d" -MT"osprey/libfi/matrix/matmul_sd@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_si@.o: ../osprey/libfi/matrix/matmul_si@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_si@.d" -MT"osprey/libfi/matrix/matmul_si@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_sj@.o: ../osprey/libfi/matrix/matmul_sj@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_sj@.d" -MT"osprey/libfi/matrix/matmul_sj@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_ss@.o: ../osprey/libfi/matrix/matmul_ss@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_ss@.d" -MT"osprey/libfi/matrix/matmul_ss@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_sz@.o: ../osprey/libfi/matrix/matmul_sz@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_sz@.d" -MT"osprey/libfi/matrix/matmul_sz@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_zc@.o: ../osprey/libfi/matrix/matmul_zc@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_zc@.d" -MT"osprey/libfi/matrix/matmul_zc@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_zd@.o: ../osprey/libfi/matrix/matmul_zd@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_zd@.d" -MT"osprey/libfi/matrix/matmul_zd@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_zi@.o: ../osprey/libfi/matrix/matmul_zi@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_zi@.d" -MT"osprey/libfi/matrix/matmul_zi@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_zj@.o: ../osprey/libfi/matrix/matmul_zj@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_zj@.d" -MT"osprey/libfi/matrix/matmul_zj@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_zs@.o: ../osprey/libfi/matrix/matmul_zs@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_zs@.d" -MT"osprey/libfi/matrix/matmul_zs@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/matrix/matmul_zz@.o: ../osprey/libfi/matrix/matmul_zz@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/matrix/matmul_zz@.d" -MT"osprey/libfi/matrix/matmul_zz@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


