################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/fixincludes/fixfixes.c \
../osprey-gcc-4.2.0/fixincludes/fixincl.c \
../osprey-gcc-4.2.0/fixincludes/fixlib.c \
../osprey-gcc-4.2.0/fixincludes/fixopts.c \
../osprey-gcc-4.2.0/fixincludes/fixtests.c \
../osprey-gcc-4.2.0/fixincludes/procopen.c \
../osprey-gcc-4.2.0/fixincludes/server.c 

OBJS += \
./osprey-gcc-4.2.0/fixincludes/fixfixes.o \
./osprey-gcc-4.2.0/fixincludes/fixincl.o \
./osprey-gcc-4.2.0/fixincludes/fixlib.o \
./osprey-gcc-4.2.0/fixincludes/fixopts.o \
./osprey-gcc-4.2.0/fixincludes/fixtests.o \
./osprey-gcc-4.2.0/fixincludes/procopen.o \
./osprey-gcc-4.2.0/fixincludes/server.o 

C_DEPS += \
./osprey-gcc-4.2.0/fixincludes/fixfixes.d \
./osprey-gcc-4.2.0/fixincludes/fixincl.d \
./osprey-gcc-4.2.0/fixincludes/fixlib.d \
./osprey-gcc-4.2.0/fixincludes/fixopts.d \
./osprey-gcc-4.2.0/fixincludes/fixtests.d \
./osprey-gcc-4.2.0/fixincludes/procopen.d \
./osprey-gcc-4.2.0/fixincludes/server.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/fixincludes/%.o: ../osprey-gcc-4.2.0/fixincludes/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


