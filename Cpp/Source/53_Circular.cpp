#include <iostream>
#include <memory>

using namespace std;

namespace Study53
{
	class Hero
	{
	public:
		shared_ptr<class Monster> target;

		Hero() { cout << "���� ����" << endl; }
		~Hero() { cout << "���� �Ҹ�" << endl; }
	};

	class Monster
	{
	public:
		shared_ptr<class Hero> target;

		Monster() { cout << "���� ����" << endl; }
		~Monster() { cout << "���� �Ҹ�" << endl; }
	};
}

using namespace Study53;

void main53() 
{
	/*
		* ��ȯ ����
		���ΰ� ���θ� �����ϰ� �ִ� ����

		* ������������ ������
		��ȯ�����ÿ� �޸������� ���� �ʴ´�.
	*/

	shared_ptr<Hero> s_Hero(new Hero);
	shared_ptr<Monster> s_Monster(new Monster);

	// �Ҹ��� ���� �ʴ´�
	s_Hero->target = s_Monster;
	s_Monster->target = s_Hero;
}