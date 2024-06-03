#include "GameScene.h"

#include <iostream>

GameScene::GameScene()
{
	actualScene = Scenes::GAME;
}

void GameScene::Start()
{
	player.setRadius(15);
	player.setPointCount(15);
	player.setPosition(0, 300);
}

void GameScene::Update(float deltaTime)
{
	player.setPosition(player.getPosition().x + (currentDirX * playerSpeed * deltaTime), player.getPosition().y + (gravityForce * deltaTime));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		currentDirX = -1.0f;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		currentDirX = 1;
	else
		currentDirX = 0;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		player.setPosition(player.getPosition().x, player.getPosition().y - playerJumpForce * deltaTime);

}

void GameScene::Draw(sf::RenderWindow* window)
{
	window->clear(sf::Color::Black);
	window->draw(player);
	window->display();
}

void GameScene::End()
{
}
