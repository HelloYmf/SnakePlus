#include "food.h"
#include<graphics.h>

void Food::DrawFood()
{
	setfillcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
	fillcircle(point.p_x + 5, point.p_y + 5, 6);

}
