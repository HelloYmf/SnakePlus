#include "game.h"
#include "food.h"
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<cstdio>

void Game::DrawMap()
{
	snake.DrawSnake();
	food.DrawFood();
	settextcolor(BLACK);
	outtextxy(10, 20, "Score£º");
	char s[5];
	_stprintf(s, _T("%d"), snake.GetScore());
	outtextxy(60, 20, s);
}

void Game::EatFood()
{
	if (snake.p[0].p_x == food.point.p_x&&snake.p[0].p_y == food.point.p_y)
	{
		snake.SetLength();
		srand(time(0));
		food.point.p_x = rand() % 64 * 10;
		food.point.p_y = rand() % 48 * 10;
		speed -= 1;
		snake.SetScore();
	}
}

int Game::GameOver()
{
	if (snake.p[0].p_x < 0 || snake.p[0].p_y < 0 || snake.p[0].p_x == 640 || snake.p[0].p_y == 480)
	{
		return 1;
	}
	for (int i = 1; i < snake.GetLength(); i++)
	{
		if (snake.p[0].p_x == snake.p[i].p_x && snake.p[0].p_y == snake.p[i].p_y)
		{
			return 1;
		}
	}
	return 0;
}
