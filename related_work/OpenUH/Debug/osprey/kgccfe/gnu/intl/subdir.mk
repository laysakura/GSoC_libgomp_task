################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/intl/bindtextdom.c \
../osprey/kgccfe/gnu/intl/dcgettext.c \
../osprey/kgccfe/gnu/intl/dcigettext.c \
../osprey/kgccfe/gnu/intl/dcngettext.c \
../osprey/kgccfe/gnu/intl/dgettext.c \
../osprey/kgccfe/gnu/intl/dngettext.c \
../osprey/kgccfe/gnu/intl/explodename.c \
../osprey/kgccfe/gnu/intl/finddomain.c \
../osprey/kgccfe/gnu/intl/gettext.c \
../osprey/kgccfe/gnu/intl/intl-compat.c \
../osprey/kgccfe/gnu/intl/l10nflist.c \
../osprey/kgccfe/gnu/intl/loadmsgcat.c \
../osprey/kgccfe/gnu/intl/localcharset.c \
../osprey/kgccfe/gnu/intl/localealias.c \
../osprey/kgccfe/gnu/intl/ngettext.c \
../osprey/kgccfe/gnu/intl/plural.c \
../osprey/kgccfe/gnu/intl/textdomain.c 

OBJS += \
./osprey/kgccfe/gnu/intl/bindtextdom.o \
./osprey/kgccfe/gnu/intl/dcgettext.o \
./osprey/kgccfe/gnu/intl/dcigettext.o \
./osprey/kgccfe/gnu/intl/dcngettext.o \
./osprey/kgccfe/gnu/intl/dgettext.o \
./osprey/kgccfe/gnu/intl/dngettext.o \
./osprey/kgccfe/gnu/intl/explodename.o \
./osprey/kgccfe/gnu/intl/finddomain.o \
./osprey/kgccfe/gnu/intl/gettext.o \
./osprey/kgccfe/gnu/intl/intl-compat.o \
./osprey/kgccfe/gnu/intl/l10nflist.o \
./osprey/kgccfe/gnu/intl/loadmsgcat.o \
./osprey/kgccfe/gnu/intl/localcharset.o \
./osprey/kgccfe/gnu/intl/localealias.o \
./osprey/kgccfe/gnu/intl/ngettext.o \
./osprey/kgccfe/gnu/intl/plural.o \
./osprey/kgccfe/gnu/intl/textdomain.o 

C_DEPS += \
./osprey/kgccfe/gnu/intl/bindtextdom.d \
./osprey/kgccfe/gnu/intl/dcgettext.d \
./osprey/kgccfe/gnu/intl/dcigettext.d \
./osprey/kgccfe/gnu/intl/dcngettext.d \
./osprey/kgccfe/gnu/intl/dgettext.d \
./osprey/kgccfe/gnu/intl/dngettext.d \
./osprey/kgccfe/gnu/intl/explodename.d \
./osprey/kgccfe/gnu/intl/finddomain.d \
./osprey/kgccfe/gnu/intl/gettext.d \
./osprey/kgccfe/gnu/intl/intl-compat.d \
./osprey/kgccfe/gnu/intl/l10nflist.d \
./osprey/kgccfe/gnu/intl/loadmsgcat.d \
./osprey/kgccfe/gnu/intl/localcharset.d \
./osprey/kgccfe/gnu/intl/localealias.d \
./osprey/kgccfe/gnu/intl/ngettext.d \
./osprey/kgccfe/gnu/intl/plural.d \
./osprey/kgccfe/gnu/intl/textdomain.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/intl/%.o: ../osprey/kgccfe/gnu/intl/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


