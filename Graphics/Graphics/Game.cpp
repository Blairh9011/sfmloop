#include "Game.h"


Game::Game()  : m_window("Snake", sf::Vector2u(800,600)),m_snake(m_world.GetBlockSize()),m_world(sf::Vector2u(800,600))
{
	// setting up class members 
	//m_mushroomTexture.loadFromFile("dependencies/images/mushroom.png");
	//m_mushroom.setTexture(m_mushroomTexture);
	//m_increment = sf::Vector2i(400, 400); // 400 px per second

}

Game::~Game()
{
}

void Game::handleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && m_snake.GetDirection() != Direction::Down)
	{
		m_snake.SetDirection(Direction::Up);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && m_snake.GetDirection() != Direction::Up)
	{
		m_snake.SetDirection(Direction::Down);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && m_snake.GetDirection() != Direction::Right)
	{
		m_snake.SetDirection(Direction::Left);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && m_snake.GetDirection() != Direction::Left)
	{
		m_snake.SetDirection(Direction::Right);
	}
}

void Game::update()
{
	//m_window.update(); // update window events
	//moveMushroom();
	float timestep = 1.0f / m_snake.GetSpeed();

	if (m_elapsed >= timestep)
	{
		m_snake.Tick();
		m_world.Update(m_snake);
		m_elapsed -= timestep;
		if (m_snake.HasLost())
		{
			m_snake.Reset();
		}
	}
}

void Game::render()
{
	m_window.beginDraw();//clear the screen
	//Render here
	
	//m_window.draw(m_mushroom);// draw the shroom
	//m_window.endDraw();// display the shroom 
	m_world.Render(*m_window.GetRenderWindow());
	m_snake.Render(*m_window.GetRenderWindow());

	m_window.endDraw();
}

Window* Game::getWindow()
{
	return &m_window;
}

sf::Time Game::GetElasped()
{
	return m_clock.getElapsedTime();
}

void Game::RestartClock()
{
	m_elapsed += m_clock.restart().asSeconds();
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

	float fElapsed = m_elapsed;

	m_mushroom.setPosition(m_mushroom.getPosition().x + (m_increment.x * fElapsed),m_mushroom.getPosition().y + (m_increment.y  * fElapsed));
}
