################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/mt/lib2extra-funcs.c \
../osprey-gcc-4.2.0/gcc/config/mt/mt.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/mt/crti.asm \
../osprey-gcc-4.2.0/gcc/config/mt/crtn.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/mt/crti.o \
./osprey-gcc-4.2.0/gcc/config/mt/crtn.o \
./osprey-gcc-4.2.0/gcc/config/mt/lib2extra-funcs.o \
./osprey-gcc-4.2.0/gcc/config/mt/mt.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/mt/lib2extra-funcs.d \
./osprey-gcc-4.2.0/gcc/config/mt/mt.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/mt/%.o: ../osprey-gcc-4.2.0/gcc/config/mt/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/mt/%.o: ../osprey-gcc-4.2.0/gcc/config/mt/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


