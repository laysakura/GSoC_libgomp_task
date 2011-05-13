# CC is set by $ export CC=hoge

CFLAGS = -Wall -O3
LDFLAGS =
INCLUDES =
LIBS =

SRCS = $(wildcard *.c)
OBJS = $(subst .c,.o,$(SRCS))

TARGETS = pusedo_fib

.PHONY: all
all: init $(TARGETS)

.PHONY: clean
clean:
	rm -f $(TARGETS)

.PHONY: init
init:
ifeq ($(CC), )
	@echo "Specify 'CC' before make."
	@exit 1
endif

ifeq ($(CC), gcc)
CFLAGS_OMP = -fopenmp
endif

ifeq ($(CC), mcc)
CFLAGS += -m32
endif

ifeq ($(CC), icc)
CFLAGS_OMP += -openmp
endif

pusedo_fib: pusedo_fib.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) -c $*.c -o $@ $(LIBS)

%.d: %.c
	@set -e; $(C) -MM $(CFLAGS) $< \
		| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
		[ -s $@ ] || rm -f $@
-include $(DEPENDS)

.PHONY: check-syntax
check-syntax:
	mcc $(CFLAGS) $(CFLAGS_OMP) -fsyntax-only $(CHK_SOURCES)
