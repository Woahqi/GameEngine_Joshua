#pragma once
#include "../../Engine.h"
#include "Button.h"


class ButtonMap
{
public:
	static std::map<std::string, Button*>& GetMap();

};

