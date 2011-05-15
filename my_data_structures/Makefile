# CC is set by $ export CC=hoge

CC=gcc
CFLAGS = -Wall -O0 -g -DDEBUG
LDFLAGS = -lpthread
INCLUDES =

SRCS = $(wildcard *.c)
OBJS = $(subst .c,.o,$(SRCS))
DEPENDS = $(subst .c,.d,$(SRCS))
TARGETS = test_gomp_taskqueue


TESTVAL_EXTENDS = 5


.PHONY: all
all: $(TARGETS)

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGETS) $(DEPENDS)

.PHONY: debug
debug:
	./test_gomp_taskqueue > test_gomp_taskqueue.log 2> debug.log
	sort -g test_gomp_taskqueue.log > sorted.log ; sort -g test_gomp_taskqueue.log |uniq > sorted_uniq.log ; diff sorted.log  sorted_uniq.log

.PHONY: test
test: test_gomp_taskqueue
	@echo ""
	@echo "You ALWAYS need to Recompile test_gomp_taskqueue.c to make -D TESTVAL_* enable."
# Create logfile first since $(shell)  is extracted before all other commands
	$(shell ./test_gomp_taskqueue > test_gomp_taskqueue.log 2> /dev/null)

# Numbers inserted in taskqueue are different
	@expr $(shell wc -l < test_gomp_taskqueue.log) = $(shell sort -g test_gomp_taskqueue.log |awk '{print $$1}' |uniq |wc -l) > /dev/null; \
	if [ $$? -ne 0 ]; then echo "Some duplicated numbers [NG]" ; fi

# Each number should be in a range
	@MIN=$(shell sort -g test_gomp_taskqueue.log |head -n 1 |awk '{print $$1}') ; expr 0 \<= $$MIN > /dev/null ; \
	if [ $$? -ne 0 ]; then echo "A number out of range [NG]" ; else echo "Minimum number is $$MIN [OK]" ; fi

	@MAX=$(shell sort -g test_gomp_taskqueue.log |tail -n 1 |awk '{print $$1}') ;UPPER_LIMIT=$(shell expr 131072 \* $(TESTVAL_EXTENDS)) ; expr $$MAX \<= $$UPPER_LIMIT > /dev/null ; \
	if [ $$? -ne 0 ]; then echo "A number exceeded upper limit $$UPPER_LIMIT [NG]" ; else echo "Maximum number is $$MAX while upper limit is $$UPPER_LIMIT [OK]" ; fi

test_gomp_taskqueue: gomp_taskqueue.o test_gomp_taskqueue.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@ $(LDFLAGS) -D TESTVAL_EXTENDS=$(TESTVAL_EXTENDS)

.SUFFIXES: .c .exe
.c.exe:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

%.d: %.c
	@set -e; $(CC) -MM $(CFLAGS) $< \
		| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
		[ -s $@ ] || rm -f $@
-include $(DEPENDS)

.PHONY: check-syntax
check-syntax:
	gcc $(CFLAGS) -fsyntax-only $(CHK_SOURCES)
