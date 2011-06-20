################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/subrtn/cpu_time.c \
../osprey/libfi/subrtn/date_and_time.c \
../osprey/libfi/subrtn/f90_date_and_time.c \
../osprey/libfi/subrtn/free.c \
../osprey/libfi/subrtn/system_clock.c 

OBJS += \
./osprey/libfi/subrtn/cpu_time.o \
./osprey/libfi/subrtn/date_and_time.o \
./osprey/libfi/subrtn/f90_date_and_time.o \
./osprey/libfi/subrtn/free.o \
./osprey/libfi/subrtn/system_clock.o 

C_DEPS += \
./osprey/libfi/subrtn/cpu_time.d \
./osprey/libfi/subrtn/date_and_time.d \
./osprey/libfi/subrtn/f90_date_and_time.d \
./osprey/libfi/subrtn/free.d \
./osprey/libfi/subrtn/system_clock.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/subrtn/%.o: ../osprey/libfi/subrtn/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


