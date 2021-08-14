#include <SDL_rect.h>

Player::Player(int x, int y, int width, int height)
        :x{ m_x }, y{ m_y }, width{ m_width }, heigth{ m_heigth } {
            
            SDL_Rect r;
            r.x = x;
            r.y = y;
            r.w = w;
            r.h = h;:     
        }
