#include <stdio.h>
#include <conio.h>

void main18() {

	// switch - case ��
	// switch���� ������ �ݴ��Ѵ�.
	// �Ǵ��� ������ ���� case�� ����

	int input;
	printf("���� �Է� : ");
	scanf_s("%d", &input);

	switch (input) {
	case 5: // input ���� 5���
		puts("Five"); // ���ڿ� ��¹�
		break;
	case 3: // input ���� 3���
		puts("Three");
		break;
	case 10: // input ���� 10���
		puts("Ten");
		break;
	default: // ��� case�� ��ġ���� �ʴ´ٸ�
		puts("other");
		break;
	}

	// �ǽ�
	// ���� 1���� �Է¹޴´�.
	// switch-case���� Ȱ���Ͽ� �Է� ���� ���ڿ� ���� ���ڿ��� ���
	// a : "����" w : "������" defalut : "����Ʈ"

	int inputChar;
	char ch;
	printf("���� �Է� : ");
	ch = _getch();

	switch (ch) {
	case 'a':
		puts("����\n");
		break;
	case 'w':
		puts("������\n");
		break;
	case 'g':
		puts("��\n");
		break;
	default:
		puts("����Ʈ\n");
		break;
	}

}