#
#
#  Copyright (C) 2009-2011 Advanced Micro Devices, Inc.  All Rights Reserved.
#
#  Copyright (C) 2000, 2001 Silicon Graphics, Inc.  All Rights Reserved.
#
#  This program is free software; you can redistribute it and/or modify it
#  under the terms of version 2 of the GNU General Public License as
#  published by the Free Software Foundation.
#
#  This program is distributed in the hope that it would be useful, but
#  WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
#
#  Further, this software is distributed without any warranty that it is
#  free of the rightful claim of any third person regarding infringement 
#  or the like.  Any license provided herein, whether implied or 
#  otherwise, applies only to this software file.  Patent licenses, if 
#  any, provided herein do not apply to combinations of this program with 
#  other software, or any other product whatsoever.  
#
#  You should have received a copy of the GNU General Public License along
#  with this program; if not, write the Free Software Foundation, Inc., 59
#  Temple Place - Suite 330, Boston MA 02111-1307, USA.
#
#  Contact information:  Silicon Graphics, Inc., 1600 Amphitheatre Pky,
#  Mountain View, CA 94043, or:
#
#  http://www.sgi.com
#
#  For further information regarding this notice, see:
#
#  http://oss.sgi.com/projects/GenInfo/NoticeExplan
#
#


# To override the prefix installation path, specify an alternate full path for
# PREFIX. 

PREFIX              = /home/sho/software/OpenUH
GNUFE_PREFIX_OVERRIDE = prefix=$(PREFIX)/open64-gcc-4.2.0

# The directory where all native compiler component build subdirectories
# are located
#
MACHINE_TYPE        = i386
COMPILER_TARG_DIR   = /home/sho/src/myproject/gsoc/related_work/OpenUH/osprey/targdir
LIB_BUILD_AREA      = /home/sho/src/myproject/gsoc/related_work/OpenUH/osprey/targdir_lib
LIB2_BUILD_AREA     = /home/sho/src/myproject/gsoc/related_work/OpenUH/osprey/targdir_lib2

NATIVE_BUILD_DIR    = osprey/targdir
NATIVE_BUILD_DIR_LD = osprey/cygnus
GNUFE_BUILD_DIR     = osprey-gcc-4.2.0

LIB_MACHINE_TYPE    = IA32
LIB_BUILD_TARGET    = IA32
LIB_BUILD_ABI       = I32BIT
LIB_BUILD_ARCH      = IA32
LIB_BUILD_HOST      = IA32

LIB2_MACHINE_TYPE   = X86_64
LIB2_BUILD_TARGET   = X8664
LIB2_BUILD_ABI      = I64BIT
LIB2_BUILD_ARCH     = X8664
LIB2_BUILD_HOST     = IA32

LIB_BUILD_DIR       = osprey/targdir_lib
LIB2_BUILD_DIR      = osprey/targdir_lib2

TOP_SRCDIR          = /home/sho/src/myproject/gsoc/related_work/OpenUH
TOP_BUILDDIR        = /home/sho/src/myproject/gsoc/related_work/OpenUH
BUILD_VENDOR        = 
BUILD_TARGET        = X8664
BUILD_MULTILIB      = NO
BUILD_GNU3          = 
BUILD_FORTRAN       = YES
BUILD_SKIP_IPA      = 

ifeq ($(MACHINE_TYPE), ia64)
# ia64
  GNUFE_BUILD_HOST    = ia64-redhat-linux
  TARGET_EXTRA_OBJ    = $(NATIVE_BUILD_DIR)/targ_info/itanium.so 
  TARGET_EXTRA_OBJ   += $(NATIVE_BUILD_DIR)/orc_ict/orc_ict.so
  TARGET_EXTRA_OBJ   += $(NATIVE_BUILD_DIR)/orc_intel/orc_intel.so
endif
ifeq ($(MACHINE_TYPE), i386)
# i386
  GNUFE_BUILD_HOST    = x86_64-redhat-linux
endif

ifeq ($(MACHINE_TYPE), x86_64)
# x86_64
  GNUFE_BUILD_HOST    = x86_64-redhat-linux
endif

CROSS_BUILD = false

# All native compiler components:
BASIC_COMPONENTS = \
		$(NATIVE_BUILD_DIR)/driver/driver \
                $(NATIVE_BUILD_DIR)/be/be \
                $(NATIVE_BUILD_DIR)/be/be.so \
                $(NATIVE_BUILD_DIR)/cg/cg.so \
                $(NATIVE_BUILD_DIR)/wopt/wopt.so \
                $(NATIVE_BUILD_DIR)/lno/lno.so \
                $(NATIVE_BUILD_DIR)/lw_inline/inline \
                $(NATIVE_BUILD_DIR)/whirl2c/whirl2c.so \
                $(NATIVE_BUILD_DIR)/whirl2c/whirl2c \
                $(NATIVE_BUILD_DIR)/ir_tools/ir_b2a

