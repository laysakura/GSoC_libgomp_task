################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libcsup/gen/memwcpy_c.c \
../osprey/libcsup/gen/strnrstrn.c \
../osprey/libcsup/gen/strnstrn.c 

OBJS += \
./osprey/libcsup/gen/memwcpy_c.o \
./osprey/libcsup/gen/strnrstrn.o \
./osprey/libcsup/gen/strnstrn.o 

C_DEPS += \
./osprey/libcsup/gen/memwcpy_c.d \
./osprey/libcsup/gen/strnrstrn.d \
./osprey/libcsup/gen/strnstrn.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libcsup/gen/%.o: ../osprey/libcsup/gen/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


