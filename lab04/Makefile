targets = main01.bin main02.bin main03.bin main04.bin main05.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main01.bin main02.bin main03.bin main04.bin main05.bin

main01.bin: ex01/src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main02.bin: ex02/src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main03.bin: ex03/src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main04.bin: ex04/src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main05.bin: ex05/src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: #TODO
