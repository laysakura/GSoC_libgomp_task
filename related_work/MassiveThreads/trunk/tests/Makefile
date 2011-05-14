# Makefile for test
BASE_PATH=$(shell pwd)/../ 
CC = gcc
CFLAGS = -I$(BASE_PATH) -L$(BASE_PATH) -O3 -Wall -Werror
LIBS = -lmyth
TARGET = init_fini init_fini_ex yield yield2 serialize ext_serialize

all: $(TARGET)

init_fini:init_fini.c
	gcc -o $@ $(CFLAGS) $< $(LIBS)

init_fini_ex:init_fini_ex.c
	gcc -o $@ $(CFLAGS) $< $(LIBS)

yield:yield.c
	gcc -o $@ $(CFLAGS) $< $(LIBS)

yield2:yield2.c
	gcc -o $@ $(CFLAGS) $< $(LIBS)

serialize:serialize.c
	gcc -o $@ $(CFLAGS) $< $(LIBS)

ext_serialize:ext_serialize.c
	gcc -o $@ $(CFLAGS) $< $(LIBS)

test:

clean:
	rm -rf *.o
	rm -rf *~

distclean:clean
	rm -f $(TARGET)