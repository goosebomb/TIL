#include <stdio.h>
/*
	* �Լ��� ��ȯ�ڷ���
	��ȯ�� ���� �ش��ϴ� �ڷ����� �����־�� �Ѵ�.
*/

int One() {
	return 1;
}

float TwoTwo() {
	return 2.2f;
}

char CharTest() {
	char ch = 'f';
	return ch;
}

/*
	* void
	"����"�̶�� ��
	�Լ��� ����ϸ� ��ȯ���� ���ٴ� �ǹ�
	void�� �ƴ� �Լ��� return�� �Ἥ ���� ��ȯ�ؾ� �Ѵ�.
*/

void PrintTest() {
	printf("���̵��Լ�\n");
}

void ReturnTest() {
	printf("1. ���\n");
	return; // �Լ� ����
	printf("2. ��¾ȵ�\n");
}

void main28() {

	printf("One() : %d\n", One());
	printf("TwoTwo() : %.1f\n", TwoTwo());
	printf("CharTest() : %c\n", CharTest());

	PrintTest();
	ReturnTest();

}