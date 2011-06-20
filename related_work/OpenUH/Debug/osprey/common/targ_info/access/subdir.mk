################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/targ_info/access/lit_class.c \
../osprey/common/targ_info/access/ti_asm.c \
../osprey/common/targ_info/access/ti_bundle.c \
../osprey/common/targ_info/access/ti_errors.c \
../osprey/common/targ_info/access/ti_init.c \
../osprey/common/targ_info/access/ti_latency.c \
../osprey/common/targ_info/access/ti_res.c \
../osprey/common/targ_info/access/ti_res_count.c \
../osprey/common/targ_info/access/ti_res_res.c 

OBJS += \
./osprey/common/targ_info/access/lit_class.o \
./osprey/common/targ_info/access/ti_asm.o \
./osprey/common/targ_info/access/ti_bundle.o \
./osprey/common/targ_info/access/ti_errors.o \
./osprey/common/targ_info/access/ti_init.o \
./osprey/common/targ_info/access/ti_latency.o \
./osprey/common/targ_info/access/ti_res.o \
./osprey/common/targ_info/access/ti_res_count.o \
./osprey/common/targ_info/access/ti_res_res.o 

C_DEPS += \
./osprey/common/targ_info/access/lit_class.d \
./osprey/common/targ_info/access/ti_asm.d \
./osprey/common/targ_info/access/ti_bundle.d \
./osprey/common/targ_info/access/ti_errors.d \
./osprey/common/targ_info/access/ti_init.d \
./osprey/common/targ_info/access/ti_latency.d \
./osprey/common/targ_info/access/ti_res.d \
./osprey/common/targ_info/access/ti_res_count.d \
./osprey/common/targ_info/access/ti_res_res.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/targ_info/access/%.o: ../osprey/common/targ_info/access/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


