################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/mips/_tilib.c \
../osprey-gcc/gcc/config/mips/mips.c 

S_UPPER_SRCS += \
../osprey-gcc/gcc/config/mips/mips16.S \
../osprey-gcc/gcc/config/mips/vr4120-div.S 

ASM_SRCS += \
../osprey-gcc/gcc/config/mips/crti.asm \
../osprey-gcc/gcc/config/mips/crtn.asm \
../osprey-gcc/gcc/config/mips/irix-crti.asm \
../osprey-gcc/gcc/config/mips/irix-crtn.asm 

OBJS += \
./osprey-gcc/gcc/config/mips/_tilib.o \
./osprey-gcc/gcc/config/mips/crti.o \
./osprey-gcc/gcc/config/mips/crtn.o \
./osprey-gcc/gcc/config/mips/irix-crti.o \
./osprey-gcc/gcc/config/mips/irix-crtn.o \
./osprey-gcc/gcc/config/mips/mips.o \
./osprey-gcc/gcc/config/mips/mips16.o \
./osprey-gcc/gcc/config/mips/vr4120-div.o 

C_DEPS += \
./osprey-gcc/gcc/config/mips/_tilib.d \
./osprey-gcc/gcc/config/mips/mips.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/mips/%.o: ../osprey-gcc/gcc/config/mips/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/mips/%.o: ../osprey-gcc/gcc/config/mips/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/mips/%.o: ../osprey-gcc/gcc/config/mips/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


