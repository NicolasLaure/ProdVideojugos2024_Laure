#pragma once
#include "Scene.h"
#include <concepts>

template <class T>
concept SceneObject = std::derived_from<T, Scene>;

template <SceneObject T>
class SceneManager
{
private:
	static Scene currentScene;
public:
	//template <SceneObject T>
	static void ChangeScene(Scene sceneTo);
};

#include "SceneManager.tpp"