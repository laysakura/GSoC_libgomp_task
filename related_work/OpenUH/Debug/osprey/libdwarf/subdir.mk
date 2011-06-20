################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libdwarf/dwf_forms.c \
../osprey/libdwarf/dwf_frame.c \
../osprey/libdwarf/dwf_section.c 

OBJS += \
./osprey/libdwarf/dwf_forms.o \
./osprey/libdwarf/dwf_frame.o \
./osprey/libdwarf/dwf_section.o 

C_DEPS += \
./osprey/libdwarf/dwf_forms.d \
./osprey/libdwarf/dwf_frame.d \
./osprey/libdwarf/dwf_section.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libdwarf/%.o: ../osprey/libdwarf/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


