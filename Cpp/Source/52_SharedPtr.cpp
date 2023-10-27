#include <iostream>
#include <memory> // ����Ʈ������

using namespace std;

namespace Study52
{
	class Monster
	{
	public:
		Monster() { cout << "���� ����" << endl; }
		~Monster() { cout << "���� �Ҹ�" << endl; }

		void Attack() { cout << "���� ����" << endl; }
	};
}

using namespace Study52;

void main52()
{
	/*
		* ����������
		Ư�� ��ü�� �����ϰ� �ִ� ����Ʈ �����Ͱ� �� ������ �� �� �ִ� ����Ʈ ������
		�����ϰ� �ִ� Ƚ���� "���� Ƚ��"��� ��
	*/

	Monster* monster = new Monster();
	shared_ptr<Monster> s_MonsterA(monster);
	s_MonsterA->Attack();

	shared_ptr<Monster> s_MonsterB(s_MonsterA);
	cout << "���� ���� Ƚ�� : " << s_MonsterA.use_count() << endl;
	shared_ptr<Monster> s_MonsterC(s_MonsterB);
	cout << "���� ���� Ƚ�� : " << s_MonsterC.use_count() << endl;

	s_MonsterC.reset();
	cout << "���� ���� Ƚ�� : " << s_MonsterA.use_count() << endl;
}