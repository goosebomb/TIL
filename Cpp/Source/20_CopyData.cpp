#include <stdio.h>


namespace Study20
{
	class Copy
	{
	public:
		int num;

		Copy()
		{
			printf("����Ʈ ������\n");
		}

		/*
			���������
			��ü�� ���纻�� ������ �� ȣ��Ǵ� ������
			���ٸ� �����Ϸ��� ���� ���
			���� ����� ����������� �������� �ʴ´�.
			�߰������� ��������� �����ϴ� ������ �־��־�� �Ѵ�.
		*/
		Copy(Copy& data)
		{
			num = data.num;
			printf("���������\n");
		}
	};

	class NewClass
	{
	public:
		char ch;

		NewClass()
		{
			printf("Defalut\n");
		}

		NewClass(NewClass& data)
		{
			ch = data.ch;
			printf("Copy\n");
		}
	};
}

using namespace Study20;

void main20()
{
	Copy copyA;
	copyA.num = 22;
	Copy copyB = copyA; // ��������� ȣ��

	printf("copyA : %d\n", copyA.num);
	printf("copyB : %d\n", copyB.num);

	/*
		�ǽ�
		Ŭ������ �ϳ� ���� ��������� �����
		main�Լ����� ��������� ȣ������ֱ�
	*/

	NewClass newClassA;
	newClassA.ch = 'A';
	NewClass newClassB = newClassA;

	printf("newClassA : %c\n", newClassA.ch);
	printf("newClassB : %c\n", newClassB.ch);

}