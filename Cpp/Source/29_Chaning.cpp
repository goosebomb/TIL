#include <stdio.h>

namespace Study29
{
	class Calculator
	{
	private:
		int value;
	public:
		Calculator(int _value) { value = _value; }

		Calculator& Add(int _value)
		{
			value += _value;
			return *this; // ��ü�� ��ȯ
		}

		Calculator& Sub(int _value)
		{
			value -= _value;
			return *this;
		}

		Calculator& Mul(int _value)
		{
			value *= _value;
			return *this;
		}

		int GetValue()
		{
			return value;
		}
	};

	class GameState
	{
	private:
		const char* state;
	public:
		GameState() { state = "\0"; }
		
		GameState& Start(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
		GameState& Ready(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
		GameState& Continue(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
		GameState& Exit(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
	};
}

using namespace Study29;

void main29()
{
	/*
		* ����������
		� ������ �ذ��� �� ��Ÿ���� �Ϲ����� �ڵ� ����

		* ����Լ� ü�̴� ����
		�۾����̴� ��ü�� ��ȯ�Ͽ� ����Լ��� ���������� ȣ���ϴ� ����
		���� : �ڵ� �� ���� ������ �� �ִ�.
		���� : ���� �ľ��� �����.

	*/

	Calculator* cal = new Calculator(10);
	cal->Add(5).Mul(55).Sub(5).Add(7);
	printf("value: %d\n", cal->GetValue());

	/*
		* �ǽ�
		GameState��� Ŭ������ �����
		"����" ����Լ�
		"�غ�" ����Լ�
		"����" ����Լ�
		"����" ����Լ�
		���� �Լ��� ����� ü�̴� �������� �Լ����� ������� ȣ��
	*/

	GameState* gamestate = new GameState();
	gamestate->Start("����").Ready("�غ�").Continue("����").Exit("����");
	delete gamestate;
}