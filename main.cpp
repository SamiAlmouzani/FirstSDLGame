#include <SDL.h>
#include <SDL_video.h>
#include <SDL_render.h>
#include <SDL_events.h>
#include "player.h"

int main(int argc, char* argv[])
{

	if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) != 0) {
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
	
	Player player(50, 50, 50, 50);
    SDL_Event e;
        bool quit = false;
        while (!quit){
           while (SDL_PollEvent(&e)){
                switch(e.type){
                    case SDL_KEYDOWN:
                        switch( e.key.keysym.sym ){
                            case SDLK_a:
                                player.set_position_x(-9);
                                break;
                            case SDLK_s:
								player.set_position_y(9);
                                break;
                            case SDLK_w:
                                player.set_position_y(-9);
                                break;
                            case SDLK_d:
                                player.set_position_x(9);
                                break;
                            case SDLK_p:
                                quit = true;
                                break;
                        }
                    default:
                        break;
            }
            
            // Set render color to red ( background will be rendered in this color )
            SDL_SetRenderDrawColor( renderer, 255, 0, 0, 255 );

            // Clear winow
            SDL_RenderClear( renderer );

            // Set render color to blue ( rect will be rendered in this color )
            SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
         

            // Render rect
            SDL_RenderFillRect( renderer, &player);

            // Render the rect to the screen
            SDL_RenderPresent(renderer);   
                } 
                if (e.type == SDL_QUIT){
                    quit = true;
                }
        }

    // destroys window and quits
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
