all: main

main: main.o vector.o agent.o proie.o predateur.o
	g++ main.o vector.o agent.o proie.o predateur.o -o main

main.o: main.cpp 
	g++ -c main.cpp -o main.o

vector.o: vector.h vector.cpp
	g++ -c -o vector.o vector.cpp

agent.o: agent.h 
	g++ -c -o agent.o agent.cpp

proie.o: agent.h proie.h proie.cpp
	g++ -c proie.cpp -o proie.o

predateur.o: agent.h agent.cpp predateur.h predateur.cpp
	g++ -c -o predateur.o predateur.cpp 

clean:
	rm *.o

mrproper: clean
	rm main
