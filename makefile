all: Musician Orchestra
	g++ -o test Musician.o Orchestra.o main-1-2.cpp


Musician: Musician.cpp
	g++ -c Musician.cpp
Orchestra: Orchestra.cpp
	g++ -c Orchestra.cpp

clean:
	rm -f *.o test