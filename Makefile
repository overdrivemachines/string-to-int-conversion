# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

string-to-int: string-to-int.o
	$(CC) $(CFLAGS) -o string-to-int string-to-int.o

string-to-int.o: string-to-int.cpp
	$(CC) $(CFLAGS) -c string-to-int.cpp

clean:
	rm -rf string-to-int string-to-int.o
