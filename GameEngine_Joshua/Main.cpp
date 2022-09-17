#include "SFML\graphics.hpp"
#include "Engine.h"

int main(int argc, char* args[])
{
	// Declare and get instance of singleton
	Engine& gameEngine = Engine::GetInstance();
	// :: Navigates through Classes
	//Window Size and Title For Game Engine
	sf::RenderWindow window(sf::VideoMode(800, 600), "Project");
	// pass window Reference to engine and start
	gameEngine.Start(&window);
	




	return 0;
}