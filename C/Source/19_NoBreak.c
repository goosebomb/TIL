#include <stdio.h>
#include <conio.h>

void main19() {

	//printf("�����Ͻðڽ��ϱ�?\n");
	//char ch = _getch();

	//switch (ch) {
	//// case�� break���� ���޾Ƽ� ���� ������ (||)�� ����.
	//case 'Y':
	//case 'y':
	//	puts("�����մϴ�.");
	//	break;
	//case 'N':
	//case 'n':
	//	puts("�����մϴ�.");
	//	break;
	//default:
	//	puts("�߸��ԷµǾ����ϴ�.");
	//	break;
	//}

	// �ǽ�
	// ���ڸ� �Է¹޾Ƽ� switch���� Ȱ���Ͽ� 
	// 'W', 'w', 'S', 's'�� �Է¹����� "���Ʒ�"���
	// 'A', 'a', 'D', 'd'�� �Է¹����� "�¿�"���

	printf("���� �Է�: ");
	char _ch = _getch();
	printf("%c\n", _ch);

	switch (_ch) {
	case 'W':
	case 'w':
	case 'S':
	case 's':
		puts("���Ʒ�");
		break;
	case 'A':
	case 'a':
	case 'D':
	case 'd':
		puts("�¿�");
		break;
	default:
		puts("�������� �Է�");
		break;
	}
}