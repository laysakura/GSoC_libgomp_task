################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../testsuite/libgomp.c/appendix-a/a.15.1.c \
../testsuite/libgomp.c/appendix-a/a.16.1.c \
../testsuite/libgomp.c/appendix-a/a.18.1.c \
../testsuite/libgomp.c/appendix-a/a.19.1.c \
../testsuite/libgomp.c/appendix-a/a.2.1.c \
../testsuite/libgomp.c/appendix-a/a.21.1.c \
../testsuite/libgomp.c/appendix-a/a.26.1.c \
../testsuite/libgomp.c/appendix-a/a.29.1.c \
../testsuite/libgomp.c/appendix-a/a.3.1.c \
../testsuite/libgomp.c/appendix-a/a.33.3.c \
../testsuite/libgomp.c/appendix-a/a.36.1.c \
../testsuite/libgomp.c/appendix-a/a.39.1.c \
../testsuite/libgomp.c/appendix-a/a.4.1.c \
../testsuite/libgomp.c/appendix-a/a.40.1.c \
../testsuite/libgomp.c/appendix-a/a.5.1.c 

OBJS += \
./testsuite/libgomp.c/appendix-a/a.15.1.o \
./testsuite/libgomp.c/appendix-a/a.16.1.o \
./testsuite/libgomp.c/appendix-a/a.18.1.o \
./testsuite/libgomp.c/appendix-a/a.19.1.o \
./testsuite/libgomp.c/appendix-a/a.2.1.o \
./testsuite/libgomp.c/appendix-a/a.21.1.o \
./testsuite/libgomp.c/appendix-a/a.26.1.o \
./testsuite/libgomp.c/appendix-a/a.29.1.o \
./testsuite/libgomp.c/appendix-a/a.3.1.o \
./testsuite/libgomp.c/appendix-a/a.33.3.o \
./testsuite/libgomp.c/appendix-a/a.36.1.o \
./testsuite/libgomp.c/appendix-a/a.39.1.o \
./testsuite/libgomp.c/appendix-a/a.4.1.o \
./testsuite/libgomp.c/appendix-a/a.40.1.o \
./testsuite/libgomp.c/appendix-a/a.5.1.o 

C_DEPS += \
./testsuite/libgomp.c/appendix-a/a.15.1.d \
./testsuite/libgomp.c/appendix-a/a.16.1.d \
./testsuite/libgomp.c/appendix-a/a.18.1.d \
./testsuite/libgomp.c/appendix-a/a.19.1.d \
./testsuite/libgomp.c/appendix-a/a.2.1.d \
./testsuite/libgomp.c/appendix-a/a.21.1.d \
./testsuite/libgomp.c/appendix-a/a.26.1.d \
./testsuite/libgomp.c/appendix-a/a.29.1.d \
./testsuite/libgomp.c/appendix-a/a.3.1.d \
./testsuite/libgomp.c/appendix-a/a.33.3.d \
./testsuite/libgomp.c/appendix-a/a.36.1.d \
./testsuite/libgomp.c/appendix-a/a.39.1.d \
./testsuite/libgomp.c/appendix-a/a.4.1.d \
./testsuite/libgomp.c/appendix-a/a.40.1.d \
./testsuite/libgomp.c/appendix-a/a.5.1.d 


# Each subdirectory must supply rules for building sources it contributes
testsuite/libgomp.c/appendix-a/%.o: ../testsuite/libgomp.c/appendix-a/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


