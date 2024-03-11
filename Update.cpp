#include "stdafx.h"
#include "Game.h"

using namespace sf;

void Game::update(float dtAsSeconds)
{
    m_Bob.update(dtAsSeconds);
}