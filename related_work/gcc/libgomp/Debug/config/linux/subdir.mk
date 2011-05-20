################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../config/linux/affinity.c \
../config/linux/bar.c \
../config/linux/lock.c \
../config/linux/mutex.c \
../config/linux/proc.c \
../config/linux/ptrlock.c \
../config/linux/sem.c 

OBJS += \
./config/linux/affinity.o \
./config/linux/bar.o \
./config/linux/lock.o \
./config/linux/mutex.o \
./config/linux/proc.o \
./config/linux/ptrlock.o \
./config/linux/sem.o 

C_DEPS += \
./config/linux/affinity.d \
./config/linux/bar.d \
./config/linux/lock.d \
./config/linux/mutex.d \
./config/linux/proc.d \
./config/linux/ptrlock.d \
./config/linux/sem.d 


# Each subdirectory must supply rules for building sources it contributes
config/linux/%.o: ../config/linux/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


