#include "GameLoop.h"
#include "SceneManager.h"
#include "MenuScene.h"

GameLoop::GameLoop(sf::RenderWindow* window)
{
	this->window = window;
}

void GameLoop::StartLoop()
{
	SceneManager* sceneManager = new SceneManager(new MenuScene());
	sf::Clock deltaClock;
	deltaClock.restart();
	sf::Time deltaTime;
	while (window->isOpen() && !ShouldClose())
	{
		sceneManager->CurrentSceneFlow(deltaTime.asSeconds(), window);
		deltaTime = deltaClock.restart();
		//sceneManager->ChangeScene();
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