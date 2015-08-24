CC=gcc
CFLAGS=-g -Wall

all: sum sqrt

# $@ is the name of the target
# target: dependencies

sum: sum.c
	$(CC) $(CFLAGS) $@.c -o $@

sqrt: sqrt.c
	$(CC) $(CFLAGS) $@.c -o $@

clean:
	rm sum sqrt 
