#include <stdio.h>

void main17(){

	// ����ȯ
	// ������ �ڷ����� �ٲ��ִ� ��

	// �ڵ�����ȯ
	// �����Ϸ��� �ڵ����� �������� �ڷ����� ��ȯ
	// ������ ū�Ϳ��� ���������� �ٲٴ� ��� ������ ������ �ٲ�
	// ����ڰ� �������� ����ȯ ���ִ� ���� ����
	// ����ȯ �켱���� : char -> int -> long -> float -> double

	int a = 5;
	double b = 12.34;
	printf("a + b : %f\n", a + b); // int -> double �ڵ�����ȯ

	float c = a;
	printf("c : %f\n", c); // int -> float �ڵ�����ȯ

	// ��������ȯ
	// ����ڰ� ���� �ڷ����� ��ȯ�ϴ°�

	int num1 = 123;
	int num2 = 456;
	printf("num / num2 : %d\n", num1 / num2);
	printf("num / num2 : %f\n", (float)num1 / num2);

	// �ǽ�
	// float�� ������ int������ ��ȯ�Ͽ� ���
	// int�� ������ float������ ��ȯ�Ͽ� ���

	float i = 5;
	int j = 6;

	printf("float -> int : %d\n", (int)i);
	printf("int -> float : %f\n", (float)j);



}