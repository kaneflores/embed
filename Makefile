flags=-O2 -Wall -std=c2x

.PHONY: all clean

all: clean embed

embed: embed.o birchutils/birchutils.o
	cc $(flags) $^ -o $@

embed.o: embed.c embed.h
	cc $(flags) -c $<

birchutils/birchutils.o: birchutils/birchutils.c
	cc $(flags) -c $< -o $@

clean:
	rm -f *.o embed birchutils/*.o