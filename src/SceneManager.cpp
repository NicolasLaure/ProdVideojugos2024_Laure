#include "SceneManager.h"

//template <class T>


void SceneManager::ChangeScene(Scene sceneTo)
{
	currentScene.End();
	currentScene = sceneTo;
	currentScene.Start();

}
