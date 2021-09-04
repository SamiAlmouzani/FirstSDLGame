#pragma once

#include <SDL_events.h>
#include <SDL_render.h>
#include "player.h"
#include "game.h"

class Game{
		
		private:
				SDL_Event event;
				bool is_playing;
		public:
				Game();
				~Game(){};
				void poll_events(SDL_Renderer *renderer, Player *player);
				inline bool isPlaying(){ return is_playing; };


};
