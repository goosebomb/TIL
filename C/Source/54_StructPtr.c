#include <stdio.h>
#include <string.h>

typedef struct _Human {
	char name[12];
	int age;
	float height;
}Human;

void main54() {

	Human hong = { "ȫ�浿", 10, 123.45f };
	Human* ptrHong = &hong;

	// ����ü �����ʹ� ������������(*)�� ����ü�� ã�� .�����ڷ� ����� �����Ѵ�.
	printf("�̸� : %s\n", (*ptrHong).name);
	printf("���� : %d\n", (*ptrHong).age);
	printf("Ű : %f\n", (*ptrHong).height);

	// ->������
	// (*����ü������).��� �� �����ϰ� ���� ���
	
	ptrHong->age = 50; // (*ptrHong).age = 50;

	/*
		* �ǽ�
		ptrHong�� �̿��Ͽ� ->�����ڷ� �̸�, ����, Ű�� ���� �ٲٰ� ���� ���� ���
	*/

	ptrHong->height = 173.5;
	ptrHong->age = 26;
	strcpy_s(ptrHong->name, sizeof(char) * 7, "�����");

	printf("\n");

	printf("�̸� : %s\n", ptrHong->name);
	printf("���� : %d\n", ptrHong->age);
	printf("Ű : %.1f\n", ptrHong->height);

	system("PAUSE"); // �Ͻ�����

}