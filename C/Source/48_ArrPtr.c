#include <stdio.h>

void main48() {
	// ��������� ���ÿ� �ʱⰪ�� �־������Ƿ�
	// �����Ϸ��� �ڵ����� �迭�� ũ�⸦ �ľ��Ѵ�.
	int arr[] = { 10,20,30,40,50 };

	printf("arr : %p\n", arr);
	//�迭�������� �迭�� ù �����ּ��̴�.
	int* ptr = arr;

	// ������ ������ ���� ������Ű�� �ڷ��� ũ�⸸ŭ ������ �̵�
	ptr++; // 4byte��ŭ ������ �̵�

	printf("1. ptr : %d\n", *ptr);
	ptr++;
	printf("2. ptr : %d\n", *ptr);
	ptr--;
	printf("3. ptr : %d\n", *ptr);

	/*
		* �ǽ�
		ũ�Ⱑ 5�� float�� �迭���� ����
		�����͸� �̿��Ͽ� 3��° �ε��� �� ���
		�����͸� �̿��Ͽ� 1��° �ε��� �� ���
	*/

	float array[] = { 1.0f,2.0f,3.0f,4.0f,5.0f };
	float* fPtr = array;

	fPtr += 3;
	printf("3. fPtr : %f\n", *fPtr);
	fPtr -= 2;
	printf("1. fPtr : %f", *fPtr);
}