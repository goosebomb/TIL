#include <stdio.h>

void main13() {

	// ���ǹ�(if)
	// ������ true����, false������ ���� �ڵ�� ����

	int a = 10;

	if (a > 5) {
		printf("a�� 5���� ũ��.\n");
	}

	if (a < 5) {
		printf("a�� 5���� �۴�.\n");
	}

	// if���� �߰�ȣ�� ������ �ٷ� �� 1�ٸ� if�� ������ �޴´�
	if (a != 10)
		printf("a�� 10�Դϴ�.\n");
	printf("�׽�Ʈ\n");

	// else if
	// �ܵ����� ����� �� ����.
	// ���� if���� �־�� �Ѵ�.
	// ���� if���� �����̰� else if�� ������ true��� �ڵ�� ����

	// else
	// �ܵ����� ����� �� ����.
	// ���� is Ȥ�� else if���� �־���Ѵ�.
	// ���� if�� else if�� ������ ��� �����̸� �ڵ�� ����

	int num = 10;

	if (num > 10) {
		printf("num�� 10���� ũ��.\n");
	}

	else if (num < 10) {
		printf("num�� 10���� �۴�.\n");
	}

	else {
		printf("num�� 10�̴�.\n");
	}

	// �ǽ�
	// �������� �Է¹޴´�.
	// �Է¹��� ���� "���"����, "����"����, 0���� ���

	int input;
	printf("���� �� �Է�: ");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("���\n");
	}

	else if (a < 0) {
		printf("����\n");
	}

	else {
		printf("0\n");
	}

}