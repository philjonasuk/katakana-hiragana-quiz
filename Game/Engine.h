#pragma once
#include "stdafx.h"
#include "utils/fsm.h"
#include "data/consts.h"
#include "data/GameData.h"
#include "IAppState.h"
#include "GameIndex.h"
#include "GameReview.h"
#include "GameQuiz.h"
#include "GamePause.h"
#include "GameOver.h"

class Engine : public FSM
{
	DECL_STATE(Engine, StartState);
	DECL_STATE(Engine, ReviewState);
	DECL_STATE(Engine, QuizState);
	DECL_STATE(Engine, GameOverState);
	DECL_STATE(Engine, PauseState);

	IAppState* currentAppState;
	sf::RenderWindow window;
	GameData* gameData;
	sf::Event event;

	void call_start();
	void call_review();
	void call_quiz();
	void call_game_over();
	void call_pause();
public:
	Engine();
	void start();
};
