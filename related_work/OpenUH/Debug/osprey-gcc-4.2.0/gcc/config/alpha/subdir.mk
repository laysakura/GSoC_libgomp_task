################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/alpha/alpha.c \
../osprey-gcc-4.2.0/gcc/config/alpha/crtfastmath.c \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-cc.c \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-crt0-64.c \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-crt0.c \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-ld.c \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-psxcrt0-64.c \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-psxcrt0.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/alpha/lib1funcs.asm \
../osprey-gcc-4.2.0/gcc/config/alpha/qrnnd.asm \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-dwarf2.asm \
../osprey-gcc-4.2.0/gcc/config/alpha/vms-dwarf2eh.asm \
../osprey-gcc-4.2.0/gcc/config/alpha/vms_tramp.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/alpha/alpha.o \
./osprey-gcc-4.2.0/gcc/config/alpha/crtfastmath.o \
./osprey-gcc-4.2.0/gcc/config/alpha/lib1funcs.o \
./osprey-gcc-4.2.0/gcc/config/alpha/qrnnd.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-cc.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-crt0-64.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-crt0.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-dwarf2.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-dwarf2eh.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-ld.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-psxcrt0-64.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-psxcrt0.o \
./osprey-gcc-4.2.0/gcc/config/alpha/vms_tramp.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/alpha/alpha.d \
./osprey-gcc-4.2.0/gcc/config/alpha/crtfastmath.d \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-cc.d \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-crt0-64.d \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-crt0.d \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-ld.d \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-psxcrt0-64.d \
./osprey-gcc-4.2.0/gcc/config/alpha/vms-psxcrt0.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/alpha/%.o: ../osprey-gcc-4.2.0/gcc/config/alpha/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/alpha/%.o: ../osprey-gcc-4.2.0/gcc/config/alpha/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


