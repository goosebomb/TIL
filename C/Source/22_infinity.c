#include <stdio.h>

void main22() {

	// ���ѹݺ�
	// ���ѹݺ��� �������� Ȥ�� ��ǻ�� ���ð��� �־�� �Ѵ�.

	int input;

	for (;;) { // �ݺ����� ������ ���ٸ� ���ѹݺ�
		printf("�����Է�(����� 0) : ");
		scanf_s("%d", &input);
		if (input == 0) break;
		printf("�Է��� ���� : %d\n", input);
	}

}