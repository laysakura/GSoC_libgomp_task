################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/com/SL/config_host.c \
../osprey/common/com/SL/config_platform.c 

OBJS += \
./osprey/common/com/SL/config_host.o \
./osprey/common/com/SL/config_platform.o 

C_DEPS += \
./osprey/common/com/SL/config_host.d \
./osprey/common/com/SL/config_platform.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/com/SL/%.o: ../osprey/common/com/SL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


