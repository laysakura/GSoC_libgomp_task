################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/ffio/posix/chknset.c \
../osprey/libu/ffio/posix/sysasg.c 

OBJS += \
./osprey/libu/ffio/posix/chknset.o \
./osprey/libu/ffio/posix/sysasg.o 

C_DEPS += \
./osprey/libu/ffio/posix/chknset.d \
./osprey/libu/ffio/posix/sysasg.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/ffio/posix/%.o: ../osprey/libu/ffio/posix/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


