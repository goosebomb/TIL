#include <stdio.h>

namespace Study11
{
	/*
		* �����ε�
		���� �̸����� �Լ��� ������ ���� �� �ִ� ���
		�Ű������� �ڷ����� ������ ���� �޶�� �Ѵ�.
	*/

	void Add()
	{
		printf("A\n");
	}

	int Add(int num)
	{
		printf("B\n");
		return 0;
	}

	void Add(float num)
	{
		printf("C\n");
	}

	void Add(int num1, int num2)
	{
		printf("D\n");
	}

	void Add(float num1, int num2)
	{
		printf("E\n");
	}
}

namespace Study11P
{
	void Sub()
	{
		printf("1\n");
	}

	void Sub(int a)
	{
		printf("2\n");
	}

	void Sub(float a)
	{
		printf("3\n");
	}

	void Sub(int a, int b)
	{
		printf("4\n");
	}

	void Sub(float a, float b)
	{
		printf("5\n");
	}
}

void main11()
{
	Study11::Add(); // A
	Study11::Add(11); // B
	Study11::Add(1.1f); // C
	Study11::Add(1, 1); // D
	Study11::Add(1.1f, 11); // E

	/*
		�ǽ�
		Sub�̶�� �̸����� �Լ� 5�� ������

	*/

	Study11P::Sub();
	Study11P::Sub(10);
	Study11P::Sub(1.0f);
	Study11P::Sub(10, 20);
	Study11P::Sub(1.0f, 2.0f);
}