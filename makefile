C = g++

CFLAGS = -Wall -I include # -L lib -l SDL2-2.0.0 

main: main.o player.o
	$(CC) main.cpp -o main $(CFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

player.o: player.cpp
	$(CC) -c player.cpp player.h  #$(CFLAGS)
