################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libf/tape/tsync.c 

OBJS += \
./osprey/libf/tape/tsync.o 

C_DEPS += \
./osprey/libf/tape/tsync.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libf/tape/%.o: ../osprey/libf/tape/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


