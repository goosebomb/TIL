#include <stdio.h>
#include <malloc.h>

void main51() {

	/*
		* ���� ���Ҵ�
		��Ÿ�ӽ� �޸𸮰����� �� Ȯ���ϰų� ���̴� ���
	*/

	int* ptr = malloc(sizeof(int) * 5); // 5�� ������ �Ҵ�

	for (int i = 0; i < 5; i++) {
		ptr[i] = i;
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}

	printf("\n");

	// ���� ���Ҵ����� ������ 10���� ������ش�.
	ptr = realloc(ptr, sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		ptr[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}

	free(ptr);

}