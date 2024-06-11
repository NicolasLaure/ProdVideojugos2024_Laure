#pragma once
#include "SFML/Graphics.hpp"

class Entity
{
protected:
	sf::Rect<float> collider;
public:

	virtual void Start() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Draw(sf::RenderWindow* window) = 0;
	virtual void End() = 0;

	virtual void OnCollisionEnter(Entity* other) = 0;

	sf::Rect<float> GetCollider()
	{
		return collider;
	}
};

