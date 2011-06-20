################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/mcore/mcore.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/mcore/crti.asm \
../osprey/kgccfe/gnu/config/mcore/crtn.asm \
../osprey/kgccfe/gnu/config/mcore/lib1.asm 

OBJS += \
./osprey/kgccfe/gnu/config/mcore/crti.o \
./osprey/kgccfe/gnu/config/mcore/crtn.o \
./osprey/kgccfe/gnu/config/mcore/lib1.o \
./osprey/kgccfe/gnu/config/mcore/mcore.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/mcore/mcore.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/mcore/%.o: ../osprey/kgccfe/gnu/config/mcore/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/mcore/%.o: ../osprey/kgccfe/gnu/config/mcore/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


