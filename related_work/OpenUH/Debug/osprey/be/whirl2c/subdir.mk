################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/be/whirl2c/whirl2c.c 

OBJS += \
./osprey/be/whirl2c/whirl2c.o 

C_DEPS += \
./osprey/be/whirl2c/whirl2c.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/be/whirl2c/%.o: ../osprey/be/whirl2c/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


