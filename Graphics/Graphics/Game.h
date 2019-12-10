#ifndef GAME
#define GAME

#include "Window.h"
#include "World.h"
#include "Snake.h"



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
	float m_elapsed;
	
	sf::Texture m_mushroomTexture;

	

	sf::Sprite m_mushroom;
	sf::Vector2u size = m_mushroomTexture.getSize();
	sf::Vector2i m_increment;

	World m_world;
	Snake m_snake;


};
#endif GAME 
