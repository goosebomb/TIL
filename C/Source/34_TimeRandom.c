#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main34() {

	// unsigned : ����� �ٲ���
	// time(NULL) : ����ð�
	// ����ð��� ���������� �־ �õ尪�� ��ȭ�� ��

	srand((unsigned)time(NULL)); // main�Լ��� �� ���� �־��ָ� ��

	/*for (int i = 0; i < 10; i++) {
		int random = rand();
		printf("���� : %d\n", random);
	}*/

	// �ǽ�
	// ������ ���� �������ֱ�
	// ������ 0~10������ ������ ���� 10�� ���

	for (int i = 0; i < 10; i++) {
		int random = rand() % 10;
		printf("���� : %d\n", random);
	}

}