#include <stdio.h>

namespace Study23
{
	class Padding
	{
	public:
		int num; // 4byte
		int num2; // 4byte
		char ch; // 1byte
		char ch2; // 1byte
	};
}

using namespace Study23;

void main()
{
	/*
		* ����Ʈ �е�
		CPU�� �����͸� 4byte�� �д´�.
		���� ����ִ� ������ �ִٸ� �е�����Ʈ�� ä���� 4byte������ �����.
	*/
	Padding padding;
	printf("padding size : %d", sizeof(padding));
}