C = g++

CFLAGS = -Wall -I ../include # -L lib -l SDL2-2.0.0 

main: main.o player.o window.o
	$(CC) main.o player.o window.o -o main 

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

player.o: player.cpp
	$(CC) -c player.cpp player.h 

window.o: window.cpp
	$(CC) -c window.cpp window.h 
