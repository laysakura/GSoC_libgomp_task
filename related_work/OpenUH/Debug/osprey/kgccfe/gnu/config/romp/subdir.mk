################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/romp/romp.c 

OBJS += \
./osprey/kgccfe/gnu/config/romp/romp.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/romp/romp.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/romp/%.o: ../osprey/kgccfe/gnu/config/romp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


