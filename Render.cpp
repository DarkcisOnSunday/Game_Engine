#include "stdafx.h"
#include "Game.h"

void Game::render()
{
    Window.clear();

    Window.draw(BackgroundSprite);
    Window.draw(m_Bob.getSprite());
    Window.draw(main_platform.getSprite());
    

    Window.display();
}