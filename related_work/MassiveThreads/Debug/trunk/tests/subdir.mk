################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../trunk/tests/ext_serialize.c \
../trunk/tests/init_fini.c \
../trunk/tests/init_fini_ex.c \
../trunk/tests/init_fini_ex_test.c \
../trunk/tests/init_fini_test.c \
../trunk/tests/serialize.c \
../trunk/tests/yield.c \
../trunk/tests/yield2.c 

OBJS += \
./trunk/tests/ext_serialize.o \
./trunk/tests/init_fini.o \
./trunk/tests/init_fini_ex.o \
./trunk/tests/init_fini_ex_test.o \
./trunk/tests/init_fini_test.o \
./trunk/tests/serialize.o \
./trunk/tests/yield.o \
./trunk/tests/yield2.o 

C_DEPS += \
./trunk/tests/ext_serialize.d \
./trunk/tests/init_fini.d \
./trunk/tests/init_fini_ex.d \
./trunk/tests/init_fini_ex_test.d \
./trunk/tests/init_fini_test.d \
./trunk/tests/serialize.d \
./trunk/tests/yield.d \
./trunk/tests/yield2.d 


# Each subdirectory must supply rules for building sources it contributes
trunk/tests/%.o: ../trunk/tests/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


