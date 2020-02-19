#ifndef GLOBALOBJECTS
#define GLOBALOBJECTS

#include <SFML/Graphics.hpp>

class GlobalObjects
{
private:
	GlobalObjects() = delete;

public:
	static const float windowWidth, windowHeight;
	static sf::RenderWindow window;
};

#endif // GLOBALOBJECTS
