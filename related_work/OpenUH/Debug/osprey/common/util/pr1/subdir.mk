################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/util/pr1/c_qwmultu.c 

OBJS += \
./osprey/common/util/pr1/c_qwmultu.o 

C_DEPS += \
./osprey/common/util/pr1/c_qwmultu.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/util/pr1/%.o: ../osprey/common/util/pr1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


