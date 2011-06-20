################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/m32c/m32c-lib2.c \
../osprey-gcc-4.2.0/gcc/config/m32c/m32c-pragma.c \
../osprey-gcc-4.2.0/gcc/config/m32c/m32c.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/m32c/m32c-lib1.S 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c-lib1.o \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c-lib2.o \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c-pragma.o \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c-lib2.d \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c-pragma.d \
./osprey-gcc-4.2.0/gcc/config/m32c/m32c.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/m32c/%.o: ../osprey-gcc-4.2.0/gcc/config/m32c/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/m32c/%.o: ../osprey-gcc-4.2.0/gcc/config/m32c/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


