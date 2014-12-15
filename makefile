all: main

main: main.o  vector.o
	g++ main.o vector.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

vector.o: vector.h vector.cpp
	g++ -c -o vector.o vector.cpp

clean:
	rm *.o

mrproper: clean
	rm main
