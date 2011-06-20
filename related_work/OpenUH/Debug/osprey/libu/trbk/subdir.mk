################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/trbk/interpret.c \
../osprey/libu/trbk/trbk.c 

OBJS += \
./osprey/libu/trbk/interpret.o \
./osprey/libu/trbk/trbk.o 

C_DEPS += \
./osprey/libu/trbk/interpret.d \
./osprey/libu/trbk/trbk.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/trbk/%.o: ../osprey/libu/trbk/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


