#pragma once
#include "Scene.h"

class SceneManager
{
private:
	static Scene currentScene;
public:
	static void ChangeScene(Scene sceneTo);
};