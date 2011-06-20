################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../osprey/targdir/driver/errors.o \
../osprey/targdir/driver/file_names.o \
../osprey/targdir/driver/file_utils.o \
../osprey/targdir/driver/get_options.o \
../osprey/targdir/driver/implicits.o \
../osprey/targdir/driver/lang_defs.o \
../osprey/targdir/driver/main.o \
../osprey/targdir/driver/objects.o \
../osprey/targdir/driver/opt_actions.o \
../osprey/targdir/driver/option_seen.o \
../osprey/targdir/driver/options.o \
../osprey/targdir/driver/phases.o \
../osprey/targdir/driver/run.o \
../osprey/targdir/driver/special_options.o \
../osprey/targdir/driver/string_utils.o \
../osprey/targdir/driver/table.o \
../osprey/targdir/driver/version_hg.o 

C_SRCS += \
../osprey/targdir/driver/implicits.c \
../osprey/targdir/driver/version_hg.c 

OBJS += \
./osprey/targdir/driver/implicits.o \
./osprey/targdir/driver/version_hg.o 

C_DEPS += \
./osprey/targdir/driver/implicits.d \
./osprey/targdir/driver/version_hg.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/targdir/driver/%.o: ../osprey/targdir/driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


