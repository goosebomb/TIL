#include <stdio.h>

namespace Study34
{
	class Unit
	{
	private:           // �ܺο��� ���� �Ұ�
		int luck;      // �⺻ ���ָ� ������ ����
	public:            // �ܺο��� ���� ����
		int damage;    // ���������� ������ ����
		int defence;
		int currentHp;
		float speed;
	public:
		void Attack()
		{
			printf("�⺻����\n");
		}
	};

	// Warrior�� �ڽ�Ŭ������ �ǰ� Unit�� �θ�Ŭ������ �ȴ�
	// Unit�� public����� ��� ��ӹް� �ȴ�.
	class Warrior : public Unit
	{
	public:
		int strength; // ���縸�� ������ ����
	public:
		Warrior()
		{
			//luck = 11; // private�� �ڽĿ��� ���ٺҰ�
			damage = 15;
			defence = 15;
			currentHp = 100;
			speed = 12.34f;
			strength = 15;
		}

		void MeleeAttack()
		{
			printf("���� ����!\n");
		}
	};

	class Archer : public Unit
	{
	public:
		int dex; // �ü����� Ư���� ����
	public:
		Archer()
		{
			damage = 10;
			defence = 10;
			currentHp = 100;
			speed = 12.34f;
			dex = 10;
		}

		void ArrowAttack()
		{
			printf("ȭ�� ����!\n");
		}
	};

	class Thief : public Unit
	{
	public:
		Thief()
		{
			damage = 13;
			defence = 13;
			currentHp = 90;
			speed = 13.57;
		}

		void DartAttack()
		{
			printf("ǥâ ����!\n");
		}
	};

	class Wizard : public Unit
	{
	public:
		int Int;
	public:
		Wizard()
		{
			damage = 9;
			defence = 9;
			currentHp = 80;
			speed = 11.22f;
			Int = 20;
		}

		void MagicAttack()
		{
			printf("���� ����!\n");
		}
	};
}

using namespace Study34;

void main34()
{
	/*
		* ���
		* ���� Ŭ������ ��Ȱ���Ѵ�.
		����κ��� ����Ŭ������ �����Ͽ� �ݺ��� ����
		�θ�Ŭ������ ���ϰ� �ִ� ������ �Լ��� �ڽ�Ŭ������ ���� �ִ� ��

	*/

	// �θ�Ŭ������ �ڽ�Ŭ������ ������ �Լ��� ����� �� ����.
	Unit* unit = new Unit();
	unit->currentHp = 10;
	unit->damage = 5;
	unit->Attack();
	delete unit;

	Warrior* warrior = new Warrior();
	warrior->Attack();
	warrior->MeleeAttack();
	delete warrior;

	Archer* archer = new Archer();
	archer->Attack();
	archer->ArrowAttack();
	delete archer;

	/*
		* �ǽ�
		Unit�� ��ӹ޴� Thief�� Wizard Ŭ���������
		Thief�� ǥâ���� ����� ������.
		Wizard�� �������ݱ�ɰ� ���ɽ����� �߰��� ������.
	*/

	Thief* thief = new Thief();
	thief->Attack();
	thief->DartAttack();
	delete thief;

	Wizard* wizard = new Wizard();
	wizard->Attack();
	wizard->MagicAttack();
	delete wizard;
}