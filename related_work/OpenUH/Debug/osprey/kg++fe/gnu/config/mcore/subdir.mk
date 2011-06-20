################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/mcore/mcore.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/mcore/crti.asm \
../osprey/kg++fe/gnu/config/mcore/crtn.asm \
../osprey/kg++fe/gnu/config/mcore/lib1.asm 

OBJS += \
./osprey/kg++fe/gnu/config/mcore/crti.o \
./osprey/kg++fe/gnu/config/mcore/crtn.o \
./osprey/kg++fe/gnu/config/mcore/lib1.o \
./osprey/kg++fe/gnu/config/mcore/mcore.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/mcore/mcore.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/mcore/%.o: ../osprey/kg++fe/gnu/config/mcore/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/mcore/%.o: ../osprey/kg++fe/gnu/config/mcore/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


