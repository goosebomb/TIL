#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct _Unit {
	char* name;
}Unit;

void main61() {
	/*
		��������
		������ ������ ����Ű�� ������ ���� �����Ͱ� �ƴ� �޸��ּҸ� �����ϴ� ���
	*/
	Unit unit;
	unit.name = malloc(sizeof(char) * 7);
	strcpy_s(unit.name, sizeof(char) * 7, "ȫ�浿");

	Unit warrior;
	// �����ͺ����� �����Ͱ� �ƴ� �޸��ּҰ��� ����ȴ�.
	// �̶� �Ϻ� �޸𸮸� �����ϸ� �������� �纻�� �ƴϰ� �ȴ�.
	warrior = unit;
	strcpy_s(warrior.name, sizeof(char) * 7, "����Ƽ");

	printf("���� : %s\n", unit.name);
	printf("���� : %s\n", warrior.name);

	strcpy_s(unit.name, sizeof(char) * 7, "�𸮾�");

	printf("���� : %s\n", unit.name);
	printf("���� : %s\n", warrior.name);

	free(unit.name); // ������� ���� ������ ����Ű�Ƿ� �� ���� �������ش�.
	//free(warrior.name); // �������� ���� �߻�
}