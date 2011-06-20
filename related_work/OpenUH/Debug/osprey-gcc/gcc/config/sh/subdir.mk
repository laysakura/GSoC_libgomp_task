################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/sh/sh.c \
../osprey-gcc/gcc/config/sh/symbian.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/sh/crt1.asm \
../osprey-gcc/gcc/config/sh/crti.asm \
../osprey-gcc/gcc/config/sh/crtn.asm \
../osprey-gcc/gcc/config/sh/lib1funcs.asm 

OBJS += \
./osprey-gcc/gcc/config/sh/crt1.o \
./osprey-gcc/gcc/config/sh/crti.o \
./osprey-gcc/gcc/config/sh/crtn.o \
./osprey-gcc/gcc/config/sh/lib1funcs.o \
./osprey-gcc/gcc/config/sh/sh.o \
./osprey-gcc/gcc/config/sh/symbian.o 

C_DEPS += \
./osprey-gcc/gcc/config/sh/sh.d \
./osprey-gcc/gcc/config/sh/symbian.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/sh/%.o: ../osprey-gcc/gcc/config/sh/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/sh/%.o: ../osprey-gcc/gcc/config/sh/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


