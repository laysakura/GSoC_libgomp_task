################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libunwind/utils/dump.c \
../osprey/libunwind/utils/leb.c \
../osprey/libunwind/utils/process.c 

OBJS += \
./osprey/libunwind/utils/dump.o \
./osprey/libunwind/utils/leb.o \
./osprey/libunwind/utils/process.o 

C_DEPS += \
./osprey/libunwind/utils/dump.d \
./osprey/libunwind/utils/leb.d \
./osprey/libunwind/utils/process.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libunwind/utils/%.o: ../osprey/libunwind/utils/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


