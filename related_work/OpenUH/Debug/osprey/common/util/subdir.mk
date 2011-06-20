################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/util/bitset.c \
../osprey/common/util/c_a_to_q.c \
../osprey/common/util/c_q_add.c \
../osprey/common/util/c_q_div.c \
../osprey/common/util/c_q_mul.c \
../osprey/common/util/c_q_neg.c \
../osprey/common/util/c_q_rel.c \
../osprey/common/util/c_q_sqrt.c \
../osprey/common/util/c_q_sub.c \
../osprey/common/util/c_q_to_a.c \
../osprey/common/util/c_qtenscale.c \
../osprey/common/util/dso.c \
../osprey/common/util/file_util.c \
../osprey/common/util/flags.c \
../osprey/common/util/linklist.c \
../osprey/common/util/memory.c \
../osprey/common/util/motifutil.c \
../osprey/common/util/mstack.c \
../osprey/common/util/priority_queue.c \
../osprey/common/util/quadsim.c \
../osprey/common/util/resource.c \
../osprey/common/util/tlog.c \
../osprey/common/util/tracing.c \
../osprey/common/util/util.c \
../osprey/common/util/vstring.c \
../osprey/common/util/x_list.c \
../osprey/common/util/x_prop.c \
../osprey/common/util/x_set_func.c \
../osprey/common/util/x_set_macro.c 

OBJS += \
./osprey/common/util/bitset.o \
./osprey/common/util/c_a_to_q.o \
./osprey/common/util/c_q_add.o \
./osprey/common/util/c_q_div.o \
./osprey/common/util/c_q_mul.o \
./osprey/common/util/c_q_neg.o \
./osprey/common/util/c_q_rel.o \
./osprey/common/util/c_q_sqrt.o \
./osprey/common/util/c_q_sub.o \
./osprey/common/util/c_q_to_a.o \
./osprey/common/util/c_qtenscale.o \
./osprey/common/util/dso.o \
./osprey/common/util/file_util.o \
./osprey/common/util/flags.o \
./osprey/common/util/linklist.o \
./osprey/common/util/memory.o \
./osprey/common/util/motifutil.o \
./osprey/common/util/mstack.o \
./osprey/common/util/priority_queue.o \
./osprey/common/util/quadsim.o \
./osprey/common/util/resource.o \
./osprey/common/util/tlog.o \
./osprey/common/util/tracing.o \
./osprey/common/util/util.o \
./osprey/common/util/vstring.o \
./osprey/common/util/x_list.o \
./osprey/common/util/x_prop.o \
./osprey/common/util/x_set_func.o \
./osprey/common/util/x_set_macro.o 

C_DEPS += \
./osprey/common/util/bitset.d \
./osprey/common/util/c_a_to_q.d \
./osprey/common/util/c_q_add.d \
./osprey/common/util/c_q_div.d \
./osprey/common/util/c_q_mul.d \
./osprey/common/util/c_q_neg.d \
./osprey/common/util/c_q_rel.d \
./osprey/common/util/c_q_sqrt.d \
./osprey/common/util/c_q_sub.d \
./osprey/common/util/c_q_to_a.d \
./osprey/common/util/c_qtenscale.d \
./osprey/common/util/dso.d \
./osprey/common/util/file_util.d \
./osprey/common/util/flags.d \
./osprey/common/util/linklist.d \
./osprey/common/util/memory.d \
./osprey/common/util/motifutil.d \
./osprey/common/util/mstack.d \
./osprey/common/util/priority_queue.d \
./osprey/common/util/quadsim.d \
./osprey/common/util/resource.d \
./osprey/common/util/tlog.d \
./osprey/common/util/tracing.d \
./osprey/common/util/util.d \
./osprey/common/util/vstring.d \
./osprey/common/util/x_list.d \
./osprey/common/util/x_prop.d \
./osprey/common/util/x_set_func.d \
./osprey/common/util/x_set_macro.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/util/%.o: ../osprey/common/util/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


