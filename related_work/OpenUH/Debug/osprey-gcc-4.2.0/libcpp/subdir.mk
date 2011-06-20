################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/libcpp/charset.c \
../osprey-gcc-4.2.0/libcpp/directives.c \
../osprey-gcc-4.2.0/libcpp/errors.c \
../osprey-gcc-4.2.0/libcpp/expr.c \
../osprey-gcc-4.2.0/libcpp/files.c \
../osprey-gcc-4.2.0/libcpp/identifiers.c \
../osprey-gcc-4.2.0/libcpp/init.c \
../osprey-gcc-4.2.0/libcpp/lex.c \
../osprey-gcc-4.2.0/libcpp/line-map.c \
../osprey-gcc-4.2.0/libcpp/macro.c \
../osprey-gcc-4.2.0/libcpp/makedepend.c \
../osprey-gcc-4.2.0/libcpp/makeucnid.c \
../osprey-gcc-4.2.0/libcpp/mkdeps.c \
../osprey-gcc-4.2.0/libcpp/pch.c \
../osprey-gcc-4.2.0/libcpp/symtab.c \
../osprey-gcc-4.2.0/libcpp/traditional.c 

OBJS += \
./osprey-gcc-4.2.0/libcpp/charset.o \
./osprey-gcc-4.2.0/libcpp/directives.o \
./osprey-gcc-4.2.0/libcpp/errors.o \
./osprey-gcc-4.2.0/libcpp/expr.o \
./osprey-gcc-4.2.0/libcpp/files.o \
./osprey-gcc-4.2.0/libcpp/identifiers.o \
./osprey-gcc-4.2.0/libcpp/init.o \
./osprey-gcc-4.2.0/libcpp/lex.o \
./osprey-gcc-4.2.0/libcpp/line-map.o \
./osprey-gcc-4.2.0/libcpp/macro.o \
./osprey-gcc-4.2.0/libcpp/makedepend.o \
./osprey-gcc-4.2.0/libcpp/makeucnid.o \
./osprey-gcc-4.2.0/libcpp/mkdeps.o \
./osprey-gcc-4.2.0/libcpp/pch.o \
./osprey-gcc-4.2.0/libcpp/symtab.o \
./osprey-gcc-4.2.0/libcpp/traditional.o 

C_DEPS += \
./osprey-gcc-4.2.0/libcpp/charset.d \
./osprey-gcc-4.2.0/libcpp/directives.d \
./osprey-gcc-4.2.0/libcpp/errors.d \
./osprey-gcc-4.2.0/libcpp/expr.d \
./osprey-gcc-4.2.0/libcpp/files.d \
./osprey-gcc-4.2.0/libcpp/identifiers.d \
./osprey-gcc-4.2.0/libcpp/init.d \
./osprey-gcc-4.2.0/libcpp/lex.d \
./osprey-gcc-4.2.0/libcpp/line-map.d \
./osprey-gcc-4.2.0/libcpp/macro.d \
./osprey-gcc-4.2.0/libcpp/makedepend.d \
./osprey-gcc-4.2.0/libcpp/makeucnid.d \
./osprey-gcc-4.2.0/libcpp/mkdeps.d \
./osprey-gcc-4.2.0/libcpp/pch.d \
./osprey-gcc-4.2.0/libcpp/symtab.d \
./osprey-gcc-4.2.0/libcpp/traditional.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/libcpp/%.o: ../osprey-gcc-4.2.0/libcpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


