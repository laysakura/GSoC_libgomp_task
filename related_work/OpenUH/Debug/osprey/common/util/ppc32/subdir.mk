################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/util/ppc32/c_qwmultu.c 

OBJS += \
./osprey/common/util/ppc32/c_qwmultu.o 

C_DEPS += \
./osprey/common/util/ppc32/c_qwmultu.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/util/ppc32/%.o: ../osprey/common/util/ppc32/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


