#include <stdio.h>
#include <string.h>

namespace Study16
{
	class Unit
	{
	public:
		char name[12];
		int damage;

		/*
			* ������
			Ŭ������ �����Ǿ��� �� ȣ���ϴ� �Լ�
			������ �̸��� Ŭ������� ���ƾ� ��
			��ȯ�ڷ����� ����. (void�� �ƴϴ�)
			�ַ� ��������� �ʱⰪ�� �����ϴµ� ���
		*/
		Unit()
		{
			printf("���� ����\n");
			strcpy_s(name, sizeof(char) * 5, "����");
			damage = 10;
			printf("�̸� : %s\n", name);
			printf("���ݷ� : %d\n", damage);
		}

		Unit(int _damage)
		{
			damage = _damage;
			printf("���� ���ݷ� : %d\n", damage);
		}

		Unit(const char* _name)
		{
			strcpy_s(name, _name);
			printf("�̸� : %s\n", name);
		}

		Unit(const char* _name, int _damage)
		{
			strcpy_s(name, _name);
			damage = _damage;
			printf("�̸� : %s\n", name);
			printf("���� ���ݷ� : %d\n", damage);
		}
	};
}

using namespace Study16;

void main16()
{
	Unit unitA;

	Unit* unitB = new Unit();

	Unit* unitC = new Unit(50);

	/*
		* �ǽ�
		������ �̸��� �Ű������� �޾Ƽ� name������ �ʱ�ȭ �ϴ� ������ �����
		������ �̸��� ���ݷ��� �Ű������� �޾Ƽ� name�� damage�� �ʱ�ȭ�ϴ� ������ �����
	*/

	Unit* unitD = new Unit("������");

	Unit* unitE = new Unit("���ο� ����", 25);
}