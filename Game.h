#pragma once
#include <SFML/Graphics.hpp>
#include "Bob.h"
#include "platform.h"

using namespace sf;

class Game {
private:
    RenderWindow Window;

    //Background initializer
    Sprite BackgroundSprite;
    Texture BackgroundTexture;

    //Create the objects
    Bob m_Bob;
    platform main_platform = platform(200.f, 800.f, 50.f, 400.f, Color::Cyan);

    //Main game functions
    void input();
    void update(float dtAsSeconds);
    void render();
    const bool winopen() const { return Window.isOpen(); };

public:

    Game();
    void start();
};