#include <stdio.h>

void main14() {

	int a = 10;
	int b = 20;

	if (a == 10) {
		if (b == 20) {
			printf("����if\n");
		}
	}

	if (a == 10 && b == 20) {
		printf("����if\n");
	}

	// ���� if��
	// ù��° if ������ �����ϸ� �ι�° if�� ���Ǳ��� �����ؾ��Ѵ�.
	// and(&&) �����ڿ� ������ ����.

	//�ǽ�
	// ���� 1���� �Է¹޾Ƽ� ���� if���� Ȱ���Ͽ� ����, ���, ¦��, Ȧ�������� ���
	// ex) ���/¦��, ����/Ȧ��

	int input;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &input);

	if (input > 0) {
		if (!(input % 2)) {
			printf("���/¦��\n");
		}
		else {
			printf("���/Ȧ��\n");
		}
	}

	else if (input < 0) {
		if (!(input % 2)) {
			printf("����/¦��\n");
		}
		else {
			printf("����/Ȧ��\n");
		}
	}

	else {
		printf("0\n");
	}

}