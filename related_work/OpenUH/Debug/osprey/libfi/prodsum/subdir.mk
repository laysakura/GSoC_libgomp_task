################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/prodsum/pre_sum.c \
../osprey/libfi/prodsum/presum@.c \
../osprey/libfi/prodsum/prod0_gen.c \
../osprey/libfi/prodsum/prod_gen.c \
../osprey/libfi/prodsum/sum0_gen.c \
../osprey/libfi/prodsum/sum_gen.c 

OBJS += \
./osprey/libfi/prodsum/pre_sum.o \
./osprey/libfi/prodsum/presum@.o \
./osprey/libfi/prodsum/prod0_gen.o \
./osprey/libfi/prodsum/prod_gen.o \
./osprey/libfi/prodsum/sum0_gen.o \
./osprey/libfi/prodsum/sum_gen.o 

C_DEPS += \
./osprey/libfi/prodsum/pre_sum.d \
./osprey/libfi/prodsum/presum@.d \
./osprey/libfi/prodsum/prod0_gen.d \
./osprey/libfi/prodsum/prod_gen.d \
./osprey/libfi/prodsum/sum0_gen.d \
./osprey/libfi/prodsum/sum_gen.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/prodsum/%.o: ../osprey/libfi/prodsum/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/prodsum/presum@.o: ../osprey/libfi/prodsum/presum@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/prodsum/presum@.d" -MT"osprey/libfi/prodsum/presum@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


