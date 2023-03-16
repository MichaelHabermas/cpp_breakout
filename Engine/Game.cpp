#include "MainWindow.h"
#include "Game.h"
#include <iostream>

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	rng( rd() ),
	xDist( 100, 700 ),
	yDist( 100, 500 )
{
}

void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if ( !isGameOver )
	{
		std::cout << "HI" << std::endl;
	}
}

void Game::ComposeFrame()
{
	gfx.DrawCircle( 300, 350, 100, Colors::Magenta );
}
