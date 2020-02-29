#include "snake.h"
#include<graphics.h>
#include<conio.h>

Snake::Snake(int length, int score, int direction)
{
	s_length = length;
	s_score = score;
	s_direction = direction;
	p[0].p_x = 50;
	p[0].p_y = 10;
	p[1].p_x = 40;
	p[1].p_y = 10;
	p[2].p_x = 30;
	p[2].p_y = 10;
	s_score = 0;
}

int Snake::GetLength()
{
	return s_length;
}

void Snake::SetLength()
{
	s_length++;
}

void Snake::DrawSnake()
{
	setfillcolor(RGB(60, 179, 113));
	for (int i = 1; i < GetLength(); i++)
	{
		fillrectangle(p[i].p_x, p[i].p_y, p[i].p_x + 10, p[i].p_y + 10);
	}
	setfillcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
	//fillrectangle(p[0].p_x, p[0].p_y, p[0].p_x + 10, p[0].p_y + 10);
	fillcircle(p[0].p_x + 5, p[0].p_y + 5, 7);
}

void Snake::GetCommand(int command)
{
	int flag = -1;
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'A': case 'a': case 75: flag = 0; break;		//方向向左
		case 'S': case 's': case 80: flag = 1; break;		//方向向下
		case 'D': case 'd': case 77: flag = 2; break;		//方向向右
		case 'W': case 'w': case 72: flag = 3; break;		//方向向上
		}
		if (flag != -1 && abs(command - flag) != 2)
		{
			SetDirection(flag);
		}
	}
}

int Snake::GetDirection()
{
	return s_direction;
}

void Snake::SetDirection(int dire)
{
	s_direction = dire;
}

void Snake::SnakeMove(int direction)
{

	for (int i = GetLength() - 1; i > 0; i--)
	{
		p[i].p_x = p[i - 1].p_x;
		p[i].p_y = p[i - 1].p_y;
	}
	switch (direction)
	{
	case 2:		//向右
		p[0].p_x += 10;
		break;
	case 0:		//向左
		p[0].p_x -= 10;
		break;
	case 1:		//向下
		p[0].p_y += 10;
		break;
	case 3:		//向上
		p[0].p_y -= 10;
		break;
	}
}

int Snake::GetScore()
{
	return s_score;
}

void Snake::SetScore()
{
	s_score++;
}