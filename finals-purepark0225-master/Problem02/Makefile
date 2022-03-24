all: Problem02
	g++ -L. Problem02.o -o Problem02 Problem02_main.o

Problem02: problem02.cpp problem02_main.cpp
	g++ -std=c++11 -c problem02.cpp -o Problem02.o
	g++ -std=c++11 -c problem02_main.cpp -o Problem02_main.o

clean:
	rm *.o -f
	rm Problem02 -f
