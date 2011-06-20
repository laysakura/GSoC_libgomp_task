################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/m32r/initfini.c \
../osprey-gcc/gcc/config/m32r/m32r.c 

OBJS += \
./osprey-gcc/gcc/config/m32r/initfini.o \
./osprey-gcc/gcc/config/m32r/m32r.o 

C_DEPS += \
./osprey-gcc/gcc/config/m32r/initfini.d \
./osprey-gcc/gcc/config/m32r/m32r.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/m32r/%.o: ../osprey-gcc/gcc/config/m32r/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


