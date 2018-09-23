CC = gcc
CFLAGS = -Wall -Werror -std=c11

OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD_SRC = mkdir -p build/src
MKDIR_BUILD_TEST = mkdir -p build/test

.PHONY: clean test default

default: bin/game

bin/game: build/src/main.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/src/main.o: src/main.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

clean:
	rm -rf bin build
