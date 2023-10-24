#include <stdio.h>

namespace Study39
{
	class Parent
	{
	public:
		void Print()
		{
			printf("�θ�Ŭ����\n");
		}
	};

	class Child : public Parent
	{
	public:
		void Print()
		{
			printf("�ڽ�Ŭ����\n");
		}
	};
}

using namespace Study39;

void main39()
{
	// �θ� �����Ϳ� �θ� �ν��Ͻ��� ������ �θ� �Լ��� ȣ��
	Parent* parent = new Parent();
	parent->Print();

	// �ڽ� �����Ϳ� �ڽ� �ν��Ͻ��� ������ �ڽ� �Լ��� ȣ��
	// �θ�� �ڽ��� �Լ��̸��� ������ �θ� �Լ��� ���ð� �ȴ�.
	Child* child = new Child();
	child->Print();

	// �θ� �����Ϳ� �ڽ��ν��Ͻ��� ������ �θ� �Լ��� ȣ��(�������ε�)
	Parent* ptrParent = new Child();
	ptrParent->Print();

	delete parent;
	delete child;

	/*
		* �������ε�
		�����Ͻ�(���ӽ�����) �θ������Ͱ� �θ��� �Լ��� ����Ǿ� 
		�ڽ��ν��Ͻ��� �־ �θ��� �Լ��� ȣ��Ǵ� ��
	*/
}