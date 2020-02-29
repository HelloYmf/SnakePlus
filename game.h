#pragma once
#include "snake.h"
#include "food.h"

class Game {
public:
	Game() :snake(5, 0, s_right) {
		speed = 100;
	}
	void DrawMap();
	void EatFood();
	int GameOver();
public:
	Snake snake;
	Food food;
	int speed;
};