#include "GameLoop.h"

GameLoop::GameLoop(sf::RenderWindow* window)
{
	this->window = window;
}

void GameLoop::StartLoop()
{
	while (window->isOpen() && !ShouldClose())
	{



	}
}

bool GameLoop::ShouldClose()
{
	sf::Event event;
	if (window->pollEvent(event))
		if (event.type == sf::Event::Closed)
			return true;

	return false;
}

void GameLoop::ChangeScene()
{
}
