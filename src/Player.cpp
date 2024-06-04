#include "Player.h"
#include <math.h>
#include "Ground.h"

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
	verticalVelocity += gravityForce;
	if (isGrounded)
		verticalVelocity = 0;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		verticalVelocity = -playerJumpForce;

	shape.setPosition(shape.getPosition().x, std::clamp<float>(shape.getPosition().y + (verticalVelocity * deltaTime), 0, 500));
}

void Player::Draw(sf::RenderWindow* window)
{
	window->draw(shape);
}

void Player::End()
{
}

void Player::OnCollisionEnter(Entity* other)
{
	if (dynamic_cast<Ground*>(other) != nullptr)
		isGrounded = true;
}