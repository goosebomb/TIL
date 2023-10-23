#include <stdio.h>

namespace Study30
{
	class Test
	{
	public:
		static int count; // �����������
		int number;       // �Ϲݸ������
	};
}

using namespace Study30;

int Test::count = 0; // ���������� �������� �ʱ�ȭ�� ���־�� �Ѵ�.

void main()
{
	/*
		* Static(����) ���
		�ѹ��� �ʱ�ȭ �Ǹ� ���α׷� ����� �Ҹ��Ѵ�.
		������ ����� �Ҹ����� �ʴ´�.
		��� ��ü�� �����ϴ� ����� �ȴ�.
		��ü�ʹ� ���������� �����Ѵ�.
	*/

	Test* testA = new Test();
	Test* testB = new Test();
	Test* testC = new Test();

	/* �Ϲ� ��� ���� */
	// �� ��ü���� ���������� �����ϰ� ��
	testA->number = 10;
	testB->number = 20;
	testC->number = 30;

	printf("testA number : %d\n", testA->number);
	printf("testB number : %d\n", testB->number);
	printf("testC number : %d\n", testC->number);

	/* ���� ��� ���� */
	// ��� ��ü�� �����ϴ� ������ �ȴ�.
	testA->count = 10;
	testB->count = 20;
	testC->count = 30;
	
	printf("testA count : %d\n", testA->count);
	printf("testB count : %d\n", testB->count);
	printf("testC count : %d\n", testC->count);

	/* Ŭ���������� ��� */
	Test::count = 50;
	printf("Test::count : %d\n", Test::count);
}