#include <stdio.h>

int GetSum(int from, int to); // �Լ��� ����

void main30() {
	/*
		* �Լ��� ����
		������ �Լ� ȣ������ �Լ��� ������ �����Ϸ����� ���� �ؾ��Ѵ�.
		�Լ��� ������ �����Ϸ����� �Լ��� ������ �̸� �����ִ� ����
	*/
	GetSum(30, 60);

}

int GetSum(int from, int to) {
	int result = 0;
	for (int i = from; i <= to; i++) {
		result += i;
	}
	printf("�� �հ� : %d\n", result);
	return result;
}
