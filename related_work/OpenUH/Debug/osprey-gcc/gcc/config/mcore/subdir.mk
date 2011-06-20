################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/mcore/mcore.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/mcore/crti.asm \
../osprey-gcc/gcc/config/mcore/crtn.asm \
../osprey-gcc/gcc/config/mcore/lib1.asm 

OBJS += \
./osprey-gcc/gcc/config/mcore/crti.o \
./osprey-gcc/gcc/config/mcore/crtn.o \
./osprey-gcc/gcc/config/mcore/lib1.o \
./osprey-gcc/gcc/config/mcore/mcore.o 

C_DEPS += \
./osprey-gcc/gcc/config/mcore/mcore.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/mcore/%.o: ../osprey-gcc/gcc/config/mcore/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/mcore/%.o: ../osprey-gcc/gcc/config/mcore/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


