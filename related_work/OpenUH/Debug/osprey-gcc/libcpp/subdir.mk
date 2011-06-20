################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/libcpp/charset.c \
../osprey-gcc/libcpp/directives.c \
../osprey-gcc/libcpp/errors.c \
../osprey-gcc/libcpp/expr.c \
../osprey-gcc/libcpp/files.c \
../osprey-gcc/libcpp/identifiers.c \
../osprey-gcc/libcpp/init.c \
../osprey-gcc/libcpp/lex.c \
../osprey-gcc/libcpp/line-map.c \
../osprey-gcc/libcpp/macro.c \
../osprey-gcc/libcpp/makedepend.c \
../osprey-gcc/libcpp/mkdeps.c \
../osprey-gcc/libcpp/pch.c \
../osprey-gcc/libcpp/symtab.c \
../osprey-gcc/libcpp/traditional.c 

OBJS += \
./osprey-gcc/libcpp/charset.o \
./osprey-gcc/libcpp/directives.o \
./osprey-gcc/libcpp/errors.o \
./osprey-gcc/libcpp/expr.o \
./osprey-gcc/libcpp/files.o \
./osprey-gcc/libcpp/identifiers.o \
./osprey-gcc/libcpp/init.o \
./osprey-gcc/libcpp/lex.o \
./osprey-gcc/libcpp/line-map.o \
./osprey-gcc/libcpp/macro.o \
./osprey-gcc/libcpp/makedepend.o \
./osprey-gcc/libcpp/mkdeps.o \
./osprey-gcc/libcpp/pch.o \
./osprey-gcc/libcpp/symtab.o \
./osprey-gcc/libcpp/traditional.o 

C_DEPS += \
./osprey-gcc/libcpp/charset.d \
./osprey-gcc/libcpp/directives.d \
./osprey-gcc/libcpp/errors.d \
./osprey-gcc/libcpp/expr.d \
./osprey-gcc/libcpp/files.d \
./osprey-gcc/libcpp/identifiers.d \
./osprey-gcc/libcpp/init.d \
./osprey-gcc/libcpp/lex.d \
./osprey-gcc/libcpp/line-map.d \
./osprey-gcc/libcpp/macro.d \
./osprey-gcc/libcpp/makedepend.d \
./osprey-gcc/libcpp/mkdeps.d \
./osprey-gcc/libcpp/pch.d \
./osprey-gcc/libcpp/symtab.d \
./osprey-gcc/libcpp/traditional.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/libcpp/%.o: ../osprey-gcc/libcpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


