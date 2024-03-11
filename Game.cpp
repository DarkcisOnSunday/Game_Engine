#include "stdafx.h"
#include "Game.h"


Game::Game()
{
	//Creating a window
	Vector2u resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	Window.create(VideoMode(resolution.x, resolution.y),
		"Game Engine",
		Style::Fullscreen);

	//Background sprite
	BackgroundTexture.loadFromFile("sourse\\background.jpg");
	BackgroundSprite.setTexture(BackgroundTexture);
}

void Game::start()
{
	Clock clock;

	while (winopen()){
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input(); //Cacth all inputs
		update(dtAsSeconds); //Update game time
		render(); //Draw window again
	}
}