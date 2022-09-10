#include "SFML\graphics.hpp"


int main(int argc, char* args[])
{
	// :: Navigates through Classes
	//Window Size and Title For Game Engine
	sf::RenderWindow window(sf::VideoMode(800, 600), "Project");
	
	//Run the Program, as long as the window is Open
	//Variable is Data (Integer, Booleans, CAN be another class/Instance), Function is an action (verbs etc) Add a () to the end of it

	while (window.isOpen()==true)
	{
		sf::Event event;
		while (window.pollEvent(event)==true)
		{
			// Close Requested Event
			if (event.type == sf::Event::Closed)
			{
				window.close();

			}
		}
	}
	return 0;
}