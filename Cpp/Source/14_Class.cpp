#include <stdio.h>

namespace Study14
{
	class Human
	{
	// public : ���������� �� �ϳ�, �ܺο��� ��� ���� ���
	public:
		char name[12];
		int age;
		float height;

		void PrintName();
	};

	void Human::PrintName()
	{
		printf("�̸� : %s\n", name);
	}

	class Warrior
	{
	public:
		char name[12];
		int age;
		float height;
		float speed;
	};
}

using namespace Study14;


void main14()
{
	/*
		* Ŭ����(Class)
		������ �Լ��� ����
		����ü�� ���̰� ����. (���������� ���̸� �ִ�)

		* ��ü������ 4�� �Ӽ�
		ĸ��ȭ : ������ �Լ��� ���´�
		��Ӽ� : ����� ��Ҹ� �ڽĿ��� ������
		������ : �ٸ� ��ü�� ������ �޼����� �ٸ� ��� ����
		�߻� : �������� �κ�, Ư�� Ư���� �и��� ������
	*/

	Human babarian = { "�ٹٸ���", 13, 12.34f };
	babarian.PrintName();
	printf("���� : %d\n", babarian.age);
	printf("Ű : %f\n", babarian.height);

	printf("\n");

	/*
		�ǽ�
		Study14 �ȿ� Warrior Ŭ������ ����� ���翡 ������ ������ ����� �ش��� main�Լ����� ���� ���
	*/

	Warrior warrior = { "����", 23, 135.7f, 5.0f };
	printf("�̸� : %s\n", warrior.name);
	printf("���� : %d\n", warrior.age);
	printf("Ű   : %f\n", warrior.height);
	printf("�ӵ� : %f\n", warrior.speed);
}