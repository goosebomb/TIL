#include <stdio.h>
#include "start.h"

/* ���� ���߱� ���� */
void main63() {
	randomize();// ����������
	int computer = random(100);// 0~99������ ����
	int count = 0;
	for (;;) {
		int user;
		printf("���� �Է�: ");
		scanf_s("%d", &user);// �Է��� ����
		if (user == computer) {// ������ �Է¹��� ���� ���ٸ�
			printf("������ ���߼̽��ϴ�!\n");
			printf("���ο� ������ ���۵˴ϴ�.\n");
			count = 0;
			randomize();
			computer = random(100);
			delay(2000);
			clrscr();
		}

		else if (user < computer) {// ������ �� ũ�ٸ�
			printf("Up!\n");
			count++;
		}

		else {// ������ �� �۴ٸ�
			printf("Down!\n");
			count++;
		}

		if (count > 9) {
			printf("10���� ��ȸ�� ��� �����Ǿ����ϴ�.\n");
			printf("������ ������մϴ�.\n");
			count = 0;
			randomize();
			computer = random(100);
			delay(2000);
			clrscr();
		}
	}

	/*
		* �ǽ�
		������ ���� �� �ִ� ��ȸ 10������ Ƚ������ ������ֱ�
		������ ���߰ų� ��ȸ�� ������ ����� �� �� �ֵ��� ������ֱ�
	
	*/
}