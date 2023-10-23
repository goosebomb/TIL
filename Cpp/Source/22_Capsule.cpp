#include <stdio.h>

namespace Study22
{
	class Capsule
	{
	public:
		// Getter : ����ȭ�� ������ ���� �� �ְ� ����
		int GetMoney()
		{
			return money;
		}
		// Setter : ����ȭ�� ������ ���� ����
		void SetMoney(int _money)
		{
			if (_money >= 0 && _money < 999) // ��ȿ�� �˻�
			{
				money = _money;
				printf("���� ���� �����\n");
			}

			else
			{
				printf("�߸��� ���� ���Դ�.\n");
			}
		}
	private:
		int money = 100; // �߿��� ��ȭ�̹Ƿ� �������� ���ϰ� privates
	};

	class FCapsule
	{
	public:
		float GetValue()
		{
			printf("�� ����\n");
			return value;
		}

		void SetValue(float _value)
		{
			if (_value >= 30.0f && _value <= 80.0f)
			{
				value = _value;
			}

			else
			{
				printf("�߸��� ��\n");
			}
		}
	private:
		float value = 1.0f;
	};
}

using namespace Study22;

void main22()
{
	/*
		* ĸ��ȭ
		��ü�� �Ӽ�(����)�� ����(�Լ�)�� �ϳ��� ���� ���� ���� �Ϻθ� ���߾� �����Ѵ�.
		����ڴ� ��ü�� �Լ��� ���� ������ �� �ִ�.
		��������� private, ��� �Լ��� public���� ����
		Ŭ������ ���뼺�� �������� ���鿡�� ���� ������ �ִ�.
		������ ĸ��ȭ�� �ϴµ� �ð��� ���� �ҿ�ȴ�.
	*/

	Capsule* capsule = new Capsule();

	printf("���� �ݾ� : %d\n", capsule->GetMoney());
	capsule->SetMoney(999);
	printf("���� �ݾ� : %d\n", capsule->GetMoney());

	capsule->SetMoney(-9);
	delete capsule;

	/*
		* �ǽ�
		float�� ���� �ϳ� �����
		�� ������ ���� 30���� 80���� ���� ���� �� �ִ�.
		���� ���� ������ "�� ����"�� ��µȴ�.
		ĸ��ȭ�� �̿��Ͽ� ����
	*/

	FCapsule* fCapsule = new FCapsule();
	printf("Value : %f\n", fCapsule->GetValue());
	fCapsule->SetValue(50.0f);
	printf("Value : %f\n", fCapsule->GetValue());
	fCapsule->SetValue(10.0f);

	delete fCapsule;
}