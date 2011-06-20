################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libunwind/consumer/consumer.c \
../osprey/libunwind/consumer/consumer_ia32.c \
../osprey/libunwind/consumer/output.c \
../osprey/libunwind/consumer/state.c 

OBJS += \
./osprey/libunwind/consumer/consumer.o \
./osprey/libunwind/consumer/consumer_ia32.o \
./osprey/libunwind/consumer/output.o \
./osprey/libunwind/consumer/state.o 

C_DEPS += \
./osprey/libunwind/consumer/consumer.d \
./osprey/libunwind/consumer/consumer_ia32.d \
./osprey/libunwind/consumer/output.d \
./osprey/libunwind/consumer/state.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libunwind/consumer/%.o: ../osprey/libunwind/consumer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


