#include <stdio.h>
#include "start.h"

void main65() {
	clrscr();
	showcursor(0);

	for (int i = 0; i < 80; i++) {
		gotoxy(i, 5);              // x��ǥ�� i, y��ǥ�� 5
		printf("@");
		gotoxy(i - 1, 5);          // ���� ��ǥ
		printf(" ");               // �����
		delay(100);                // 0.1�� ���
	}

	for (int i = 78; i >= 0; i--) {
		gotoxy(i, 5);             
		printf("@");
		gotoxy(i + 1, 5);         
		printf(" ");              
		delay(100);               
	}

	for (int i = 1; i < 80; i++) {
		gotoxy(i, 5+i);            
		printf("@");
		gotoxy(i - 1, (5+i)-1);    
		printf(" ");               
		delay(100);                
	}

	/* 
		* �ǽ�
		�̵��� ������ �����ʿ��� �������� �̵���Ű��
		�̵��� ������ �밢������ �̵���Ű��
	*/
}