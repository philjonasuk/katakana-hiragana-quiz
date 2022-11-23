#pragma once
#include "IAppState.h"
class GamePause :  public IAppState
{
	bool is_clicking = true;
	sf::Font font;
	sf::Text message;
	sf::Text resume_btn;
	sf::Text main_menu_btn;
public:
	void start(sf::RenderWindow* window, GameData* gameData);
	void input();
	void update(float dtAsSeconds);
	void draw();
	__event void resume_game();
	__event void main_menu();
};
