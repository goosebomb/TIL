#include <stdio.h>

void main58()
{
	/*
		* �˻��˰���
		���ϴ� ���� ã�� ���
	*/

	int data[] = { 1,3,5,7,9 };
	int search;
	bool isFlag = false;
	int index = -1;

	printf("�˻��� �� : ");
	scanf_s("%d", &search);

	// * �����˻�
	for (int i = 0; i < 5; i++)
	{
		if (search == data[i])
		{
			isFlag = true;
			index = i;
			break;
		}
	}

	if (isFlag)
	{
		printf("ã�� �� : %d\n", search);
		printf("ã�� ��ġ :%d\n", index);
	}
	else
	{
		printf("ã�� ���߽��ϴ�.");
	}

	/*
		* �ǽ�
		float�� �����͸� 10�� ����� �������� �˻��Ͽ� ã�� ���� �ε��� ��ȣ ���
	*/

	float dataSet[] = { 1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f, 8.f, 9.f, 10.f };
	float search2;
	bool isFlag2 = false;
	int index2 = -1;

	printf("�˻��� �� : ");
	scanf_s("%f", &search2);

	for (int i = 9; i >= 0; i--)
	{
		if (search2 == dataSet[i])
		{
			isFlag2 = true;
			index2 = i;
			break;
		}
	}

	if (isFlag)
	{
		printf("ã�� �� : %f", search2);
		printf("ã�� ��ġ : %d", index2);
	}

	else
	{
		printf("ã�� ���߽��ϴ�.");
	}
}