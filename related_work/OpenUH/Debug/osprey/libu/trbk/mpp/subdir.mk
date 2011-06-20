################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/trbk/mpp/_trbk.c \
../osprey/libu/trbk/mpp/ftracebk.c \
../osprey/libu/trbk/mpp/tracebk.c \
../osprey/libu/trbk/mpp/who.c 

OBJS += \
./osprey/libu/trbk/mpp/_trbk.o \
./osprey/libu/trbk/mpp/ftracebk.o \
./osprey/libu/trbk/mpp/tracebk.o \
./osprey/libu/trbk/mpp/who.o 

C_DEPS += \
./osprey/libu/trbk/mpp/_trbk.d \
./osprey/libu/trbk/mpp/ftracebk.d \
./osprey/libu/trbk/mpp/tracebk.d \
./osprey/libu/trbk/mpp/who.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/trbk/mpp/%.o: ../osprey/libu/trbk/mpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


