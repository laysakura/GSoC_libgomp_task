################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/we32k/we32k.c 

OBJS += \
./osprey/kgccfe/gnu/config/we32k/we32k.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/we32k/we32k.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/we32k/%.o: ../osprey/kgccfe/gnu/config/we32k/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


