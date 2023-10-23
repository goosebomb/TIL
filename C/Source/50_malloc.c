#include <stdio.h>
#include <malloc.h> // malloc ��ɾ� ���� �ʿ�

void main50() {

	/*
		���� �Ҵ�
		�����Ͻ� �޸𸮸� �Ҵ�
		���α׷� ����� �޸𸮰� �ڵ����� ����
	*/

	int num = 10; // �����Ҵ�
	float arr[3] = { 1.1f, 2.2f, 3.3f }; // �����Ҵ�

	/*
		* ���� �Ҵ�
		��Ÿ�ӽ� �޸𸮸� �Ҵ�(���� ��)
		����ڰ� ���� �޸𸮸� �����ؾ� ��(�߿�)
		���α׷� ���� ���� �ʿ��� ��ŭ�� �޸𸮸� �Ҵ�
		�̸� ���� ���� �Ҵ��ϸ� �޸𸮰� �����
		�������� �޸� �뷮�� �ſ� ������
		�޸� �뷮�� Ŀ�� ���ݵ� �޸� �뷮�� �ſ� ������
		�޸� �뷮�� Ŀ����ŭ ���α׷��� ��������� ����
	*/

	/*
		* �޸� ���� ��Ģ
		�ʿ��� ��ŭ�� ��û�Ͽ� �Ҵ�޾� ���
		�ü���� �޸𸮰� �����ִٸ� ��û�� �������� �ʴ´�
		���� �޸𸮰� ���ٸ� NULL�� ��ȯ�Ͽ� �޸� ������ �˸�
		�� ����� �޸𸮴� �ݵ�� �����ؼ� �ݳ��ؾ� �Ѵ�.(�߿�)
	*/

	/* 
		* �޸� ����(Memory Leak)
		�޸𸮸� �Ҵ��ϰ� �������� ������ �ý����� �޸𸮰� ��������
		�޸𸮰� �����ϴٸ� ���α׷��� ���� �����Ŵ
		�޸𸮸� �������� �ʾ� �޸� ��뷮�� �����ϴ� ���� �ǹ�
	*/
	
	// malloc : �����Ҵ� 
	// sizeof : ������ ũ��
	int* ptr = malloc(sizeof(int));
	*ptr = 5; // �����Ҵ�޴� �޸� ������ 5�� ���� �־���
	printf("ptr : %d\n", *ptr);
	free(ptr); // �޸� ����(����� �ʰ� ����)

	//int�� ũ�⸸ŭ 3���� ������ �Ҵ�
	int* arrPtr = malloc(sizeof(int) * 3);
	arrPtr[0] = 10;
	arrPtr[1] = 20;
	arrPtr[2] = 30;

	for (int i = 0; i < 3; i++) {
		printf("arrPtr[%d] : %d\n", i, arrPtr[i]);
	}
	free(arrPtr);

	/*
		* �����Ҵ� Ȱ��
	*/

	int* score;

	int cnt, result = 0;

	printf("�ο� �Է� : ");
	scanf_s("%d", &cnt); // �ο����� �Է¹���

	score = malloc(sizeof(int) * cnt); // �ο�����ŭ ��Ÿ�ӽ� �޸� �Ҵ�
	if (score == NULL) {
		printf("�޸� ����\n");
		return;
	}
	
	for (int i = 0; i < cnt; i++) {
		printf("%d��° �ο� ���� : ", i + 1);
		scanf_s("%d", &score[i]); // �������� �Է¹���
		result += score[i];
	}

	printf("���� : %d\n", result);
	printf("��� : %d\n", result / cnt);
	free(score); // �޸� ����

	/*
		* �ǽ�
		������ �Է¹޾Ƽ� ������ŭ float�� ���� �Է¹޴´�.
		float�� ���� ��� ���� ������ ��� ���
	*/

	float* score2;
	int cnt2;
	float result2 = 0;

	printf("�ο� �Է� : ");
	scanf_s("%d", &cnt2);

	score2 = malloc(sizeof(float) * cnt2);

	if (score2 == NULL) {
			printf("�޸� ����\n");
			return;
		}

	for (int i = 0; i < cnt2; i++) {
		printf("%d��° ���� : ", i + 1);
		scanf_s("%f", &score2[i]);
		result2 += score2[i]; 
	}

	printf("���� : %.2f\n", result2);
	printf("��� : %.2f\n", result2 / cnt2);
}