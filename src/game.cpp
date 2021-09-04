#include "game.h"

Game::Game(){
		is_playing = true;
}

void Game::poll_events(SDL_Renderer *renderer, Player *player){

		while (SDL_PollEvent(&event)){
                switch(event.type){
                    case SDL_KEYDOWN:
                        switch( event.key.keysym.sym ){
                            case SDLK_a:
                                 player->set_position_x(-9);
                                break;
                            case SDLK_s:
								 player->set_position_y(9);
                                break;
                            case SDLK_w:
                                 player->set_position_y(-9);
                                break;
                            case SDLK_d:
                                 player->set_position_x(9);
                                break; 
                            case SDLK_p:
                                is_playing = false;
                                break;
                        }
                    default:
                        break;
					}
				} 
            // Set render color to red ( background will be rendered in this color )
            SDL_SetRenderDrawColor( renderer, 255, 255, 255, 255 );

            // Clear winow
            SDL_RenderClear( renderer );

            // Set render color to blue ( rect will be rendered in this color )
            SDL_SetRenderDrawColor( renderer, 0, 0, 255, 255 );
         

            // Render rect
            SDL_RenderFillRect( renderer, player->get_player() );

            // Render the rect to the screen
            SDL_RenderPresent(renderer);   
                 
            if (event.type == SDL_QUIT){
					is_playing = false;
			}


}
