#include <stdio.h>

namespace Study31
{
	class Something 
	{
	public:
		int value;
	public:
		Something() : value(0) {}
		void SetValue(int _value) { value = _value; }
		int Getvalue() { return value; }
		/* �������Լ� */
		int GetConstValue() const
		{ 
			//SetValue(5); // �Ϲ� ����Լ� ȣ�� �Ұ�
			return value; 
		}
	};
}

using namespace Study31;

void main31()
{
	/*
		* const ��ü
		const Ű���带 ����Ͽ� ��� ��ü�� ����
		��ü�� ��������� ���� ���� �Ұ�, �б⸸ ����
		getter�� setter ��� ��� �Ұ����ϴ�.

		* �������Լ�
		�����ü�� �������Լ��� ��������� ȣ�� ����
		�������Լ����� ��������� ���� �Ұ�
		�������Լ� �ȿ��� ���� ����Լ� ȣ�� �Ұ�
	*/
	const Something something; // ��� ��ü
	
	//something.value = 5;   // ������� �� ���� �Ұ�
	//something.SetValue(5); // Setter ���Ұ�
	//something.GetValue();  // Getter ���Ұ�

	printf("value : %d\n", something.value); // ������� �б� ����

	// �����ü�� �������Լ��� ȣ�� ����
	int data = something.GetConstValue();

	printf("value : %d\n", data);
}