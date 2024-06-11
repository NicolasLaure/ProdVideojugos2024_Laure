#pragma once
#include "Entity.h"

class Ground : public Entity
{
private:
	sf::RectangleShape shape;
public:
	Ground();
	~Ground();

	virtual void Start() override;
	virtual void Update(float deltaTime) override;
	virtual void Draw(sf::RenderWindow* window) override;
	virtual void End() override;
	virtual void OnCollisionEnter(Entity* other) override;
	virtual void OnCollisionExit(Entity* other) override;
};