ifneq ($(BUILD_SKIP_IPA), YES)
BASIC_COMPONENTS += \
		$(NATIVE_BUILD_DIR)/ipa/ipa.so \
		$(NATIVE_BUILD_DIR)/ipl/ipl.so \
		$(NATIVE_BUILD_DIR)/ipl/ipl \
		$(NATIVE_BUILD_DIR_LD)/ld/ld-new 
endif

ifeq ($(BUILD_FORTRAN), YES)
BASIC_COMPONENTS += \
		$(NATIVE_BUILD_DIR)/whirl2f/whirl2f.so \
		$(NATIVE_BUILD_DIR)/whirl2f/whirl2f 
endif


GNU4_FE_COMPONENTS = \
                $(NATIVE_BUILD_DIR)/wgen/wgen42 \
                $(GNUFE_BUILD_DIR)/gcc/cc1 \
                $(GNUFE_BUILD_DIR)/gcc/cc1plus

GNU3_FE_COMPONENTS = \
                $(NATIVE_BUILD_DIR)/gccfe/gfec \
                $(NATIVE_BUILD_DIR)/g++fe/gfecc

ifeq ($(BUILD_FORTRAN), YES)
FORT_FE_COMPONENTS = \
                $(NATIVE_BUILD_DIR)/crayf90/sgi/mfef95
endif

FIRST_COMPONENTS = \
		$(NATIVE_BUILD_DIR)/include \
		$(NATIVE_BUILD_DIR)/libcomutil \
		$(NATIVE_BUILD_DIR)/libcmplrs \
                $(NATIVE_BUILD_DIR)/libiberty \
		$(NATIVE_BUILD_DIR)/targ_info \
		$(NATIVE_BUILD_DIR)/libelf \
		$(NATIVE_BUILD_DIR)/libelfutil \
		$(NATIVE_BUILD_DIR)/libdwarf \
		$(NATIVE_BUILD_DIR)/libunwindP \
		$(NATIVE_BUILD_DIR)/libcif \
		$(NATIVE_BUILD_DIR)/arith

NATIVE_COMPONENTS = $(BASIC_COMPONENTS) $(TARGET_EXTRA_OBJ)  \
                    $(GNU4_FE_COMPONENTS) $(FORT_FE_COMPONENTS) \
                    $(FIRST_COMPONENTS) 

ifeq ($(BUILD_GNU3), YES)
NATIVE_COMPONENTS += $(GNU3_FE_COMPONENTS)
endif



CROSS_COMPONENTS =  $(BASIC_COMPONENTS) $(TARGET_EXTRA_OBJ) \
                    $(FORT_FE_COMPONENTS)




BASIC_PHONY_TARGET = $(shell for i in $(BASIC_COMPONENTS); do basename "$$i" ; done)

CROSS_PHONY_TARGET = $(shell for i in $(CROSS_COMPONENTS); do basename "$$i" ; done)

PHONY_TARGET = $(shell for i in $(NATIVE_COMPONENTS); do basename "$$i" ; done) 
.PHONY : $(PHONY_TARGET) all build install install_fe install_compiler clean clobber backend

#define SKIP_DEP_BUILD will disable the unnecessary dependency check
export SKIP_DEP_BUILD=1 

# Use all to build compiler (build) and libraries (lib)
# If BUILD_MULTILIB is YES, build a second library as well.
ALL_TARGETS = build lib
CLEAN_LIB = clean-lib
ifeq ($(BUILD_MULTILIB), YES)
ALL_TARGETS += lib2
CLEAN_LIB += clean-lib2
endif

all: $(ALL_TARGETS)

include:
	$(MAKE) -C $(NATIVE_BUILD_DIR)/include

libcomutil: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libcomutil

libcmplrs: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libcmplrs

libiberty: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libiberty

targ_info: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/targ_info

libelf: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libelf

libelfutil: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libelfutil

libdwarf: libelf
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libdwarf

libunwindP: targ_info
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libunwindP

libcif: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libcif

arith:
	$(MAKE) -C $(NATIVE_BUILD_DIR)/arith

$(NATIVE_BUILD_DIR)/driver/driver driver: include
	$(MAKE) -C $(NATIVE_BUILD_DIR)/driver

