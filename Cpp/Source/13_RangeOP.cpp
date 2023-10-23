#include <stdio.h>

namespace Study13
{
	struct Person
	{
		char name[12];
		int age;
		float height;

		void PrintName()
		{
			printf("�̸� : %s\n", name);
		}

		void PrintAge(); // �Լ� ���� ����

		void PrintHeight();
	};

	/* 
		����ü �ٱ��� ����

		* ��������������(::)
		�Լ��� � ����ü�� ������� �˷��ִ� ����
	*/
	void Person::PrintAge()
	{
		printf("���� : %d\n", age);
	}

	void Person::PrintHeight()
	{
		printf("Ű : %f\n", height);
	}

	struct Enemy
	{
		int hp;
		int atk;
		char name[12];
		float armor;
		float atkSpeed;

		void PrintHp();
		void PrintAtk();
		void PrintEnemyName();
		void PrintArmor();
		void PrintAtkSpeed();
	};

	void Enemy::PrintHp()
	{
		printf("Hp : %d\n", hp);
	}

	void Enemy::PrintAtk()
	{
		printf("Atk : %d\n", atk);
	}

	void Enemy::PrintEnemyName()
	{
		printf("EnemyName : %s\n", name);
	}

	void Enemy::PrintArmor()
	{
		printf("Armor : %f", armor);
	}

	void Enemy::PrintAtkSpeed()
	{
		printf("AtkSpeed : %f\n", atkSpeed);
	}
}

using namespace Study13;
// using namespace : �ҽ����Ͽ��� namespace���� ������ Ǯ����

void main13()
{
	/*
		* ����ü
		C��� : ������ ����
		C++ : ������ �Լ��� ����
	*/
	
	Person hongGilDong = { "ȫ�浿", 10, 123.4f };
	hongGilDong.PrintName();
	hongGilDong.PrintAge();
	hongGilDong.PrintHeight();

	printf("\n");

	/*
		�ǽ�
		Study13 �ȿ� Enemy ����ü �����
		���� ���� ���� �ֱ�
		����Լ��� ���� ���� ���
		����Լ��� ����ü �ٱ��� ����
	*/

	Enemy enemy = { 100, 5, "���", 12.3f ,1.2f};
	enemy.PrintEnemyName();
	enemy.PrintHp();
	enemy.PrintAtk();
	enemy.PrintAtkSpeed();
	enemy.PrintArmor();
}