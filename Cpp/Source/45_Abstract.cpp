#include <stdio.h>

namespace Study45
{
	class Animal // �߻�Ŭ������� �θ���. (�ν��Ͻ� ���� �Ұ�)
	{
	public:
		void Eat() { printf("�Դ�.\n"); }
		void Breath() { printf("������.\n"); }
		virtual void Howling() = 0; // ���������Լ�
	};

	class Chicken : public Animal
	{
		// �θ��� ���������Լ��� �ڽĿ��� ������ �����ؾ� �Ѵ�.
		virtual void Howling() override
		{
			printf("������\n");
		}
	};
	class Cat : public Animal
	{
		virtual void Howling() override
		{
			printf("�߿�\n");
		}
	};
	class Tiger : public Animal
	{
		virtual void Howling() override
		{
			printf("����\n");
		}
	};

	/////////////////////////////////////////////

	class Machine
	{
	public:
		Machine()
		{
			printf("����\n");
		}
		virtual void Play() = 0;
	};
	class Fan : public Machine
	{
		virtual void Play() override
		{
			printf("����\n");
		}
	};
	class Computer : public Machine
	{
		virtual void Play() override
		{
			printf("���α׷���\n");
		}
	};

	class Scanner : public Machine
	{
		virtual void Play() override
		{
			printf("��ĵ\n");
		}
	};
}

using namespace Study45;

void main()
{
	/*
		* ���������Լ�
		���� �ְ� ������ ���� �Լ�
		�ڽ�Ŭ�������� ������ �����Ѵ�.
		���������Լ��� ������ �ִٸ� �� Ŭ������ �߻�Ŭ������� �θ���.
		�߻�Ŭ������ ��ü�� ���� �� ����.
	*/

	//Chicken* chicken = new Chicken();

	//Animal* animal = new Animal(); // �߻�Ŭ������ �ν��Ͻ��� ���� �� ����.
	Animal* animal = new Chicken();
	animal->Howling();
	delete animal;

	animal = new Cat();
	animal->Howling();
	delete animal;

	animal = new Tiger();
	animal->Howling();
	delete animal;

	/*
		* �ǽ�
		Machine Ŭ���� �����
		Machine�� Play�Լ��� �ڽĿ��� ������ �����Ѵ�.
		��� Machine�� "����"�� ����ϴ� ����� �ִ�.
		�����ϸ� ��� ��谡 �ٸ� ����� ����
		��ǳ��(Fan)�� "����" ���
		��ǻ��(Computer)�� "���α׷���" ���
		��ĳ��(Scanner)�� "��ĵ" ���
	*/

	Machine* machine = new Fan();
	machine->Play();
	delete machine;

	machine = new Computer();
	machine->Play();
	delete machine;

	machine = new Scanner();
	machine->Play();
	delete machine;

}