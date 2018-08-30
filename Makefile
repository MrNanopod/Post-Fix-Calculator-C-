pgm7	: main.o calculator.o calculator.h
	g++ -o pgm7 main.o calculator.o
	
main.o : main.cpp calculator.h
	g++ -c -o main.o main.cpp
	
calculator.o : calculator.cpp calculator.h
	g++ -c -o calculator.o calculator.cpp
	
clean : 
	rm -f *.o
	rm -f *.exe
	