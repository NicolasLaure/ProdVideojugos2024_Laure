#pragma once
#include "Entity.h"

class Player :public Entity
{
private:
	sf::CircleShape shape;
	float gravityForce = 50;
	float playerJumpForce = 100;
public:
	Player();
	virtual void Start() override;
	virtual void Update(float deltaTime) override;
	virtual void Draw(sf::RenderWindow* window) override;
	virtual void End() override;
};

