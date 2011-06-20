################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/util/loongson/c_qwmultu.c \
../osprey/common/util/loongson/softfloat.c 

OBJS += \
./osprey/common/util/loongson/c_qwmultu.o \
./osprey/common/util/loongson/softfloat.o 

C_DEPS += \
./osprey/common/util/loongson/c_qwmultu.d \
./osprey/common/util/loongson/softfloat.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/util/loongson/%.o: ../osprey/common/util/loongson/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


