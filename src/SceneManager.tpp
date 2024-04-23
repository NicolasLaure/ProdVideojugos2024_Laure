#include "SceneManager.h"

template<SceneObject T>
void SceneManager<T>::ChangeScene(Scene sceneTo)
{
	currentScene.End();
	currentScene = sceneTo;
	currentScene.Start();
}
