#include <stdio.h>

namespace Study21
{
	class Access
	{
		// * Ŭ������ ���������ڸ� �Ⱦ��� private�̴�.
	public:
		int numA;
	private:
		int numB;
	public:
		void PrintA()
		{
			printf("numA : %d\n", numA);
		}
	private:
		void PrintB()
		{
			printf("numB : %d\n", numB);
		}
	};
}

using namespace Study21;

void main21()
{
	/*
		* ����������
		Ŭ������ ����� �ܺο��� ����� �� ���ų� ����� �� �ְ� ����
		��������� ���ټ����� ����
		�����̶� ������ 0.1�� ����
		public: �ܺο��� �������
		private : �ܺο��� ���ٺ����
		ȥ���Ҷ��� public, private������ ���ص� ����
		�u���ÿ� private������ �Ժη� ������� ���ϰ� �ϴ� �뵵
	*/

	Access* access = new Access();

	access->numA = 10;
	access->PrintA();

	delete access;
}