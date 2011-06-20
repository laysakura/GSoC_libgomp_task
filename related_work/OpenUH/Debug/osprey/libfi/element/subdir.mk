################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/element/associated.c \
../osprey/libfi/element/clock.c \
../osprey/libfi/element/date.c \
../osprey/libfi/element/f90_clock.c \
../osprey/libfi/element/f90_date.c \
../osprey/libfi/element/f90_jdate.c \
../osprey/libfi/element/idate_f90.c \
../osprey/libfi/element/irtc.c \
../osprey/libfi/element/jdate.c \
../osprey/libfi/element/loc.c \
../osprey/libfi/element/malloc.c \
../osprey/libfi/element/merge.c \
../osprey/libfi/element/modulo.c \
../osprey/libfi/element/rtc.c \
../osprey/libfi/element/selrealkind.c \
../osprey/libfi/element/trimlen_f90.c 

OBJS += \
./osprey/libfi/element/associated.o \
./osprey/libfi/element/clock.o \
./osprey/libfi/element/date.o \
./osprey/libfi/element/f90_clock.o \
./osprey/libfi/element/f90_date.o \
./osprey/libfi/element/f90_jdate.o \
./osprey/libfi/element/idate_f90.o \
./osprey/libfi/element/irtc.o \
./osprey/libfi/element/jdate.o \
./osprey/libfi/element/loc.o \
./osprey/libfi/element/malloc.o \
./osprey/libfi/element/merge.o \
./osprey/libfi/element/modulo.o \
./osprey/libfi/element/rtc.o \
./osprey/libfi/element/selrealkind.o \
./osprey/libfi/element/trimlen_f90.o 

C_DEPS += \
./osprey/libfi/element/associated.d \
./osprey/libfi/element/clock.d \
./osprey/libfi/element/date.d \
./osprey/libfi/element/f90_clock.d \
./osprey/libfi/element/f90_date.d \
./osprey/libfi/element/f90_jdate.d \
./osprey/libfi/element/idate_f90.d \
./osprey/libfi/element/irtc.d \
./osprey/libfi/element/jdate.d \
./osprey/libfi/element/loc.d \
./osprey/libfi/element/malloc.d \
./osprey/libfi/element/merge.d \
./osprey/libfi/element/modulo.d \
./osprey/libfi/element/rtc.d \
./osprey/libfi/element/selrealkind.d \
./osprey/libfi/element/trimlen_f90.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/element/%.o: ../osprey/libfi/element/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


