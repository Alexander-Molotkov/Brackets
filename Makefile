CC=gcc --std=c99 -g

all: driver

driver: brackets.c stack.o
	$(CC) brackets.c stack.o -o brackets_exe

stack.o: stack.c stack.h
	$(CC) -c stack.c 

clean:
	rm -f test stack.o
