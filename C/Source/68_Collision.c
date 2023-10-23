#pragma warning(disable : 4996)	

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "start.h"

/*
	player->x
	player->y

	enemy->x
	enemy->y

	player�� enemy�� (x, y) ��ǥ�� ������ �浹
*/

enum Arrows {
	Left = 75,
	Right = 77,
	Up = 72,
	Down = 80
};

// �÷��̾� ��ǥ ����ü
typedef struct _Player {
	int x, y;
}Player; 

// ���� ��ǥ ����ü
typedef struct _Food {
	int x, y;
}Food;

// �÷��̾ �׷��ִ� �Լ�
void PrintPlayer1(Player* player, BOOL bShow);

// ������ �׷��ִ� �Լ�
void PrintFood(Food* Food, BOOL bShow);

// �浹üũ �Լ�
void OnBeginOverlap(Player* player, Food* food, int* score);

void main68() {
	showcursor(FALSE); // Ŀ���� �Ⱥ�����

	// �÷��̾� �ʱ���ǥ ����
	Player player;
	player.x = 3;
	player.y = 3;

	randomize();

	// ���� �ʱ���ǥ ����
	Food food;
	food.x = random(20);
	food.y = random(20);

	int score = 0; // ����

	PrintPlayer1(&player, TRUE); // �÷��̾ �׷���
	PrintFood(&food, TRUE);     // ������ �׷���

	for (;;) {
		int ch = _getch(); // ���� 1���� �Է¹޴´�.
		if (ch == 0XE0 || ch == 0) { // Ȯ��Ű���
			ch = _getch(); // Ȯ��Ű�� �ƽ�Ű�ڵ带 �޾ƿ´�.

			switch (ch) {
			case Left: // ���� ����Ű
				if (player.x <= 0) {
					player.x = 0;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.x--;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;

			case Right: // ������ ����Ű
				if (player.x >= 20) {
					player.x = 20;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.x++;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;

			case Up: // ���� ����Ű
				if (player.y <= 0) {
					player.y = 0;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.y--;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;

			case Down: // �Ʒ��� ����Ű
				if (player.y >= 20) {
					player.y = 20;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.y++;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;
			}
		}
	}
}

void PrintPlayer1(Player* player, BOOL bShow) {
	// �÷��̾��� ��ǥ�� �̵�
	gotoxy(player->x, player->y);

	// bShow�� true�� ���, false�� ������
	putch(bShow ? '@' : ' ');
}

void PrintFood(Food* food, BOOL bShow) {
	// ���� ��ǥ�� �̵�
	gotoxy(food->x, food->y);
	
	// bShow�� true�� ���, false�� ������
	putch(bShow ? '#' : ' ');
}

void OnBeginOverlap(Player* player, Food* food, int* score) {
	// �÷��̾�� ������ x��ǥ�� ������
	BOOL bOverLapX = player->x == food->x;

	// �÷��̾�� ������ y��ǥ�� ������
	BOOL bOverLapY = player->y == food->y;

	// �÷��̾�� ������ �浹�ߴٸ�
	if (bOverLapX && bOverLapY) {

		*score += 10; // 10�� ����
		gotoxy(21, 20);
		printf("score : %d", *score); // 20, 20��ǥ�� ���� ���

		// �浹 �� ������ ��ǥ �������� ����
		food->x = random(20);
		food->y = random(20);

		// ���� ���
		PrintFood(food, TRUE);
	}


	/*
		* �ǽ�
		"@"�� ȭ�� �ٱ����� �Ѿ�� �ʵ��� ����(��ǥ�� �������� ���� �ʰ�)
	
	*/
}
