#include <stdio.h>

void main24() {

	// continue
	// �ݺ��� 1�� �ǳʶٴ� ����

	int input;
	printf("�ǳ� �� ��ȣ : ");
	scanf_s("%d", &input);

	for (int i = 0; i < 10; i++) {
		if (i == input)
			continue;
		printf("i : %d\n", i);
	}

}