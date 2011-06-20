################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/ieg/mpp/cray.c \
../osprey/libu/ieg/mpp/cray2cri.c \
../osprey/libu/ieg/mpp/cri2cray.c \
../osprey/libu/ieg/mpp/cri2cry.c \
../osprey/libu/ieg/mpp/cri2ieg.c \
../osprey/libu/ieg/mpp/cri2ieg_77.c \
../osprey/libu/ieg/mpp/cry2cri.c \
../osprey/libu/ieg/mpp/ieg2cri.c \
../osprey/libu/ieg/mpp/ieg2cri_77.c \
../osprey/libu/ieg/mpp/t3d.c \
../osprey/libu/ieg/mpp/t3dng.c 

OBJS += \
./osprey/libu/ieg/mpp/cray.o \
./osprey/libu/ieg/mpp/cray2cri.o \
./osprey/libu/ieg/mpp/cri2cray.o \
./osprey/libu/ieg/mpp/cri2cry.o \
./osprey/libu/ieg/mpp/cri2ieg.o \
./osprey/libu/ieg/mpp/cri2ieg_77.o \
./osprey/libu/ieg/mpp/cry2cri.o \
./osprey/libu/ieg/mpp/ieg2cri.o \
./osprey/libu/ieg/mpp/ieg2cri_77.o \
./osprey/libu/ieg/mpp/t3d.o \
./osprey/libu/ieg/mpp/t3dng.o 

C_DEPS += \
./osprey/libu/ieg/mpp/cray.d \
./osprey/libu/ieg/mpp/cray2cri.d \
./osprey/libu/ieg/mpp/cri2cray.d \
./osprey/libu/ieg/mpp/cri2cry.d \
./osprey/libu/ieg/mpp/cri2ieg.d \
./osprey/libu/ieg/mpp/cri2ieg_77.d \
./osprey/libu/ieg/mpp/cry2cri.d \
./osprey/libu/ieg/mpp/ieg2cri.d \
./osprey/libu/ieg/mpp/ieg2cri_77.d \
./osprey/libu/ieg/mpp/t3d.d \
./osprey/libu/ieg/mpp/t3dng.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/ieg/mpp/%.o: ../osprey/libu/ieg/mpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


