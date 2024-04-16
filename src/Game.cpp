#include "Game.h"

void Game::RunGame()
{
	window.create(sf::VideoMode(1280, 720), "SFML WORKS!!");
	gameLoop.StartLoop();
	window.close();
}