CFLAGS=-Wall -pedantic -g
CC=g++

all: jtp

jtp: main.o engine.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

engine.o: engine.cpp map.cpp
	$(CC) $(CFLAGS) -c $^

.PHONY: clean
clean:
	rm -f jtp main.o engine.o map.o
