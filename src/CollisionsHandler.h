#pragma once
#include "Entity.h"

class CollisionsHandler
{
public:
	CollisionsHandler();
	void CheckCollisions(Entity* entityA, Entity* entityB);
	
};
