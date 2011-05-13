# CC is set by $ export CC=hoge

CFLAGS = -Wall -O3
LDFLAGS =
INCLUDES =
LIBS =

SRCS = $(wildcard *.c)
OBJS = $(subst .c,.o,$(SRCS))

TARGETS = icv-1 lock-2 nqueens-1 pr36802-1 pr36802-2 pr36802-3 sort-1 task-1 task-2 task-3 task-4

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
endif

ifeq ($(CC), icc)
CFLAGS_OMP += -openmp
endif

.PHONY: run
run:
	./sort-1 100000000
	./nqueens 14

icv-1: icv-1.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

lock-2: lock-2.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

nqueens-1: nqueens-1.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

pr36802-1: pr36802-1.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

pr36802-2: pr36802-2.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

pr36802-3: pr36802-3.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

sort-1: sort-1.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

task-1: task-1.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

task-2: task-2.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

task-3: task-3.c
	$(CC) $(CFLAGS_OMP) $(CFLAGS) $(INCLUDES) $< -o $@ $(LIBS)

task-4: task-4.c
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
