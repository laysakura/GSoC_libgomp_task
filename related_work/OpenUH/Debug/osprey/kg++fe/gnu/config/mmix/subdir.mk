################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/mmix/mmix.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/mmix/crti.asm \
../osprey/kg++fe/gnu/config/mmix/crtn.asm 

OBJS += \
./osprey/kg++fe/gnu/config/mmix/crti.o \
./osprey/kg++fe/gnu/config/mmix/crtn.o \
./osprey/kg++fe/gnu/config/mmix/mmix.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/mmix/mmix.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/mmix/%.o: ../osprey/kg++fe/gnu/config/mmix/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/mmix/%.o: ../osprey/kg++fe/gnu/config/mmix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


