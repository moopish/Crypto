makerun: main
	./main

main: main.c
	gcc -o main main.c
