#include <stdio.h>

namespace Study47
{
	class Outer
	{
	public:
		class Inner
		{
		public:
			int inner;
			Inner(int _data) { inner = _data; }
		};

		int outer;
		Outer(int _data) { outer = _data; }
	};

	class Actor
	{
	public:
		class Pawn
		{
		public:
			class Character
			{
			public:
				int character;
				Character(int _data) { character = _data; }
			};
			int pawn;
			Pawn(int _data) { pawn = _data; }
		};
		int actor;
		Actor(int _data) { actor = _data; }
	};
}

using namespace Study47;

void main47()
{
	/*
		* ��øŬ����
		Ŭ���� �ȿ� Ŭ������ �����ϴ� ��
	*/

	Outer* outer = new Outer(10);
	Outer::Inner* inner = new Outer::Inner(20);

	printf("outer : %d\n", outer->outer);
	printf("inner : %d\n", inner->inner);
	

	delete outer;
	delete inner;

	/*
		* �ǽ�
		Actor, Pawn, Character��� �̸����� 3��ø Ŭ���� �����
		���� main�Լ��� ��ü�� ������ֱ�
	*/

	Actor* actor = new Actor(1);
	Actor::Pawn* pawn = new Actor::Pawn(2);
	Actor::Pawn::Character* character = new Actor::Pawn::Character(3);

	printf("actor : %d\n", actor->actor);
	printf("pawn : %d\n", pawn->pawn);
	printf("character : %d\n", character->character);

	delete actor;
	delete pawn;
	delete character;
}