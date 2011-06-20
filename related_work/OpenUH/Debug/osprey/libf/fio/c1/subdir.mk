################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libf/fio/c1/calio.c \
../osprey/libf/fio/c1/ibmerr.c 

OBJS += \
./osprey/libf/fio/c1/calio.o \
./osprey/libf/fio/c1/ibmerr.o 

C_DEPS += \
./osprey/libf/fio/c1/calio.d \
./osprey/libf/fio/c1/ibmerr.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libf/fio/c1/%.o: ../osprey/libf/fio/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


