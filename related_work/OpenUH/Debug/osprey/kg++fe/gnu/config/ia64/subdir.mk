################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/ia64/crtfastmath.c \
../osprey/kg++fe/gnu/config/ia64/fde-glibc.c \
../osprey/kg++fe/gnu/config/ia64/ia64-c.c \
../osprey/kg++fe/gnu/config/ia64/ia64.c \
../osprey/kg++fe/gnu/config/ia64/quadlib.c \
../osprey/kg++fe/gnu/config/ia64/unwind-aix.c \
../osprey/kg++fe/gnu/config/ia64/unwind-ia64.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/ia64/crtbegin.asm \
../osprey/kg++fe/gnu/config/ia64/crtend.asm \
../osprey/kg++fe/gnu/config/ia64/crti.asm \
../osprey/kg++fe/gnu/config/ia64/crtn.asm \
../osprey/kg++fe/gnu/config/ia64/lib1funcs.asm 

OBJS += \
./osprey/kg++fe/gnu/config/ia64/crtbegin.o \
./osprey/kg++fe/gnu/config/ia64/crtend.o \
./osprey/kg++fe/gnu/config/ia64/crtfastmath.o \
./osprey/kg++fe/gnu/config/ia64/crti.o \
./osprey/kg++fe/gnu/config/ia64/crtn.o \
./osprey/kg++fe/gnu/config/ia64/fde-glibc.o \
./osprey/kg++fe/gnu/config/ia64/ia64-c.o \
./osprey/kg++fe/gnu/config/ia64/ia64.o \
./osprey/kg++fe/gnu/config/ia64/lib1funcs.o \
./osprey/kg++fe/gnu/config/ia64/quadlib.o \
./osprey/kg++fe/gnu/config/ia64/unwind-aix.o \
./osprey/kg++fe/gnu/config/ia64/unwind-ia64.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/ia64/crtfastmath.d \
./osprey/kg++fe/gnu/config/ia64/fde-glibc.d \
./osprey/kg++fe/gnu/config/ia64/ia64-c.d \
./osprey/kg++fe/gnu/config/ia64/ia64.d \
./osprey/kg++fe/gnu/config/ia64/quadlib.d \
./osprey/kg++fe/gnu/config/ia64/unwind-aix.d \
./osprey/kg++fe/gnu/config/ia64/unwind-ia64.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/ia64/%.o: ../osprey/kg++fe/gnu/config/ia64/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/ia64/%.o: ../osprey/kg++fe/gnu/config/ia64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


