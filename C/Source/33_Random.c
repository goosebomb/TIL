#include <stdio.h>
#include <stdlib.h> // ���� ���� ��ɾ� ���� �ʿ�

void main33() {

	/*
		* ����
		������ �� ���� ��
		rand() �Լ��� 0 ~ RAND_MAX ������ ������ ������ ��ȯ
		RAND_MAX�� 32767�� ������ ���ǵǾ� ����
		srand �Լ��� ����Ͽ� �������� �������־�� ��
		�������� �õ尪�� �����ϸ� ������ ���� ���´�
	*/
	srand(0); // ������ �������� ����
	for (int i = 0; i < 10; i++) {
		// rand() : ������ ������ ��ȯ
		int random = rand();
		printf("random : %d\n", random);
	}

}