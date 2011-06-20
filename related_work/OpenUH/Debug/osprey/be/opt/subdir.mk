################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/be/opt/opt_error.c 

OBJS += \
./osprey/be/opt/opt_error.o 

C_DEPS += \
./osprey/be/opt/opt_error.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/be/opt/%.o: ../osprey/be/opt/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


