################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/trbk/c1/_tracebk.c \
../osprey/libu/trbk/c1/ftracebk.c \
../osprey/libu/trbk/c1/printreg.c \
../osprey/libu/trbk/c1/printvec.c \
../osprey/libu/trbk/c1/reprvtr.c \
../osprey/libu/trbk/c1/subrnm.c \
../osprey/libu/trbk/c1/tracebk.c 

OBJS += \
./osprey/libu/trbk/c1/_tracebk.o \
./osprey/libu/trbk/c1/ftracebk.o \
./osprey/libu/trbk/c1/printreg.o \
./osprey/libu/trbk/c1/printvec.o \
./osprey/libu/trbk/c1/reprvtr.o \
./osprey/libu/trbk/c1/subrnm.o \
./osprey/libu/trbk/c1/tracebk.o 

C_DEPS += \
./osprey/libu/trbk/c1/_tracebk.d \
./osprey/libu/trbk/c1/ftracebk.d \
./osprey/libu/trbk/c1/printreg.d \
./osprey/libu/trbk/c1/printvec.d \
./osprey/libu/trbk/c1/reprvtr.d \
./osprey/libu/trbk/c1/subrnm.d \
./osprey/libu/trbk/c1/tracebk.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/trbk/c1/%.o: ../osprey/libu/trbk/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


