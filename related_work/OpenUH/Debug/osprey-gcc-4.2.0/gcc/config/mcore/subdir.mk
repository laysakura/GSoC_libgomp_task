################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/mcore/mcore.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/mcore/crti.asm \
../osprey-gcc-4.2.0/gcc/config/mcore/crtn.asm \
../osprey-gcc-4.2.0/gcc/config/mcore/lib1.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/mcore/crti.o \
./osprey-gcc-4.2.0/gcc/config/mcore/crtn.o \
./osprey-gcc-4.2.0/gcc/config/mcore/lib1.o \
./osprey-gcc-4.2.0/gcc/config/mcore/mcore.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/mcore/mcore.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/mcore/%.o: ../osprey-gcc-4.2.0/gcc/config/mcore/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/mcore/%.o: ../osprey-gcc-4.2.0/gcc/config/mcore/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


