#include <stdio.h>
#include <stdlib.h>
#include <time.h>

namespace Study42
{
	class Newbie // �ʺ���
	{
	public:
		int currentHp = 100;
		virtual void Hit(int& damage)
		{
			currentHp -= damage;
			printf("���� ü�� : %d\n", currentHp);
		}

	};

	class Warrior : public Newbie // ����
	{
	public:
		virtual void Hit(int& damage)
		{
			currentHp -= damage / 2;
			printf("���� �ް� ���� ü�� : %d\n", currentHp);
		}
	};

	class Thief : public Newbie // ����
	{
	public:
		virtual void Hit(int& damage)
		{
			int rnd = rand() % 2;
			if (rnd)
			{
				printf("ȸ�Ǽ���\n");
			}
			else
			{
				currentHp -= damage;
				printf("ȸ�� ���� ���� ü�� : %d\n", currentHp);
			}
		}
	};

	class Monster
	{
	public:
		void Attack(Newbie* hitter)
		{
			int power = 10;
			hitter->Hit(power);
		}
	};
}

using namespace Study42;

void main42()
{
	srand((unsigned)time(NULL));

	Newbie* newbie = new Newbie();
	Warrior* warrior = new Warrior();
	Thief* thief = new Thief();
	Monster* monster = new Monster();

	monster->Attack(newbie);
	monster->Attack(warrior);
	monster->Attack(thief);

	delete newbie;
	delete warrior;
	delete thief;
	delete monster;
}