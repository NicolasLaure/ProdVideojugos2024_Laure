#pragma once
#include <SFML/Graphics.hpp>

class GameLoop
{
private:
	bool ShouldClose();
	sf::RenderWindow* window;
public:
	GameLoop(sf::RenderWindow* window);
	void Loop();
};