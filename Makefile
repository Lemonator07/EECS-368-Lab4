CC = gcc

all: task1 task2

task1: task1.o 
	$(CC) -o task1 task1.c

task2: task2.o 
	$(CC) -o task2 task2.c

.PHONY: clean

clean:
	rm -f task1 task2