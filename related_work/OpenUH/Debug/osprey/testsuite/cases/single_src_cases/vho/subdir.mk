################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/testsuite/cases/single_src_cases/vho/mmx_return.c 

OBJS += \
./osprey/testsuite/cases/single_src_cases/vho/mmx_return.o 

C_DEPS += \
./osprey/testsuite/cases/single_src_cases/vho/mmx_return.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/testsuite/cases/single_src_cases/vho/%.o: ../osprey/testsuite/cases/single_src_cases/vho/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


