#pragma once
#include "Engine.h"

struct Transform
{
public:
	ECS_DECLARE_TYPE;
	float xPos, yPos, rotation;

	Transform(float newX, float newY) : xPos(newX), yPos(newY)
	{
		this->rotation = 0.0f;
	}
};
ECS_DEFINE_TYPE(Transform);

struct Sprite2D
{
public:
	ECS_DECLARE_TYPE;
	sf::Sprite picture;
	std::string texture;
	int width, height;

	Sprite2D(std::string filepath)
	{
		this->texture = filepath;
	}
};
ECS_DEFINE_TYPE(Sprite2D);