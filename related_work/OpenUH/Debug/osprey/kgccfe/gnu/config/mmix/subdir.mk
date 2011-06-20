################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/mmix/mmix.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/mmix/crti.asm \
../osprey/kgccfe/gnu/config/mmix/crtn.asm 

OBJS += \
./osprey/kgccfe/gnu/config/mmix/crti.o \
./osprey/kgccfe/gnu/config/mmix/crtn.o \
./osprey/kgccfe/gnu/config/mmix/mmix.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/mmix/mmix.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/mmix/%.o: ../osprey/kgccfe/gnu/config/mmix/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/mmix/%.o: ../osprey/kgccfe/gnu/config/mmix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


