################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libf/auxarr/c1/auxinit.c 

OBJS += \
./osprey/libf/auxarr/c1/auxinit.o 

C_DEPS += \
./osprey/libf/auxarr/c1/auxinit.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libf/auxarr/c1/%.o: ../osprey/libf/auxarr/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


