#include <random>
#include <time.h>
#include <stdio.h>

namespace Study12
{
	/*
		* �ζ��� �Լ�
		�Լ��� ȣ������ �ʰ� �ڵ带 ���ڸ����� �״�� ����
		ȣ������� �����Ƿ� �ӵ��� ����
		��, �ڵ尡 �����ǹǷ� �ʹ� ���� ����ϸ� ���������� Ŀ���� ��
		�ڵ尡 ��� �Ϲ��Լ��� ����ؾ� �Ѵ�.
		�ζ����Լ��� ������ ������ �����Ƿ� �Լ������Ͱ� ����ų �� ����
		�����Ϸ��� �ζ��ο� ���� ��û�� �����Ӱ� ������ �� �ִ�

		* �ζ����Լ��� ����
		�ζ����Լ��� ȣ��κп� �ڵ带 �����ϹǷ� �׸�ŭ �޸𸮰� �����
		�ַ� ª�� �ڵ忡 ����ؾ��Ѵ�
	*/
	inline int Random(int n)
	{
		return rand() % n;
	}

	inline int Plus(int a, int b)
	{
		return a + b;
	}

	inline int Multiple(int a, int b)
	{
		return a * b;
	}
}

void main()
{
	srand((unsigned)time(NULL)); // ���� ������

	printf("���� : %d\n", Study12::Random(10));
	printf("���� : %d\n", Study12::Random(20));
	printf("���� : %d\n", Study12::Random(30));
	printf("���� : %d\n", Study12::Random(40));
	printf("���� : %d\n", Study12::Random(50));
	printf("���� : %d\n", Study12::Random(60));
	printf("���� : %d\n", Study12::Random(70));

	/*
		������� ����
		ª�� ���� �Լ��� �ʹ� ���� ȣ���ϸ� �߻��ϴ� ����
		���α׷� ���� ���� �ٸ� ��ġ�� �ڵ带 ������Ѿ� �� �� ���������� �ð�, �޸�, �ڿ� ���� ���Ǵ� ����
		�� , �ٸ� ���� �Լ��� ������ �� �޸𸮿� �ð��� �� �Ҹ�Ǵ� ����
	
	*/

	/* 
		* �ǽ� 
		�ζ��� �Լ� 2�� ���� ȣ���غ���
	*/

	printf("a + b : %d\n", Study12::Plus(10, 20));
	printf("a + b : %d\n", Study12::Plus(1, 2));
	printf("a * b : %d\n", Study12::Multiple(10, 20));
	printf("a * b : %d\n", Study12::Multiple(1, 2));
}