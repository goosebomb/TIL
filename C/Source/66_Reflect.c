#include <stdio.h>
#include <conio.h>
#include "start.h"
#pragma warning(disable : 4996)
void main66() {

	int x = 40, y = 12; // ���� ��ǥ
	int dx = 1, dy = 1; // �̵� ����

	clrscr();
	// kbhit() : Ű���带 �Է��ߴٸ� true
	while (kbhit() == FALSE) {
		gotoxy(x, y);
		putch(' ');
		x += dx; // ��ǥ�̵�
		y += dy;
		gotoxy(x, y);
		putch('#'); // �̵��� ��ǥ�� # ���

		if (x == 79 || x == 0) {
			dx = -dx;
		}
		if (y == 24 || y == 0) {
			dy = -dy;
		}
		delay(30);
	}
}