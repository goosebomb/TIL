#include <stdio.h>

void main42() {

	/*
		����������
		������ ������ �޸� �ּҸ� �����ϴ� ����
		�������� ������

		
	
	*/

	int num = 10;            // ����
	int* numPtr = &num;		 // ������
	int** numPtr2 = &numPtr; // ����������

	printf("num�� �ּ� : %p\n", &num);
	printf("numPtr�� �ּ� : %p\n", &numPtr);
	printf("numPtr2�� �ּ� : %p\n", &numPtr2);

	printf("\n");

	printf("numPtr�� �� : %p\n", numPtr);
	printf("numPtr2�� �� : %p\n", numPtr2);

	printf("\n");

	printf("numPtr�� ������ �� : %d\n", *numPtr);
	printf("numPtr2�� ������ �� : %p\n", *numPtr2);

	printf("\n");

	printf("numPtr2�� ���� ������ �� : %d\n", **numPtr2);

	**numPtr2 = 99;

	printf("\n");
	printf("num�� �� : %d\n", num);

	printf("\n");

	// �ǽ�
	int a = 30;
	float b = 12.34f;
	char c = 'a';
	double d = 34.56;

	int* aPtr = &a;
	float* bPtr = &b;
	char* cPtr = &c;
	double* dPtr = &d;

	int** aPtr2 = &aPtr;
	float** bPtr2 = &bPtr;
	char** cPtr2 = &cPtr;
	double** dPtr2 = &dPtr;

	**aPtr2 = 30 * 2;
	**bPtr2 = 12.34f * 2;
	**cPtr2 = 'b';
	**dPtr2 = 34.56 * 2;

	printf("a : %d\n", **aPtr2);
	printf("b : %f\n", **bPtr2);
	printf("c : %c\n", **cPtr2);
	printf("d : %f\n", **dPtr2);
}