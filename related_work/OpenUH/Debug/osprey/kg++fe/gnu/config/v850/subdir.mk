################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/v850/v850-c.c \
../osprey/kg++fe/gnu/config/v850/v850.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/v850/lib1funcs.asm 

OBJS += \
./osprey/kg++fe/gnu/config/v850/lib1funcs.o \
./osprey/kg++fe/gnu/config/v850/v850-c.o \
./osprey/kg++fe/gnu/config/v850/v850.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/v850/v850-c.d \
./osprey/kg++fe/gnu/config/v850/v850.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/v850/%.o: ../osprey/kg++fe/gnu/config/v850/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/v850/%.o: ../osprey/kg++fe/gnu/config/v850/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


