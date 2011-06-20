################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/m68k/aux-crt1.c \
../osprey/kgccfe/gnu/config/m68k/aux-exit.c \
../osprey/kgccfe/gnu/config/m68k/aux-mcount.c \
../osprey/kgccfe/gnu/config/m68k/fpgnulib.c \
../osprey/kgccfe/gnu/config/m68k/m68k.c 

S_UPPER_SRCS += \
../osprey/kgccfe/gnu/config/m68k/mot3300-crt0.S \
../osprey/kgccfe/gnu/config/m68k/mot3300Mcrt0.S 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/m68k/aux-crt2.asm \
../osprey/kgccfe/gnu/config/m68k/aux-crtn.asm \
../osprey/kgccfe/gnu/config/m68k/lb1sf68.asm 

OBJS += \
./osprey/kgccfe/gnu/config/m68k/aux-crt1.o \
./osprey/kgccfe/gnu/config/m68k/aux-crt2.o \
./osprey/kgccfe/gnu/config/m68k/aux-crtn.o \
./osprey/kgccfe/gnu/config/m68k/aux-exit.o \
./osprey/kgccfe/gnu/config/m68k/aux-mcount.o \
./osprey/kgccfe/gnu/config/m68k/fpgnulib.o \
./osprey/kgccfe/gnu/config/m68k/lb1sf68.o \
./osprey/kgccfe/gnu/config/m68k/m68k.o \
./osprey/kgccfe/gnu/config/m68k/mot3300-crt0.o \
./osprey/kgccfe/gnu/config/m68k/mot3300Mcrt0.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/m68k/aux-crt1.d \
./osprey/kgccfe/gnu/config/m68k/aux-exit.d \
./osprey/kgccfe/gnu/config/m68k/aux-mcount.d \
./osprey/kgccfe/gnu/config/m68k/fpgnulib.d \
./osprey/kgccfe/gnu/config/m68k/m68k.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/m68k/%.o: ../osprey/kgccfe/gnu/config/m68k/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/m68k/%.o: ../osprey/kgccfe/gnu/config/m68k/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/m68k/%.o: ../osprey/kgccfe/gnu/config/m68k/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


