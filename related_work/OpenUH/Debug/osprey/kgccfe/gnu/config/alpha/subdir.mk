################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/alpha/alpha.c \
../osprey/kgccfe/gnu/config/alpha/crtfastmath.c \
../osprey/kgccfe/gnu/config/alpha/vms-cc.c \
../osprey/kgccfe/gnu/config/alpha/vms-crt0-64.c \
../osprey/kgccfe/gnu/config/alpha/vms-crt0.c \
../osprey/kgccfe/gnu/config/alpha/vms-ld.c \
../osprey/kgccfe/gnu/config/alpha/vms-psxcrt0-64.c \
../osprey/kgccfe/gnu/config/alpha/vms-psxcrt0.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/alpha/lib1funcs.asm \
../osprey/kgccfe/gnu/config/alpha/qrnnd.asm \
../osprey/kgccfe/gnu/config/alpha/vms-dwarf2.asm \
../osprey/kgccfe/gnu/config/alpha/vms-dwarf2eh.asm \
../osprey/kgccfe/gnu/config/alpha/vms_tramp.asm 

OBJS += \
./osprey/kgccfe/gnu/config/alpha/alpha.o \
./osprey/kgccfe/gnu/config/alpha/crtfastmath.o \
./osprey/kgccfe/gnu/config/alpha/lib1funcs.o \
./osprey/kgccfe/gnu/config/alpha/qrnnd.o \
./osprey/kgccfe/gnu/config/alpha/vms-cc.o \
./osprey/kgccfe/gnu/config/alpha/vms-crt0-64.o \
./osprey/kgccfe/gnu/config/alpha/vms-crt0.o \
./osprey/kgccfe/gnu/config/alpha/vms-dwarf2.o \
./osprey/kgccfe/gnu/config/alpha/vms-dwarf2eh.o \
./osprey/kgccfe/gnu/config/alpha/vms-ld.o \
./osprey/kgccfe/gnu/config/alpha/vms-psxcrt0-64.o \
./osprey/kgccfe/gnu/config/alpha/vms-psxcrt0.o \
./osprey/kgccfe/gnu/config/alpha/vms_tramp.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/alpha/alpha.d \
./osprey/kgccfe/gnu/config/alpha/crtfastmath.d \
./osprey/kgccfe/gnu/config/alpha/vms-cc.d \
./osprey/kgccfe/gnu/config/alpha/vms-crt0-64.d \
./osprey/kgccfe/gnu/config/alpha/vms-crt0.d \
./osprey/kgccfe/gnu/config/alpha/vms-ld.d \
./osprey/kgccfe/gnu/config/alpha/vms-psxcrt0-64.d \
./osprey/kgccfe/gnu/config/alpha/vms-psxcrt0.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/alpha/%.o: ../osprey/kgccfe/gnu/config/alpha/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/alpha/%.o: ../osprey/kgccfe/gnu/config/alpha/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


