#pragma once
#include "Scene.h"
#include "CollisionsHandler.h"
#include "Player.h"
#include "Ground.h"

class GameScene : public Scene
{
private:
	Player player;
	Ground ground;
	CollisionsHandler collisionHandler;
public:
	GameScene();
	~GameScene() {}

	void Start() override;
	void Update(float deltaTime) override;
	void Draw(sf::RenderWindow* window) override;
	void End() override;
};