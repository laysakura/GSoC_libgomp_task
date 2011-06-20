################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/testsuite/cases/single_src_cases/kgccfe/bug_455_testcase.c \
../osprey/testsuite/cases/single_src_cases/kgccfe/bug_481_testcase.c \
../osprey/testsuite/cases/single_src_cases/kgccfe/bug_491_testcase.c \
../osprey/testsuite/cases/single_src_cases/kgccfe/cvtl.c \
../osprey/testsuite/cases/single_src_cases/kgccfe/pow.c 

OBJS += \
./osprey/testsuite/cases/single_src_cases/kgccfe/bug_455_testcase.o \
./osprey/testsuite/cases/single_src_cases/kgccfe/bug_481_testcase.o \
./osprey/testsuite/cases/single_src_cases/kgccfe/bug_491_testcase.o \
./osprey/testsuite/cases/single_src_cases/kgccfe/cvtl.o \
./osprey/testsuite/cases/single_src_cases/kgccfe/pow.o 

C_DEPS += \
./osprey/testsuite/cases/single_src_cases/kgccfe/bug_455_testcase.d \
./osprey/testsuite/cases/single_src_cases/kgccfe/bug_481_testcase.d \
./osprey/testsuite/cases/single_src_cases/kgccfe/bug_491_testcase.d \
./osprey/testsuite/cases/single_src_cases/kgccfe/cvtl.d \
./osprey/testsuite/cases/single_src_cases/kgccfe/pow.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/testsuite/cases/single_src_cases/kgccfe/%.o: ../osprey/testsuite/cases/single_src_cases/kgccfe/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


