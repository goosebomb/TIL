#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main35() {

	// ������ ����
	// rand()�Լ��� ������ 0 ~32767�� ������ �Ǿ� �ִ�.
	// % ������ ����ϸ� ���� ���� ����

	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) {
		printf("���� : %d\n", rand() % 10); // 0 ~ 9������ ����
	}

	// �ǽ�
	// ������ �̿��Ͽ� �����ϰ� "����", "����", "��" �� 1�� ���

	switch (rand() % 3)
	{
	case 0:
		printf("����");
		break;
	case 1:
		printf("����");
		break;
	case 2:
		printf("��");
	default:
		break;
	}

}