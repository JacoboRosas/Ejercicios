# Makefile
all: first
first: first.o
	ld -o $@ $+
first.o: first.s
	as -g -o $@ $<
clean:
	rm -vf first *.o

