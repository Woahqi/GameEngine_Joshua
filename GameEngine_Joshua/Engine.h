#pragma once

#include <iostream>
#include "sfml/graphics.hpp"

class Engine
{
public:
	sf::RenderWindow* window = nullptr;
	void Start(sf::RenderWindow* win);
	static Engine& GetInstance();

private:
	bool bQuit;
	Engine();	// Constructor: Create an Object,	ex: Want all cars to be red, set car to red in Constructor/ TLDR; Sets all the initial values in a class on creation
	// Require to prevent the reference from the copied, move, or assigned.
	Engine(Engine& copy); // Hide Copy Constructer, so the engine will not be able to be copied.
	Engine(Engine&& other); //Hide copy constructer, so the engine will not be able to be Moved.
	Engine& operator=(Engine& copy); // Hide assignment Operator, wont be able top set engine to Something.
	~Engine();			// Destructor Delete Object | Opposite
	void Update();
};

