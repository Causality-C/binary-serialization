all: serial
	gcc -o main serial.o main.c
	./main
serial: 
	gcc -c -o serial.o serial.c
clean: all
	rm *.o main 
