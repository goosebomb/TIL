#include <iostream>
#include <string>

using namespace std;

void main56()
{
	/*
		�����Լ��� ĸ�ĺ��
		[] : "ĸó"��� �Ҹ��� �ܺκ����� ���� Ȥ�� �����Ͽ� ����� �� �ִ�.
	*/

	int a = 10, b = 20, c = 30, d = 40;
	cout << "ĸ�� ���� ����" << endl;
	[a, b ,c, d](int x, int y)
	{
		// ������ ���� �����ϹǷ� �б⸸ ����
		cout << "result : " << a + b + c + d << endl;
		cout << "x + y : " << x + y << endl;
	}(10, 20);

	cout << "ĸ�� ���� ����" << endl;
	[&a, &b, &c, &d](int x, int y)
	{
		a = x + y;
		b = x - y;
		c = x * y;
		d = x / y;
		cout << "a, b, c, d : " << a << b << c << d << endl;
	}(1, 2);
	// �����Լ����� ������ �����Ƿ� �ܺο����� ���� ����ȴ�
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;

	cout << "���� ��ü ����" << endl;
	// ĸ�Ŀ� [=]�� ���� �ܺκ����� ��� �����Ų��.
	[=]()
	{
		cout << a + b + c + d << endl;
	}();

	cout << "���� ��ü ����" << endl;
	// ĸ�Ŀ� [&]�� ���� �ܺκ����� ��� �����Ѵ�.
	[&]()
	{
		cout << a * b * c * d << endl;
	}();

	/*
		* �ǽ�
		��ȯ�ڷ����� ���� �����Լ��� ����� �Լ������Ϳ� �ְ� �Լ������͸� �̿��Ͽ� ȣ��
		��ȯ�ڷ����� float�� �����Լ��� ����� �Լ������Ϳ� �ְ� �Լ������͸� �̿��Ͽ� ȣ��
	*/

	auto ptr1 = [](){ cout << "��ȯ�ڷ��� ���� �����Լ�" << endl; };

	ptr1();


	
	auto ptr2 = []() -> float
	{
		return 12.34f;
	};

	cout << ptr2() << endl;

}