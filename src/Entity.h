#pragma once
#include "SFML/Graphics.hpp"

class Entity
{

public:

	virtual void Start() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Draw(sf::RenderWindow* window) = 0;
	virtual void End() = 0;
};

