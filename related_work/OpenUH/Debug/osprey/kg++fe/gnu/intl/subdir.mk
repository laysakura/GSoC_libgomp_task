################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/intl/bindtextdom.c \
../osprey/kg++fe/gnu/intl/dcgettext.c \
../osprey/kg++fe/gnu/intl/dcigettext.c \
../osprey/kg++fe/gnu/intl/dcngettext.c \
../osprey/kg++fe/gnu/intl/dgettext.c \
../osprey/kg++fe/gnu/intl/dngettext.c \
../osprey/kg++fe/gnu/intl/explodename.c \
../osprey/kg++fe/gnu/intl/finddomain.c \
../osprey/kg++fe/gnu/intl/gettext.c \
../osprey/kg++fe/gnu/intl/intl-compat.c \
../osprey/kg++fe/gnu/intl/l10nflist.c \
../osprey/kg++fe/gnu/intl/loadmsgcat.c \
../osprey/kg++fe/gnu/intl/localcharset.c \
../osprey/kg++fe/gnu/intl/localealias.c \
../osprey/kg++fe/gnu/intl/ngettext.c \
../osprey/kg++fe/gnu/intl/plural.c \
../osprey/kg++fe/gnu/intl/textdomain.c 

OBJS += \
./osprey/kg++fe/gnu/intl/bindtextdom.o \
./osprey/kg++fe/gnu/intl/dcgettext.o \
./osprey/kg++fe/gnu/intl/dcigettext.o \
./osprey/kg++fe/gnu/intl/dcngettext.o \
./osprey/kg++fe/gnu/intl/dgettext.o \
./osprey/kg++fe/gnu/intl/dngettext.o \
./osprey/kg++fe/gnu/intl/explodename.o \
./osprey/kg++fe/gnu/intl/finddomain.o \
./osprey/kg++fe/gnu/intl/gettext.o \
./osprey/kg++fe/gnu/intl/intl-compat.o \
./osprey/kg++fe/gnu/intl/l10nflist.o \
./osprey/kg++fe/gnu/intl/loadmsgcat.o \
./osprey/kg++fe/gnu/intl/localcharset.o \
./osprey/kg++fe/gnu/intl/localealias.o \
./osprey/kg++fe/gnu/intl/ngettext.o \
./osprey/kg++fe/gnu/intl/plural.o \
./osprey/kg++fe/gnu/intl/textdomain.o 

C_DEPS += \
./osprey/kg++fe/gnu/intl/bindtextdom.d \
./osprey/kg++fe/gnu/intl/dcgettext.d \
./osprey/kg++fe/gnu/intl/dcigettext.d \
./osprey/kg++fe/gnu/intl/dcngettext.d \
./osprey/kg++fe/gnu/intl/dgettext.d \
./osprey/kg++fe/gnu/intl/dngettext.d \
./osprey/kg++fe/gnu/intl/explodename.d \
./osprey/kg++fe/gnu/intl/finddomain.d \
./osprey/kg++fe/gnu/intl/gettext.d \
./osprey/kg++fe/gnu/intl/intl-compat.d \
./osprey/kg++fe/gnu/intl/l10nflist.d \
./osprey/kg++fe/gnu/intl/loadmsgcat.d \
./osprey/kg++fe/gnu/intl/localcharset.d \
./osprey/kg++fe/gnu/intl/localealias.d \
./osprey/kg++fe/gnu/intl/ngettext.d \
./osprey/kg++fe/gnu/intl/plural.d \
./osprey/kg++fe/gnu/intl/textdomain.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/intl/%.o: ../osprey/kg++fe/gnu/intl/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


