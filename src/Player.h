#pragma once
#include "Entity.h"

class Player :public Entity
{

public:
	Player();
	virtual void Start() override;
	virtual void Update() override;
	virtual void End() override;
};

