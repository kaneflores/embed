flags=-O2 -Wall -std=c2x
ldflags=-lbu

.PHONY: all clean

all: clean c

c: c.o
	cc $(flags) $^ -o $@ $(ldflags)

c.o: c.c c.h
	cc $(flags) -c $<

clean:
	rm -f *.o c