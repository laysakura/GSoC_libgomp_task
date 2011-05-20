################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../config/posix/affinity.c \
../config/posix/bar.c \
../config/posix/lock.c \
../config/posix/mutex.c \
../config/posix/proc.c \
../config/posix/ptrlock.c \
../config/posix/sem.c \
../config/posix/time.c 

OBJS += \
./config/posix/affinity.o \
./config/posix/bar.o \
./config/posix/lock.o \
./config/posix/mutex.o \
./config/posix/proc.o \
./config/posix/ptrlock.o \
./config/posix/sem.o \
./config/posix/time.o 

C_DEPS += \
./config/posix/affinity.d \
./config/posix/bar.d \
./config/posix/lock.d \
./config/posix/mutex.d \
./config/posix/proc.d \
./config/posix/ptrlock.d \
./config/posix/sem.d \
./config/posix/time.d 


# Each subdirectory must supply rules for building sources it contributes
config/posix/%.o: ../config/posix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


