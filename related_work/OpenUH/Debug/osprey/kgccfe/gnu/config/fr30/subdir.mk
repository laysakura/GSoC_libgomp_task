################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/fr30/fr30.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/fr30/crti.asm \
../osprey/kgccfe/gnu/config/fr30/crtn.asm \
../osprey/kgccfe/gnu/config/fr30/lib1funcs.asm 

OBJS += \
./osprey/kgccfe/gnu/config/fr30/crti.o \
./osprey/kgccfe/gnu/config/fr30/crtn.o \
./osprey/kgccfe/gnu/config/fr30/fr30.o \
./osprey/kgccfe/gnu/config/fr30/lib1funcs.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/fr30/fr30.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/fr30/%.o: ../osprey/kgccfe/gnu/config/fr30/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/fr30/%.o: ../osprey/kgccfe/gnu/config/fr30/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


