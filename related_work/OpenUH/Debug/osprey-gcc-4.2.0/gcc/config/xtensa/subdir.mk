################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/xtensa/xtensa.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/xtensa/ieee754-df.S \
../osprey-gcc-4.2.0/gcc/config/xtensa/ieee754-sf.S \
../osprey-gcc-4.2.0/gcc/config/xtensa/lib2funcs.S 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/xtensa/crti.asm \
../osprey-gcc-4.2.0/gcc/config/xtensa/crtn.asm \
../osprey-gcc-4.2.0/gcc/config/xtensa/lib1funcs.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/xtensa/crti.o \
./osprey-gcc-4.2.0/gcc/config/xtensa/crtn.o \
./osprey-gcc-4.2.0/gcc/config/xtensa/ieee754-df.o \
./osprey-gcc-4.2.0/gcc/config/xtensa/ieee754-sf.o \
./osprey-gcc-4.2.0/gcc/config/xtensa/lib1funcs.o \
./osprey-gcc-4.2.0/gcc/config/xtensa/lib2funcs.o \
./osprey-gcc-4.2.0/gcc/config/xtensa/xtensa.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/xtensa/xtensa.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/xtensa/%.o: ../osprey-gcc-4.2.0/gcc/config/xtensa/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/xtensa/%.o: ../osprey-gcc-4.2.0/gcc/config/xtensa/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/xtensa/%.o: ../osprey-gcc-4.2.0/gcc/config/xtensa/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


