################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/testsuite/cases/single_src_cases/cg/1.c \
../osprey/testsuite/cases/single_src_cases/cg/bug_443_testcase.c \
../osprey/testsuite/cases/single_src_cases/cg/huge_array.c \
../osprey/testsuite/cases/single_src_cases/cg/swp.c 

OBJS += \
./osprey/testsuite/cases/single_src_cases/cg/1.o \
./osprey/testsuite/cases/single_src_cases/cg/bug_443_testcase.o \
./osprey/testsuite/cases/single_src_cases/cg/huge_array.o \
./osprey/testsuite/cases/single_src_cases/cg/swp.o 

C_DEPS += \
./osprey/testsuite/cases/single_src_cases/cg/1.d \
./osprey/testsuite/cases/single_src_cases/cg/bug_443_testcase.d \
./osprey/testsuite/cases/single_src_cases/cg/huge_array.d \
./osprey/testsuite/cases/single_src_cases/cg/swp.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/testsuite/cases/single_src_cases/cg/%.o: ../osprey/testsuite/cases/single_src_cases/cg/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