$(NATIVE_BUILD_DIR)/gccfe/gfec gfec: libiberty libcomutil libcmplrs
	$(MAKE) -C $(NATIVE_BUILD_DIR)/gccfe

$(NATIVE_BUILD_DIR)/g++fe/gfecc gfecc: libiberty libcomutil libcmplrs
	$(MAKE) -C $(NATIVE_BUILD_DIR)/g++fe

$(NATIVE_BUILD_DIR)/wgen/wgen42 wgen42: libiberty libcomutil libcmplrs $(NATIVE_BUILD_DIR)/libspin_4_2_0/libgspin42.a
	$(MAKE) -C $(NATIVE_BUILD_DIR)/wgen

$(NATIVE_BUILD_DIR)/be/be be: be.so 
$(NATIVE_BUILD_DIR)/be/be.so be.so: include libiberty targ_info
	$(MAKE) -C $(NATIVE_BUILD_DIR)/be

$(NATIVE_BUILD_DIR)/cg/cg.so cg.so: be.so libelf libelfutil libdwarf libunwindP
	$(MAKE) -C $(NATIVE_BUILD_DIR)/cg

$(NATIVE_BUILD_DIR)/wopt/wopt.so wopt.so: be.so 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/wopt

$(NATIVE_BUILD_DIR)/lno/lno.so lno.so: wopt.so ipl.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/lno

$(NATIVE_BUILD_DIR)/ipa/ipa.so ipa.so: ipl.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/ipa

$(NATIVE_BUILD_DIR)/ipl/ipl ipl: ipl.so
$(NATIVE_BUILD_DIR)/ipl/ipl.so ipl.so: be.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/ipl

$(NATIVE_BUILD_DIR)/lw_inline/inline inline: be.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/lw_inline

$(NATIVE_BUILD_DIR)/whirl2c/whirl2c whirl2c: whirl2c.so
$(NATIVE_BUILD_DIR)/whirl2c/whirl2c.so whirl2c.so: be.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/whirl2c

$(NATIVE_BUILD_DIR)/whirl2f/whirl2f whirl2f: whirl2f.so
$(NATIVE_BUILD_DIR)/whirl2f/whirl2f.so whirl2f.so: be.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/whirl2f

ifeq ($(MACHINE_TYPE), ia64)
$(NATIVE_BUILD_DIR)/orc_ict/orc_ict.so orc_ict.so: cg.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/orc_ict

$(NATIVE_BUILD_DIR)/orc_intel/orc_intel.so orc_intel.so: cg.so
	$(MAKE) -C $(NATIVE_BUILD_DIR)/orc_intel

$(NATIVE_BUILD_DIR)/targ_info/itanium.so itanium.so: targ_info
endif

$(NATIVE_BUILD_DIR)/ir_tools/ir_b2a ir_b2a: libcomutil
	$(MAKE) -C $(NATIVE_BUILD_DIR)/ir_tools

$(NATIVE_BUILD_DIR)/crayf90/sgi/mfef95 mfef95: libcomutil libcif arith
	$(MAKE) -C $(NATIVE_BUILD_DIR)/crayf90

.PHONY: phony_targets first
$(NATIVE_BUILD_DIR_LD)/ld/ld-new ld-new:
	$(MAKE) -C $(NATIVE_BUILD_DIR_LD)

$(NATIVE_BUILD_DIR)/libspin_4_2_0/libgspin42.a libspin42:
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libspin_4_2_0

# GNU 4.2.0 based FE
cc1plus: $(GNUFE_BUILD_DIR)/gcc/cc1plus
cc1: $(GNUFE_BUILD_DIR)/gcc/cc1
cc1plus: cc1
$(GNUFE_BUILD_DIR)/gcc/cc1plus cc1plus: $(GNUFE_BUILD_DIR)/gcc/cc1
$(GNUFE_BUILD_DIR)/gcc/cc1 cc1: $(NATIVE_BUILD_DIR)/libspin_4_2_0/libgspin42.a
	$(MAKE) -C $(GNUFE_BUILD_DIR)

build:
	$(MAKE) first
	$(MAKE) phony_targets 

phony_targets: $(PHONY_TARGET)
cross: NATIVE_BUILD_DIR = osprey/targia32_ia64_nodebug
cross: NATIVE_BUILD_DIR_LD = osprey/targcygnus_ia32_ia64
cross: CROSS_BUILD = true
cross: $(CROSS_PHONY_TARGET)
	echo $(CROSS_PHONY_TARGET)

backend: $(BASIC_PHONY_TARGET)

