#include <stdio.h>
#include <string.h>

namespace Study17
{
	class Unit
	{
	public:
		char* name;
		int damage;

		/*
			* ����Ʈ ������
			�Ű������� ���� ������
			����Ʈ�����ڰ� ���ٸ� �����Ϸ��� ���� ����Ѵ�.
			�Ű������� �ִ� �ٸ������ڰ� �ִٸ� ����Ʈ �����ڸ� ������ �ʴ´�.
		*/

		//Unit() {};

		Unit(const char* _name, int _damage)
		{
			name = new char[strlen(_name) + 1];
			strcpy_s(name, strlen(_name) + 1, _name);
			damage = _damage;
			printf("�̸� : %s\n", name);
			printf("���ݷ� : %d\n", damage);
		}
	};
}

using namespace Study17;

void main17()
{
	Unit* unitA = new Unit("����", 30);
	delete[] unitA->name;
}