all: main.o struct.o
	gcc -o main main.o struct.o

main.o: struct.h main.c
	gcc -c main.c

construction.o: struct.h struct.c
	gcc -c struct.c

run:
	./main
