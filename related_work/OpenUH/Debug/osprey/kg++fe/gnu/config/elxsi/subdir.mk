################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/elxsi/elxsi.c 

OBJS += \
./osprey/kg++fe/gnu/config/elxsi/elxsi.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/elxsi/elxsi.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/elxsi/%.o: ../osprey/kg++fe/gnu/config/elxsi/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


