#include <stdio.h>

/*
	* �Ű�����
	�Լ����� ���� ����
	�Լ� ȣ��� ���� �޾ƿ� �� �ִ�.
	ȣ��� �Ű������� ���� ���� "����"��� �Ѵ�
*/

void Dubae(int value) {  // value�� �Ű�����
	/*
		* ��������
		* �Լ� �ȿ� ����� ����
		* �Լ��� ������ �Ҹ��Ѵ�.
	*/
	int result = value * 2;
	printf("�ι� �� �� : %d\n", result);
}

int AddNum(int a, int b) {
	int result = a + b;
	printf("���� �� : %d\n", result);
	return result;
}

void SumAtoB(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	printf("%d���� %d������ �� : %d\n", a, b, sum);
}

void fTimes(float a, float b, float c) {
	float result = a * b * c;
	printf("��� ���� �� : %f\n", result);
}


void main29() {
	Dubae(3);  // 3�� ����

	AddNum(11, 22);

	// �ǽ�
	// 1. float�� �Ű����� 3���� �޾Ƽ� ��� ���Ѱ��� ����ϴ� �Լ� ����
	// 2. �Ű����� int a, int b�� ������ a���� b���� ��� ���� ���� ����ϴ� �Լ� ����

	fTimes(2.3f, 4.5f, 6.23f);
	SumAtoB(30, 60);
}