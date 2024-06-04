#pragma once
#include "Entity.h"

class Player :public Entity
{
private:
	sf::CircleShape shape;
	float gravityForce = 0.98f;
	float playerJumpForce = 1250;
	float verticalVelocity = 0;
public:
	Player();
	virtual void Start() override;
	virtual void Update(float deltaTime) override;
	virtual void Draw(sf::RenderWindow* window) override;
	virtual void End() override;
};

