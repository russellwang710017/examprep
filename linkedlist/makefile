all: Assignment3

Assignment3: main.o list.o
	gcc main.o list.o

main.o: main.c
	gcc -c main.c

list.o: list.c
	gcc -c list.c

clean:
	rm -f main.o list.o a.out
