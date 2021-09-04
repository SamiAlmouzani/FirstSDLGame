#include <SDL.h>
#include <SDL_video.h>
#include <SDL_render.h>
#include "player.h"
#include "game.h"
#include <iostream>
#include <SDL_image.h>
#include <SDL_surface.h>

int main(int argc, char* argv[])
{

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
		return 1;
    }
    /* ... */
    SDL_Window *window;
    window =  SDL_CreateWindow("My Window",
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  640,
                                  480,
                                  0);

    // creates a renderer 
    SDL_Renderer *renderer = NULL;

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	Game game;
	Player player;

	if(!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)){
		std::cerr << "Failed to initialize SDL Image for PNG files" << std::endl;
	}


	while(game.isPlaying()){

		game.poll_events(renderer, &player);
			

	}
    // destroys window and quits
 
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
