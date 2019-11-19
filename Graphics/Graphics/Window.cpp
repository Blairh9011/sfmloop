#include "Window.h"


Window::Window()
{
	setup("window", sf::Vector2u(640, 480)); // default fall back window incase the other one dont work
}

Window::Window(const std::string& l_title, const sf::Vector2u& l_size)
{
	setup(l_title, l_size); // bespoke window
}

Window::~Window()
{
	destroy();
}

void Window::beginDraw()
{
	m_window.clear(sf::Color::Blue);
}

void Window::endDraw()
{
	m_window.display();
}

void Window::update()
{
	sf::Event event;
	while (m_window.pollEvent(event)) // looping check for user input on the f5 button, this will toggle full screen
	{
		if (event.type == sf::Event::Closed)
		{
			m_isDone = true; // is the game running
		}
		else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::F5)
		{
			toggleFullScreen();
		}
	}
}

bool Window::isDone()
{
	return m_isDone;
}

bool Window::isFullscreen()
{
	return isFullscreen();
}

sf::Vector2u Window::getWindowSize()
{
	return m_windowSize;
}

void Window::toggleFullScreen()
{
	m_isFullScreen = !m_isFullScreen; // ! operator for not.
	destroy(); // destroys the old screen 
	create(); // creates a new screen 
}

void Window::draw(sf::Drawable & l_drawable)
{
	m_window.draw(l_drawable);
}

void Window::setup(const std::string & l_title, const sf::Vector2u & l_size)
{
	m_windowTitle = l_title;
	m_windowSize = l_size;
	m_isFullScreen = false;
	m_window.setFramerateLimit(60); // 60 fps frame cap  
	m_isDone = false;
	create();

}

void Window::destroy()
{
	m_window.close();
}

void Window::create()
{
	auto style = (m_isFullScreen ? sf::Style::Fullscreen : sf::Style::Default); // same as (if) m_isfullscreen >> make style full screen, the ? is the same as else, this is a short hand way of writing the if and else statements
	
	m_window.create({ m_windowSize.x, m_windowSize.y, 32 }, m_windowTitle, style);

}
