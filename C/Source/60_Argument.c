#include <stdio.h>
#include <stdarg.h> // �������ڰ��� �������

void intArgument(int args, ...) {
	va_list ap; // ���������� ù �����ּҸ� ����ų ������
	va_start(ap, args);// ap�����Ϳ� args�� �ּҸ� �־���

	for (int i = 0; i < args; i++) {
		int num = va_arg(ap, int); // int�� ũ�⸸ŭ ap�� �޸��ּҸ� �ű�
		printf("���� : %d\n", num);
	}
	va_end(ap); // ap������ null�� �ʱ�ȭ
}

void charArgument(char args, ...) {
	va_list ap; // ���������� ù �����ּҸ� ����ų ������
	va_start(ap, args);// ap�����Ϳ� args�� �ּҸ� �־���

	for (int i = 0; i < args; i++) {
		char ch = va_arg(ap, char); // char�� ũ�⸸ŭ ap�� �޸��ּҸ� �ű�
		printf("���� : %c\n", ch);
	}
	va_end(ap); // ap������ null�� �ʱ�ȭ
}

void main60() {

	intArgument(1, 10);
	intArgument(3, 50, 60, 70);
	intArgument(5, 1, 2, 3, 4, 5);
	
	charArgument(1, 'x');
	charArgument(3, 'a', 'b', 'c');
}