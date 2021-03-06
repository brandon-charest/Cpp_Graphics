#include "MainGame.h"



MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 1024;
	_screenHeight = 768;
}


MainGame::~MainGame()
{
}

void MainGame::run()
{
	initSystems();
}

void MainGame::initSystems()
{
	// initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	_window = SDL_CreateWindow("Graphics Enginer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}
