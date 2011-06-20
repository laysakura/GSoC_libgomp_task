################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/wgen/c_int_model.c \
../osprey/wgen/main.c \
../osprey/wgen/varasm.c 

OBJS += \
./osprey/wgen/c_int_model.o \
./osprey/wgen/main.o \
./osprey/wgen/varasm.o 

C_DEPS += \
./osprey/wgen/c_int_model.d \
./osprey/wgen/main.d \
./osprey/wgen/varasm.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/wgen/%.o: ../osprey/wgen/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


