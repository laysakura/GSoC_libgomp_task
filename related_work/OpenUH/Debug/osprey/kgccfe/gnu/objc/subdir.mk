################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/objc/objc-act.c \
../osprey/kgccfe/gnu/objc/objc-lang.c 

OBJS += \
./osprey/kgccfe/gnu/objc/objc-act.o \
./osprey/kgccfe/gnu/objc/objc-lang.o 

C_DEPS += \
./osprey/kgccfe/gnu/objc/objc-act.d \
./osprey/kgccfe/gnu/objc/objc-lang.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/objc/%.o: ../osprey/kgccfe/gnu/objc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


