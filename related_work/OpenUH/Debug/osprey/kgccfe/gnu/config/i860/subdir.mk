################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/i860/i860.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/i860/varargs.asm 

OBJS += \
./osprey/kgccfe/gnu/config/i860/i860.o \
./osprey/kgccfe/gnu/config/i860/varargs.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/i860/i860.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/i860/%.o: ../osprey/kgccfe/gnu/config/i860/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/i860/%.o: ../osprey/kgccfe/gnu/config/i860/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


