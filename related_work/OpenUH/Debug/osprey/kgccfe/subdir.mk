################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/c_int_model.c \
../osprey/kgccfe/main.c 

OBJS += \
./osprey/kgccfe/c_int_model.o \
./osprey/kgccfe/main.o 

C_DEPS += \
./osprey/kgccfe/c_int_model.d \
./osprey/kgccfe/main.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/%.o: ../osprey/kgccfe/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


