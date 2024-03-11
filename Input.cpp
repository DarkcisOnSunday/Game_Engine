#include "stdafx.h"
#include "Game.h"

void Game::input()
{
    //Close window
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        Window.close();
    }
    //Some movement
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Bob.moveLeft();
    }
    else
    {
        m_Bob.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Bob.moveRight();
    }
    else
    {
        m_Bob.stopRight();
    }

    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        m_Bob.moveUp();
    }
    else
    {
        m_Bob.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        m_Bob.moveDown();
    }
    else
    {
        m_Bob.stopDown();
    }

}