#include <stdio.h>

void main15() {

	//int num = 10;
	//int result;

	//if (num == 10) {
	//	result = 100;
	//}

	//else {
	//	result = 200;
	//}

	//// ���׿�����
	//// (���ǽ�) ? (true�� ���) : (false�� ���)
	//result = (num == 10) ? 100 : 200;

	//printf("result: %d\n", result);

	// �ǽ�
	// �������� �Է¹޴´�
	// ���׿����ڸ� �̿��Ͽ� Ȧ����� "Ȧ��", ¦����� "¦��" ���

	int input;

	scanf_s("%d", &input);

	input % 2 == 0 ? printf("¦��") : printf("Ȧ��");

}