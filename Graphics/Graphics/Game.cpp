#include "Game.h"

#include "SFML/include/SFML/Graphics.hpp"
#include "SFML/include/SFML/Window.hpp"

Game::Game()  : m_window("Chapter 2", sf::Vector2u(800,600))
{
	// setting up class members 
	m_mushroomTexture.loadFromFile("dependencies/images/mushroom.png");
	m_mushroom.setTexture(m_mushroomTexture);
	m_increment = sf::Vector2i(400, 400); // 400 px per second
}

Game::~Game()
{
}

void Game::handleInput()
{
}

void Game::update()
{
	m_window.update(); // update window events
	moveMushroom();
}

void Game::render()
{
	m_window.beginDraw();//clear the screen
	m_window.draw(m_mushroom);// draw the shroom
	m_window.endDraw();// display the shroom 
}

Window* Game::getWindow()
{
	return &m_window;
}

sf::Time Game::GetElasped()
{
	return m_elapsed;
}

void Game::RestartClock()
{
	m_elapsed = m_clock.restart();
}

void Game::moveMushroom()
{
	sf::Vector2u l_windSize = m_window.getWindowSize();
	sf::Vector2u l_textSize = m_mushroomTexture.getSize();

	if ((m_mushroom.getPosition().x > l_windSize.x - l_textSize.x && m_increment.x > 0) || (m_mushroom.getPosition().x < 0 && m_increment.x < 0))
	{
		// reverse direction on the x axis 
		m_increment.x = -m_increment.x;
		//m_mushroom.setColor(sf::Color::Blue);
	}
	if ((m_mushroom.getPosition().y > l_windSize.y - l_textSize.y && m_increment.y > 0) || (m_mushroom.getPosition().y < 0 && m_increment.y < 0))// this is the same but for y axis up and down
	{
		// reverse direction on the y axis 
		m_increment.y = -m_increment.y;
		//m_mushroom.setColor(sf::Color::Red);

	}

	float fElapsed = m_elapsed.asSeconds();

	m_mushroom.setPosition(m_mushroom.getPosition().x + (m_increment.x * fElapsed),m_mushroom.getPosition().y + (m_increment.y  * fElapsed));
}
