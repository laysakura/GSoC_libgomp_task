################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/util/posix/cri_cintrin.c \
../osprey/libu/util/posix/sunos_stuff.c \
../osprey/libu/util/posix/utilintrin.c 

OBJS += \
./osprey/libu/util/posix/cri_cintrin.o \
./osprey/libu/util/posix/sunos_stuff.o \
./osprey/libu/util/posix/utilintrin.o 

C_DEPS += \
./osprey/libu/util/posix/cri_cintrin.d \
./osprey/libu/util/posix/sunos_stuff.d \
./osprey/libu/util/posix/utilintrin.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/util/posix/%.o: ../osprey/libu/util/posix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


