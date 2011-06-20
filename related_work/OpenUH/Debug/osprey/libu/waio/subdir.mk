################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/waio/chkunit.c \
../osprey/libu/waio/errwa.c \
../osprey/libu/waio/iclktck.c \
../osprey/libu/waio/readwa.c \
../osprey/libu/waio/wdset.c \
../osprey/libu/waio/writewa.c \
../osprey/libu/waio/wunit.c 

OBJS += \
./osprey/libu/waio/chkunit.o \
./osprey/libu/waio/errwa.o \
./osprey/libu/waio/iclktck.o \
./osprey/libu/waio/readwa.o \
./osprey/libu/waio/wdset.o \
./osprey/libu/waio/writewa.o \
./osprey/libu/waio/wunit.o 

C_DEPS += \
./osprey/libu/waio/chkunit.d \
./osprey/libu/waio/errwa.d \
./osprey/libu/waio/iclktck.d \
./osprey/libu/waio/readwa.d \
./osprey/libu/waio/wdset.d \
./osprey/libu/waio/writewa.d \
./osprey/libu/waio/wunit.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/waio/%.o: ../osprey/libu/waio/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


