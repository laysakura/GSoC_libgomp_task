################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/i386/gmon-sol2.c \
../osprey/kg++fe/gnu/config/i386/gthr-win32.c \
../osprey/kg++fe/gnu/config/i386/i386.c \
../osprey/kg++fe/gnu/config/i386/interix.c \
../osprey/kg++fe/gnu/config/i386/winnt.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/i386/cygwin.asm \
../osprey/kg++fe/gnu/config/i386/osf1-ci.asm \
../osprey/kg++fe/gnu/config/i386/osf1-cn.asm \
../osprey/kg++fe/gnu/config/i386/sol2-c1.asm \
../osprey/kg++fe/gnu/config/i386/sol2-ci.asm \
../osprey/kg++fe/gnu/config/i386/sol2-cn.asm \
../osprey/kg++fe/gnu/config/i386/sol2-gc1.asm \
../osprey/kg++fe/gnu/config/i386/uwin.asm 

OBJS += \
./osprey/kg++fe/gnu/config/i386/cygwin.o \
./osprey/kg++fe/gnu/config/i386/gmon-sol2.o \
./osprey/kg++fe/gnu/config/i386/gthr-win32.o \
./osprey/kg++fe/gnu/config/i386/i386.o \
./osprey/kg++fe/gnu/config/i386/interix.o \
./osprey/kg++fe/gnu/config/i386/osf1-ci.o \
./osprey/kg++fe/gnu/config/i386/osf1-cn.o \
./osprey/kg++fe/gnu/config/i386/sol2-c1.o \
./osprey/kg++fe/gnu/config/i386/sol2-ci.o \
./osprey/kg++fe/gnu/config/i386/sol2-cn.o \
./osprey/kg++fe/gnu/config/i386/sol2-gc1.o \
./osprey/kg++fe/gnu/config/i386/uwin.o \
./osprey/kg++fe/gnu/config/i386/winnt.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/i386/gmon-sol2.d \
./osprey/kg++fe/gnu/config/i386/gthr-win32.d \
./osprey/kg++fe/gnu/config/i386/i386.d \
./osprey/kg++fe/gnu/config/i386/interix.d \
./osprey/kg++fe/gnu/config/i386/winnt.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/i386/%.o: ../osprey/kg++fe/gnu/config/i386/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/i386/%.o: ../osprey/kg++fe/gnu/config/i386/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


