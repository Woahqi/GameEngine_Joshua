#include "SFML\Graphics.hpp"
#include "Engine.h"

int main(int argc, char* args[])
{
	// Declare and get instance of singleton
	Engine& gameEngine = Engine::GetInstance();
	// :: Navigates through Classes
	//Window Size and Title For Game Engine
	sf::RenderWindow window(sf::VideoMode(800, 600), "Project");

	// Create the world for attaching entitys and systems to
	gameEngine.world = ECS::World::createWorld();
	ECS::Entity* stickFigure;
	// add systems to the engine
	gameEngine.AddSystem(new RenderingSystem());
	// Create and assign 250 entities to the world
	for (int x = 0; x < 25; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			stickFigure = gameEngine.world->create();
			// assign components to entitys after creation
			stickFigure->assign<Transform>(x * 25, y * 32);
			stickFigure->assign<Sprite2D>("../debug/pics/hero.png");
			std::cout << stickFigure->getEntityId() << " is the entity id. " << std::endl;
		}
	}

	// pass window Reference to engine and start
	gameEngine.Start(&window);
	




	return 0;
}