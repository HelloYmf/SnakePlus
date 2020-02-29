#include<graphics.h>
#include<conio.h>
#include<iostream>
#include "snake.h"
#include<time.h>
#include "food.h"
#include<stdlib.h>
#include "game.h"
#include<windows.h>
#include<cstdio>
#pragma comment (lib,"winmm.lib")

using namespace std;

int main()
{
	mciSendString(TEXT("open music.mp3 alias music"), 0, 0, 0);
	mciSendString(TEXT("play music"), 0, 0, 0);
	Game game;
	initgraph(640, 480);
	setbkcolor(RGB(250, 250, 210));
	while (1)
	{
		cleardevice();
		game.snake.SnakeMove(game.snake.GetDirection());
		game.DrawMap();
		game.snake.GetCommand(game.snake.GetDirection());
		game.EatFood();
		Sleep(game.speed);
		if (game.GameOver())
		{
			int x;
			x = MessageBox(GetForegroundWindow(), "GameOver", "Care", MB_OK);
			printf("%d\n", x);
			break;
		}
	}
	closegraph();
	return 0;
}