#include <iostream>
#include <string>

using namespace std;

namespace Study57
{
	class Warrior
	{
	public:
		int num;
	};

	void Add()
	{
		cout << "add" << endl;
	}
}

using namespace Study57;

void main57()
{
	/*
		auto
		�ڷ����� �ڵ����� �ľ��ϴ� Ű����
		��������� ���ÿ� �ʱⰪ�� �־��־����
		�ʱ��ڷ����� �������� �ٸ� �ڷ������� �ٲ� �� ����.
	*/

	auto a = 10;
	auto b = 12.34f;
	auto c = 'c';
	auto d = "Hello";
	//a = "World";
	auto warrior = new Warrior();
	delete warrior;
	
	auto add = Add;
	
	auto lamda = []() {cout << "HelloWorld" << endl; };

	lamda();
	lamda();

	Add();
	Add();

}