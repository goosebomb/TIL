#include <stdio.h>

void LocalFunc() {
	int cnt = 0;
	cnt++;
	printf("Local cnt : %d\n", cnt);
}

void StaticFunc() {
	/*
		* ��������
		���������� ���������� Ư���� ����
		�Լ� ���ο����� ��밡��(C��)
		�Լ� ����ÿ��� ������ �Ҹ����� ����
		������ġ : �Լ� ����
		������ : �Լ� ����
		�ı��ñ� : ���α׷� �����
		�ʱ�ȭ ���� : O-
	*/

	static int cnt = 0; // ��������
	cnt++;
	printf("Static cnt : %d\n", cnt);
}


void main37() {

	LocalFunc();
	LocalFunc();
	LocalFunc();

	StaticFunc();
	StaticFunc();
	StaticFunc();

}