#include <stdio.h>

void main7() {

	// ���� ���� ������
	// ��Ģ���� ���� �� ������ ���� ������

	int money = 10;
	//money = money + 5;
	money += 5; // money���� ���� 5 ����
	printf("money : %d\n", money);

	money -= 3; // money ���� ���� 3 ����
	printf("money : %d\n", money);

	money *= 2; // money ���� ���� 2�� ����
	printf("money : %d\n", money);

	money /= 4; // money ���� ���� 4�� ����
	printf("money : %d\n", money);

	// �ǽ�
	// float�� ���� ���� �� ���մ��Կ����� 1���� ����غ���

	float mp = 127.0f;

	mp += 51.2;
	printf("hp: %.2f\n", mp);

	mp -= 22.34;
	printf("hp: %.2f\n", mp);

	mp *= 2.7;
	printf("hp: %.2f\n", mp);

	mp /= 3.5;
	printf("hp: %.2f\n", mp);

}