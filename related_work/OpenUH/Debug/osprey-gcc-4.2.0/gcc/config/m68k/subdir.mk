################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/m68k/fpgnulib.c \
../osprey-gcc-4.2.0/gcc/config/m68k/m68k.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/m68k/lb1sf68.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/m68k/fpgnulib.o \
./osprey-gcc-4.2.0/gcc/config/m68k/lb1sf68.o \
./osprey-gcc-4.2.0/gcc/config/m68k/m68k.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/m68k/fpgnulib.d \
./osprey-gcc-4.2.0/gcc/config/m68k/m68k.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/m68k/%.o: ../osprey-gcc-4.2.0/gcc/config/m68k/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/m68k/%.o: ../osprey-gcc-4.2.0/gcc/config/m68k/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


