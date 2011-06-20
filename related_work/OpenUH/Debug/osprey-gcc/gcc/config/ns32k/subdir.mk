################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/ns32k/__unorddf2.c \
../osprey-gcc/gcc/config/ns32k/__unordsf2.c \
../osprey-gcc/gcc/config/ns32k/ns32k.c 

OBJS += \
./osprey-gcc/gcc/config/ns32k/__unorddf2.o \
./osprey-gcc/gcc/config/ns32k/__unordsf2.o \
./osprey-gcc/gcc/config/ns32k/ns32k.o 

C_DEPS += \
./osprey-gcc/gcc/config/ns32k/__unorddf2.d \
./osprey-gcc/gcc/config/ns32k/__unordsf2.d \
./osprey-gcc/gcc/config/ns32k/ns32k.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/ns32k/%.o: ../osprey-gcc/gcc/config/ns32k/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


