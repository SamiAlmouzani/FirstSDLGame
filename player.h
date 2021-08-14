class Player {

	private:
        int m_x, m_y, m_width, m_heigth;

	public:
		//player constructor
        Player(int x, int y, int width, int height);
		
		// setters for postion
		inline void set_position_x(int x) { m_x += x; }
    
		inline void set_position_y(int y) {  m_y += y; }
};
