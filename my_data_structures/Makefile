# CC is set by $ export CC=hoge

CC=gcc
CFLAGS = -Wall -O0 -g -DDEBUG
LDFLAGS = -lpthread
INCLUDES =

SRCS = $(wildcard *.c)
OBJS = $(subst .c,.o,$(SRCS))
DEPENDS = $(subst .c,.d,$(SRCS))
TARGETS = test_gomp_taskqueue

.PHONY: all
all: $(OBJS) $(TARGETS)

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGETS) $(DEPENDS)

.PHONY: test
test:
	@./test_gomp_taskqueue > test_gomp_taskqueue.log
# Numbers inserted in taskqueue are different
	@expr $(shell wc -l < test_gomp_taskqueue.log) = $(shell sort -g test_gomp_taskqueue.log |uniq |wc -l) > /dev/null; \
	if [ $$? -ne 0 ]; then echo "Some duplicated numbers." ; fi
# Each number should be in a range
	@expr 0 \<= $(shell sort -g test_gomp_taskqueue.log |head -n 1) > /dev/null ; \
	if [ $$? -ne 0 ]; then echo "A number out of range." ; fi
	@expr $(shell sort -g test_gomp_taskqueue.log |head -n 1) \<= 1310720 > /dev/null ; \
	if [ $$? -ne 0 ]; then echo "A number out of range." ; fi

.SUFFIXES: .c .exe
.c.exe:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ $(LDFLAGS)

test_gomp_taskqueue: gomp_taskqueue.o test_gomp_taskqueue.o
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@ $(LDFLAGS)

%.d: %.c
	@set -e; $(CC) -MM $(CFLAGS) $< \
		| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
		[ -s $@ ] || rm -f $@
-include $(DEPENDS)

.PHONY: check-syntax
check-syntax:
	gcc $(CFLAGS) -fsyntax-only $(CHK_SOURCES)
