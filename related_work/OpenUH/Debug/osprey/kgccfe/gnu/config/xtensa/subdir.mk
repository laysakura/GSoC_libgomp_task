################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/xtensa/xtensa.c 

S_UPPER_SRCS += \
../osprey/kgccfe/gnu/config/xtensa/lib2funcs.S 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/xtensa/lib1funcs.asm 

OBJS += \
./osprey/kgccfe/gnu/config/xtensa/lib1funcs.o \
./osprey/kgccfe/gnu/config/xtensa/lib2funcs.o \
./osprey/kgccfe/gnu/config/xtensa/xtensa.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/xtensa/xtensa.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/xtensa/%.o: ../osprey/kgccfe/gnu/config/xtensa/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/xtensa/%.o: ../osprey/kgccfe/gnu/config/xtensa/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/xtensa/%.o: ../osprey/kgccfe/gnu/config/xtensa/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


