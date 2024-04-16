#pragma once
#include <SFML/Graphics.hpp>
#include "GameLoop.h"

class Game
{
private:
	sf::RenderWindow window;
	GameLoop gameLoop = GameLoop(&window);
public:
	void RunGame();
};