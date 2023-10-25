#include <stdio.h>

namespace Study41
{
	class Parent
	{
	public:
		void PrintA() // �Ϲ��Լ�
		{
			printf("�θ�Ŭ����\n");
		}
		virtual void PrintB() // �����Լ�
		{
			printf("�θ�Ŭ����\n");
		}
	};

	class Child : public Parent
	{
	public:
		void PrintA()
		{
			printf("�ڽ�Ŭ����\n");
		}
		virtual void PrintB()
		{
			printf("�ڽ�Ŭ����\n");
		}
	};
}

using namespace Study41;

void main41()
{
	/*
		* �����Լ�
		�θ�Ŭ�������� �ڽ�Ŭ�������� �������� ���� ����ϰ� ���� �Լ�
		virtual Ű���带 �Լ� �տ� �ٿ��� ���
		�����Լ��� �ڽ�Ŭ�������� �������� �������� ��ü��

		* �������ε�
		��Ÿ�ӽ� ��ü�� �Լ��� ����ȴ�.
		�θ������Ϳ� �ڽ��ν��Ͻ��� ������ �ش� �ڽĿ� �´� �Լ��� ȣ��ȴ�.
	*/

	Parent* parent = new Parent();
	Child* child = new Child();

	// �θ� �����Ϳ� �θ� �ν��Ͻ��� ������ �Ϲ�/�����Լ� ��� �θ��� �Լ��� ȣ��ȴ�.
	parent->PrintA();
	parent->PrintB();

	// �ڽ� �����Ϳ� �ڽ� �ν��Ͻ��� ������ �Ϲ�/�����Լ� ��� �ڽ��� �Լ��� ȣ��ȴ�.
	child->PrintA();
	child->PrintB();

	delete parent;
	parent = new Child();

	// �θ� �����Ϳ� �ڽ� �ν��Ͻ��� ������ �Ϲ��Լ��� �θ�Ŭ������ �Լ��� ȣ���(�������ε�)
	// �����Լ��� �ڽ�Ŭ������ �Լ��� ȣ���(�������ε�)
	parent->PrintA();
	parent->PrintB();

	delete parent;
	delete child;
}