ifeq ($(BUILD_TARGET), SL)
install:
	export TOOLROOT=$(PREFIX); \
	export TOP_SRCDIR=$(TOP_SRCDIR); \
		$(TOP_SRCDIR)/INSTALL.cross.sl /home/sho/src/myproject/gsoc/related_work/OpenUH
else
install: install_fe install_compiler

install_fe:
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-common $(GNUFE_PREFIX_OVERRIDE)
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-headers $(GNUFE_PREFIX_OVERRIDE)
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-libgcc $(GNUFE_PREFIX_OVERRIDE)
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-cpp $(GNUFE_PREFIX_OVERRIDE)
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-driver $(GNUFE_PREFIX_OVERRIDE)
	$(MAKE) -C $(GNUFE_BUILD_DIR)/$(GNUFE_BUILD_HOST)/libstdc++-v3 \
	    install $(GNUFE_PREFIX_OVERRIDE)

install_compiler:
	export TOOLROOT=$(PREFIX); \
	export TOP_SRCDIR=$(TOP_SRCDIR); \
		$(TOP_SRCDIR)/install_compiler.sh $(MACHINE_TYPE) $(if $(BUILD_FORTRAN),"YES","NO")
endif
install-cross:
	export TOOLROOT=/home/sho/software/OpenUH; $(TOP_SRCDIR)/install_compiler.sh ia64-cross $(if $(BUILD_FORTRAN),"YES","NO")
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-common
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-headers
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-libgcc
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-cpp
	$(MAKE) -C $(GNUFE_BUILD_DIR)/gcc \
	    install-driver
	$(MAKE) -C $(GNUFE_BUILD_DIR)/$(GNUFE_BUILD_HOST)/libstdc++-v3 \
	    install
	export TOOLROOT=/home/sho/software/OpenUH; $(TOP_SRCDIR)/install_compiler.sh ia64-cross $(if $(BUILD_FORTRAN),"YES","NO")

LIB_ARGS = BUILD_TARGET=$(LIB_BUILD_TARGET) BUILD_COMPILER=SELF BUILD_AREA=$(LIB_BUILD_AREA) MACHINE_TYPE=$(LIB_MACHINE_TYPE) BUILD_ABI=$(LIB_BUILD_ABI) BUILD_ARCH=$(LIB_BUILD_ARCH) BUILD_HOST=$(LIB_BUILD_HOST) BUILD_OPTIMIZE=DEFAULT
ifeq ($(LIB_BUILD_TARGET),IA64)
LIB_ARGS += BUILD_TYPE=NONSHARED
endif
LIB2_ARGS = BUILD_TARGET=$(LIB2_BUILD_TARGET) BUILD_COMPILER=SELF BUILD_AREA=$(LIB2_BUILD_AREA) MACHINE_TYPE=$(LIB2_MACHINE_TYPE) BUILD_ABI=$(LIB2_BUILD_ABI) BUILD_ARCH=$(LIB2_BUILD_ARCH) BUILD_HOST=$(LIB2_BUILD_HOST) BUILD_OPTIMIZE=DEFAULT

.PHONY: library lib clean-library clean-lib
.PHONY: library2 lib2 clean-library2 clean-lib2

library lib library2 lib2 : LOCAL_LIB_ACTION = default
clean-library clean-lib clean-library2 clean-lib2 : LOCAL_LIB_ACTION = clobber

library lib clean-library clean-lib : LOCAL_LIB_BUILD_DIR = $(LIB_BUILD_DIR)
library lib clean-library clean-lib : LOCAL_LIB_ARGS = $(LIB_ARGS)
library2 lib2 clean-library2 clean-lib2 : LOCAL_LIB_BUILD_DIR = $(LIB2_BUILD_DIR)
library2 lib2 clean-library2 clean-lib2 : LOCAL_LIB_ARGS = $(LIB2_ARGS)

library lib library2 lib2 : build

library lib clean-library clean-lib library2 lib2 clean-library2 clean-lib2:
	@echo "$(MAKE) -C $(LOCAL_LIB_BUILD_DIR) $(LOCAL_LIB_ACTION) $(LOCAL_LIB_ARGS)"; \
	$(MAKE) -C $(LOCAL_LIB_BUILD_DIR) $(LOCAL_LIB_ACTION) $(LOCAL_LIB_ARGS)

clobber: clean 
	rm -rf $(CROSSDIR) $(BOOTDIR)

clean: $(CLEAN_LIB)
	$(MAKE) -C $(NATIVE_BUILD_DIR)/driver clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/wgen clobber 
