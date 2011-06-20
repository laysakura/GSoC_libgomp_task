################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/multi/posix/mactbar.c \
../osprey/libu/multi/posix/mactcdl.c \
../osprey/libu/multi/posix/mactcutil.c \
../osprey/libu/multi/posix/mactdata.c \
../osprey/libu/multi/posix/mactevnt.c \
../osprey/libu/multi/posix/mactlist.c \
../osprey/libu/multi/posix/mactlock.c \
../osprey/libu/multi/posix/mactmhtb.c \
../osprey/libu/multi/posix/mactprup.c \
../osprey/libu/multi/posix/mactstrt.c \
../osprey/libu/multi/posix/macttcom.c \
../osprey/libu/multi/posix/macttest.c \
../osprey/libu/multi/posix/macttune.c \
../osprey/libu/multi/posix/mactvalu.c \
../osprey/libu/multi/posix/mactwait.c 

OBJS += \
./osprey/libu/multi/posix/mactbar.o \
./osprey/libu/multi/posix/mactcdl.o \
./osprey/libu/multi/posix/mactcutil.o \
./osprey/libu/multi/posix/mactdata.o \
./osprey/libu/multi/posix/mactevnt.o \
./osprey/libu/multi/posix/mactlist.o \
./osprey/libu/multi/posix/mactlock.o \
./osprey/libu/multi/posix/mactmhtb.o \
./osprey/libu/multi/posix/mactprup.o \
./osprey/libu/multi/posix/mactstrt.o \
./osprey/libu/multi/posix/macttcom.o \
./osprey/libu/multi/posix/macttest.o \
./osprey/libu/multi/posix/macttune.o \
./osprey/libu/multi/posix/mactvalu.o \
./osprey/libu/multi/posix/mactwait.o 

C_DEPS += \
./osprey/libu/multi/posix/mactbar.d \
./osprey/libu/multi/posix/mactcdl.d \
./osprey/libu/multi/posix/mactcutil.d \
./osprey/libu/multi/posix/mactdata.d \
./osprey/libu/multi/posix/mactevnt.d \
./osprey/libu/multi/posix/mactlist.d \
./osprey/libu/multi/posix/mactlock.d \
./osprey/libu/multi/posix/mactmhtb.d \
./osprey/libu/multi/posix/mactprup.d \
./osprey/libu/multi/posix/mactstrt.d \
./osprey/libu/multi/posix/macttcom.d \
./osprey/libu/multi/posix/macttest.d \
./osprey/libu/multi/posix/macttune.d \
./osprey/libu/multi/posix/mactvalu.d \
./osprey/libu/multi/posix/mactwait.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/multi/posix/%.o: ../osprey/libu/multi/posix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


