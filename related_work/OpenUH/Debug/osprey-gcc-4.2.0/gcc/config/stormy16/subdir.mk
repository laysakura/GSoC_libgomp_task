################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/stormy16/stormy16-lib2.c \
../osprey-gcc-4.2.0/gcc/config/stormy16/stormy16.c 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/stormy16/stormy16-lib2.o \
./osprey-gcc-4.2.0/gcc/config/stormy16/stormy16.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/stormy16/stormy16-lib2.d \
./osprey-gcc-4.2.0/gcc/config/stormy16/stormy16.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/stormy16/%.o: ../osprey-gcc-4.2.0/gcc/config/stormy16/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


