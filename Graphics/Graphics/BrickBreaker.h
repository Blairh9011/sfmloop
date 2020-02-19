#ifndef BRICKBREAKER
#define BRICKBREAKER

#include <SFML/Graphics.hpp>
#include "BlockField.h"

class Game
{
private:
	static Ball * ball;
	static Paddle * paddle;
	Game() = delete;

public:
	static void createBall(const Ball & bll) { ball = new Ball(bll); }
	static void createPaddle(const Paddle & padd) { paddle = new Paddle(padd); }
	static bool Update(float deltaTime, BlockField & blocksField);
	static void Draw(sf::RenderWindow & window);
};

#endif // BRICKBREAKER
