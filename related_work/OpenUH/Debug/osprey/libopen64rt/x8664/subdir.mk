################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libopen64rt/x8664/cacheinfo.c 

S_UPPER_SRCS += \
../osprey/libopen64rt/x8664/memset.S 

OBJS += \
./osprey/libopen64rt/x8664/cacheinfo.o \
./osprey/libopen64rt/x8664/memset.o 

C_DEPS += \
./osprey/libopen64rt/x8664/cacheinfo.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libopen64rt/x8664/%.o: ../osprey/libopen64rt/x8664/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libopen64rt/x8664/%.o: ../osprey/libopen64rt/x8664/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


