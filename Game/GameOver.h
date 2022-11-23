#pragma once
#include "IAppState.h"
#include "data/GameData.h"

class GameOver : public IAppState
{
	bool is_clicking = true;
	sf::Font font;
	sf::Text message;

	void display_success();
	void display_failure();
public:
	void start(sf::RenderWindow* window, GameData* gameData);
	void input();
	void update(float dtAsSeconds);
	void draw();
	__event void start_new_game();
	__event void main_menu();
};

