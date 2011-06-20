################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/SL/irix6-libc-compat.c 

S_UPPER_SRCS += \
../osprey/kgccfe/gnu/config/SL/mips16.S 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/SL/crti.asm \
../osprey/kgccfe/gnu/config/SL/crtn.asm 

OBJS += \
./osprey/kgccfe/gnu/config/SL/crti.o \
./osprey/kgccfe/gnu/config/SL/crtn.o \
./osprey/kgccfe/gnu/config/SL/irix6-libc-compat.o \
./osprey/kgccfe/gnu/config/SL/mips16.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/SL/irix6-libc-compat.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/SL/%.o: ../osprey/kgccfe/gnu/config/SL/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/SL/%.o: ../osprey/kgccfe/gnu/config/SL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/SL/%.o: ../osprey/kgccfe/gnu/config/SL/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


