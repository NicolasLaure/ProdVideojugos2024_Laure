#pragma once
#include <SFML/Graphics.hpp>

class GameLoop
{
private:
	sf::RenderWindow* window;

	bool ShouldClose();
	void ChangeScene();
public:
	GameLoop(sf::RenderWindow* window);
	void StartLoop();
};