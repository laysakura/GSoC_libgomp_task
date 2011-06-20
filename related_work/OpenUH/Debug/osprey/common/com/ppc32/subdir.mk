################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/common/com/ppc32/config_host.c \
../osprey/common/com/ppc32/config_platform.c 

OBJS += \
./osprey/common/com/ppc32/config_host.o \
./osprey/common/com/ppc32/config_platform.o 

C_DEPS += \
./osprey/common/com/ppc32/config_host.d \
./osprey/common/com/ppc32/config_platform.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/common/com/ppc32/%.o: ../osprey/common/com/ppc32/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


