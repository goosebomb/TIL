#pragma warning(disable: 4996) // ������ ��ɾ� ���� ����

#include <stdio.h>
#include <time.h>

void main32() {

	/*
		* �ð�
		time_t�� 1970�� 1�� 1�� ������ �������� ����� �ʸ� ����
		1970�� 1�� 1���� "���� Ÿ��"�̶�� ��
		time_t�� ���̰� 32��Ʈ�� �Ұ��Ͽ� 2038�� 1�� 18�� ���� ���尡��
	*/

	// typedef : �ڷ����� �̸��� �ٲ���
	time_t now;
	time(&now);
	// ctime : �ð��� ���ڿ��� ��ȯ
	printf("����ð� : %s", ctime(&now));

	clock_t t1, t2;
	// clock() : ���α׷��� ������ �� ����� �ð��� ��ȯ
	t1 = clock();
	for (int i = 0; i < 1000; i++) {
		printf("%d ��° ���\n", i);
	}
	t2 = clock();

	double workTime = (t2 - t1) / (double)CLOCKS_PER_SEC;
	printf("%f �� �ɸ�\n", workTime);

}