CC=g++
CFLAGS="-Wall -Werror"

all: main.o ComplexNumber.o
	$(CC) -o prog.o main.o ComplexNumber.o
main.o: main.cpp
	$(CC) -c -o main.o main.cpp
ComplexNumber.o: ComplexNumber.cpp ComplexNumber.h
	$(CC) -c -o ComplexNumber.o ComplexNumber.cpp
clean:
	rm -rf ./*.o
