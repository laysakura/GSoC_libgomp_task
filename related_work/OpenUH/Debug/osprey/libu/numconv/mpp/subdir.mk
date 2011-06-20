################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/numconv/mpp/boizu2s.c \
../osprey/libu/numconv/mpp/defgu2s.c \
../osprey/libu/numconv/mpp/ncon.c \
../osprey/libu/numconv/mpp/outputnaninf.c \
../osprey/libu/numconv/mpp/qqroutines.c \
../osprey/libu/numconv/mpp/s2uboiz.c \
../osprey/libu/numconv/mpp/sd2udee.c \
../osprey/libu/numconv/mpp/sd2udeeq.c \
../osprey/libu/numconv/mpp/sd2uene.c \
../osprey/libu/numconv/mpp/sd2ueneq.c \
../osprey/libu/numconv/mpp/sd2uese.c \
../osprey/libu/numconv/mpp/sd2uf.c \
../osprey/libu/numconv/mpp/sd2ufq.c \
../osprey/libu/numconv/mpp/sd2uge.c \
../osprey/libu/numconv/mpp/sd2ugeq.c 

OBJS += \
./osprey/libu/numconv/mpp/boizu2s.o \
./osprey/libu/numconv/mpp/defgu2s.o \
./osprey/libu/numconv/mpp/ncon.o \
./osprey/libu/numconv/mpp/outputnaninf.o \
./osprey/libu/numconv/mpp/qqroutines.o \
./osprey/libu/numconv/mpp/s2uboiz.o \
./osprey/libu/numconv/mpp/sd2udee.o \
./osprey/libu/numconv/mpp/sd2udeeq.o \
./osprey/libu/numconv/mpp/sd2uene.o \
./osprey/libu/numconv/mpp/sd2ueneq.o \
./osprey/libu/numconv/mpp/sd2uese.o \
./osprey/libu/numconv/mpp/sd2uf.o \
./osprey/libu/numconv/mpp/sd2ufq.o \
./osprey/libu/numconv/mpp/sd2uge.o \
./osprey/libu/numconv/mpp/sd2ugeq.o 

C_DEPS += \
./osprey/libu/numconv/mpp/boizu2s.d \
./osprey/libu/numconv/mpp/defgu2s.d \
./osprey/libu/numconv/mpp/ncon.d \
./osprey/libu/numconv/mpp/outputnaninf.d \
./osprey/libu/numconv/mpp/qqroutines.d \
./osprey/libu/numconv/mpp/s2uboiz.d \
./osprey/libu/numconv/mpp/sd2udee.d \
./osprey/libu/numconv/mpp/sd2udeeq.d \
./osprey/libu/numconv/mpp/sd2uene.d \
./osprey/libu/numconv/mpp/sd2ueneq.d \
./osprey/libu/numconv/mpp/sd2uese.d \
./osprey/libu/numconv/mpp/sd2uf.d \
./osprey/libu/numconv/mpp/sd2ufq.d \
./osprey/libu/numconv/mpp/sd2uge.d \
./osprey/libu/numconv/mpp/sd2ugeq.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/numconv/mpp/%.o: ../osprey/libu/numconv/mpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


