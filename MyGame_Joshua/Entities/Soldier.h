#pragma once
#include "Engine.h"
#include "Entity.h"

class MovementSystem;

class Soldier: public Entity
{
private:
	int fireDelay;
	
public:
	Soldier() = default;
	Soldier(std::string picture, sf::Vector2f location);
	~Soldier() = default;

private:
	static void Fire(ECS::Entity* entity);
};

