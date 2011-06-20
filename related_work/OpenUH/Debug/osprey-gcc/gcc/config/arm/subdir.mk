################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/arm/arm.c \
../osprey-gcc/gcc/config/arm/bpabi.c \
../osprey-gcc/gcc/config/arm/pe.c 

S_UPPER_SRCS += \
../osprey-gcc/gcc/config/arm/bpabi.S \
../osprey-gcc/gcc/config/arm/ieee754-df.S \
../osprey-gcc/gcc/config/arm/ieee754-sf.S 

ASM_SRCS += \
../osprey-gcc/gcc/config/arm/crti.asm \
../osprey-gcc/gcc/config/arm/crtn.asm \
../osprey-gcc/gcc/config/arm/lib1funcs.asm 

OBJS += \
./osprey-gcc/gcc/config/arm/arm.o \
./osprey-gcc/gcc/config/arm/bpabi.o \
./osprey-gcc/gcc/config/arm/crti.o \
./osprey-gcc/gcc/config/arm/crtn.o \
./osprey-gcc/gcc/config/arm/ieee754-df.o \
./osprey-gcc/gcc/config/arm/ieee754-sf.o \
./osprey-gcc/gcc/config/arm/lib1funcs.o \
./osprey-gcc/gcc/config/arm/pe.o 

C_DEPS += \
./osprey-gcc/gcc/config/arm/arm.d \
./osprey-gcc/gcc/config/arm/bpabi.d \
./osprey-gcc/gcc/config/arm/pe.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/arm/%.o: ../osprey-gcc/gcc/config/arm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/arm/%.o: ../osprey-gcc/gcc/config/arm/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/arm/%.o: ../osprey-gcc/gcc/config/arm/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


