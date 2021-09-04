#pragma once
#include <SDL_rect.h>
#include <string.h>

class Player {

	private:
		SDL_Rect* r;	
	public:
		//player constructor
		Player();
		//player destructor
		~Player();
	
		// setters for postion
		inline void set_position_x(int x) { r->x += x; }
		    
		inline void set_position_y(int y) {  r->y += y; }

		inline SDL_Rect* get_player(){ return r; }
};
