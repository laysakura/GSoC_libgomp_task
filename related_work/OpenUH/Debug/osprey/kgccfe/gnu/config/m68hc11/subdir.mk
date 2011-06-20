################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/m68hc11/m68hc11.c 

S_UPPER_SRCS += \
../osprey/kgccfe/gnu/config/m68hc11/m68hc11-crt0.S 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/m68hc11/larith.asm 

OBJS += \
./osprey/kgccfe/gnu/config/m68hc11/larith.o \
./osprey/kgccfe/gnu/config/m68hc11/m68hc11-crt0.o \
./osprey/kgccfe/gnu/config/m68hc11/m68hc11.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/m68hc11/m68hc11.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/m68hc11/%.o: ../osprey/kgccfe/gnu/config/m68hc11/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/m68hc11/%.o: ../osprey/kgccfe/gnu/config/m68hc11/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/m68hc11/%.o: ../osprey/kgccfe/gnu/config/m68hc11/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


