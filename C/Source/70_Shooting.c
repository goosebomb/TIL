#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "start.h"

typedef struct _Player {
	int posX, posY; // �÷��̾��� ��ǥ
	bool isLive;    // �÷��̾��� ���翩��
}Player;

typedef struct _Bullet {
	int posX, posY; // �Ѿ��� ��ǥ
	bool isLive;
}Bullet;

typedef struct _Enemy {
	int posX, posY; // ���� ��ǥ
	bool isLive;    // ���� ���翩��
}Enemy;

Player player;
Bullet bullet;
Enemy enemy;

void PrintMap1();			   // �� �׷��ִ� �Լ�
void PrintPlayer2(bool isShow); // �÷��̾� �׷���
void keyInput1();			   // �Է�ó�� �Լ�

bool IsKeyDown(int key);	   // �������� Ȯ��

void AttackInput1();			   // ���� Ű ó��
void PrintBullet1();			   // �Ѿ� �׷��ִ� �Լ�
void CreateEnemy1();			   // �� ����
void PrintEnemy1();			   // �� �׷���
void OnCollision1();			   // �浹üũ

void main70() {
	showcursor(false); // Ŀ�� ����
	randomize();       // ���� ������
	player.posX = 15;  // �÷��̾� x��ġ
	player.posY = 17;  // �÷��̾� y��ġ
	PrintMap1();		   // �� �׷���
	PrintPlayer2(true); // �÷��̾� �׷���

	while (1) {
		keyInput1();	   // �Է��� ����
		AttackInput1(); // ����ó��
		PrintBullet1(); // �Ѿ� �׷���
		CreateEnemy1(); // �� ����
		PrintEnemy1();  // ���� �׷���
		OnCollision1(); // �浹ó��
		delay(100);
	}

}

void PrintMap1()
{
	for (int i = 0; i < 30; i++) {
		gotoxy(i, 0);
		printf("��");
		gotoxy(i, 20);
		printf("��");
	}

	for (int i = 0; i < 20; i++) {
		gotoxy(0, i);
		printf("��");
		gotoxy(30, i);
		printf("��");
	}
}

void PrintPlayer2(bool isShow) {
	gotoxy(player.posX, player.posY);
	if (isShow) {
		printf("��");
	}
	else {
		printf("  "); // Ư�����ڴ� 2ĭ�� ����� ������ �Ѵ�.
	}
}

void keyInput1() {
	if (_kbhit()) { // Ű �Է��� ���� �Ǹ�
		int input = _getch();
		switch (input) {
		case 72: // ������Ű
			PrintPlayer2(false); // �÷��̾ ����
			player.posY--;
			PrintPlayer(true);
			break;
		case 80: // �Ʒ�����Ű
			PrintPlayer2(false);
			player.posY++;
			PrintPlayer2(true);
			break;
		case 75: // ���ʹ���Ű
			PrintPlayer2(false);
			player.posX--;
			PrintPlayer2(true);
			break;
		case 77: // �����ʹ���Ű
			PrintPlayer2(false);
			player.posX++;
			PrintPlayer2(true);
			break;
		default:
			break;
		}
	}
}

bool IsKeyDown1(int key) {
	return ((GetAsyncKeyState(key) & 0x8000) != false);
	// GetAsyncKeyState : ���� Ű�� � Ű���� üũ
	// 0x8000 : ������ ������ ���� ȣ�� ������ �����ִ� ����
}

void AttackInput1() {
	if (IsKeyDown1(VK_SPACE)) {				// VK_SPACE : �����̽����� �ƽ�Ű�ڵ�
		if (bullet.isLive == false) {	    // �Ѿ��� �������� �ʴ´ٸ�
			bullet.posX = player.posX;
			bullet.posY = player.posY - 1;  // �� ĭ ����
			bullet.isLive = true;
			gotoxy(bullet.posX, bullet.posY);
			printf("*");
		}
	}
}

void PrintBullet1() {
	if (bullet.isLive) {
		gotoxy(bullet.posX, bullet.posY)
		printf(" ");
		bullet.posY--;
		if (bullet.posY < 1) {
			bullet.isLive = false;
			return;
		}
		gotoxy(bullet.posX, bullet.posY);
		printf("*");
	}
}

void CreateEnemy1() {
	if (enemy.isLive == false) {        // ���� �׾��ٸ�
		int rnd = random(30);
		if (rnd != 0)					// 29/30Ȯ��
			return;						// �Լ� ����
		enemy.posX = random(30);		// x��ǥ
		enemy.posY = 2;					// y��ǥ
		enemy.isLive = true;			// �����Ѵ�.
		gotoxy(enemy.posX, enemy.posY); // ��ǥ�̵�
		printf("��");
	}
}

void PrintEnemy1() {
	if (enemy.isLive == true) {
		gotoxy(enemy.posX, enemy.posY);
		printf("  ");					// Ư�����ڴ� 2ĭ�� �����ϹǷ� 2ĭ ����� ����
		enemy.posY++;					// �Ʒ��� ��ǥ �̵�
		if (enemy.posY > 18) {			// ������ �������ٸ�
			enemy.isLive = false;		// ����ó��
			return;						// �Լ�����
		}
		gotoxy(enemy.posX, enemy.posY);
		printf("��");
	}
}

void OnCollision1() {
	if (bullet.posX == enemy.posX && bullet.posY == enemy.posY) {
		gotoxy(bullet.posX, bullet.posY);
		printf("  ");					  // �Ѿ� ����
		bullet.isLive = false;			  // �Ѿ� ����
		gotoxy(enemy.posX, enemy.posY);
		printf("  ");					  // �� ����
		enemy.isLive = false;			  // �� ����
	}
}


/* 
	* �ǽ� (~10/11)
	C�� Ȱ���Ͽ� ���� �����
	�帣 ����
*/
