################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libcsup/msgnew/catgetmsg.c \
../osprey/libcsup/msgnew/catmsgfmt.c 

OBJS += \
./osprey/libcsup/msgnew/catgetmsg.o \
./osprey/libcsup/msgnew/catmsgfmt.o 

C_DEPS += \
./osprey/libcsup/msgnew/catgetmsg.d \
./osprey/libcsup/msgnew/catmsgfmt.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libcsup/msgnew/%.o: ../osprey/libcsup/msgnew/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


