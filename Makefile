flags=-O2 -Wall -std=c2x
ldflags=-lbu

.PHONY: all clean

all: clean embed

embed: embed.o
	cc $(flags) $^ -o $@ $(ldflags)

embed.o: embed.c embed.h
	cc $(flags) -c $<

clean:
	rm -f *.o embed