ifeq ($(BUILD_GNU3), YES)
	$(MAKE) -C $(NATIVE_BUILD_DIR)/gccfe clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/g++fe clobber
endif
	$(MAKE) -C $(NATIVE_BUILD_DIR)/be clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/cg clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/wopt clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/lno clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/ipa clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/ipl clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/lw_inline clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/whirl2c clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libkapi clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/targ_info clobber 
	$(MAKE) -C $(NATIVE_BUILD_DIR)/ir_tools clobber 
ifeq ($(BUILD_FORTRAN), YES)
	$(MAKE) -C $(NATIVE_BUILD_DIR)/crayf90 clobber	
	$(MAKE) -C $(NATIVE_BUILD_DIR)/whirl2f clobber 
endif
	$(MAKE) -C $(NATIVE_BUILD_DIR)/arith clobber
	$(MAKE) -C $(NATIVE_BUILD_DIR)/include clobber
	$(MAKE) -C $(NATIVE_BUILD_DIR)/libspin_4_2_0 clobber
ifeq ($(MACHINE_TYPE), ia64)
	$(MAKE) -C $(NATIVE_BUILD_DIR)/orc_ict clobber
	$(MAKE) -C $(NATIVE_BUILD_DIR)/orc_intel clobber
endif
	$(MAKE) -C $(NATIVE_BUILD_DIR_LD) clean
	$(MAKE) -C $(GNUFE_BUILD_DIR) clean
	@for i in libcif libcmplrs libcomutil libcsup libdwarf libelf libelfutil \
		libiberty libunwindP; do  \
		$(MAKE) -C "$(NATIVE_BUILD_DIR)/$${i}" clobber; \
	done

help:
	@echo "Help of the Makefile for Open64 compiler source"
	@echo "Note: It is strongly recommended that you unset TOOLROOT variable"
	@echo "Available targets:"
	@echo "  - (DEFAULT)"
	@echo "    Build the components of the compiler"
	@echo "  - help"
	@echo "    Display this help"
	@echo "  - install"
	@echo "    Install the components of the compiler under prefix."
	@echo "  - install_fe"
	@echo "    Install the GNU FE components of the compiler."
	@echo "  - install_compiler"
	@echo "    Install the components of the compiler other than GNU FE, and libraries."
	@echo "  - library"
	@echo "    Build the libraries needed by the compiler ($(LIB_MACHINE_TYPE))"
	@echo "  - library2"
	@echo "    Build the libraries needed by the compiler ($(LIB2_MACHINE_TYPE))"
	@echo "  - clean-lib"
	@echo "    Remove intermediate files generated in building libraries"
	@echo "  - clean"
	@echo "  - clobber"
	@echo "    Remove all intermediate files"
	@echo ""
	@echo "Available options (former is default):" 
	@echo "  - BUILD_OPTIMIZE={NODEBUG|DEBUG}"
	@echo "    Enable debug the compiler or not"
	@echo "  - BUILD_COMPILER={GNU|OSP|PSC}"
	@echo "    Using GCC(GNU) or Open64(OSP) Or Pathscale(PSC) compiler"
	@echo "    to build the open64 compiler"
	@echo "  - V={0|1}"
	@echo "    Display detailed compilation progress or not"
.PHONY: bootstrap reboot boot cross_gcc

BOOTDIR=$(PWD)/boot
CROSSDIR=$(PWD)/cross_gcc
bootstrap: reboot
#build the reboot compiler
reboot: boot
	$(MAKE) clean
	set +h; $(MAKE) all lib BUILD_COMPILER=OSP PATH=$(BOOTDIR)/bin:$(PATH)

#build the boot compiler using the exist open64 compiler
boot:
#if opencc is not found use gcc to build the cross compiler
	if ! opencc -v >/dev/null 2>&1; then $(MAKE) cross_gcc; fi
	$(MAKE) clean
	rm -rf $(BOOTDIR)
	set +h; $(MAKE) all lib BUILD_COMPILER=OSP PATH=$(CROSSDIR)/bin:$(PATH)
	$(MAKE) install TOOLROOT=$(BOOTDIR)

cross_gcc: 
	$(MAKE) clean
	@rm -rf $(CROSSDIR)
	$(MAKE) all BUILD_COMPILER=GNU
	$(MAKE) install TOOLROOT=$(CROSSDIR)
	set +h; $(MAKE) lib BUILD_COMPILER=OSP PATH=$(CROSSDIR)/bin:$(PATH)
	$(MAKE) install TOOLROOT=$(CROSSDIR)
