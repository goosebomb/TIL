#include <stdio.h>
#include <conio.h>  // getch

void main12() {

	int input;
	printf("���� �Է�: ");
	scanf_s("%d", &input);
	printf("�Է� �� : %d\n", input);

	float speed;
	printf("�Ǽ� �Է�: ");
	scanf_s("%f", &speed);
	printf("�Է� �Ǽ�: %f\n", speed);

	char ch;
	printf("���� �Է�: ");
	ch = _getch();
	printf("�Է� ����: %c\n", ch);

	// �ǽ�
	// �Ǽ� 2���� �Է¹޾Ƽ� ���Ѱ�, ����, ���Ѱ�, ������ ���
	int a, b;
	printf("ù ��° ����: ");
	scanf_s("%d", &a);

	printf("�� ��° ����: ");
	scanf_s("%d", &b);

	printf("���Ѱ� : %d\n", a+b);
	printf("���� : %d\n", a-b);
	printf("���Ѱ� : %d\n", a*b);
	printf("������ : %d\n", a/b);
}