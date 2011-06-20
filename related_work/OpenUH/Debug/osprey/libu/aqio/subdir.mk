################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/aqio/aqcall.c \
../osprey/libu/aqio/aqclose.c \
../osprey/libu/aqio/aqopen.c \
../osprey/libu/aqio/aqrcl.c \
../osprey/libu/aqio/aqread.c \
../osprey/libu/aqio/aqstat.c \
../osprey/libu/aqio/aqwait.c \
../osprey/libu/aqio/aqwrite.c 

OBJS += \
./osprey/libu/aqio/aqcall.o \
./osprey/libu/aqio/aqclose.o \
./osprey/libu/aqio/aqopen.o \
./osprey/libu/aqio/aqrcl.o \
./osprey/libu/aqio/aqread.o \
./osprey/libu/aqio/aqstat.o \
./osprey/libu/aqio/aqwait.o \
./osprey/libu/aqio/aqwrite.o 

C_DEPS += \
./osprey/libu/aqio/aqcall.d \
./osprey/libu/aqio/aqclose.d \
./osprey/libu/aqio/aqopen.d \
./osprey/libu/aqio/aqrcl.d \
./osprey/libu/aqio/aqread.d \
./osprey/libu/aqio/aqstat.d \
./osprey/libu/aqio/aqwait.d \
./osprey/libu/aqio/aqwrite.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/aqio/%.o: ../osprey/libu/aqio/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


