#include <iostream>

using namespace std;

namespace Study44
{
	class Parent
	{
	public:
		Parent()
		{
			cout << "�θ� ����" << endl;
		}
		virtual ~Parent() // ���� �Ҹ���
		{
			cout << "�θ� �Ҹ�" << endl;
		}
	};

	class Child : public Parent
	{
	public:
		Child() 
		{
			cout << "�ڽ� ����" << endl;
		}
		~Child()
		{
			cout << "�ڽ� �Ҹ�" << endl;
		}
	};
}

using namespace Study44;

void main44() 
{
	//Parent* parent = new Parent();
	//delete parent;

	//Child* child = new Child();
	//delete child;

	// �θ������Ϳ� �ڽ��ν��Ͻ��� ������ �ڽ��� �޸���ü�� �ȵȴ�.
	// �θ������Ͱ� �θ��� �Ҹ��ڷ� �������ε� �Ǿ� �ֱ� �����̴�.
	// �θ��� �Ҹ��ڸ� ����Ҹ��ڷ� ������ �ڽĵ� ���� �޸������� �ȴ�.
	Parent* parent = new Child();
	delete parent;
}