################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/libdecnumber/decContext.c \
../osprey-gcc-4.2.0/libdecnumber/decLibrary.c \
../osprey-gcc-4.2.0/libdecnumber/decNumber.c \
../osprey-gcc-4.2.0/libdecnumber/decRound.c \
../osprey-gcc-4.2.0/libdecnumber/decUtility.c \
../osprey-gcc-4.2.0/libdecnumber/decimal128.c \
../osprey-gcc-4.2.0/libdecnumber/decimal32.c \
../osprey-gcc-4.2.0/libdecnumber/decimal64.c 

OBJS += \
./osprey-gcc-4.2.0/libdecnumber/decContext.o \
./osprey-gcc-4.2.0/libdecnumber/decLibrary.o \
./osprey-gcc-4.2.0/libdecnumber/decNumber.o \
./osprey-gcc-4.2.0/libdecnumber/decRound.o \
./osprey-gcc-4.2.0/libdecnumber/decUtility.o \
./osprey-gcc-4.2.0/libdecnumber/decimal128.o \
./osprey-gcc-4.2.0/libdecnumber/decimal32.o \
./osprey-gcc-4.2.0/libdecnumber/decimal64.o 

C_DEPS += \
./osprey-gcc-4.2.0/libdecnumber/decContext.d \
./osprey-gcc-4.2.0/libdecnumber/decLibrary.d \
./osprey-gcc-4.2.0/libdecnumber/decNumber.d \
./osprey-gcc-4.2.0/libdecnumber/decRound.d \
./osprey-gcc-4.2.0/libdecnumber/decUtility.d \
./osprey-gcc-4.2.0/libdecnumber/decimal128.d \
./osprey-gcc-4.2.0/libdecnumber/decimal32.d \
./osprey-gcc-4.2.0/libdecnumber/decimal64.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/libdecnumber/%.o: ../osprey-gcc-4.2.0/libdecnumber/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


