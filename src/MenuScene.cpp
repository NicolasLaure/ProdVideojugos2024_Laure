#include "SFML/Graphics.hpp"
#include "MenuScene.h"

MenuScene::MenuScene()
{
	actualScene = Scenes::MENU;
}

void MenuScene::Start()
{
	circle.setRadius(15);
	circle.setPointCount(15);
	circle.setPosition(0, 0);
}

void MenuScene::Update(float deltaTime)
{
	circle.setPosition(circle.getPosition().x + (circleSpeed * deltaTime), 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		nextScene = Scenes::GAME;
}

void MenuScene::Draw(sf::RenderWindow* window)
{
	window->clear(sf::Color::Black);
	window->draw(circle);
	window->display();
}

void MenuScene::End()
{

}