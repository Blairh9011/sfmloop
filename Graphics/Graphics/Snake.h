#ifndef SNAKE

#include "SFML/include/SFML/Graphics.hpp"
#include "SFML/include/SFML/Window.hpp"
#include <vector>

using SnakeContainer = std::vector<SnakeSegment>;
enum class Direction{None,Up,Down,Left,Right};

struct SnakeSegment
{
	SnakeSegment(int x, int y) : position(x, y) {}
	sf::Vector2i position;
};

class Snake
{
public:
	Snake(int l_blockSize);
	~Snake();

	// Helper methods.
	void SetDirection(Direction l_dir);
	Direction GetDirection();
	int GetSpeed();
	sf::Vector2i GetPosition();
	int GetLives();
	int GetScore();
	void IncreaseScore();
	bool HasLost();

	void Lose(); // Handle losing here.
	void ToggleLost();

	void Extend();// grow the snake
	void Reset();// reset to starting position

	void Move(); // movement method.
	void Tick(); // Update method.
	void Cut(int l_segments); // method for cutting snake
	void Render(sf::RenderWindow& l_window);
private:
	void CheckCollision(); // checking for collisions

	SnakeContainer m_snakeBody; // segment vector.
	int m_size; // size of the graphics
	Direction m_dir; // current direction.
	int m_speed; // speed of the snake.
	int m_lives; // lives.
	int m_score; // score.
	bool m_lost; // losing state.
	sf::RectangleShape m_bodyRect; // Shape used for rendering
};














#endif SNAKE