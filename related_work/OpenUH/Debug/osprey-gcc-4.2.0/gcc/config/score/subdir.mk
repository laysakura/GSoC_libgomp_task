################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/score/score-mdaux.c \
../osprey-gcc-4.2.0/gcc/config/score/score.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/score/mul-div.S 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/score/crti.asm \
../osprey-gcc-4.2.0/gcc/config/score/crtn.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/score/crti.o \
./osprey-gcc-4.2.0/gcc/config/score/crtn.o \
./osprey-gcc-4.2.0/gcc/config/score/mul-div.o \
./osprey-gcc-4.2.0/gcc/config/score/score-mdaux.o \
./osprey-gcc-4.2.0/gcc/config/score/score.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/score/score-mdaux.d \
./osprey-gcc-4.2.0/gcc/config/score/score.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/score/%.o: ../osprey-gcc-4.2.0/gcc/config/score/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/score/%.o: ../osprey-gcc-4.2.0/gcc/config/score/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/score/%.o: ../osprey-gcc-4.2.0/gcc/config/score/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


