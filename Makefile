CC=gcc --std=c99 -g

all: driver

driver: driver.c stack.o brackets.o
	$(CC) driver.c stack.o brackets.o -o brackets_exe

stack.o: stack.c stack.h
	$(CC) -c stack.c 

brackets.o: brackets.c brackets.h
	$(CC) -c brackets.c

clean:
	rm -f test stack.o
