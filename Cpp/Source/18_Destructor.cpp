#include <stdio.h>

namespace Study18
{
	class Unit
	{
	public:
		Unit() // ������
		{
			printf("���� ����\n");
		}

		~Unit() // �Ҹ���
		{
			printf("���� �ı�\n");
		}
	};
}

using namespace Study18;

void main18()
{
	/*
		* �Ҹ���
		Ŭ���� �̸� �տ� "~"�� ���� Ư���� �Լ�
		��ü�� ���ŵ� �� ȣ�� (�����Ϸ��� ȣ��)
		��ȯ�ڷ����� ����. (void�� �ƴϴ�)
		�����ڰ� ������ ������ �����Ϸ��� ���� ����Ѵ�.
	*/

	Unit* unit = new Unit(); // �����Ҵ�

	delete unit; // �޸� ����
}