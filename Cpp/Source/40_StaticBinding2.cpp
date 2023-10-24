#include <stdio.h>
#include <stdlib.h>
#include <time.h>

namespace Study40
{
	class Newbie // �ʺ���
	{
	public:
		int currentHp = 100;

		void Hit(int damage)
		{
			currentHp -= damage;
			printf("���� ü�� : %d\n", currentHp);
		}
	};

	class Warrior : public Newbie
	{
	public:
		void Hit(int damage)
		{
			currentHp -= damage / 2; // ���� �нú� - ������ 50% ����
			printf("���� ������ ���� ü�� : %d\n", currentHp);
		}
	};

	class Thief : public Newbie
	{
	public:
		void Hit(int damage)
		{
			int rnd = rand() % 2; // 50% Ȯ���� ȸ��
			if (rnd == 0) { printf("ȸ��\n"); }
			else
			{
				currentHp -= damage;
				printf("ȸ�ǽ��� : %d\n", currentHp);
			}
		}
	};

	class Monster
	{
	public:
		int power = 10;
		void Attack(Newbie* hitter)
		{
			// 3�� �����߿� ������� ������ �𸣹Ƿ� �θ�Ŭ������ �������
			hitter->Hit(power);
		}
	};
}

using namespace Study40;

void main()
{
	/*
		* ���ε�
		���ε��� �����ϴ� ��
		Ŭ�������� �Լ��� �޸𸮿� �ѹ� �ö�
		�Լ��� �޸𸮿� �ö󰡰� �Լ� �����͸� ���Ͽ� �Լ��� ����
		�� �Լ������Ͱ� �Լ��� ����Ű���� �ϴ°��� ���ε�

		* �������ε�
		�����Ͻ� ȣ��� �Լ��� �̹� �����Ǿ������ ��

		* �������ε�
		Ŭ������ ���鶧 �Լ��� ���ε� ���� �ʰ� �����ȴ�.
		��Ÿ�ӽ� ȣ��� �Լ��� ����
	*/
	Newbie* newbie = new Newbie();
	Warrior* warrior = new Warrior();
	Thief* thief = new Thief();

	Monster* monster = new Monster();

	srand((unsigned)time(NULL));

	monster->Attack(newbie);
	monster->Attack(warrior);
	monster->Attack(thief);

	delete newbie;
	delete warrior;
	delete thief;
	delete monster;
}