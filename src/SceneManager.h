#pragma once
#include "Scene.h"
#include <concepts>

template <class T>
concept SceneObject = std::derived_from<T, Scene>;

class SceneManager
{
private:
	Scene* currentScene = nullptr;
public:

	template<SceneObject T>
	SceneManager(T* initialScene);

	template<SceneObject T>
	void ChangeScene();

	void CurrentSceneFlow(float deltaTime, sf::RenderWindow* window);

};

#include "SceneManager.tpp"