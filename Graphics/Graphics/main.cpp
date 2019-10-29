#include "SFML/include/SFML/Graphics.hpp"


sf::Vector2f viewSize(1024, 768);      // this creates 
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello sfml", sf::Style::Default);


int main()
{
	// initialise game objects
	

	//this creates a triangle  

	sf::ConvexShape triangle;
	triangle.setPointCount(3);
	triangle.setPoint(0, sf::Vector2f(-100, 0)); // this is setting the first co-ord for the triangle... the tringle is made of a three co-ord array of indexes 0 - 2 (3)
	triangle.setPoint(1, sf::Vector2f(0, -100)); // this is the co-ord for the next point
	triangle.setPoint(2, sf::Vector2f(100, 0));
	
	
	triangle.setFillColor(sf::Color::Red);
	// set a 10-pixel wide orange outline
	triangle.setOutlineThickness(10);
	triangle.setOutlineColor(sf::Color(250, 150, 100));
	
	triangle.setPosition(viewSize.x / 2, viewSize.y / 2);

	
	
	
	
	
	
	
	
	
	// this creates a circle   

	//sf::CircleShape circle(25);
	//circle.setFillColor(sf::Color::White);
	//circle.setOutlineThickness(10);
	//circle.setOutlineColor(sf::Color(250, 150, 100));
	//circle.setPosition(viewSize.x / 2, viewSize.y / 2);
	//circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius()));
	//

	// this is an attempt at a square.... sqaures are four sided circles lol

	sf::CircleShape square(80, 4);
	// change the radius to 40
	square.setRadius(40);

	// change the number of sides (points) to 100
	//square.setPointCount(100);
	//square.setPointCount(4);
	//square.setPoint(0, sf::Vector2f(-100, 0)); // this is setting the first co-ord for the triangle... the tringle is made of a three co-ord array of indexes 0 - 2 (3)
	//square.setPoint(1, sf::Vector2f(0, -100)); // this is the co-ord for the next point
	//square.setPoint(2, sf::Vector2f(100, 0));
	//square.setPoint(3, sf::Vector2f(0, 100));
	square.setFillColor(sf::Color::Blue);
	// set a 10-pixel wide orange outline
	square.setOutlineThickness(5);
	square.setOutlineColor(sf::Color(250, 150, 100));
	square.setPosition(viewSize.x / 2, viewSize.y / 2);
	square.setOrigin(sf::Vector2f(square.getRadius(), square.getRadius()));
	
	
	
	
	
	
	// this is the code for a rectangle
	sf::RectangleShape rect(sf::Vector2f(500.0f, 300.0f));
	rect.setFillColor(sf::Color::Black);
	rect.setPosition(viewSize.x / 2, viewSize.y / 2);
	rect.setOrigin(sf::Vector2f(rect.getSize().x / 2, rect.getSize().y / 2));

	

	
	
	
	
	while (window.isOpen())
	{
		
		
		// handle keyboard events
		
		
		
		
		
		// update game objects
		window.clear(sf::Color::Magenta);
		window.draw(rect);
		//window.draw(circle);
		window.draw(triangle);
		window.draw(square);
		
		
		// render game objects 
		window.display();

	}





	return 0;
 
}