################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/multi/atx@ckstrm.c \
../osprey/libu/multi/cs_atx.c 

OBJS += \
./osprey/libu/multi/atx@ckstrm.o \
./osprey/libu/multi/cs_atx.o 

C_DEPS += \
./osprey/libu/multi/atx@ckstrm.d \
./osprey/libu/multi/cs_atx.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/multi/atx@ckstrm.o: ../osprey/libu/multi/atx@ckstrm.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libu/multi/atx@ckstrm.d" -MT"osprey/libu/multi/atx@ckstrm.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libu/multi/%.o: ../osprey/libu/multi/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


