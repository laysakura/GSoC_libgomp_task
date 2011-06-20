################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libkapi/btrans_tst.c \
../osprey/libkapi/kapi_bv.c \
../osprey/libkapi/kapi_debug.c \
../osprey/libkapi/kapi_dumpbin.c \
../osprey/libkapi/kapi_error.c \
../osprey/libkapi/kapi_fmain.c \
../osprey/libkapi/kapi_general.c \
../osprey/libkapi/kapi_generic.c \
../osprey/libkapi/kapi_ia64.c \
../osprey/libkapi/kapi_ia64_bundle.c \
../osprey/libkapi/kapi_ia64_cache.c \
../osprey/libkapi/kapi_ia64_instruction.c \
../osprey/libkapi/kapi_ia64_latency.c \
../osprey/libkapi/kapi_ia64_ports.c \
../osprey/libkapi/kapi_ia64_version.c \
../osprey/libkapi/kapi_main.c \
../osprey/libkapi/kapi_parse.c \
../osprey/libkapi/kapi_save_source_ia64.c \
../osprey/libkapi/kapi_symbol.c \
../osprey/libkapi/kapi_util.c \
../osprey/libkapi/kapi_version.c \
../osprey/libkapi/kmapi_error.c \
../osprey/libkapi/kmapi_map.c \
../osprey/libkapi/kmapi_save_source.c \
../osprey/libkapi/kmapi_split_issue.c \
../osprey/libkapi/kmapi_version.c \
../osprey/libkapi/try.c 

OBJS += \
./osprey/libkapi/btrans_tst.o \
./osprey/libkapi/kapi_bv.o \
./osprey/libkapi/kapi_debug.o \
./osprey/libkapi/kapi_dumpbin.o \
./osprey/libkapi/kapi_error.o \
./osprey/libkapi/kapi_fmain.o \
./osprey/libkapi/kapi_general.o \
./osprey/libkapi/kapi_generic.o \
./osprey/libkapi/kapi_ia64.o \
./osprey/libkapi/kapi_ia64_bundle.o \
./osprey/libkapi/kapi_ia64_cache.o \
./osprey/libkapi/kapi_ia64_instruction.o \
./osprey/libkapi/kapi_ia64_latency.o \
./osprey/libkapi/kapi_ia64_ports.o \
./osprey/libkapi/kapi_ia64_version.o \
./osprey/libkapi/kapi_main.o \
./osprey/libkapi/kapi_parse.o \
./osprey/libkapi/kapi_save_source_ia64.o \
./osprey/libkapi/kapi_symbol.o \
./osprey/libkapi/kapi_util.o \
./osprey/libkapi/kapi_version.o \
./osprey/libkapi/kmapi_error.o \
./osprey/libkapi/kmapi_map.o \
./osprey/libkapi/kmapi_save_source.o \
./osprey/libkapi/kmapi_split_issue.o \
./osprey/libkapi/kmapi_version.o \
./osprey/libkapi/try.o 

C_DEPS += \
./osprey/libkapi/btrans_tst.d \
./osprey/libkapi/kapi_bv.d \
./osprey/libkapi/kapi_debug.d \
./osprey/libkapi/kapi_dumpbin.d \
./osprey/libkapi/kapi_error.d \
./osprey/libkapi/kapi_fmain.d \
./osprey/libkapi/kapi_general.d \
./osprey/libkapi/kapi_generic.d \
./osprey/libkapi/kapi_ia64.d \
./osprey/libkapi/kapi_ia64_bundle.d \
./osprey/libkapi/kapi_ia64_cache.d \
./osprey/libkapi/kapi_ia64_instruction.d \
./osprey/libkapi/kapi_ia64_latency.d \
./osprey/libkapi/kapi_ia64_ports.d \
./osprey/libkapi/kapi_ia64_version.d \
./osprey/libkapi/kapi_main.d \
./osprey/libkapi/kapi_parse.d \
./osprey/libkapi/kapi_save_source_ia64.d \
./osprey/libkapi/kapi_symbol.d \
./osprey/libkapi/kapi_util.d \
./osprey/libkapi/kapi_version.d \
./osprey/libkapi/kmapi_error.d \
./osprey/libkapi/kmapi_map.d \
./osprey/libkapi/kmapi_save_source.d \
./osprey/libkapi/kmapi_split_issue.d \
./osprey/libkapi/kmapi_version.d \
./osprey/libkapi/try.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libkapi/%.o: ../osprey/libkapi/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


