################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/darwin-c.c \
../osprey/kgccfe/gnu/config/darwin-crt2.c \
../osprey/kgccfe/gnu/config/darwin.c \
../osprey/kgccfe/gnu/config/divmod.c \
../osprey/kgccfe/gnu/config/fp-bit.c \
../osprey/kgccfe/gnu/config/nextstep.c \
../osprey/kgccfe/gnu/config/udivmod.c \
../osprey/kgccfe/gnu/config/udivmodsi4.c 

OBJS += \
./osprey/kgccfe/gnu/config/darwin-c.o \
./osprey/kgccfe/gnu/config/darwin-crt2.o \
./osprey/kgccfe/gnu/config/darwin.o \
./osprey/kgccfe/gnu/config/divmod.o \
./osprey/kgccfe/gnu/config/fp-bit.o \
./osprey/kgccfe/gnu/config/nextstep.o \
./osprey/kgccfe/gnu/config/udivmod.o \
./osprey/kgccfe/gnu/config/udivmodsi4.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/darwin-c.d \
./osprey/kgccfe/gnu/config/darwin-crt2.d \
./osprey/kgccfe/gnu/config/darwin.d \
./osprey/kgccfe/gnu/config/divmod.d \
./osprey/kgccfe/gnu/config/fp-bit.d \
./osprey/kgccfe/gnu/config/nextstep.d \
./osprey/kgccfe/gnu/config/udivmod.d \
./osprey/kgccfe/gnu/config/udivmodsi4.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/%.o: ../osprey/kgccfe/gnu/config/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


