#include <stdio.h>
#include <string.h>

namespace Study38
{
	class Actor
	{
	protected:
		char name[12];
	public:
		Actor(const char* _name)
		{
			printf("���� ����\n");
			strcpy_s(name, strlen(_name) + 1, _name);
		}
		~Actor()
		{
			printf("���� �Ҹ�\n");
		}
	};

	class Pawn : public Actor
	{
	protected:
		int dex;
	public:
		Pawn(const char* _name, int _dex) : Actor(_name)
		{
			printf("�� ����\n");
			dex = _dex;
		}
		~Pawn()
		{
			printf("�� �Ҹ�\n");
		}
	};
}

using namespace Study38;

void main38() 
{
	/*
		* ��ӽ� �ڽİ�ü ����
		�����Ϸ��� �ڵ����� �θ�ü�� �����.
		�ڽİ�ü�� �Ҹ��ϸ� �θ�ü�� ���� �Ҹ��Ѵ�.
		�������� : ���� ���� ���� (���� -> �θ� -> �ڽ�)
		�Ҹ���� : ������ ���߿� �Ҹ� (�ڽ� -> �θ� -> ����)

		*���Ŭ������ ȣȯ
		�������� ������ ��� �¿캯�� Ÿ���� ���ų� ������� ȣȯ�� �Ǿ����
		��Ӱ��迡 �ִ� Ŭ�������� ������ Ÿ���� �޶� ������� ȣȯ�� ����
		�θ�Ŭ������ �ڽ�Ŭ���� ������ ���
		�ڽ�Ŭ������ �θ�Ŭ���� ������ ������� ����
	*/

	int numA = 10;
	int numB = 20;

	numA = numB;

	float numC = 30.f;
	numA = numC; // ��ġ�� �ڷ����� ������� ȣȯ�� �ȴ�.


	Actor* actor = new Actor("����");
	Pawn* pawn = new Pawn("��", 10);

	Actor* ptrActor = actor;
	Pawn* ptrPawn = pawn;

	ptrActor = pawn; // �θ�Ŭ������ �ڽİ�ü ������ ���

	//ptrPawn = actor; // �ڽ�Ŭ������ �θ�ü ������ �Ұ���

	delete actor;
	delete pawn;

}