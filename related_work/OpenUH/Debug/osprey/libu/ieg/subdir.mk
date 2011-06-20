################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/ieg/cray2ieg_c.c \
../osprey/libu/ieg/craytran.c \
../osprey/libu/ieg/gchrpck.c \
../osprey/libu/ieg/ieeetran.c \
../osprey/libu/ieg/ieg2cray_c.c \
../osprey/libu/ieg/inttran.c \
../osprey/libu/ieg/mipstran.c 

OBJS += \
./osprey/libu/ieg/cray2ieg_c.o \
./osprey/libu/ieg/craytran.o \
./osprey/libu/ieg/gchrpck.o \
./osprey/libu/ieg/ieeetran.o \
./osprey/libu/ieg/ieg2cray_c.o \
./osprey/libu/ieg/inttran.o \
./osprey/libu/ieg/mipstran.o 

C_DEPS += \
./osprey/libu/ieg/cray2ieg_c.d \
./osprey/libu/ieg/craytran.d \
./osprey/libu/ieg/gchrpck.d \
./osprey/libu/ieg/ieeetran.d \
./osprey/libu/ieg/ieg2cray_c.d \
./osprey/libu/ieg/inttran.d \
./osprey/libu/ieg/mipstran.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/ieg/%.o: ../osprey/libu/ieg/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


