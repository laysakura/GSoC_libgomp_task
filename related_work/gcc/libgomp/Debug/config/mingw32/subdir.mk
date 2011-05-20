################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../config/mingw32/proc.c \
../config/mingw32/time.c 

OBJS += \
./config/mingw32/proc.o \
./config/mingw32/time.o 

C_DEPS += \
./config/mingw32/proc.d \
./config/mingw32/time.d 


# Each subdirectory must supply rules for building sources it contributes
config/mingw32/%.o: ../config/mingw32/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


