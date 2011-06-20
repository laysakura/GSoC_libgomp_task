################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/cygnus/bfd/doc/chew.c 

OBJS += \
./osprey/cygnus/bfd/doc/chew.o 

C_DEPS += \
./osprey/cygnus/bfd/doc/chew.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/cygnus/bfd/doc/%.o: ../osprey/cygnus/bfd/doc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


