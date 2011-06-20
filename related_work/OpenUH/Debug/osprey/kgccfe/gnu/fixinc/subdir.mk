################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/fixinc/fixfixes.c \
../osprey/kgccfe/gnu/fixinc/fixincl.c \
../osprey/kgccfe/gnu/fixinc/fixlib.c \
../osprey/kgccfe/gnu/fixinc/fixtests.c \
../osprey/kgccfe/gnu/fixinc/gnu-regex.c \
../osprey/kgccfe/gnu/fixinc/procopen.c \
../osprey/kgccfe/gnu/fixinc/server.c 

OBJS += \
./osprey/kgccfe/gnu/fixinc/fixfixes.o \
./osprey/kgccfe/gnu/fixinc/fixincl.o \
./osprey/kgccfe/gnu/fixinc/fixlib.o \
./osprey/kgccfe/gnu/fixinc/fixtests.o \
./osprey/kgccfe/gnu/fixinc/gnu-regex.o \
./osprey/kgccfe/gnu/fixinc/procopen.o \
./osprey/kgccfe/gnu/fixinc/server.o 

C_DEPS += \
./osprey/kgccfe/gnu/fixinc/fixfixes.d \
./osprey/kgccfe/gnu/fixinc/fixincl.d \
./osprey/kgccfe/gnu/fixinc/fixlib.d \
./osprey/kgccfe/gnu/fixinc/fixtests.d \
./osprey/kgccfe/gnu/fixinc/gnu-regex.d \
./osprey/kgccfe/gnu/fixinc/procopen.d \
./osprey/kgccfe/gnu/fixinc/server.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/fixinc/%.o: ../osprey/kgccfe/gnu/fixinc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


