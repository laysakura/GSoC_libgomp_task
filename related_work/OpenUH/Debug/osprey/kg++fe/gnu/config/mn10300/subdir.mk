################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/mn10300/mn10300.c 

OBJS += \
./osprey/kg++fe/gnu/config/mn10300/mn10300.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/mn10300/mn10300.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/mn10300/%.o: ../osprey/kg++fe/gnu/config/mn10300/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


