#pragma once
#include "Scene.h"

class GameScene : public Scene
{
private:
	sf::CircleShape player;
	float gravityForce = 50;
	float playerJumpForce = 100;
	float playerSpeed = 75;
	float currentDirX = 0;
public:
	GameScene();
	~GameScene() {}

	void Start() override;
	void Update(float deltaTime) override;
	void Draw(sf::RenderWindow* window) override;
	void End() override;
};