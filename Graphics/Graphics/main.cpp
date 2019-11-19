#include "Game.h"
#include <iostream>





int main()
{

	Game game; // creating our game object 
	while (!game.getWindow()->isDone()) {
	
		// game loop 
		game.handleInput();
		game.update();
		game.render();
		game.RestartClock();
	}

	/*sf::RenderWindow window(sf::VideoMode(640, 480), "Bouncing Mushroom "); // minimised line format 

	sf::Texture mushroomTexture;
	if (!mushroomTexture.loadFromFile("dependencies/images/mushroom.png"))
	{
		std::cout << "could not load texture object";
	}
	sf::Sprite mushroom(mushroomTexture);
	sf::Vector2u size = mushroomTexture.getSize();

	

	mushroom.setOrigin(size.x / 2, size.y / 2); // sets origin of sprite to center of object 
						  //x      y           
	sf::Vector2f increment(0.25f, 0.25f);


	//// initialise game objects
	//
	//
	////this creates a triangle  
	//
	//sf::ConvexShape triangle;
	//triangle.setPointCount(3);
	//triangle.setPoint(0, sf::Vector2f(-100, 0)); // this is setting the first co-ord for the triangle... the tringle is made of a three co-ord array of indexes 0 - 2 (3)
	//triangle.setPoint(1, sf::Vector2f(0, -100)); // this is the co-ord for the next point
	//triangle.setPoint(2, sf::Vector2f(100, 0));
	//
	//
	//triangle.setFillColor(sf::Color::Red);
	//// set a 10-pixel wide orange outline
	//triangle.setOutlineThickness(10);
	//triangle.setOutlineColor(sf::Color(250, 150, 100));
	//
	//triangle.setPosition(viewSize.x / 2, viewSize.y / 2);
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//// this creates a circle   
	//
	////sf::CircleShape circle(25);
	////circle.setFillColor(sf::Color::White);
	////circle.setOutlineThickness(10);
	////circle.setOutlineColor(sf::Color(250, 150, 100));
	////circle.setPosition(viewSize.x / 2, viewSize.y / 2);
	////circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius()));
	////
	//
	//// this is an attempt at a square.... sqaures are four sided circles lol
	//
	//sf::CircleShape square(80, 4);
	//// change the radius to 40
	//square.setRadius(40);
	//
	//// change the number of sides (points) to 100
	////square.setPointCount(100);
	////square.setPointCount(4);
	////square.setPoint(0, sf::Vector2f(-100, 0)); // this is setting the first co-ord for the triangle... the tringle is made of a three co-ord array of indexes 0 - 2 (3)
	////square.setPoint(1, sf::Vector2f(0, -100)); // this is the co-ord for the next point
	////square.setPoint(2, sf::Vector2f(100, 0));
	////square.setPoint(3, sf::Vector2f(0, 100));
	//square.setFillColor(sf::Color::Blue);
	//// set a 10-pixel wide orange outline
	//square.setOutlineThickness(5);
	//square.setOutlineColor(sf::Color(250, 150, 100));
	//square.setPosition(viewSize.x / 2, viewSize.y / 2);
	//square.setOrigin(sf::Vector2f(square.getRadius(), square.getRadius()));
	//
	//
	//
	//
	//
	//
	//// this is the code for a rectangle
	//sf::RectangleShape rect(sf::Vector2f(500.0f, 300.0f));
	//rect.setFillColor(sf::Color::Black);
	//rect.setPosition(viewSize.x / 2, viewSize.y / 2);
	//rect.setOrigin(sf::Vector2f(rect.getSize().x / 2, rect.getSize().y / 2));
	//
	//
	//
	//
	//
	//
	//
	while (window.isOpen())
	{
	
		//handle keyboard events
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		//update game objects
		// this checks is the object is within the bounds of the game, the x get size is a check to find the bounds on the x axis at the top right of the game screen ....same for y but its at the bottom right
		if ((mushroom.getPosition().x + (size.x / 2) > window.getSize().x && increment.x > 0) || (mushroom.getPosition().x - (size.x / 2) < 0 && increment.x < 0))
		{
			// reverse direction on the x axis 
			increment.x = -increment.x;
			mushroom.setColor(sf::Color::Blue);
		}
		if ((mushroom.getPosition().y + (size.y / 2) > window.getSize().y && increment.y > 0) || (mushroom.getPosition().y - (size.y / 2) < 0 && increment.y < 0))// this is the same but for y axis up and down
		{
			// reverse direction on the y axis 
			increment.y = -increment.y;
			mushroom.setColor(sf::Color::Red);

		}

		mushroom.setPosition(mushroom.getPosition() + increment);

		window.clear(sf::Color(255,255,255,255)); // rgb... last one is transparency , this sets the background

		//window.clear(sf::Color::Magenta);
		//window.draw(rect);
		//window.draw(circle);
		//window.draw(triangle);
		//window.draw(square);
		window.draw(mushroom);
		//window.draw(mushroom);

	
		
		 //render game objects 
		 window.display();

	}


	*/


	return 0;
 
}