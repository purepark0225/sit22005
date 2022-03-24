all: Problem04
	g++ -L. Problem04.o Problem04_main.o -o Problem04

Problem04: problem04.cpp problem04_main.cpp
	g++ -std=c++11 -c problem04.cpp -o Problem04.o
	g++ -std=c++11 -c problem04_main.cpp -o Problem04_main.o

clean:
	rm *.o -f
	rm Problem04 -f
