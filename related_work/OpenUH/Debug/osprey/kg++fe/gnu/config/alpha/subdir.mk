################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/alpha/alpha.c \
../osprey/kg++fe/gnu/config/alpha/crtfastmath.c \
../osprey/kg++fe/gnu/config/alpha/vms-cc.c \
../osprey/kg++fe/gnu/config/alpha/vms-crt0-64.c \
../osprey/kg++fe/gnu/config/alpha/vms-crt0.c \
../osprey/kg++fe/gnu/config/alpha/vms-ld.c \
../osprey/kg++fe/gnu/config/alpha/vms-psxcrt0-64.c \
../osprey/kg++fe/gnu/config/alpha/vms-psxcrt0.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/alpha/lib1funcs.asm \
../osprey/kg++fe/gnu/config/alpha/qrnnd.asm \
../osprey/kg++fe/gnu/config/alpha/vms-dwarf2.asm \
../osprey/kg++fe/gnu/config/alpha/vms-dwarf2eh.asm \
../osprey/kg++fe/gnu/config/alpha/vms_tramp.asm 

OBJS += \
./osprey/kg++fe/gnu/config/alpha/alpha.o \
./osprey/kg++fe/gnu/config/alpha/crtfastmath.o \
./osprey/kg++fe/gnu/config/alpha/lib1funcs.o \
./osprey/kg++fe/gnu/config/alpha/qrnnd.o \
./osprey/kg++fe/gnu/config/alpha/vms-cc.o \
./osprey/kg++fe/gnu/config/alpha/vms-crt0-64.o \
./osprey/kg++fe/gnu/config/alpha/vms-crt0.o \
./osprey/kg++fe/gnu/config/alpha/vms-dwarf2.o \
./osprey/kg++fe/gnu/config/alpha/vms-dwarf2eh.o \
./osprey/kg++fe/gnu/config/alpha/vms-ld.o \
./osprey/kg++fe/gnu/config/alpha/vms-psxcrt0-64.o \
./osprey/kg++fe/gnu/config/alpha/vms-psxcrt0.o \
./osprey/kg++fe/gnu/config/alpha/vms_tramp.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/alpha/alpha.d \
./osprey/kg++fe/gnu/config/alpha/crtfastmath.d \
./osprey/kg++fe/gnu/config/alpha/vms-cc.d \
./osprey/kg++fe/gnu/config/alpha/vms-crt0-64.d \
./osprey/kg++fe/gnu/config/alpha/vms-crt0.d \
./osprey/kg++fe/gnu/config/alpha/vms-ld.d \
./osprey/kg++fe/gnu/config/alpha/vms-psxcrt0-64.d \
./osprey/kg++fe/gnu/config/alpha/vms-psxcrt0.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/alpha/%.o: ../osprey/kg++fe/gnu/config/alpha/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/alpha/%.o: ../osprey/kg++fe/gnu/config/alpha/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


