#include <stdio.h>
#include <Windows.h> //Sleep��ɾ� ��� �� �ʿ�

void main23() {
	
	// �ݺ���(while)
	// ������ �����ϸ� �ݺ�, ������ false�� ����
	// �ʱ��, �������� ���� ����.

	//int percent = 0;

	//while (percent <= 100) {
	//	percent++;
	//	printf(".");
	//	Sleep(30); // 0.03�� ���
	//}
	//printf("�ε� �Ϸ�\n");

	// �ǽ�
	// while���� ����Ͽ� 30���� 60������ ���� ���
	// ��, Ȧ���� ���ؾ� ��

	int num = 30;
	int sum = 0;

	while (num < 61) {
		num++;
		if (num % 2) {
			sum += num;
		}
	}
	printf("sum : %d", sum);

}