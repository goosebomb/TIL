#include <stdio.h>

namespace Study43
{
	class Parent
	{
	public:
		virtual void FuncA() { printf("�θ�Ŭ����\n"); }
		virtual void FuncB(int num) {}
		virtual void FuncC() const {}
		virtual void FuncD() {}
	};

	class Child : public Parent
	{
	public:
		virtual void FuncA() override
		{
			Parent::FuncA(); // �θ��� �Լ� ȣ��
			printf("�߰����\n");
		}
		virtual void FuncB(int num) override {}
		virtual void FuncC() const override {}
		virtual void FuncD() final {}
		// final : �Լ� �����Ǹ� �ڽĿ��� ���ϰ� ��
	};

	class GrandChild : public Child
	{
	public:
		//void FuncD() {} // final�Լ��� �����ǰ� �Ұ�
	};
}

using namespace Study43;

void main43()
{
	/*
		* override
		�Ƚᵵ ����� �Ȱ���. (���� ����.)
		�׷��� �����Լ� ���� ������� (�ʼ�)
		�ڽĿ��� ����Ѵ�

		* override�� ����ϴ� ����
		1. ������ - �Լ��� ������ �Ǿ����� ���� �ľ�
		2. ������ - �θ��Լ��� �ٸ��� ������ �߻���Ų��. -> ������ ���� ������ �� �ִ�.
	*/
}