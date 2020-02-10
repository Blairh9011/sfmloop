#include "Ball.h"

Ball::Ball(float startX, float startY)
{
	position.x = startX;
	position.y = startY;

	ballShape.setSize(sf::Vector2f(10, 10));
	ballShape.setPosition(position);
}

FloatRect Ball::getPosition()
//a getter, which returns FloatRect
{
	return ballShape.getGlobalBounds();
}

RectangleShape Ball::getShape()
//returns a copy of RectangleShape to be drawn
{
	return ballShape;
}

float Ball::getXVelocity()
//getter for the xVelocity member variable and 
//returns the value stored in xVelocity
{
	return xVelocity;
}

void Ball::reboundSides()
//called every time the ball hits the sides of the screen
// makes xVelocity the negative of whatever it currently is
//positive (moving right) it will become negative and move left
{
	xVelocity = -xVelocity;
}

void Ball::reboundBatOrTop()
//The first line position.y -= (yVelocity * 30)
//alters the position.y value by 30 frames of movement.. 
//prevents the ball from getting stuck on the bat

{
	position.y -= (yVelocity * 30);
	yVelocity = -yVelocity;
}

void Ball::hitBottom()
//sets the position.y value to 1
//and the position.x to 500, 
//placing it in middle horizontally
{
	position.y = 1;
	position.x = 500;
}

void Ball::update()
//update position.x and position.y by xVelocity and yVelocity
//then update position of RectangleShape with val stored in position
{
	//update ball position
	position.y += yVelocity;
	position.x += xVelocity;

	//move the ball and the bat
	ballShape.setPosition(position);
}
