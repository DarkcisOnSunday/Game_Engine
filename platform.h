#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class platform{
private:

    Vector2f position;
    float height;
    float width;
    RectangleShape pltf;
    Color color;


public:

    platform(float x, float y, float height, float width, Color color);

    RectangleShape getSprite();
};

