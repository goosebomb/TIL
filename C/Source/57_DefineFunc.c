#include <stdio.h>

#define DUBAE(num) num + num
#define JEGOB(a) a * a
#define ADD(a, b) a + b

void main57() {

	/*
		��ũ���Լ�
		#define�� �̿��Ͽ� �μ��� �޾� �Լ� �䳻�� ��
	*/

	printf("5�� 2�� : %d\n", DUBAE(5));
	//printf("5�� 2�� : %d\n", 5 + 5);

	int value = 6;
	//printf("value�� ���� : %d\n", JEGOB(++value));
	printf("value�� ���� : %d\n", ++value * ++value);

	printf("5 + 10 = %d\n", ADD(5, 10));

}