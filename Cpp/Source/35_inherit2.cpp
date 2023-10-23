#include <stdio.h>

namespace Study35
{
	class Parent
	{
	public:
		int a; // �ڽ�, �ܺ�, �ڽ�(����)���� ���� ����
	protected:
		int b; // �ڽ�, �ڽ�(����)���� ���ٰ���
	private:
		int c; // �ڽ�(����)������ ���ٰ���
	};

	class Child : public Parent
	{
	public:
		Child()
		{
			a = 10;
			b = 20;
			//c = 30; // private�� ���� ����
		}
	};
}

using namespace Study35;

void main()
{
	/*
		* ����������
		public : ����� �ܺο� ���� ���
		protected : ����� �ڽĿ��� ���� ���
		private : ����� �ڽŸ� ���� ���
	*/

	Child* child = new Child();
	child->a = 10; // public�� ���� ����
	//child->b = 20; // protected�� �ܺο��� ���� �Ұ�
	//child->c = 30; // private�� �ܺο��� ���� �Ұ�
	delete child;
}