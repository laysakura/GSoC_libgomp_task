################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/clib/c1/ssbreak.c \
../osprey/libu/clib/c1/ssread.c \
../osprey/libu/clib/c1/sswrite.c 

OBJS += \
./osprey/libu/clib/c1/ssbreak.o \
./osprey/libu/clib/c1/ssread.o \
./osprey/libu/clib/c1/sswrite.o 

C_DEPS += \
./osprey/libu/clib/c1/ssbreak.d \
./osprey/libu/clib/c1/ssread.d \
./osprey/libu/clib/c1/sswrite.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/clib/c1/%.o: ../osprey/libu/clib/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


