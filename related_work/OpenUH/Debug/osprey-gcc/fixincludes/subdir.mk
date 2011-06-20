################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/fixincludes/fixfixes.c \
../osprey-gcc/fixincludes/fixincl.c \
../osprey-gcc/fixincludes/fixlib.c \
../osprey-gcc/fixincludes/fixopts.c \
../osprey-gcc/fixincludes/fixtests.c \
../osprey-gcc/fixincludes/procopen.c \
../osprey-gcc/fixincludes/server.c 

OBJS += \
./osprey-gcc/fixincludes/fixfixes.o \
./osprey-gcc/fixincludes/fixincl.o \
./osprey-gcc/fixincludes/fixlib.o \
./osprey-gcc/fixincludes/fixopts.o \
./osprey-gcc/fixincludes/fixtests.o \
./osprey-gcc/fixincludes/procopen.o \
./osprey-gcc/fixincludes/server.o 

C_DEPS += \
./osprey-gcc/fixincludes/fixfixes.d \
./osprey-gcc/fixincludes/fixincl.d \
./osprey-gcc/fixincludes/fixlib.d \
./osprey-gcc/fixincludes/fixopts.d \
./osprey-gcc/fixincludes/fixtests.d \
./osprey-gcc/fixincludes/procopen.d \
./osprey-gcc/fixincludes/server.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/fixincludes/%.o: ../osprey-gcc/fixincludes/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


