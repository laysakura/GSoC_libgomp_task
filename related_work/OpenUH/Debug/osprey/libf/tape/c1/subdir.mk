################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libf/tape/c1/acptbad.c \
../osprey/libf/tape/c1/checktp.c \
../osprey/libf/tape/c1/endsp.c \
../osprey/libf/tape/c1/gettp.c \
../osprey/libf/tape/c1/setsp.c \
../osprey/libf/tape/c1/settp.c \
../osprey/libf/tape/c1/skipbad.c \
../osprey/libf/tape/c1/startsp.c \
../osprey/libf/tape/c1/switchv.c \
../osprey/libf/tape/c1/trace.c 

OBJS += \
./osprey/libf/tape/c1/acptbad.o \
./osprey/libf/tape/c1/checktp.o \
./osprey/libf/tape/c1/endsp.o \
./osprey/libf/tape/c1/gettp.o \
./osprey/libf/tape/c1/setsp.o \
./osprey/libf/tape/c1/settp.o \
./osprey/libf/tape/c1/skipbad.o \
./osprey/libf/tape/c1/startsp.o \
./osprey/libf/tape/c1/switchv.o \
./osprey/libf/tape/c1/trace.o 

C_DEPS += \
./osprey/libf/tape/c1/acptbad.d \
./osprey/libf/tape/c1/checktp.d \
./osprey/libf/tape/c1/endsp.d \
./osprey/libf/tape/c1/gettp.d \
./osprey/libf/tape/c1/setsp.d \
./osprey/libf/tape/c1/settp.d \
./osprey/libf/tape/c1/skipbad.d \
./osprey/libf/tape/c1/startsp.d \
./osprey/libf/tape/c1/switchv.d \
./osprey/libf/tape/c1/trace.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libf/tape/c1/%.o: ../osprey/libf/tape/c1/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


