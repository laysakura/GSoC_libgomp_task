################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/c4x/c4x-c.c \
../osprey-gcc-4.2.0/gcc/config/c4x/c4x.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/c4x/libgcc.S 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/c4x/c4x-c.o \
./osprey-gcc-4.2.0/gcc/config/c4x/c4x.o \
./osprey-gcc-4.2.0/gcc/config/c4x/libgcc.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/c4x/c4x-c.d \
./osprey-gcc-4.2.0/gcc/config/c4x/c4x.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/c4x/%.o: ../osprey-gcc-4.2.0/gcc/config/c4x/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/c4x/%.o: ../osprey-gcc-4.2.0/gcc/config/c4x/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


