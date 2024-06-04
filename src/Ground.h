#pragma once
#include "Entity.h"

class Ground : Entity
{
public:
	Ground();
	~Ground();

	virtual void Start() override;
	virtual void Update(float deltaTime) override;
	virtual void Draw(sf::RenderWindow* window) override;
	virtual void End() override;
	virtual void OnCollisionEnter(Entity* other) override;
};