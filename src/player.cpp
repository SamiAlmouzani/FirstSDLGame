#include "player.h"

Player::Player(){
		r = new SDL_Rect();
		r->x = 50;
		r->y = 50;
		r->w = 50;
		r->h = 50;
}
Player::~Player(){
		delete r;
}
