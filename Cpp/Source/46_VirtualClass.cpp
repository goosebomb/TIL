#include <stdio.h>

namespace Study46
{
	class A
	{
	protected:
		int a;
	public:
		A(int _a) { a = _a; }
	};
	class B : virtual public A
	{
	protected:
		int b;
	public:
		B(int _a, int _b) : A(_a) { b = _b; }
	};
	class C : virtual public A
	{
	protected:
		int c;
	public:
		C(int _a, int _c) : A(_a) { c = _c; }
	};
	class D : public B, public C
	{
	protected:
		int d;
	public:
		D(int _a, int _b, int _c, int _d) : A(_a), B(_a, _b), C(_a, _c)
		{
			a = _a;
			d = _d;
		}
	};

}

using namespace Study46;

void main46()
{
	/*
		* ������Ŭ����
		���߻���� ��� �� Ŭ������ �ι� ��ӹ޴� ��� ����� �ߺ��Ǿ� �޸𸮰� �����
		���� �ߺ��� ������� ��Ī�� �浹�ϰ� ��
		class A
		class B : public A
		class C : public A
		class D : public B, public C
		BŬ������ AŬ������ �ְ�, CŬ������ AŬ������ �ִ�.
		��������� DŬ������ AŬ������ 2�� ��ӹް� �ȴ�.
		�ߺ���� �ÿ� �� ���� ��ӹ޵��� �ϴ� ���� ������ Ŭ����
	*/
}