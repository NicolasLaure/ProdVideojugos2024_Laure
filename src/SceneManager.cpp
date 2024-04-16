#include "SceneManager.h"

//template <class T>
//concept SceneObject = std::derived_from<T, Scene>;

void SceneManager::ChangeScene(Scene sceneTo)
{
	currentScene.End();
	currentScene = sceneTo;
	currentScene.Start();

}
