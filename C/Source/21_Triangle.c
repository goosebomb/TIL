#include <stdio.h>

void main21() {

	// �����
	// *�� 1�� ����ϴ°��� �̿��Ͽ� �ݺ����� ����Ͽ�
	// �ﰢ���� ����ϴ� ��

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}

	// �ﰢ��
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// ���ﰢ��
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}

		for (int k = 10; k >= i; k--) {
			printf("*");
		}
		printf("\n");
	}

}