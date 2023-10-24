#include <stdio.h>

namespace Study37
{
	class Printer
	{
	public:
		void Print()
		{
			printf("����Ʈ ���\n");
		}
	};

	class Scanner
	{
	public:
		void Scan()
		{
			printf("��ĵ ���\n");
		}
	};

	class FaxMachine
	{
	public:
		void Fax()
		{
			printf("�ѽ� ���\n");
		}
	};

	class MultiMachine : public Printer, public Scanner, public FaxMachine
	{
	public:
		void Multi() // ��ӹ��� ����� ��� ����� �� �ִ�.
		{
			Print();
			Scan();
			Fax();
		}
	};
}

using namespace Study37;

void main37()
{
	/*
		* ���߻��
		C++�� �ϳ��� Ŭ������ �θ�Ŭ������ ���� ���� ���� �� �ִ�.
		��ӹ��� ��� �θ�Ŭ������ ����� ����� �� �ְ� �ȴ�.
		C#�� ���߻���� �ȵȴ�.(1���� �θ� ���� �� �ִ�)
	*/

	MultiMachine* Multi = new MultiMachine();
	Multi->Fax();
	Multi->Print();
	Multi->Scan();
	Multi->Multi();
}