################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/SL/irix6-libc-compat.c \
../osprey/kg++fe/gnu/config/SL/mips.c 

S_UPPER_SRCS += \
../osprey/kg++fe/gnu/config/SL/mips16.S 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/SL/crti.asm \
../osprey/kg++fe/gnu/config/SL/crtn.asm 

OBJS += \
./osprey/kg++fe/gnu/config/SL/crti.o \
./osprey/kg++fe/gnu/config/SL/crtn.o \
./osprey/kg++fe/gnu/config/SL/irix6-libc-compat.o \
./osprey/kg++fe/gnu/config/SL/mips.o \
./osprey/kg++fe/gnu/config/SL/mips16.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/SL/irix6-libc-compat.d \
./osprey/kg++fe/gnu/config/SL/mips.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/SL/%.o: ../osprey/kg++fe/gnu/config/SL/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/SL/%.o: ../osprey/kg++fe/gnu/config/SL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/SL/%.o: ../osprey/kg++fe/gnu/config/SL/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


