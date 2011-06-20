################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/iq2000/iq2000.c \
../osprey-gcc/gcc/config/iq2000/lib2extra-funcs.c 

OBJS += \
./osprey-gcc/gcc/config/iq2000/iq2000.o \
./osprey-gcc/gcc/config/iq2000/lib2extra-funcs.o 

C_DEPS += \
./osprey-gcc/gcc/config/iq2000/iq2000.d \
./osprey-gcc/gcc/config/iq2000/lib2extra-funcs.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/iq2000/%.o: ../osprey-gcc/gcc/config/iq2000/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


