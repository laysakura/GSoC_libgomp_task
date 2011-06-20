################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/ia64/crtfastmath.c \
../osprey-gcc/gcc/config/ia64/fde-glibc.c \
../osprey-gcc/gcc/config/ia64/ia64-c.c \
../osprey-gcc/gcc/config/ia64/ia64.c \
../osprey-gcc/gcc/config/ia64/quadlib.c \
../osprey-gcc/gcc/config/ia64/unwind-ia64.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/ia64/crtbegin.asm \
../osprey-gcc/gcc/config/ia64/crtend.asm \
../osprey-gcc/gcc/config/ia64/crti.asm \
../osprey-gcc/gcc/config/ia64/crtn.asm \
../osprey-gcc/gcc/config/ia64/lib1funcs.asm 

OBJS += \
./osprey-gcc/gcc/config/ia64/crtbegin.o \
./osprey-gcc/gcc/config/ia64/crtend.o \
./osprey-gcc/gcc/config/ia64/crtfastmath.o \
./osprey-gcc/gcc/config/ia64/crti.o \
./osprey-gcc/gcc/config/ia64/crtn.o \
./osprey-gcc/gcc/config/ia64/fde-glibc.o \
./osprey-gcc/gcc/config/ia64/ia64-c.o \
./osprey-gcc/gcc/config/ia64/ia64.o \
./osprey-gcc/gcc/config/ia64/lib1funcs.o \
./osprey-gcc/gcc/config/ia64/quadlib.o \
./osprey-gcc/gcc/config/ia64/unwind-ia64.o 

C_DEPS += \
./osprey-gcc/gcc/config/ia64/crtfastmath.d \
./osprey-gcc/gcc/config/ia64/fde-glibc.d \
./osprey-gcc/gcc/config/ia64/ia64-c.d \
./osprey-gcc/gcc/config/ia64/ia64.d \
./osprey-gcc/gcc/config/ia64/quadlib.d \
./osprey-gcc/gcc/config/ia64/unwind-ia64.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/ia64/%.o: ../osprey-gcc/gcc/config/ia64/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/ia64/%.o: ../osprey-gcc/gcc/config/ia64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


