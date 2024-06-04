#include "Player.h"

Player::Player()
{
}

void Player::Start()
{
	shape.setRadius(15);
	shape.setPointCount(15);
	shape.setPosition(50, 300);
}

void Player::Update(float deltaTime)
{
	shape.setPosition(shape.getPosition().x, shape.getPosition().y + (gravityForce * deltaTime));

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		shape.setPosition(shape.getPosition().x, shape.getPosition().y - playerJumpForce * deltaTime);
}

void Player::Draw(sf::RenderWindow* window)
{
	window->draw(shape);
}

void Player::End()
{
}