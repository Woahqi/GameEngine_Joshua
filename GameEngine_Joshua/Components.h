#pragma once
#include "Engine.h"

struct Transform
{
public:
	ECS_DECLARE_TYPE;
	float xPos, yPos, rotation, xSpeed, ySpeed, xSpeedMod, ySpeedMod;
	bool bColliding = false;

	Transform(float newX, float newY, float xSpeed = 0.0f, float ySpeed = 0.0f, float rotation = 0.0f) : xPos(newX), yPos(newY)
	{
		this->xSpeed = newX;
		this->ySpeed = newY;
		this->xSpeedMod = xSpeed;
		this->ySpeedMod = ySpeed;
		this->rotation = rotation;
	}
	void Move()
	{
		if (bColliding == false)
		{
			this->xPos += xSpeed;
			this->yPos += ySpeed;
		}
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

struct Animator
{
	ECS_DECLARE_TYPE;
public:
	int spriteWidth;
	int spriteHeight;
	int currentColumn;
	int currentRow;
	int totalColumns;
	int totalRows;
	float currentTime, nextFrameTime;
	
	bool bFacingRight;
	Animator(int newWidth, int newHeight, float timeBetweenFrames, int columns, int rows)
	{
		this->spriteWidth = newWidth;
		this->spriteHeight = newHeight;
		this->currentColumn = 0;
		this->currentRow = 0;
		this->totalColumns = columns;
		this->totalRows = rows;
		this->nextFrameTime = timeBetweenFrames;
		this->currentTime = 0;
		this->bFacingRight = true;

	}
	
};

ECS_DEFINE_TYPE(Animator);



struct InputController
{
public:
	ECS_DECLARE_TYPE;
	bool bInputActive;
	bool w, a, s, d, left, right, up, down, space;
	InputController()
	{
		std::memset(this, false, sizeof(InputController));
		bInputActive = true;
	}
};
ECS_DEFINE_TYPE(InputController);

struct BoxCollider
{
public:
	ECS_DECLARE_TYPE;
	int leftEdge;
	int rightEdge;
	int bottomEdge;
	int topEdge;

	BoxCollider()
	{
		std::memset(this, 0, sizeof(BoxCollider));

	}
	void Update(int x, int y, int width, int height)
	{
		this->leftEdge = x;
		this->rightEdge = x + width;
		this->bottomEdge = y;
		this->topEdge = y + height;
	}
};
ECS_DEFINE_TYPE(BoxCollider);