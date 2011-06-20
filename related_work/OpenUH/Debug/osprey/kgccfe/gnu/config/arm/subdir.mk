################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/arm/arm.c \
../osprey/kgccfe/gnu/config/arm/pe.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/arm/crti.asm \
../osprey/kgccfe/gnu/config/arm/crtn.asm \
../osprey/kgccfe/gnu/config/arm/lib1funcs.asm 

OBJS += \
./osprey/kgccfe/gnu/config/arm/arm.o \
./osprey/kgccfe/gnu/config/arm/crti.o \
./osprey/kgccfe/gnu/config/arm/crtn.o \
./osprey/kgccfe/gnu/config/arm/lib1funcs.o \
./osprey/kgccfe/gnu/config/arm/pe.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/arm/arm.d \
./osprey/kgccfe/gnu/config/arm/pe.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/arm/%.o: ../osprey/kgccfe/gnu/config/arm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/arm/%.o: ../osprey/kgccfe/gnu/config/arm/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


