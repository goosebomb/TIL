#include <stdio.h>

// ��ȯ�ڷ��� �Լ��̸�()
// ��ȯ�ڷ��� : �Լ��� ȣ���� ������ ���� �ѱ涧 ���� �ڷ���
// �Լ��̸� : �Լ��� ����Ҷ� �̸�
int Hello() {
	printf("Hello\n");
	return 5; // �Լ��� �����Ű�� ���� ȣ���� ������ �ѱ�(��ȯ)
	// ��ȯ�� ���� ���� ���ϸ� �Ҹ��
}

float Unreal() {
	printf("Unreal\n");
	return 12.34f;
}


void main27() {

	/*
		* �Լ�
		Ư���뵵�� �ڵ带 �Ѱ��� ��Ƴ��� ��
		�Լ� �ȿ� �Լ��� ���� �� ����.
		main�Լ� ���� �ۼ��ؾ� �Ѵ�.
	*/

	int value = Hello(); // �Լ� ȣ��(�Լ��� ���)
	printf("value : %d\n", value);

	/*
		* �ǽ�
		"Unreal"�� ����ϴ� �Լ� �����
		12.34f���� ��ȯ�ؾ� �Ѵ�
	*/

	float fValue = Unreal();
	printf("fValue : %.2f\n", fValue);

}