#include <stdio.h>
#include <iostream>
#include <memory> // ����ũ ������ ���� �ʿ�

using namespace std;

namespace Study51
{
	class Hero
	{
	public:
		Hero() { cout << "���� ����" << endl; }
		~Hero() { cout << "���� �Ҹ�" << endl; }

		void Attack() { cout << "���� ����" << endl; }
	};
}

using namespace Study51;

void main51()
{
	/*
		* ����Ʈ ������
		new�� ����ؼ� �����Ҵ��� �ϸ� �޸������� ���־�� ��
		����Ʈ �����ʹ� ����� ���� �޸𸮸� �ڵ����� ��������

		* ����ũ ������
		����Ʈ ������ ���� �� �ϳ�
		�ϳ��� ����ũ�����͸��� ��ü�� �����Ѵ�. (������)
		����ũ �����Ͱ� ��ü�� �������� ������ ���� ���� ��ü�� �����Ѵ�.
	*/

	Hero* hero = new Hero();
	unique_ptr<Hero> u_hero(hero);

	// get() : �����ϰ� �ִ� ��ü�� ��ȯ
	u_hero.get()->Attack();

	// ����ũ�����ʹ� ��ü�� 1���� ����ũ�����͸��� ������ �� �ִ�.
	// move�Լ��� ���� �������� ������ �� �ִ�.
	unique_ptr<Hero> u_hero2 = move(u_hero);

	/* 
		����Ʈ������ ���� �����ϴ� ��� (�����ϸ� ����)
		1. Ŭ���� ���ø�
		2. ������
		3. �޸� ����
		4. ������ �����ε�
	*/

}