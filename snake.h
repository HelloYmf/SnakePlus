#pragma once
#include "point.h"
#define s_up 3
#define s_down 1
#define s_left 0
#define s_right 2

class Snake {
public:
	Snake(int length, int score, int direction);		//构造函数
	void DrawSnake();			//画蛇函数
	int GetLength();			//获取长度函数
	void SetLength();			//长度加一函数
	void SnakeMove(int direction);		//蛇移动函数
	void GetCommand(int command);		//从键盘获取命令
	int GetDirection();					//获取当前方向
	void SetDirection(int dire);		//设置方向函数
	Point p[1000];
	int GetScore();
	void SetScore();
private:
	int s_length;
	int s_score;
	int s_direction;
	//Point p[100];
};