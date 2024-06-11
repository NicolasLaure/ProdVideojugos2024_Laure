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
	collider.width = shape.getRadius() * 2;
	collider.height = shape.getRadius() * 2;
	collider.left = shape.getPosition().x;
	collider.top = shape.getPosition().y;
}

void Player::Update(float deltaTime)
{
	verticalVelocity += gravityForce;
	if (isGrounded)
		verticalVelocity = 0;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		verticalVelocity = -playerJumpForce;
		isGrounded = false;
	}

	shape.setPosition(shape.getPosition().x, shape.getPosition().y + (verticalVelocity * deltaTime));
	collider.top = shape.getPosition().y;
	collider.left = shape.getPosition().x;
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
	{
		isGrounded = true;
		shape.setPosition(shape.getPosition().x, other->GetCollider().getPosition().y - collider.height);
	}
}