#include <stdio.h>

void main20() {

	// �ݺ���(for)
	// for(�ʱ��; ���ǽ�; ������)
	// �ʱ�� - �������� �� �ʱⰪ �Ҵ�
	// ���ǽ� - ������ true�� �ݺ�, false�� �ݺ�����
	// ������ - �ݺ��Ҷ����� ������ ���� ���� Ȥ�� ����

	for (int i = 0; i < 3; i++) {
		printf("Hello World\n");
		// for ������ ����� ������ for ���� ������ �Ҹ��Ѵ�.
	}

	// �ǽ�
	// for���� �̿��Ͽ� "Unreal"�� 10�� ���

	for (int i = 0; i < 10; i++) {
		printf("Unreal\n");
	}

	for (int i = 0; i < 5; i++) {
		printf("%d��° �ݺ�\n", i);
	}

	// ���ҽ� ���
	for (int i = 10; i > 0; i--) {
		printf("%d��° ����\n", i);
	}

	// 2�� ����
	for (int i = 0; i < 10; i += 2) {
		printf("¦��: %d\n", i);
	}

	// �ǽ�
	// for���� �̿��ؼ� 1~100���� ���� ���
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1 ~ 100������ �� : %d", sum);

	// 2�� for��
	// for�� �ȿ� for���� �ִ� ��

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("j: %d ", j);
		}
		printf("// i : %d\n", i);
	}
}