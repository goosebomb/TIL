#include <stdio.h>

namespace Study49
{
	template <typename T>
	T MaxNum(T a, T b)
	{
		T result = a > b ? a : b;
		return result;
	}

	template <typename T1, typename T2>
	T1 MulNum(T1 a, T2 b)
	{
		T1 data1 = a;
		T2 data2 = b;
		return (data1 * data2);
	}

	template<typename T1, typename T2, typename T3>
	T1 MulThree(T1 a, T2 b, T3 c)
	{
		T1 d1 = a;
		T2 d2 = b;
		T3 d3 = c;
		return (d1 * d2 * d3);
	}
}

using namespace Study49;

void main()
{
	/*
		* �Ϲ�ȭ
		������ �ִ� 2�� �̻��� ������ ����� ��

		* ���ø�(Template)
		�Լ��� Ŭ������ �����ڷ������� ����� �� �ְ� �Ϲ�ȭ�� ��
		�Լ� ���ø�, Ŭ���� ���ø����� ��������
		�ڷ����� Ÿ���� �Ͻ÷� ���� �� ȣ���̳� ��ü�� ���鶧 �ڷ����� ������
	*/

	//�Լ����ø��� �Ű������� ���� �ڷ����� �����Ǹ� ���ø��� ������ �� �ִ�.
	int value = MaxNum<int>(10, 5);
	//int value = MaxNum(10, 5);
	printf("value : %d\n", value);

	float value2 = MaxNum<float>(12.34f, 45.67f);
	printf("value2 : %f\n", value2);

	char value3 = MaxNum<char>('a', 'b');
	printf("value3 : %c\n", value3);

	int value4 = MulNum<int, float>(10, 12.34f);
	printf("value4 : %d\n", value4);

	/*
		* �ǽ�
		���ø�����(�Ϲ�ȭ�ڷ���)�� 3�� ����ϴ� �Լ� �����
		��� ���� �� ��ȯ
		main�Լ����� ȣ��(���� �ٸ� �ڷ�������)
	*/

	float value5 = MulThree<float, char, int>(2.1f, 'a', 1);
	printf("value5 : %f\n", value5);
}