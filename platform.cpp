#include "stdafx.h"
#include "platform.h"

using namespace sf;
platform::platform(float x, float y, float height, float width, Color color)
{
	this->position.x = x;
	this->position.y = y;

	this->height = height;
	this->width = width;
	this->color = color;
}

 RectangleShape platform::getSprite()
{
	 pltf.setSize(Vector2f(this->width, this->height));
	 pltf.setPosition(Vector2f(this->position.x, this->position.y));
	 pltf.setFillColor(this->color);

	 return pltf;
}