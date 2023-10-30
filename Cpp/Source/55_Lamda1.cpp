#include <iostream>
#include <string>

using namespace std;

namespace Study55
{
	// �Ϲ� �Լ�
	void Sum(int x, int y)
	{
		cout << "x + y : " << x + y << endl;
	}


}

using namespace Study55;

void main55()
{
	/*
		* �����Լ�(���ٽ�)
		�̸��� ���� �Լ�
		�̸��� �����Ƿ� 1���� ȣ���ϰų� �Լ������Ϳ� �־��� �뵵�� ���
	*/

	Sum(10, 20);

	// [] : ĸ�ĺ��
	// () : ��������
	// {} : �Լ�����
	// -> : ��ȯŸ��
	// () : ȣ��
	[](int x, int y)
	{
		cout << "x + y : " << x + y << endl;
	}(10, 20);

	// �Ű������� ���� �����Լ�
	[]()
	{
		cout << "�����Լ�!" << endl;
	}();

	// ��ȯ�� �ִ� �����Լ�
	int num = []() -> int // ��ȯŸ������
	{
		return 200;
	}();
	cout << "num : " << num << endl;

	char ch = [](char a, char b) -> char
	{
		return a + b;
	}(10, 20);
	cout << "ch : " << ch << endl;

	/*
		* �ǽ�
		float�� �Ű����� 3���� �޾Ƽ� ��� ���� ���� ����ϰ� �� ���� ��ȯ�ϴ� �����Լ� �����
	*/

	float mul = [](float v1, float v2, float v3) -> float
	{
		return v1 * v2 * v3;
	}(1.2f, 3.4f, 5.6f);
	cout << "mul : " << mul << endl;
}