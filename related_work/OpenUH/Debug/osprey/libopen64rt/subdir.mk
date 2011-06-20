################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libopen64rt/malloc_opt.c 

OBJS += \
./osprey/libopen64rt/malloc_opt.o 

C_DEPS += \
./osprey/libopen64rt/malloc_opt.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libopen64rt/%.o: ../osprey/libopen64rt/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


