################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/cris/arit.c \
../osprey-gcc-4.2.0/gcc/config/cris/cris.c \
../osprey-gcc-4.2.0/gcc/config/cris/cris_abi_symbol.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/cris/mulsi3.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/cris/arit.o \
./osprey-gcc-4.2.0/gcc/config/cris/cris.o \
./osprey-gcc-4.2.0/gcc/config/cris/cris_abi_symbol.o \
./osprey-gcc-4.2.0/gcc/config/cris/mulsi3.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/cris/arit.d \
./osprey-gcc-4.2.0/gcc/config/cris/cris.d \
./osprey-gcc-4.2.0/gcc/config/cris/cris_abi_symbol.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/cris/%.o: ../osprey-gcc-4.2.0/gcc/config/cris/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/cris/%.o: ../osprey-gcc-4.2.0/gcc/config/cris/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


