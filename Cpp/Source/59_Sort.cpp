#include <stdio.h>

void main()
{
	/*
		* �������� ����
		ū ���ں��� ���� ���� ������ ����
	*/

	int num[10];

	for (int i = 0; i < 10; i++)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 9; i++) // 0 ~ 8���� �ݺ�
	{
		for (int j = 0; j < (9 - i); j++)
		{
			if (num[j] < num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("<%d>", num[i]);
	}

	printf("\n");
	/*
		* �ǽ�
		������������ ������ ���� ���
	*/

	for (int i = 0; i < 9; i++) // 0 ~ 8���� �ݺ�
	{
		for (int j = 0; j < (9 - i); j++)
		{
			if (num[j] > num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("<%d>", num[i]);
	}
}