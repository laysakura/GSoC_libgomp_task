################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/c_int_model.c \
../osprey/kg++fe/main.c 

OBJS += \
./osprey/kg++fe/c_int_model.o \
./osprey/kg++fe/main.o 

C_DEPS += \
./osprey/kg++fe/c_int_model.d \
./osprey/kg++fe/main.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/%.o: ../osprey/kg++fe/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


