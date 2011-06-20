################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../libspin/gspin-alloc.c \
../libspin/gspin-assert.c \
../libspin/gspin-io.c \
../libspin/gspin-list.c \
../libspin/gspin-mempool.c \
../libspin/gspin-tel.c \
../libspin/gspin-test-driver.c \
../libspin/gspin-tree.c 

OBJS += \
./libspin/gspin-alloc.o \
./libspin/gspin-assert.o \
./libspin/gspin-io.o \
./libspin/gspin-list.o \
./libspin/gspin-mempool.o \
./libspin/gspin-tel.o \
./libspin/gspin-test-driver.o \
./libspin/gspin-tree.o 

C_DEPS += \
./libspin/gspin-alloc.d \
./libspin/gspin-assert.d \
./libspin/gspin-io.d \
./libspin/gspin-list.d \
./libspin/gspin-mempool.d \
./libspin/gspin-tel.d \
./libspin/gspin-test-driver.d \
./libspin/gspin-tree.d 


# Each subdirectory must supply rules for building sources it contributes
libspin/%.o: ../libspin/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


