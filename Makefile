CC = gcc
CFLAGS = -Wall -Werror -std=c11

OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD_SRC = mkdir -p build/src
MKDIR_BUILD_TEST = mkdir -p build/test

.PHONY: clean test default

default: bin/game.exe

bin/game.exe: build/src/main.o build/src/game.o build/src/random_fill.o\
		build/src/get_input.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/src/main.o: src/main.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/game.o: src/game.c src/game.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/random_fill.o: src/random_fill.c src/random_fill.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/get_input.o: src/get_input.c src/get_input.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

clean:
	rm -rf bin build
