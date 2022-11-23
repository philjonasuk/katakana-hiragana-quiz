#pragma once
#include "stdafx.h"
#include "data/GameData.h"

class IAppState {
public:
	virtual void start(sf::RenderWindow* window, GameData* gameData) = 0;
	virtual void input() = 0;
	virtual void update(float dtAsSeconds) = 0;
	virtual void draw() = 0;
protected:
	sf::RenderWindow* window;
	GameData* gameData;
};
