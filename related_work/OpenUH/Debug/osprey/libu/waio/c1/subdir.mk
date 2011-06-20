################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/waio/c1/closewa.c \
../osprey/libu/waio/c1/openwa.c 

OBJS += \
./osprey/libu/waio/c1/closewa.o \
./osprey/libu/waio/c1/openwa.o 

C_DEPS += \
./osprey/libu/waio/c1/closewa.d \
./osprey/libu/waio/c1/openwa.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/waio/c1/%.o: ../osprey/libu/waio/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


