#include <stdio.h>

enum Days {
	// �������� ���ڸ� �ȳ����� 0���� ���۵ȴ�.
	// ���� ���ڴ� 1�� �����Ѵ�.
	Sun,
	Mon,
	Tue,
	Wed = 10,
	Thu,
	Fri,
	Sat
}; // ������ ����(���� : ����� ����)

enum State {
	idle,
	move,
	death,
	attack = 9
};

void main25() {

	// ������
	// ������ ������ �����س��� ����� ���� �ڷ���
	// ������ ���̰� �������� ���� �� �ִ�
	// �ǹ̸� ���� �ľ��� �� �ִ�.

	char mon[7] = "������"; // ���ڿ��� ��Ÿ���ɼ��� �ִ�;

	enum Days day; // ������ ���� ����
	day = Mon;

	if (day == Mon) {
		printf("������ �Դϴ�.\n");
	} 

	else if (day == Sun) {
		printf("�Ͽ��� �Դϴ�.\n");
	}

	/*
	�ǽ�
	State��� �̸��� ������ �����
	idle, move, attack, death ���°� �ִ�.
	attack�� 9�� ���� ������.
	main�Լ����� ���� ������ attack���� �־��ֱ�
	attack ���¶�� "����" ���
	*/

	enum State state;
	state = attack;


	if (state == attack)
		printf("���� (attack : %d)", state);


}