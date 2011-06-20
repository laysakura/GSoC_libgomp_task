################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/cris/arit.c \
../osprey/kg++fe/gnu/config/cris/cris.c \
../osprey/kg++fe/gnu/config/cris/cris_abi_symbol.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/cris/mulsi3.asm 

OBJS += \
./osprey/kg++fe/gnu/config/cris/arit.o \
./osprey/kg++fe/gnu/config/cris/cris.o \
./osprey/kg++fe/gnu/config/cris/cris_abi_symbol.o \
./osprey/kg++fe/gnu/config/cris/mulsi3.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/cris/arit.d \
./osprey/kg++fe/gnu/config/cris/cris.d \
./osprey/kg++fe/gnu/config/cris/cris_abi_symbol.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/cris/%.o: ../osprey/kg++fe/gnu/config/cris/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/cris/%.o: ../osprey/kg++fe/gnu/config/cris/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


