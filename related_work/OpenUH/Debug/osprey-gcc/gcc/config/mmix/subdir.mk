################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/mmix/mmix.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/mmix/crti.asm \
../osprey-gcc/gcc/config/mmix/crtn.asm 

OBJS += \
./osprey-gcc/gcc/config/mmix/crti.o \
./osprey-gcc/gcc/config/mmix/crtn.o \
./osprey-gcc/gcc/config/mmix/mmix.o 

C_DEPS += \
./osprey-gcc/gcc/config/mmix/mmix.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/mmix/%.o: ../osprey-gcc/gcc/config/mmix/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/mmix/%.o: ../osprey-gcc/gcc/config/mmix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


