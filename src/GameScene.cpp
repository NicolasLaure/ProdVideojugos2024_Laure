#include "GameScene.h"

#include <iostream>

GameScene::GameScene()
{
	actualScene = Scenes::GAME;
}

void GameScene::Start()
{
	player.Start();
}

void GameScene::Update(float deltaTime)
{
	player.Update(deltaTime);

}

void GameScene::Draw(sf::RenderWindow* window)
{
	window->clear(sf::Color::Black);
	player.Draw(window);
	window->display();
}

void GameScene::End()
{
	player.End();
}
