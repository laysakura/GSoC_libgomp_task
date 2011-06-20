################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libcmplrs/array_alloc.c \
../osprey/libcmplrs/elfmap.c \
../osprey/libcmplrs/events.c \
../osprey/libcmplrs/leb128.c \
../osprey/libcmplrs/make_depend.c 

OBJS += \
./osprey/libcmplrs/array_alloc.o \
./osprey/libcmplrs/elfmap.o \
./osprey/libcmplrs/events.o \
./osprey/libcmplrs/leb128.o \
./osprey/libcmplrs/make_depend.o 

C_DEPS += \
./osprey/libcmplrs/array_alloc.d \
./osprey/libcmplrs/elfmap.d \
./osprey/libcmplrs/events.d \
./osprey/libcmplrs/leb128.d \
./osprey/libcmplrs/make_depend.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libcmplrs/%.o: ../osprey/libcmplrs/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


