#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct _User {
	char* name;
}User;

typedef struct _Character {
	int damage;
	float speed;
	char* name;
}Character;

void main62() {
	/*
		* ���� ����
		�����͸���� �޸��ּҰ� �ƴ� �����Ͱ��� �����ϴ� ���
		�޸𸮸� ���Ӱ� �Ҵ��Ͽ� �����ͺ����� �Է½�Ŵ
		�������翡 ���� �۾��ð� �� ���ҽ��Ҹ� ����
	*/

	User wizard;
	wizard.name = malloc(sizeof(char) * 7);
	strcpy_s(wizard.name, sizeof(char) * 7, "������");

	User knight;
	knight = wizard; // ���� ����
	knight.name = malloc(sizeof(char) * 7);
	strcpy_s(knight.name, sizeof(char) * 7, wizard.name);

	strcpy_s(knight.name, sizeof(char) * 7, "����Ʈ");

	printf("���ڵ� : %s\n", wizard.name);
	printf("����Ʈ : %s\n", knight.name);

	free(wizard.name);
	free(knight.name);

	/*
		* �ǽ�
		Character ����ü�� �̿��Ͽ� ��������, �������� ���ֱ�
	*/

	Character user1;
	user1.name = malloc(sizeof(char) * 5);
	strcpy_s(user1.name, sizeof(char) * 5, "����");

	Character user2;
	user2 = user1;

	strcpy_s(user2.name, sizeof(char) * 5, "�ü�");

	printf("%s\n", user1.name);
	printf("%s\n", user2.name);

	free(user1.name);


	Character user3;
	user3.name = malloc(sizeof(char) * 7);
	strcpy_s(user3.name, sizeof(char) * 7, "�谳��");

	Character user4;
	user4 = user3;
	user4.name = malloc(sizeof(char) * 7);
	strcpy_s(user4.name, sizeof(char) * 7, user3.name);

	strcpy_s(user4.name, sizeof(char) * 7, "�ƹ���");

	printf("%s\n", user3.name);
	printf("%s\n", user4.name);

	free(user3.name);
	free(user4.name);

}