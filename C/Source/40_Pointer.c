#include <stdio.h>

void main40() {

	/*
		* ������
		������ �޸� �ּҸ� �����ϴ� ����
		"����Ű�� ��"�̶�� ���� ������ �ִ�.

		* ������ ���� ���� ���
		������ �ڷ��� �ڿ� *(Asterisk)�� ���δ�.
		��ġ�� ���� ���̴� ����.
		ex) int* numPtr;
			int * numPtr;
			int *numPtr;
	*/

	int num = 10;
	int* numPtr = &num;

	printf("num�� �ּ� : %p\n", &num);
	printf("numPtr�� �� : %p\n", numPtr);

	num = 55;

	printf("num�� �� : %d\n", num);
	printf("numPtr�� ������ �� : %d\n", *numPtr);

	// ������ �ڷ����� �ٸ��� �޸��ּҸ� ������ �� ����.
	float value = 12.34f;
	int* valuePtr = &value;

	printf("%p\n", valuePtr);
}