################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/cris/arit.c \
../osprey-gcc/gcc/config/cris/cris.c \
../osprey-gcc/gcc/config/cris/cris_abi_symbol.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/cris/mulsi3.asm 

OBJS += \
./osprey-gcc/gcc/config/cris/arit.o \
./osprey-gcc/gcc/config/cris/cris.o \
./osprey-gcc/gcc/config/cris/cris_abi_symbol.o \
./osprey-gcc/gcc/config/cris/mulsi3.o 

C_DEPS += \
./osprey-gcc/gcc/config/cris/arit.d \
./osprey-gcc/gcc/config/cris/cris.d \
./osprey-gcc/gcc/config/cris/cris_abi_symbol.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/cris/%.o: ../osprey-gcc/gcc/config/cris/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/cris/%.o: ../osprey-gcc/gcc/config/cris/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


