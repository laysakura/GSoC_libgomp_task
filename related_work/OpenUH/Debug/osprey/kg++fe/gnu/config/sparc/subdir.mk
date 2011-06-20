################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/sparc/crtfastmath.c \
../osprey/kg++fe/gnu/config/sparc/gmon-sol2.c \
../osprey/kg++fe/gnu/config/sparc/sparc.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/sparc/lb1spc.asm \
../osprey/kg++fe/gnu/config/sparc/lb1spl.asm \
../osprey/kg++fe/gnu/config/sparc/sol2-c1.asm \
../osprey/kg++fe/gnu/config/sparc/sol2-ci.asm \
../osprey/kg++fe/gnu/config/sparc/sol2-cn.asm \
../osprey/kg++fe/gnu/config/sparc/sol2-g1.asm 

OBJS += \
./osprey/kg++fe/gnu/config/sparc/crtfastmath.o \
./osprey/kg++fe/gnu/config/sparc/gmon-sol2.o \
./osprey/kg++fe/gnu/config/sparc/lb1spc.o \
./osprey/kg++fe/gnu/config/sparc/lb1spl.o \
./osprey/kg++fe/gnu/config/sparc/sol2-c1.o \
./osprey/kg++fe/gnu/config/sparc/sol2-ci.o \
./osprey/kg++fe/gnu/config/sparc/sol2-cn.o \
./osprey/kg++fe/gnu/config/sparc/sol2-g1.o \
./osprey/kg++fe/gnu/config/sparc/sparc.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/sparc/crtfastmath.d \
./osprey/kg++fe/gnu/config/sparc/gmon-sol2.d \
./osprey/kg++fe/gnu/config/sparc/sparc.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/sparc/%.o: ../osprey/kg++fe/gnu/config/sparc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/sparc/%.o: ../osprey/kg++fe/gnu/config/sparc/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


