################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/d30v/d30v.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/d30v/libgcc1.asm 

OBJS += \
./osprey/kg++fe/gnu/config/d30v/d30v.o \
./osprey/kg++fe/gnu/config/d30v/libgcc1.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/d30v/d30v.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/d30v/%.o: ../osprey/kg++fe/gnu/config/d30v/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/d30v/%.o: ../osprey/kg++fe/gnu/config/d30v/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


