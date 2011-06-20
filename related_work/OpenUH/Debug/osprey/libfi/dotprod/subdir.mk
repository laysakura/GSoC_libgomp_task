################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/dotprod/predot@.c 

OBJS += \
./osprey/libfi/dotprod/predot@.o 

C_DEPS += \
./osprey/libfi/dotprod/predot@.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/dotprod/predot@.o: ../osprey/libfi/dotprod/predot@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/dotprod/predot@.d" -MT"osprey/libfi/dotprod/predot@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


