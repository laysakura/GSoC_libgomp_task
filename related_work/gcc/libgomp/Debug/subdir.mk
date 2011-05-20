################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../alloc.c \
../barrier.c \
../critical.c \
../env.c \
../error.c \
../fortran.c \
../iter.c \
../iter_ull.c \
../loop.c \
../loop_ull.c \
../ordered.c \
../parallel.c \
../sections.c \
../single.c \
../task.c \
../team.c \
../work.c 

OBJS += \
./alloc.o \
./barrier.o \
./critical.o \
./env.o \
./error.o \
./fortran.o \
./iter.o \
./iter_ull.o \
./loop.o \
./loop_ull.o \
./ordered.o \
./parallel.o \
./sections.o \
./single.o \
./task.o \
./team.o \
./work.o 

C_DEPS += \
./alloc.d \
./barrier.d \
./critical.d \
./env.d \
./error.d \
./fortran.d \
./iter.d \
./iter_ull.d \
./loop.d \
./loop_ull.d \
./ordered.d \
./parallel.d \
./sections.d \
./single.d \
./task.d \
./team.d \
./work.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


