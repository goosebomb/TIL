#include <stdio.h>

namespace Study25
{
	class Enemy
	{
		friend class InfoManager;
	private:
		int currentHp = 10;
		int damage = 1;
	public:
		Enemy(int _currentHp, int _damage)
		{
			currentHp = _currentHp;
			damage = _damage;
			//info->isEnemy = true;
		}
	};

	class InfoManager
	{
		friend Enemy;
	private:
		bool isEnemy;
	public:
		void DisplayInfo(Enemy* enemy)
		{
			printf("�� ü�� : %d\n", enemy->currentHp);
			printf("�� ���ݷ� : %d\n", enemy->damage);
		}
	};
}

using namespace Study25;

void main25()
{
	/*
		* friend Ŭ����
		friend �Լ��� ģ���� �� Ŭ������ ��� ����� ���ٱ����� ��´�.
		friend Ŭ������ ģ���� �� Ŭ������ ��� ����� ���ٱ����� ��´�.
		friend Ŭ������ ������ ���ϴ� �ʿ� ������ ����� �Ѵ�.
	*/
	InfoManager info;

	Enemy* enemy = new Enemy(10, 20);

	info.DisplayInfo(enemy);
}