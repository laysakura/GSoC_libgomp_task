################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/ipfec_targ_info/access/ti_init.c 

OBJS += \
./osprey/common/ipfec_targ_info/access/ti_init.o 

C_DEPS += \
./osprey/common/ipfec_targ_info/access/ti_init.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/ipfec_targ_info/access/%.o: ../osprey/common/ipfec_targ_info/access/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


