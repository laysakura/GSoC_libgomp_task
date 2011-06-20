################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/sparc/crtfastmath.c \
../osprey-gcc-4.2.0/gcc/config/sparc/gmon-sol2.c \
../osprey-gcc-4.2.0/gcc/config/sparc/sparc.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/sparc/lb1spc.asm \
../osprey-gcc-4.2.0/gcc/config/sparc/lb1spl.asm \
../osprey-gcc-4.2.0/gcc/config/sparc/sol2-c1.asm \
../osprey-gcc-4.2.0/gcc/config/sparc/sol2-ci.asm \
../osprey-gcc-4.2.0/gcc/config/sparc/sol2-cn.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/sparc/crtfastmath.o \
./osprey-gcc-4.2.0/gcc/config/sparc/gmon-sol2.o \
./osprey-gcc-4.2.0/gcc/config/sparc/lb1spc.o \
./osprey-gcc-4.2.0/gcc/config/sparc/lb1spl.o \
./osprey-gcc-4.2.0/gcc/config/sparc/sol2-c1.o \
./osprey-gcc-4.2.0/gcc/config/sparc/sol2-ci.o \
./osprey-gcc-4.2.0/gcc/config/sparc/sol2-cn.o \
./osprey-gcc-4.2.0/gcc/config/sparc/sparc.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/sparc/crtfastmath.d \
./osprey-gcc-4.2.0/gcc/config/sparc/gmon-sol2.d \
./osprey-gcc-4.2.0/gcc/config/sparc/sparc.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/sparc/%.o: ../osprey-gcc-4.2.0/gcc/config/sparc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/sparc/%.o: ../osprey-gcc-4.2.0/gcc/config/sparc/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


