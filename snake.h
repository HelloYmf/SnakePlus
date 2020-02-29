#pragma once
#include "point.h"
#define s_up 3
#define s_down 1
#define s_left 0
#define s_right 2

class Snake {
public:
	Snake(int length, int score, int direction);		//���캯��
	void DrawSnake();			//���ߺ���
	int GetLength();			//��ȡ���Ⱥ���
	void SetLength();			//���ȼ�һ����
	void SnakeMove(int direction);		//���ƶ�����
	void GetCommand(int command);		//�Ӽ��̻�ȡ����
	int GetDirection();					//��ȡ��ǰ����
	void SetDirection(int dire);		//���÷�����
	Point p[1000];
	int GetScore();
	void SetScore();
private:
	int s_length;
	int s_score;
	int s_direction;
	//Point p[100];
};