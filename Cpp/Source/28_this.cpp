#include <stdio.h>

namespace Study28
{
	class Game
	{
	private:
		int score;
		float speed;
	public:
		Game(int score, float speed)
		{
			/*
				* this
				��(�ڽ�)�� �ǹ�
				Ŭ������  ����Ű�� ������
			*/
			this->score = score;
			this->speed = speed;
		}
	};

	class Test
	{
	private:
		int damage;
	public:
		void MyDamage(int damage)
		{
			this->damage = damage;
		}
	};
}

using namespace Study28;

void main28()
{

}