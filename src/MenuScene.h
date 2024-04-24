#pragma once
#include "Scene.h"

class MenuScene : public Scene
{
private:
	sf::CircleShape circle;
	float circleSpeed = 20;
public:
	MenuScene();
	~MenuScene() {}

	void Start() override;
	void Update(float deltaTime) override;
	void Draw(sf::RenderWindow* window) override;
	void End() override;
};