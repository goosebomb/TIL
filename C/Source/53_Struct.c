#include <stdio.h>
#include <string.h> // strcpy_s ���� �ʿ�

void main53() {

	// strcpy_s
	// ���ڿ��� �����Ͽ� ������ �־��ִ� �Լ�
	char ch[11];

	strcpy_s(ch, sizeof(char) * 11,"�ȳ��ϼ���");
	printf("%s\n", ch);

	// ����ü
	// �ϳ� �̻��� ������ ���� ����� ���� �ڷ���
	

	struct Item {
		// ����ü�� �����ϴ� �������
		char name[11];
		int damage;
		float speed;
	};

	struct Item sword; // ����ü ��������

	strcpy_s(sword.name, sizeof(char) * 7, "�ռҵ�");
	sword.damage = 10;
	sword.speed = 12.34f;

	printf("sword.name   : %s\n", sword.name);
	printf("sword.damage : %d\n", sword.damage);
	printf("sword.speed  : %f\n", sword.speed);
	
	// typedef
	// �ڷ����� �̸��� ���Ӱ� ������
	// �ڷ����� ������

	typedef unsigned const int* const ucintc;
	ucintc ucintcPtr; // ���� ����

	typedef const float* cfloat;
	cfloat floatPtr;

	typedef struct _Person {
		char name[20];
		int age;
		char address[20];
	}Person; // struce _Person�̶�� ����ü�� Person�̶�� �̸����� ������

	Person person;
	strcpy_s(person.name, sizeof(char) * 7, "ȫ�浿");
	strcpy_s(person.address, sizeof(char) * 5, "��õ");
	person.age = 10;

	Person warrior;
	strcpy_s(warrior.name, sizeof(char) * 7, "������");
	strcpy_s(warrior.address, sizeof(char) * 7, "�丮��");
	warrior.age = 20;

	/*
		* �ǽ�
		Enemy����ü �����
		name, damage, health ���� �߰�
		eliteEnemy, bossEnemy, normalEnemy ����ü ���� �����
		���� ������ �־��ְ� �� ���
	*/

	typedef struct _Enemy {
		char name[20];
		int damage;
		int health;
	}Enemy;

	Enemy eliteEnemy;
	strcpy_s(eliteEnemy.name, sizeof(char) * 7, "����Ʈ");
	eliteEnemy.damage = 100;
	eliteEnemy.health = 2500;

	Enemy bossEnemy;
	strcpy_s(bossEnemy.name, sizeof(char) * 5, "����");
	bossEnemy.damage = 200;
	bossEnemy.health = 5000;

	Enemy normalEnemy;
	strcpy_s(normalEnemy.name, sizeof(char) * 5, "�Ϲ�");
	normalEnemy.damage = 30;
	normalEnemy.health = 1000;

	printf("\n");
	printf("eliteEnemy.name   : %s\n", eliteEnemy.name);
	printf("eliteEnemy.damage : %d\n", eliteEnemy.damage);
	printf("eliteEnemy.health : %d\n", eliteEnemy.health);
	printf("\n");
	printf("bossEnemy.name   : %s\n", bossEnemy.name);
	printf("bossEnemy.damage : %d\n", bossEnemy.damage);
	printf("bossEnemy.health : %d\n", bossEnemy.health);
	printf("\n");
	printf("normalEnemy.name   : %s\n", normalEnemy.name);
	printf("normalEnemy.damage : %d\n", normalEnemy.damage);
	printf("normalEnemy.health : %d\n", normalEnemy.health);
}