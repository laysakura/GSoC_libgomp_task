################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/mn10200/mn10200.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/mn10200/lib1funcs.asm 

OBJS += \
./osprey/kgccfe/gnu/config/mn10200/lib1funcs.o \
./osprey/kgccfe/gnu/config/mn10200/mn10200.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/mn10200/mn10200.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/mn10200/%.o: ../osprey/kgccfe/gnu/config/mn10200/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/mn10200/%.o: ../osprey/kgccfe/gnu/config/mn10200/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


