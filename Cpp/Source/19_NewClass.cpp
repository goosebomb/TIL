#include <stdio.h>
#include <string.h>

namespace Study19
{
	class Wizard
	{
	public:
		char* name;
		int damage;

		Wizard()
		{
			printf("���ڵ� ����\n");
			name = new char[7];
			strcpy_s(name, sizeof("���ڵ�"), "���ڵ�");
			damage = 10;
		}

		Wizard(const char* _name, int _damage)
		{
			name = new char[strlen(_name) + 1];
			strcpy_s(name, strlen(_name) + 1, _name);
			damage = _damage;
			printf("�̸� : %s, ���ݷ� : %d\n", name, damage);
		}

		~Wizard()
		{
			// �����Ҵ��� ������ �Ҹ��ڿ� �̸� �޸� ������ ���ش�.
			printf("%s �Ҹ�\n", name);
			delete[] name; 
		}
	};
}

using namespace Study19;

void main()
{
	/*
		* �����Ҵ�
		�������� �ν��Ͻ��� �����ȴ�
		�޸��� ���ÿ����� �Ҵ�ȴ�
		�޸������� �ʿ䰡 ���� (�Լ� ����� �ڵ� �Ҹ�)
		������ �� �Ҵ�
	*/
	Wizard wizardA("������", 55);

	/*
		* �����Ҵ�
		��Ÿ�� �ÿ� �ν��Ͻ��� �����ȴ�.
		�޸��� �������� �Ҵ�ȴ�.
		������ �����ʹ� �Լ��� ����ǵ� �Ҹ����� �ʴ´�.
		�׷��Ƿ� �޸� ������ ���־�� �Ѵ�.
	*/
	Wizard* wizardB = new Wizard("�븶����", 70);
	delete wizardB;
}