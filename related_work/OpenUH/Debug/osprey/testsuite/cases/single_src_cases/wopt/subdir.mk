################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/testsuite/cases/single_src_cases/wopt/bug_336_case.c \
../osprey/testsuite/cases/single_src_cases/wopt/bug_482_testcase.c \
../osprey/testsuite/cases/single_src_cases/wopt/redundant_cvtl.c 

OBJS += \
./osprey/testsuite/cases/single_src_cases/wopt/bug_336_case.o \
./osprey/testsuite/cases/single_src_cases/wopt/bug_482_testcase.o \
./osprey/testsuite/cases/single_src_cases/wopt/redundant_cvtl.o 

C_DEPS += \
./osprey/testsuite/cases/single_src_cases/wopt/bug_336_case.d \
./osprey/testsuite/cases/single_src_cases/wopt/bug_482_testcase.d \
./osprey/testsuite/cases/single_src_cases/wopt/redundant_cvtl.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/testsuite/cases/single_src_cases/wopt/%.o: ../osprey/testsuite/cases/single_src_cases/wopt/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


