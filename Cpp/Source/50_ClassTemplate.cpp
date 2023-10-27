#include <stdio.h>

namespace Study50
{
	class Vector
	{
	public:
		float x, y, z;
	};

	template<typename T>
	class Test
	{
	public:
		T value; // �ڷ����� �������� ���� �������
		T* ptrValue;
		Test(T _value) { value = _value; }
		Test(T* _value) { ptrValue = _value; }

		T GetValue()
		{
			return value;
		}
	};

	template<typename T1, typename T2>
	class Player
	{
	public:
		T1 value;
		T2 value2;
	};
}

using namespace Study50;

void main50()
{
	/*
		* Ŭ���� ���ø�
		�Լ����ø��� ��ɸ� ����� Ÿ��(�ڷ���)�� �������� ���� �Լ��� �Ϲ�ȭ
		Ŭ���� ���ø��� Ÿ���� �������� ���� Ŭ������ �Ϲ�ȭ
		�Լ����ø��� ���ø��μ��� �ڷ����� ȣ��� �ۼ����� �ʾƵ� ��(�Ű������� ���� �ľ��� ������ ���)
		Ŭ���� ���ø��� ���ø��μ��� �ڷ����� �ݵ�� ����ؾ� ��
	*/

	Test<int>* a = new Test<int>(5);
	printf("value : %d\n", a->GetValue());
	delete a;

	Test<Vector>* vec = new Test<Vector>(new Vector());
	vec->value.x = 1.f;
	vec->value.y = 2.f;
	vec->value.z = 3.f;
	printf("vec.x : %f\n", vec->GetValue().x);
	delete vec;
}