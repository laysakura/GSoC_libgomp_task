################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/util/mpp/_pack.c \
../osprey/libu/util/mpp/_unpack.c \
../osprey/libu/util/mpp/movbit.c 

OBJS += \
./osprey/libu/util/mpp/_pack.o \
./osprey/libu/util/mpp/_unpack.o \
./osprey/libu/util/mpp/movbit.o 

C_DEPS += \
./osprey/libu/util/mpp/_pack.d \
./osprey/libu/util/mpp/_unpack.d \
./osprey/libu/util/mpp/movbit.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/util/mpp/%.o: ../osprey/libu/util/mpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


