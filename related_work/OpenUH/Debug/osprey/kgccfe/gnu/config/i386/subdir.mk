################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/i386/gmon-sol2.c \
../osprey/kgccfe/gnu/config/i386/gthr-win32.c \
../osprey/kgccfe/gnu/config/i386/i386.c \
../osprey/kgccfe/gnu/config/i386/interix.c \
../osprey/kgccfe/gnu/config/i386/winnt.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/i386/cygwin.asm \
../osprey/kgccfe/gnu/config/i386/osf1-ci.asm \
../osprey/kgccfe/gnu/config/i386/osf1-cn.asm \
../osprey/kgccfe/gnu/config/i386/sol2-c1.asm \
../osprey/kgccfe/gnu/config/i386/sol2-ci.asm \
../osprey/kgccfe/gnu/config/i386/sol2-cn.asm \
../osprey/kgccfe/gnu/config/i386/sol2-gc1.asm \
../osprey/kgccfe/gnu/config/i386/uwin.asm 

OBJS += \
./osprey/kgccfe/gnu/config/i386/cygwin.o \
./osprey/kgccfe/gnu/config/i386/gmon-sol2.o \
./osprey/kgccfe/gnu/config/i386/gthr-win32.o \
./osprey/kgccfe/gnu/config/i386/i386.o \
./osprey/kgccfe/gnu/config/i386/interix.o \
./osprey/kgccfe/gnu/config/i386/osf1-ci.o \
./osprey/kgccfe/gnu/config/i386/osf1-cn.o \
./osprey/kgccfe/gnu/config/i386/sol2-c1.o \
./osprey/kgccfe/gnu/config/i386/sol2-ci.o \
./osprey/kgccfe/gnu/config/i386/sol2-cn.o \
./osprey/kgccfe/gnu/config/i386/sol2-gc1.o \
./osprey/kgccfe/gnu/config/i386/uwin.o \
./osprey/kgccfe/gnu/config/i386/winnt.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/i386/gmon-sol2.d \
./osprey/kgccfe/gnu/config/i386/gthr-win32.d \
./osprey/kgccfe/gnu/config/i386/i386.d \
./osprey/kgccfe/gnu/config/i386/interix.d \
./osprey/kgccfe/gnu/config/i386/winnt.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/i386/%.o: ../osprey/kgccfe/gnu/config/i386/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/i386/%.o: ../osprey/kgccfe/gnu/config/i386/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


