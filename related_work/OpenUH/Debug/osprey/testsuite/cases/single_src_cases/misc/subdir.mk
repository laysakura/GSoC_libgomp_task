################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/testsuite/cases/single_src_cases/misc/bug_168_testcase.c \
../osprey/testsuite/cases/single_src_cases/misc/labelvalues-20090307.c \
../osprey/testsuite/cases/single_src_cases/misc/mmx_bug_514.c \
../osprey/testsuite/cases/single_src_cases/misc/mmx_bug_516.c \
../osprey/testsuite/cases/single_src_cases/misc/mmx_bug_517.c 

OBJS += \
./osprey/testsuite/cases/single_src_cases/misc/bug_168_testcase.o \
./osprey/testsuite/cases/single_src_cases/misc/labelvalues-20090307.o \
./osprey/testsuite/cases/single_src_cases/misc/mmx_bug_514.o \
./osprey/testsuite/cases/single_src_cases/misc/mmx_bug_516.o \
./osprey/testsuite/cases/single_src_cases/misc/mmx_bug_517.o 

C_DEPS += \
./osprey/testsuite/cases/single_src_cases/misc/bug_168_testcase.d \
./osprey/testsuite/cases/single_src_cases/misc/labelvalues-20090307.d \
./osprey/testsuite/cases/single_src_cases/misc/mmx_bug_514.d \
./osprey/testsuite/cases/single_src_cases/misc/mmx_bug_516.d \
./osprey/testsuite/cases/single_src_cases/misc/mmx_bug_517.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/testsuite/cases/single_src_cases/misc/%.o: ../osprey/testsuite/cases/single_src_cases/misc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


