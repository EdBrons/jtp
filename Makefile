CFLAGS=-Wall -pedantic -g -lSDL2
CC=g++

all: jtp

jtp: main.o engine.o map.o geometry.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^

.PHONY: clean
clean:
	rm -f jtp main.o engine.o map.o geometry.o
