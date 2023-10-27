#include <iostream>
#include <memory>

using namespace std;

namespace Study54
{
	class Archer
	{
	public:
		weak_ptr<class Monster> target; // ��������

		Archer() { cout << "��ó ����" << endl; }
		~Archer() { cout << "��ó �Ҹ�" << endl; }
	};

	class Monster
	{
	public:
		weak_ptr<class Archer> target;
		Monster() { cout << "���� ����" << endl; }
		~Monster() { cout << "���� �Ҹ�" << endl; }
	};

	class Actor1
	{
	public:
		weak_ptr<class Actor2> target;
		Actor1() { cout << "Actor1 ����" << endl; }
		~Actor1() { cout << "Actor1 �Ҹ�" << endl; }
	};

	class Actor2
	{
	public:
		weak_ptr<class Actor3> target;
		Actor2() { cout << "Actor2 ����" << endl; }
		~Actor2() { cout << "Actor2 �Ҹ�" << endl; }
	};

	class Actor3
	{
	public:
		weak_ptr<class Actor1> target;
		Actor3() { cout << "Actor3 ����" << endl; }
		~Actor3() { cout << "Actor3 �Ҹ�" << endl; }
	};
}

using namespace Study54;

void main()
{
	/*
		* ��������
		��ȯ���������� �ذ����ִ� ������
	*/

	shared_ptr<Archer> w_Archer(new Archer);
	shared_ptr<Monster> w_Monster(new Monster);
	
	w_Archer->target = w_Monster;
	w_Monster->target = w_Archer;
	cout << "��ó ������ ���� : " << w_Archer.use_count() << endl;


	/*
		* �ǽ�
		����ũ �����͸� ���� ��ü �����ϱ�
		����ũ ������ 1�� �� ���� ��ü ������ �����غ���
	*/

	unique_ptr<Archer> u_Archer(new Archer);
	unique_ptr<Archer> u_Archer2 = move(u_Archer);

	/*
		*�ǽ�
		���� �����͸� 3�� ���� ��ü �����ϱ�
		��ȯ������ ����� �������ͷ� �ذ��ϱ�
	*/

	shared_ptr<Actor1> w_Actor1(new Actor1);
	shared_ptr<Actor2> w_Actor2(new Actor2);
	shared_ptr<Actor3> w_Actor3(new Actor3);

	w_Actor1->target = w_Actor2;
	w_Actor2->target = w_Actor3;
	w_Actor3->target = w_Actor1;
}