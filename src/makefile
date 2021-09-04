CC = g++ 

CFLAGS = `sdl2-config --cflags` -I/opt/homebrew/Cellar/sdl2_image/2.0.5/include # -I ../include
CXXFLAGS = `sdl2-config --libs` -L/opt/homebrew/Cellar/sdl2_image/2.0.5/lib -lSDL2_image # -L ../lib -l SDL2-2.0.0

main: main.o player.o game.o
	$(CC) $(CXXFLAGS) main.o player.o game.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp 

player.o: player.cpp player.h
	$(CC) $(CFLAGS) -c player.cpp

game.o: game.cpp game.h
	$(CC) $(CFLAGS) -c game.cpp

clean:
	rm *.o main *.gch
