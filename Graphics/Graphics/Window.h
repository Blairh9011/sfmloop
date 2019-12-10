#ifndef WINDOW                // global wrapper , this defines the class with a more global wrapper, aposed to #pragma once , its job is to 
#define WINDOW

#include "SFML/include/SFML/Graphics.hpp"
#include "SFML/include/SFML/Window.hpp"
#include <string> 

class Window
{
public:
	Window(); // default constructer, whats going in the class.
	Window(const std::string& l_title, const sf::Vector2u& l_size); // construct window with a constant label and constant size. ... local variables defined within a method within a class
	~Window(); // destructer.

	void beginDraw(); // clear the window.
	void endDraw(); // display the window.
	
	void update(); // updates.

	bool isDone();
	bool isFullscreen();

	sf::Vector2u getWindowSize();
	sf::RenderWindow* GetRenderWindow();

	void toggleFullScreen();

	void draw(sf::Drawable& l_drawable);

private:
	void setup(const std::string& l_title, const sf::Vector2u& l_size);
	void create();
	void destroy();
	

	sf::RenderWindow m_window; // member variable 
	sf::Vector2u m_windowSize;
	std::string m_windowTitle;
	bool m_isDone;
	bool m_isFullScreen;
};

#endif WINDOW