################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/ipa/common/ipc_partition.c 

OBJS += \
./osprey/ipa/common/ipc_partition.o 

C_DEPS += \
./osprey/ipa/common/ipc_partition.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/ipa/common/%.o: ../osprey/ipa/common/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


