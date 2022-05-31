all: serial
	gcc -g -o main serial.o main.c
serial: 
	gcc -c -o serial.o serial.c
clean: 
	rm *.o main *.txt
