#include <stdio.h>

void main38() {
	/*
		* sizeof
		�ǿ����ڰ� �����ϴ� �޸� ũ�⸦ ��ȯ
	*/

	int a = 3;

	printf("int : %d\n", sizeof(int));				// int�ڷ����� ũ��
	printf("a : %d\n", sizeof(a));					// a�ڷ����� ũ��
	printf("double : %d\n", sizeof(double));		// double�ڷ����� ũ��
	printf("string : %d\n", sizeof("�ȳ��ϼ���"));	// ���ڿ��� ũ��

}