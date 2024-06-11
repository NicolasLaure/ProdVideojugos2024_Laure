#include "Ground.h"

Ground::Ground()
{
}

Ground::~Ground()
{
}

void Ground::Start()
{
	shape.setSize({ 350.0f,500.0f });
	shape.setPosition({ 0,500 });
	collider.width = shape.getSize().x;
	collider.height = shape.getSize().y;
	collider.left = shape.getPosition().x;
	collider.top = shape.getPosition().y;
}

void Ground::Update(float deltaTime)
{
	shape.setPosition(shape.getPosition().x - 150 * deltaTime, shape.getPosition().y);
	collider.left = shape.getPosition().x;
	collider.top = shape.getPosition().y;
}

void Ground::Draw(sf::RenderWindow* window)
{
	window->draw(shape);
}

void Ground::End()
{
}

void Ground::OnCollisionEnter(Entity* other)
{
}

void Ground::OnCollisionExit(Entity* other)
{
}
