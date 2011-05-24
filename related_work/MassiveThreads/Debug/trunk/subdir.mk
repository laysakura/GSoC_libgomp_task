################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../trunk/myth.c \
../trunk/myth_if_pthread.c \
../trunk/myth_init.c \
../trunk/myth_io.c \
../trunk/myth_log.c \
../trunk/myth_misc.c \
../trunk/myth_original_lib.c \
../trunk/myth_sched.c \
../trunk/myth_test.c \
../trunk/myth_worker.c 

S_UPPER_SRCS += \
../trunk/myth_context.S 

OBJS += \
./trunk/myth.o \
./trunk/myth_context.o \
./trunk/myth_if_pthread.o \
./trunk/myth_init.o \
./trunk/myth_io.o \
./trunk/myth_log.o \
./trunk/myth_misc.o \
./trunk/myth_original_lib.o \
./trunk/myth_sched.o \
./trunk/myth_test.o \
./trunk/myth_worker.o 

C_DEPS += \
./trunk/myth.d \
./trunk/myth_if_pthread.d \
./trunk/myth_init.d \
./trunk/myth_io.d \
./trunk/myth_log.d \
./trunk/myth_misc.d \
./trunk/myth_original_lib.d \
./trunk/myth_sched.d \
./trunk/myth_test.d \
./trunk/myth_worker.d 


# Each subdirectory must supply rules for building sources it contributes
trunk/%.o: ../trunk/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I/usr/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

trunk/%.o: ../trunk/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


