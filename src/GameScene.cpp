#include "GameScene.h"

#include <iostream>

GameScene::GameScene()
{
	actualScene = Scenes::GAME;
}

void GameScene::Start()
{
	player.Start();
	ground.Start();
}

void GameScene::Update(float deltaTime)
{
	player.Update(deltaTime);
	ground.Update(deltaTime);
	collisionHandler.CheckCollisions(&player, &ground);
}

void GameScene::Draw(sf::RenderWindow* window)
{
	window->clear(sf::Color::Black);
	player.Draw(window);
	ground.Draw(window);
	window->display();
}

void GameScene::End()
{
	player.End();
}
