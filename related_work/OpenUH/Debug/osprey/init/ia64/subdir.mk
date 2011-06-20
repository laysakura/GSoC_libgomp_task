################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/init/ia64/ftz.c 

OBJS += \
./osprey/init/ia64/ftz.o 

C_DEPS += \
./osprey/init/ia64/ftz.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/init/ia64/%.o: ../osprey/init/ia64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


