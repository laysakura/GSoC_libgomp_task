################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/util/c1/bmmerr.c \
../osprey/libu/util/c1/cancreat.c \
../osprey/libu/util/c1/char.c \
../osprey/libu/util/c1/endp.c \
../osprey/libu/util/c1/fdlen.c \
../osprey/libu/util/c1/getlpp.c \
../osprey/libu/util/c1/jname.c \
../osprey/libu/util/c1/mttimes.c \
../osprey/libu/util/c1/mtts.c \
../osprey/libu/util/c1/sysid.c \
../osprey/libu/util/c1/tsmt.c \
../osprey/libu/util/c1/unitts.c \
../osprey/libu/util/c1/wrterr.c 

OBJS += \
./osprey/libu/util/c1/bmmerr.o \
./osprey/libu/util/c1/cancreat.o \
./osprey/libu/util/c1/char.o \
./osprey/libu/util/c1/endp.o \
./osprey/libu/util/c1/fdlen.o \
./osprey/libu/util/c1/getlpp.o \
./osprey/libu/util/c1/jname.o \
./osprey/libu/util/c1/mttimes.o \
./osprey/libu/util/c1/mtts.o \
./osprey/libu/util/c1/sysid.o \
./osprey/libu/util/c1/tsmt.o \
./osprey/libu/util/c1/unitts.o \
./osprey/libu/util/c1/wrterr.o 

C_DEPS += \
./osprey/libu/util/c1/bmmerr.d \
./osprey/libu/util/c1/cancreat.d \
./osprey/libu/util/c1/char.d \
./osprey/libu/util/c1/endp.d \
./osprey/libu/util/c1/fdlen.d \
./osprey/libu/util/c1/getlpp.d \
./osprey/libu/util/c1/jname.d \
./osprey/libu/util/c1/mttimes.d \
./osprey/libu/util/c1/mtts.d \
./osprey/libu/util/c1/sysid.d \
./osprey/libu/util/c1/tsmt.d \
./osprey/libu/util/c1/unitts.d \
./osprey/libu/util/c1/wrterr.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/util/c1/%.o: ../osprey/libu/util/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


