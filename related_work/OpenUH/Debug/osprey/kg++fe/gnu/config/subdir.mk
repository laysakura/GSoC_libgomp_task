################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/darwin-c.c \
../osprey/kg++fe/gnu/config/darwin-crt2.c \
../osprey/kg++fe/gnu/config/darwin.c \
../osprey/kg++fe/gnu/config/divmod.c \
../osprey/kg++fe/gnu/config/fp-bit.c \
../osprey/kg++fe/gnu/config/nextstep.c \
../osprey/kg++fe/gnu/config/udivmod.c \
../osprey/kg++fe/gnu/config/udivmodsi4.c 

OBJS += \
./osprey/kg++fe/gnu/config/darwin-c.o \
./osprey/kg++fe/gnu/config/darwin-crt2.o \
./osprey/kg++fe/gnu/config/darwin.o \
./osprey/kg++fe/gnu/config/divmod.o \
./osprey/kg++fe/gnu/config/fp-bit.o \
./osprey/kg++fe/gnu/config/nextstep.o \
./osprey/kg++fe/gnu/config/udivmod.o \
./osprey/kg++fe/gnu/config/udivmodsi4.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/darwin-c.d \
./osprey/kg++fe/gnu/config/darwin-crt2.d \
./osprey/kg++fe/gnu/config/darwin.d \
./osprey/kg++fe/gnu/config/divmod.d \
./osprey/kg++fe/gnu/config/fp-bit.d \
./osprey/kg++fe/gnu/config/nextstep.d \
./osprey/kg++fe/gnu/config/udivmod.d \
./osprey/kg++fe/gnu/config/udivmodsi4.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/%.o: ../osprey/kg++fe/gnu/config/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


