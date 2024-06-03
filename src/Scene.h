#pragma once
#include "SFML/Graphics.hpp"
#include "ScenesEnum.h"

class Scene
{
public:
	Scenes actualScene;
	Scenes nextScene = Scenes::NONE;

	virtual ~Scene() {}
	virtual void Start() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Draw(sf::RenderWindow* window) = 0;
	virtual void End() = 0;
	Scenes ShouldChangeScene();
};