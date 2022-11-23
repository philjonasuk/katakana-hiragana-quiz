#include "Engine.h"

Engine::Engine() : FSM("GameFSM")
{
	// FSM /////////////////////
	ADD_STATE(Engine, StartState);
	ADD_STATE(Engine, ReviewState);
	ADD_STATE(Engine, QuizState);
	ADD_STATE(Engine, GameOverState);
	ADD_STATE(Engine, PauseState);

	ADD_TRANSITION(StartState, ReviewState);
	ADD_TRANSITION(StartState, QuizState);

	ADD_TRANSITION(ReviewState, StartState);

	ADD_TRANSITION(QuizState, PauseState);
	ADD_TRANSITION(QuizState, GameOverState);

	ADD_TRANSITION(GameOverState, QuizState);
	ADD_TRANSITION(GameOverState, StartState);

	ADD_TRANSITION(PauseState, QuizState);
	ADD_TRANSITION(PauseState, StartState);
	// FSM /////////////////////
	gameData = new GameData();
	window.create(
		sf::VideoMode(SCREEN_WIDTH_IN_PIXELS, SCREEN_HEIGHT_IN_PIXELS),
		GAME_TITLE,
		sf::Style::Default);
}

void Engine::start()
{
	sf::Clock clock;

	while (window.isOpen())
	{
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::EventType::Closed)
				window.close();
		}

		sf::Time dt = clock.restart();
		float dtAsSeconds = dt.asSeconds();

		currentAppState->input();
		currentAppState->update(dtAsSeconds);
		currentAppState->draw();
	}
}

DEF_ENTER(Engine, StartState)
{
	currentAppState = new(GameIndex);
	currentAppState->start(&window, gameData);
	__hook(&GameIndex::review, static_cast<GameIndex*>(currentAppState), &Engine::call_review);
	__hook(&GameIndex::start_new_game, static_cast<GameIndex*>(currentAppState), &Engine::call_quiz);
}

DEF_EXIT(Engine, StartState) {}

DEF_ENTER(Engine, ReviewState)
{
	currentAppState = new(GameReview);
	currentAppState->start(&window, gameData);
	__hook(&GameReview::main_menu, static_cast<GameReview*>(currentAppState), &Engine::call_start);
}

DEF_EXIT(Engine, ReviewState) {}

DEF_ENTER(Engine, QuizState)
{
	currentAppState = new(GameQuiz);
	currentAppState->start(&window, gameData);
	__hook(&GameQuiz::game_over, static_cast<GameQuiz*>(currentAppState), &Engine::call_game_over);
	__hook(&GameQuiz::pause, static_cast<GameQuiz*>(currentAppState), &Engine::call_pause);
}

DEF_EXIT(Engine, QuizState) {}

DEF_ENTER(Engine, GameOverState)
{
	currentAppState = new(GameOver);
	currentAppState->start(&window, gameData);
	__hook(&GameOver::main_menu, static_cast<GameOver*>(currentAppState), &Engine::call_start);
	__hook(&GameOver::start_new_game, static_cast<GameOver*>(currentAppState), &Engine::call_quiz);
}

DEF_EXIT(Engine, GameOverState) {}

DEF_ENTER(Engine, PauseState)
{
	currentAppState = new(GamePause);
	currentAppState->start(&window, gameData);
	__hook(&GamePause::main_menu, static_cast<GamePause*>(currentAppState), &Engine::call_start);
	__hook(&GamePause::resume_game, static_cast<GamePause*>(currentAppState), &Engine::call_quiz);
}

DEF_EXIT(Engine, PauseState) {}

void Engine::call_start()
{
	this->request(STATE_START);
}

void Engine::call_review()
{
	this->request(STATE_REVIEW);
}

void Engine::call_quiz()
{
	this->request(STATE_QUIZ);
}

void Engine::call_game_over()
{
	this->request(STATE_GAME_OVER);
}

void Engine::call_pause()
{
	this->request(STATE_PAUSE);
}
