################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/avr/avr.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/avr/libgcc.S 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/avr/avr.o \
./osprey-gcc-4.2.0/gcc/config/avr/libgcc.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/avr/avr.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/avr/%.o: ../osprey-gcc-4.2.0/gcc/config/avr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/avr/%.o: ../osprey-gcc-4.2.0/gcc/config/avr/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


