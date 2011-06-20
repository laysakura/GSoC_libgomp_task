################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libopenmp/omp_collector_util.c \
../osprey/libopenmp/omp_collector_validation.c \
../osprey/libopenmp/omp_lib.c \
../osprey/libopenmp/omp_lock.c \
../osprey/libopenmp/omp_queue.c \
../osprey/libopenmp/omp_runtime.c \
../osprey/libopenmp/omp_task.c \
../osprey/libopenmp/omp_thread.c \
../osprey/libopenmp/omp_util.c \
../osprey/libopenmp/pcl.c 

OBJS += \
./osprey/libopenmp/omp_collector_util.o \
./osprey/libopenmp/omp_collector_validation.o \
./osprey/libopenmp/omp_lib.o \
./osprey/libopenmp/omp_lock.o \
./osprey/libopenmp/omp_queue.o \
./osprey/libopenmp/omp_runtime.o \
./osprey/libopenmp/omp_task.o \
./osprey/libopenmp/omp_thread.o \
./osprey/libopenmp/omp_util.o \
./osprey/libopenmp/pcl.o 

C_DEPS += \
./osprey/libopenmp/omp_collector_util.d \
./osprey/libopenmp/omp_collector_validation.d \
./osprey/libopenmp/omp_lib.d \
./osprey/libopenmp/omp_lock.d \
./osprey/libopenmp/omp_queue.d \
./osprey/libopenmp/omp_runtime.d \
./osprey/libopenmp/omp_task.d \
./osprey/libopenmp/omp_thread.d \
./osprey/libopenmp/omp_util.d \
./osprey/libopenmp/pcl.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libopenmp/%.o: ../osprey/libopenmp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


