################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/avr/avr.c 

S_UPPER_SRCS += \
../osprey/kgccfe/gnu/config/avr/libgcc.S 

OBJS += \
./osprey/kgccfe/gnu/config/avr/avr.o \
./osprey/kgccfe/gnu/config/avr/libgcc.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/avr/avr.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/avr/%.o: ../osprey/kgccfe/gnu/config/avr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/avr/%.o: ../osprey/kgccfe/gnu/config/avr/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


