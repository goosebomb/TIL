#include <stdio.h>

void main41() {

	/*
		* void������
		�����ʹ� �ڷ����� �ٸ� �����͸� �����ϸ� ������ ���� �߻�
		void�����ʹ� � �ڷ����̵� �����͸� ������ �� �ִ�.
		"���� ������"��� �θ�
		�ڷ����� �������� �ʾƼ� ������ �Ұ���
	
	*/

	char ch = 10;
	float speed = 12.34f;
	int num = 20;
	double db = 23.45;

	void* voidPtr;

	voidPtr = &ch;
	voidPtr = &speed;
	voidPtr = &num;
	voidPtr = &db;



}