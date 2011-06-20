################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/sh/divtab-sh4.c \
../osprey-gcc-4.2.0/gcc/config/sh/divtab.c \
../osprey-gcc-4.2.0/gcc/config/sh/sh-c.c \
../osprey-gcc-4.2.0/gcc/config/sh/sh.c \
../osprey-gcc-4.2.0/gcc/config/sh/symbian.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/sh/crt1.asm \
../osprey-gcc-4.2.0/gcc/config/sh/crti.asm \
../osprey-gcc-4.2.0/gcc/config/sh/crtn.asm \
../osprey-gcc-4.2.0/gcc/config/sh/lib1funcs-Os-4-200.asm \
../osprey-gcc-4.2.0/gcc/config/sh/lib1funcs.asm \
../osprey-gcc-4.2.0/gcc/config/sh/linux-atomic.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/sh/crt1.o \
./osprey-gcc-4.2.0/gcc/config/sh/crti.o \
./osprey-gcc-4.2.0/gcc/config/sh/crtn.o \
./osprey-gcc-4.2.0/gcc/config/sh/divtab-sh4.o \
./osprey-gcc-4.2.0/gcc/config/sh/divtab.o \
./osprey-gcc-4.2.0/gcc/config/sh/lib1funcs-Os-4-200.o \
./osprey-gcc-4.2.0/gcc/config/sh/lib1funcs.o \
./osprey-gcc-4.2.0/gcc/config/sh/linux-atomic.o \
./osprey-gcc-4.2.0/gcc/config/sh/sh-c.o \
./osprey-gcc-4.2.0/gcc/config/sh/sh.o \
./osprey-gcc-4.2.0/gcc/config/sh/symbian.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/sh/divtab-sh4.d \
./osprey-gcc-4.2.0/gcc/config/sh/divtab.d \
./osprey-gcc-4.2.0/gcc/config/sh/sh-c.d \
./osprey-gcc-4.2.0/gcc/config/sh/sh.d \
./osprey-gcc-4.2.0/gcc/config/sh/symbian.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/sh/%.o: ../osprey-gcc-4.2.0/gcc/config/sh/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/sh/%.o: ../osprey-gcc-4.2.0/gcc/config/sh/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


