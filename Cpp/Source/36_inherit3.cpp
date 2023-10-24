#include <stdio.h>

namespace Study36
{
	class Parent
	{
	private:
		int a;
	public:
		int b;
	protected:
		int c;
	};

	/* 
		* �������������
		�θ��� ����� ������ ����ϰų� �����ϴ� ���
		�ƹ��͵� �� ���� �⺻ private
		�θ����� ���������ڰ� �����Ǹ鼭 ������������ڵ� ���� ����ȴ�.
		public : �θ����� �ܺ� ���� ���
		protected : �θ����� �ڽĿ��Ը� ���
		private : �θ����� �ܺ�, �ڽĿ��� ���� �����
	*/
	
	class ChildA : protected Parent
	{
	public:
		ChildA(int _a, int _b, int _c)
		{
			//a = _a; // a������ private�̹Ƿ� ���� �Ұ�
			b = _b; // b������ public������ ������������ڰ� protected�̹Ƿ� �ܺ� ���� �Ұ�
			c = _c; // c������ protected�Ӽ��� �״�� �����ȴ�.
		}
	};

	class ChildB : private Parent
	{
	public:
		ChildB(int _a, int _b, int _c)
		{
			//a = _a;
			b = _b; 
			c = _c; 
		}
		ChildB(){}
	};

	class ChildC : public ChildB
	{
	public:
		ChildC(int _a, int _b, int _c)
		{
			//a = _a; // a, b, c ��� private
			//b = _b;
			//c = _c;
		}
	};
}

using namespace Study36;

void main36()
{
	Parent* parent = new Parent();
	parent->b = 10; // b�� public�̹Ƿ� b�� ���ٰ���

	ChildA* childA = new ChildA(1,2,3);
	//childA->b = 20; // �θ��� ����� protected ���������Ƿ� ��� �Ұ���

	delete childA;
	delete parent;
}
