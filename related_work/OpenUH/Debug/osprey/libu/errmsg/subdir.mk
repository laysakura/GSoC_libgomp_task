################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/errmsg/lerror.c \
../osprey/libu/errmsg/lmessage.c \
../osprey/libu/errmsg/lwarn.c 

OBJS += \
./osprey/libu/errmsg/lerror.o \
./osprey/libu/errmsg/lmessage.o \
./osprey/libu/errmsg/lwarn.o 

C_DEPS += \
./osprey/libu/errmsg/lerror.d \
./osprey/libu/errmsg/lmessage.d \
./osprey/libu/errmsg/lwarn.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/errmsg/%.o: ../osprey/libu/errmsg/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


