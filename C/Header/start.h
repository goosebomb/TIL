#pragma once
#include <windows.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL)) //������ �õ尪(������)�ִ� �Լ�
#define random(n) (rand() % (n)) //������ �� ��ȯ �Լ�
#define delay(n) Sleep(n) //��� �Լ�
#define clrscr() system("cls") //�ܼ�â�� ���� ������
#define gotoxy(x,y) { COORD Cur = {x, y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);} //Ŀ�� �̵� �Լ�
#define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); } //Ŀ���� �����ִ� �Լ�
