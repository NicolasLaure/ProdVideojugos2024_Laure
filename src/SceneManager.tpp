#include "SceneManager.h"
#include "MenuScene.h"
#include "GameScene.h"

template<SceneObject T>
SceneManager::SceneManager(T* initialScene)
{
	currentScene = initialScene;
	currentScene->Start();
}

template<SceneObject T>
void SceneManager::ChangeScene()
{
	if (currentScene != nullptr)
	{
		currentScene->End();
		delete currentScene;
	}

	currentScene = new T();
	currentScene->Start();
}


void SceneManager::CurrentSceneFlow(float deltaTime, sf::RenderWindow* window)
{
	currentScene->Update(deltaTime);
	currentScene->Draw(window);
	Scenes nextScene = currentScene->ShouldChangeScene();
	if (nextScene == Scenes::NONE)
		return;

	switch (nextScene)
	{
	case Scenes::MENU:
		ChangeScene<MenuScene>();
		break;
	case Scenes::GAME:
		ChangeScene<GameScene>();
		break;
	case Scenes::NONE:
		break;
	default:
		break;
	}
}

