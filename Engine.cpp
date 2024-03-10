#include "stdafx.h"
#include "Engine.h"


Engine::Engine()
{
	Vector2u resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y),
		"Game Engine",
		Style::Fullscreen);

	m_BackgroundTexture.loadFromFile("sourse\\background.jpg");
	m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start()
{
	Clock clock;

	while (m_Window.isOpen()) {
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input(); //Cacth all inputs
		update(dtAsSeconds); //Update game time
		draw(); //Draw window again
	}
}