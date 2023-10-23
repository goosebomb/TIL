#include <stdio.h>


void HelloWorld() {
	printf("Hello, World\n");
}

int AddNumPrint(int x, int y) {
	printf("�հ� : %d\n", x + y);
	return x + y;
}

void test() {
	printf("void �Լ�\n");
}

int test1(int x) {
	printf("int �Լ� : %d\n", x);
	return x;
}

float test2(float x, float y, float z) {
	printf("float �Լ� : %f %f %f\n", x, y, z);
	return x, y, z;
}

void main43() {

	/*
		�Լ� ������
		�Լ��� �޸� �ּҰ� �����Ѵ�
		�Լ������ʹ� �Լ��� �޸��ּҸ� �����ϴ� ����
	
	*/
	
	void (*funcPtr)() = HelloWorld;
	funcPtr();

	int (*addPtr)(int, int) = AddNumPrint;
	addPtr(1, 2);

	/* 
		* �ǽ�
		1. ��ȯ �ڷ��� void �Լ�(�Ű�����x)�� �Լ��� �����
		   �Լ������Ϳ� ���� �� ȣ��

		2. ��ȯ �ڷ��� int �Լ�(�Ű����� 1��)�� �Լ��� �����
		   �Լ������Ϳ� ���� �� ȣ��

		3. ��ȯ �ڷ��� float �Լ�(�Ű����� 3��)�� �Լ��� �����
		   �Լ������Ϳ� ���� �� ȣ��
	 */

	void(*funcPtr2)() = test;
	funcPtr2();

	int(*testPtr)(int) = test1;
	testPtr(5);

	float(*testPtr2)(float, float, float) = test2;
	testPtr2(1.2f, 3.4f, 5.6f);
	
}