#include <stdio.h>

namespace Study10
{
	/*
		* ����Ʈ�μ�
		�Űܺ����� �⺻���� �����ϴ� ��
		�⺻���� �����ߴٸ� ȣ��� ���ڸ� ������ �� �ִ�
		���ڸ� �����ϸ� �⺻���� ����
		���� ����Ѵٸ� �⺻���� ���ð� �ȴ�
	*/
	void ParamPrint(int value = 0)
	{
		printf("�Ű����� : %d\n", value);
	}

	int GetSum(int from, int to, int step = 1, int base = 0)
	{
		int sum = base;
		for (int i = from; i <= to; i += step)
		{
			sum += i;
		}
		return sum;
	}
}

void main10()
{
	Study10::ParamPrint();
	Study10::ParamPrint(55);

	int result = Study10::GetSum(1, 20);
	printf("1 ~ 20������ �� : %d\n", result);
	result = Study10::GetSum(5, 50, 3);
	printf("5 ~ 50�̸� 3step �ǳʶ� �� : %d\n", result);
	result = Study10::GetSum(10, 30, 2, 15);
	printf("15 ~ 35�� �� Ȧ���� : %d\n", result);
}