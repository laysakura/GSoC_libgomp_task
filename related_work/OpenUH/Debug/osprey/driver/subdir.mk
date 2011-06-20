################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/driver/errors.c \
../osprey/driver/file_names.c \
../osprey/driver/file_utils.c \
../osprey/driver/get_options.c \
../osprey/driver/lang_defs.c \
../osprey/driver/main.c \
../osprey/driver/objects.c \
../osprey/driver/opt_actions.c \
../osprey/driver/option_seen.c \
../osprey/driver/options.c \
../osprey/driver/phases.c \
../osprey/driver/run.c \
../osprey/driver/special_options.c \
../osprey/driver/string_utils.c \
../osprey/driver/table.c 

OBJS += \
./osprey/driver/errors.o \
./osprey/driver/file_names.o \
./osprey/driver/file_utils.o \
./osprey/driver/get_options.o \
./osprey/driver/lang_defs.o \
./osprey/driver/main.o \
./osprey/driver/objects.o \
./osprey/driver/opt_actions.o \
./osprey/driver/option_seen.o \
./osprey/driver/options.o \
./osprey/driver/phases.o \
./osprey/driver/run.o \
./osprey/driver/special_options.o \
./osprey/driver/string_utils.o \
./osprey/driver/table.o 

C_DEPS += \
./osprey/driver/errors.d \
./osprey/driver/file_names.d \
./osprey/driver/file_utils.d \
./osprey/driver/get_options.d \
./osprey/driver/lang_defs.d \
./osprey/driver/main.d \
./osprey/driver/objects.d \
./osprey/driver/opt_actions.d \
./osprey/driver/option_seen.d \
./osprey/driver/options.d \
./osprey/driver/phases.d \
./osprey/driver/run.d \
./osprey/driver/special_options.d \
./osprey/driver/string_utils.d \
./osprey/driver/table.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/driver/%.o: ../osprey/driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


