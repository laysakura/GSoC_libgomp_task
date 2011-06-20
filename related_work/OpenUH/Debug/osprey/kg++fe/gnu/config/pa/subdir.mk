################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/pa/pa.c \
../osprey/kg++fe/gnu/config/pa/quadlib.c 

S_UPPER_SRCS += \
../osprey/kg++fe/gnu/config/pa/milli32.S \
../osprey/kg++fe/gnu/config/pa/milli64.S 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/pa/lib1funcs.asm \
../osprey/kg++fe/gnu/config/pa/lib2funcs.asm 

OBJS += \
./osprey/kg++fe/gnu/config/pa/lib1funcs.o \
./osprey/kg++fe/gnu/config/pa/lib2funcs.o \
./osprey/kg++fe/gnu/config/pa/milli32.o \
./osprey/kg++fe/gnu/config/pa/milli64.o \
./osprey/kg++fe/gnu/config/pa/pa.o \
./osprey/kg++fe/gnu/config/pa/quadlib.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/pa/pa.d \
./osprey/kg++fe/gnu/config/pa/quadlib.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/pa/%.o: ../osprey/kg++fe/gnu/config/pa/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/pa/%.o: ../osprey/kg++fe/gnu/config/pa/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/pa/%.o: ../osprey/kg++fe/gnu/config/pa/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


