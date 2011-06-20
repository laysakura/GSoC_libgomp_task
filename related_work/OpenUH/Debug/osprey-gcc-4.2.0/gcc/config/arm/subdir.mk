################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/arm/arm.c \
../osprey-gcc-4.2.0/gcc/config/arm/bpabi.c \
../osprey-gcc-4.2.0/gcc/config/arm/pe.c \
../osprey-gcc-4.2.0/gcc/config/arm/pr-support.c \
../osprey-gcc-4.2.0/gcc/config/arm/unaligned-funcs.c \
../osprey-gcc-4.2.0/gcc/config/arm/unwind-arm.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/arm/bpabi.S \
../osprey-gcc-4.2.0/gcc/config/arm/ieee754-df.S \
../osprey-gcc-4.2.0/gcc/config/arm/ieee754-sf.S \
../osprey-gcc-4.2.0/gcc/config/arm/libunwind.S 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/arm/crti.asm \
../osprey-gcc-4.2.0/gcc/config/arm/crtn.asm \
../osprey-gcc-4.2.0/gcc/config/arm/lib1funcs.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/arm/arm.o \
./osprey-gcc-4.2.0/gcc/config/arm/bpabi.o \
./osprey-gcc-4.2.0/gcc/config/arm/crti.o \
./osprey-gcc-4.2.0/gcc/config/arm/crtn.o \
./osprey-gcc-4.2.0/gcc/config/arm/ieee754-df.o \
./osprey-gcc-4.2.0/gcc/config/arm/ieee754-sf.o \
./osprey-gcc-4.2.0/gcc/config/arm/lib1funcs.o \
./osprey-gcc-4.2.0/gcc/config/arm/libunwind.o \
./osprey-gcc-4.2.0/gcc/config/arm/pe.o \
./osprey-gcc-4.2.0/gcc/config/arm/pr-support.o \
./osprey-gcc-4.2.0/gcc/config/arm/unaligned-funcs.o \
./osprey-gcc-4.2.0/gcc/config/arm/unwind-arm.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/arm/arm.d \
./osprey-gcc-4.2.0/gcc/config/arm/bpabi.d \
./osprey-gcc-4.2.0/gcc/config/arm/pe.d \
./osprey-gcc-4.2.0/gcc/config/arm/pr-support.d \
./osprey-gcc-4.2.0/gcc/config/arm/unaligned-funcs.d \
./osprey-gcc-4.2.0/gcc/config/arm/unwind-arm.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/arm/%.o: ../osprey-gcc-4.2.0/gcc/config/arm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/arm/%.o: ../osprey-gcc-4.2.0/gcc/config/arm/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/arm/%.o: ../osprey-gcc-4.2.0/gcc/config/arm/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


