################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/libstdc++-v3/libmath/copysignf.c \
../osprey-gcc-4.2.0/libstdc++-v3/libmath/signbit.c \
../osprey-gcc-4.2.0/libstdc++-v3/libmath/signbitf.c \
../osprey-gcc-4.2.0/libstdc++-v3/libmath/signbitl.c \
../osprey-gcc-4.2.0/libstdc++-v3/libmath/stubs.c 

OBJS += \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/copysignf.o \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/signbit.o \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/signbitf.o \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/signbitl.o \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/stubs.o 

C_DEPS += \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/copysignf.d \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/signbit.d \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/signbitf.d \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/signbitl.d \
./osprey-gcc-4.2.0/libstdc++-v3/libmath/stubs.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/libstdc++-v3/libmath/%.o: ../osprey-gcc-4.2.0/libstdc++-v3/libmath/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


