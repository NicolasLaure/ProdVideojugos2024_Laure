#include "CollisionsHandler.h"

CollisionsHandler::CollisionsHandler()
{
}

void CollisionsHandler::CheckCollisions(Entity* entityA, Entity* entityB)
{
	if (entityA->GetCollider().intersects(entityB->GetCollider()))
	{
		entityA->OnCollisionEnter(entityB);
		entityB->OnCollisionEnter(entityA);
	}
	else
	{
		if (entityA->otherCollider != nullptr && entityA->otherCollider == entityB)
		{
			entityA->OnCollisionExit(entityB);
			entityB->OnCollisionExit(entityA);
		}
	}
}
