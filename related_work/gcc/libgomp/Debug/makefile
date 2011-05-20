################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include testsuite/libgomp.graphite/subdir.mk
-include testsuite/libgomp.c/subdir.mk
-include testsuite/libgomp.c/appendix-a/subdir.mk
-include config/posix95/subdir.mk
-include config/posix/subdir.mk
-include config/mingw32/subdir.mk
-include config/linux/subdir.mk
-include config/bsd/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: libgomp

# Tool invocations
libgomp: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc  -o"libgomp" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) libgomp
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
