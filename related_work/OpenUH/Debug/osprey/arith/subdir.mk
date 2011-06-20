################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/arith/PRINTMSG_dummy.c \
../osprey/arith/bits.c \
../osprey/arith/compare.c \
../osprey/arith/confidence.c \
../osprey/arith/convert.c \
../osprey/arith/cray1_sim.c \
../osprey/arith/cray_fadd.c \
../osprey/arith/cray_fdiv.c \
../osprey/arith/cray_fmul.c \
../osprey/arith/ctgen.c \
../osprey/arith/cvt.c \
../osprey/arith/edition.c \
../osprey/arith/ieee_fadd.c \
../osprey/arith/ieee_fdiv.c \
../osprey/arith/ieee_fmul.c \
../osprey/arith/ieee_norm.c \
../osprey/arith/ieee_sqrt.c \
../osprey/arith/intrin.c \
../osprey/arith/itgen.c \
../osprey/arith/math.c \
../osprey/arith/miscmath.c \
../osprey/arith/mpp_sim.c \
../osprey/arith/native.c \
../osprey/arith/no_intrin.c \
../osprey/arith/simulate.c \
../osprey/arith/strcvt.c \
../osprey/arith/test_ar_intrin.c \
../osprey/arith/test_cray1_sim.c \
../osprey/arith/test_mpp_sim.c \
../osprey/arith/test_tsieee_sim.c \
../osprey/arith/testcvt.c \
../osprey/arith/testint.c 

OBJS += \
./osprey/arith/PRINTMSG_dummy.o \
./osprey/arith/bits.o \
./osprey/arith/compare.o \
./osprey/arith/confidence.o \
./osprey/arith/convert.o \
./osprey/arith/cray1_sim.o \
./osprey/arith/cray_fadd.o \
./osprey/arith/cray_fdiv.o \
./osprey/arith/cray_fmul.o \
./osprey/arith/ctgen.o \
./osprey/arith/cvt.o \
./osprey/arith/edition.o \
./osprey/arith/ieee_fadd.o \
./osprey/arith/ieee_fdiv.o \
./osprey/arith/ieee_fmul.o \
./osprey/arith/ieee_norm.o \
./osprey/arith/ieee_sqrt.o \
./osprey/arith/intrin.o \
./osprey/arith/itgen.o \
./osprey/arith/math.o \
./osprey/arith/miscmath.o \
./osprey/arith/mpp_sim.o \
./osprey/arith/native.o \
./osprey/arith/no_intrin.o \
./osprey/arith/simulate.o \
./osprey/arith/strcvt.o \
./osprey/arith/test_ar_intrin.o \
./osprey/arith/test_cray1_sim.o \
./osprey/arith/test_mpp_sim.o \
./osprey/arith/test_tsieee_sim.o \
./osprey/arith/testcvt.o \
./osprey/arith/testint.o 

C_DEPS += \
./osprey/arith/PRINTMSG_dummy.d \
./osprey/arith/bits.d \
./osprey/arith/compare.d \
./osprey/arith/confidence.d \
./osprey/arith/convert.d \
./osprey/arith/cray1_sim.d \
./osprey/arith/cray_fadd.d \
./osprey/arith/cray_fdiv.d \
./osprey/arith/cray_fmul.d \
./osprey/arith/ctgen.d \
./osprey/arith/cvt.d \
./osprey/arith/edition.d \
./osprey/arith/ieee_fadd.d \
./osprey/arith/ieee_fdiv.d \
./osprey/arith/ieee_fmul.d \
./osprey/arith/ieee_norm.d \
./osprey/arith/ieee_sqrt.d \
./osprey/arith/intrin.d \
./osprey/arith/itgen.d \
./osprey/arith/math.d \
./osprey/arith/miscmath.d \
./osprey/arith/mpp_sim.d \
./osprey/arith/native.d \
./osprey/arith/no_intrin.d \
./osprey/arith/simulate.d \
./osprey/arith/strcvt.d \
./osprey/arith/test_ar_intrin.d \
./osprey/arith/test_cray1_sim.d \
./osprey/arith/test_mpp_sim.d \
./osprey/arith/test_tsieee_sim.d \
./osprey/arith/testcvt.d \
./osprey/arith/testint.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/arith/%.o: ../osprey/arith/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


