################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/mpp_util/allocate_routines.c \
../osprey/libfi/mpp_util/huge_values.c \
../osprey/libfi/mpp_util/init_sdd.c 

OBJS += \
./osprey/libfi/mpp_util/allocate_routines.o \
./osprey/libfi/mpp_util/huge_values.o \
./osprey/libfi/mpp_util/init_sdd.o 

C_DEPS += \
./osprey/libfi/mpp_util/allocate_routines.d \
./osprey/libfi/mpp_util/huge_values.d \
./osprey/libfi/mpp_util/init_sdd.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/mpp_util/%.o: ../osprey/libfi/mpp_util/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


