#include <stdio.h>
#include "start.h"

void main64() {
	gotoxy(5, 5);  // 5, 5�� ��ǥ�� Ŀ�� �̵�
	printf("(5,5)");
	showcursor(0); // �����̴� Ŀ���� �Ⱥ�����
	delay(3000);   // 1/1000�ʸ� ���, 3000�̹Ƿ� 3��
	clrscr();      // ȭ�� ��ü�� ����
	gotoxy(10, 5); // 10, 5�� ��ǥ�� Ŀ�� �̵�
	printf("(10,5)"); 
}