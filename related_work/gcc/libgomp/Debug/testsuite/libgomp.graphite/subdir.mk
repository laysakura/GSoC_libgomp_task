################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../testsuite/libgomp.graphite/bounds.c \
../testsuite/libgomp.graphite/force-parallel-1.c \
../testsuite/libgomp.graphite/force-parallel-2.c \
../testsuite/libgomp.graphite/force-parallel-3.c \
../testsuite/libgomp.graphite/force-parallel-4.c \
../testsuite/libgomp.graphite/force-parallel-5.c \
../testsuite/libgomp.graphite/force-parallel-6.c \
../testsuite/libgomp.graphite/force-parallel-7.c \
../testsuite/libgomp.graphite/force-parallel-8.c \
../testsuite/libgomp.graphite/force-parallel-9.c \
../testsuite/libgomp.graphite/pr41118.c 

OBJS += \
./testsuite/libgomp.graphite/bounds.o \
./testsuite/libgomp.graphite/force-parallel-1.o \
./testsuite/libgomp.graphite/force-parallel-2.o \
./testsuite/libgomp.graphite/force-parallel-3.o \
./testsuite/libgomp.graphite/force-parallel-4.o \
./testsuite/libgomp.graphite/force-parallel-5.o \
./testsuite/libgomp.graphite/force-parallel-6.o \
./testsuite/libgomp.graphite/force-parallel-7.o \
./testsuite/libgomp.graphite/force-parallel-8.o \
./testsuite/libgomp.graphite/force-parallel-9.o \
./testsuite/libgomp.graphite/pr41118.o 

C_DEPS += \
./testsuite/libgomp.graphite/bounds.d \
./testsuite/libgomp.graphite/force-parallel-1.d \
./testsuite/libgomp.graphite/force-parallel-2.d \
./testsuite/libgomp.graphite/force-parallel-3.d \
./testsuite/libgomp.graphite/force-parallel-4.d \
./testsuite/libgomp.graphite/force-parallel-5.d \
./testsuite/libgomp.graphite/force-parallel-6.d \
./testsuite/libgomp.graphite/force-parallel-7.d \
./testsuite/libgomp.graphite/force-parallel-8.d \
./testsuite/libgomp.graphite/force-parallel-9.d \
./testsuite/libgomp.graphite/pr41118.d 


# Each subdirectory must supply rules for building sources it contributes
testsuite/libgomp.graphite/%.o: ../testsuite/libgomp.graphite/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


