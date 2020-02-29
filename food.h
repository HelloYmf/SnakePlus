#pragma once
#include "point.h"
#include<stdlib.h>
#include<time.h>

class Food {
public:
	Food()
	{
		srand(time(0));
		point.p_x = rand() % 64 * 10;
		point.p_y = rand() % 48 * 10;
	}
	void DrawFood();
	Point point;
};