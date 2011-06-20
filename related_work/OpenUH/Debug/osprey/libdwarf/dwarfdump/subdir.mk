################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libdwarf/dwarfdump/dwarfdump.c \
../osprey/libdwarf/dwarfdump/makename.c \
../osprey/libdwarf/dwarfdump/print_die.c \
../osprey/libdwarf/dwarfdump/print_reloc.c \
../osprey/libdwarf/dwarfdump/print_sections.c \
../osprey/libdwarf/dwarfdump/tag_attr.c \
../osprey/libdwarf/dwarfdump/tag_tree.c 

OBJS += \
./osprey/libdwarf/dwarfdump/dwarfdump.o \
./osprey/libdwarf/dwarfdump/makename.o \
./osprey/libdwarf/dwarfdump/print_die.o \
./osprey/libdwarf/dwarfdump/print_reloc.o \
./osprey/libdwarf/dwarfdump/print_sections.o \
./osprey/libdwarf/dwarfdump/tag_attr.o \
./osprey/libdwarf/dwarfdump/tag_tree.o 

C_DEPS += \
./osprey/libdwarf/dwarfdump/dwarfdump.d \
./osprey/libdwarf/dwarfdump/makename.d \
./osprey/libdwarf/dwarfdump/print_die.d \
./osprey/libdwarf/dwarfdump/print_reloc.d \
./osprey/libdwarf/dwarfdump/print_sections.d \
./osprey/libdwarf/dwarfdump/tag_attr.d \
./osprey/libdwarf/dwarfdump/tag_tree.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libdwarf/dwarfdump/%.o: ../osprey/libdwarf/dwarfdump/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


