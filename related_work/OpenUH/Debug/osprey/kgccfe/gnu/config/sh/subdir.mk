################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/sh/sh.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/sh/crt1.asm \
../osprey/kgccfe/gnu/config/sh/crti.asm \
../osprey/kgccfe/gnu/config/sh/crtn.asm \
../osprey/kgccfe/gnu/config/sh/lib1funcs.asm 

OBJS += \
./osprey/kgccfe/gnu/config/sh/crt1.o \
./osprey/kgccfe/gnu/config/sh/crti.o \
./osprey/kgccfe/gnu/config/sh/crtn.o \
./osprey/kgccfe/gnu/config/sh/lib1funcs.o \
./osprey/kgccfe/gnu/config/sh/sh.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/sh/sh.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/sh/%.o: ../osprey/kgccfe/gnu/config/sh/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/sh/%.o: ../osprey/kgccfe/gnu/config/sh/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


