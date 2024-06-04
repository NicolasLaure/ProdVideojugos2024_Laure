#pragma once
#include "Scene.h"
#include "Player.h"

class GameScene : public Scene
{
private:
	Player player;
public:
	GameScene();
	~GameScene() {}

	void Start() override;
	void Update(float deltaTime) override;
	void Draw(sf::RenderWindow* window) override;
	void End() override;
};