#include <stdio.h>

// ...�� ��������
void ParamsFunction(int args, ...) {
	printf("args : %d\n", args);
}

void main59() {
	/*
		* �������� �Լ�
		�Ű������� ������ �������� ���� �Լ�
		�Ű������� 1���� �ʿ��ϴ�
		�������ڵ��� ù��° �Ű������� �ڷ����� ���󰣴�.
	*/

	ParamsFunction(1, 3);
	ParamsFunction(2, 2, 3);
	ParamsFunction(2, 3.4f, 1);
	ParamsFunction(1, 'A');
}