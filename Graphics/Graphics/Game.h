#ifndef GAME
#include "Window.h"

class Game
{
public:
	Game();
	~Game();

	void handleInput();
	void update();
	void render();
	Window* getWindow();

	sf::Time GetElasped();
	void RestartClock();

private:

	void moveMushroom();
	Window m_window;

	sf::Clock m_clock;
	sf::Time m_elapsed;
	
	sf::Texture m_mushroomTexture;

	

	sf::Sprite m_mushroom;
	sf::Vector2u size = m_mushroomTexture.getSize();
	sf::Vector2i m_increment;


};
#endif GAME 
