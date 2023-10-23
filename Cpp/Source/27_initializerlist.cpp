#include <stdio.h>

namespace Study27
{
	class Simple
	{
	private:
		int value;
		float speed;
	public:
		/*
			�������ʱ�ȭ ����Ʈ
			������ ���� :(�ݷ�)���� ��������� ���� �ʱ�ȭ
		*/
		Simple() : value(10), speed(12.34f)
		{
			printf("value : %d\n", value);
			printf("speed : %f\n", speed);
		}
		Simple(int _value, float _speed) : value(_value), speed(_speed)
		{
			printf("value : %d\n", value);
			printf("speed : %f\n", speed);
		}
	};

	class Practice
	{
	private:
		int a;
		char b;
		float c;
	public:
		Practice() : a(3), b('e'), c(4.2f)
		{
			printf("a : %d\n", a);
			printf("b : %c\n", b);
			printf("c : %f\n", c);
		}

		Practice(int _a, char _b, float _c) : a(_a), b(_b), c(_c)
		{
			printf("a : %d\n", a);
			printf("b : %c\n", b);
			printf("c : %f\n", c);
		}
	};
}

using namespace Study27;

void main27()
{
	Simple* simple = new Simple();
	Simple* simple2 = new Simple(99, 98.76f);

	delete simple;
	delete simple2;

	/*
		* �ǽ�
		Ŭ������ ���� ���� ���� �ٸ� �ڷ������� 3���� ������� �־��ֱ�
		������ �ʱ�ȭ����Ʈ�� ������� �� �־��ֱ�
		������ 1���� �Ű����� ����
		�ι�° �����ڴ� �Ű����� 3���� ���ؼ� ������� �ʱ�ȭ
	*/

	Practice* practice = new Practice();
	Practice* practice2 = new Practice(22, 'h', 2.2f);

	delete practice;
	delete practice2;


}