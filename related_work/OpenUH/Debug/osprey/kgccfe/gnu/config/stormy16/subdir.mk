################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/stormy16/stormy16-lib2.c \
../osprey/kgccfe/gnu/config/stormy16/stormy16.c 

OBJS += \
./osprey/kgccfe/gnu/config/stormy16/stormy16-lib2.o \
./osprey/kgccfe/gnu/config/stormy16/stormy16.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/stormy16/stormy16-lib2.d \
./osprey/kgccfe/gnu/config/stormy16/stormy16.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/stormy16/%.o: ../osprey/kgccfe/gnu/config/stormy16/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


