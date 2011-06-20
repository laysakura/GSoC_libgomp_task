################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/tools/tests/misaligned.c 

OBJS += \
./osprey/tools/tests/misaligned.o 

C_DEPS += \
./osprey/tools/tests/misaligned.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/tools/tests/%.o: ../osprey/tools/tests/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


