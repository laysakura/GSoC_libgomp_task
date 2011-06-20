################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/m68k/aux-crt1.c \
../osprey/kg++fe/gnu/config/m68k/aux-exit.c \
../osprey/kg++fe/gnu/config/m68k/aux-mcount.c \
../osprey/kg++fe/gnu/config/m68k/fpgnulib.c \
../osprey/kg++fe/gnu/config/m68k/m68k.c 

S_UPPER_SRCS += \
../osprey/kg++fe/gnu/config/m68k/mot3300-crt0.S \
../osprey/kg++fe/gnu/config/m68k/mot3300Mcrt0.S 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/m68k/aux-crt2.asm \
../osprey/kg++fe/gnu/config/m68k/aux-crtn.asm \
../osprey/kg++fe/gnu/config/m68k/lb1sf68.asm 

OBJS += \
./osprey/kg++fe/gnu/config/m68k/aux-crt1.o \
./osprey/kg++fe/gnu/config/m68k/aux-crt2.o \
./osprey/kg++fe/gnu/config/m68k/aux-crtn.o \
./osprey/kg++fe/gnu/config/m68k/aux-exit.o \
./osprey/kg++fe/gnu/config/m68k/aux-mcount.o \
./osprey/kg++fe/gnu/config/m68k/fpgnulib.o \
./osprey/kg++fe/gnu/config/m68k/lb1sf68.o \
./osprey/kg++fe/gnu/config/m68k/m68k.o \
./osprey/kg++fe/gnu/config/m68k/mot3300-crt0.o \
./osprey/kg++fe/gnu/config/m68k/mot3300Mcrt0.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/m68k/aux-crt1.d \
./osprey/kg++fe/gnu/config/m68k/aux-exit.d \
./osprey/kg++fe/gnu/config/m68k/aux-mcount.d \
./osprey/kg++fe/gnu/config/m68k/fpgnulib.d \
./osprey/kg++fe/gnu/config/m68k/m68k.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/m68k/%.o: ../osprey/kg++fe/gnu/config/m68k/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/m68k/%.o: ../osprey/kg++fe/gnu/config/m68k/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/m68k/%.o: ../osprey/kg++fe/gnu/config/m68k/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


