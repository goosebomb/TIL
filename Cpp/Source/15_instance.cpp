#include <stdio.h>
#include <string.h>

namespace Study15
{
	class Product
	{
	public:
		char name[12]; // �̸�
		int price; // ����
		void Print();
	}; // Ŭ���� ����(Ŭ������ ����� ����)

	void Product::Print()
	{
		printf("��ǰ�� : %s\n", name);
		printf("���� : %d\n", price);
	}
}

using namespace Study15;

void main()
{

	/*
		* Ŭ����/��ü/�ν��Ͻ�
		Ŭ����(Class)      : ������ �Լ��� ����(���)
		��ü(Object)       : Ŭ������ �̿��Ͽ� ���� �����(��� ������ ����)
		�ν��Ͻ�(Instance) : ���� �޷θ��� ������ ��밡���� ����
	*/

	Product gamja; // ��ü + �ν��Ͻ�(��밡���� ����)

	strcpy_s(gamja.name, sizeof(char) * 5, "����");
	printf("�̸� : %s\n", gamja.name);

	gamja.price = 1000;
	printf("���� : %d\n", gamja.price);

	Product* apple; // Ŭ���� ������ ����
	// ���� ����� �� �ִ� ������ �����Ƿ� ��ü�� �ƴϴ�
	// apple->price = 500;

	// apple�� ����� �� �ִ� ������ �����Ƿ� ��ü�� �ȴ�
	apple = new Product(); // �ν��Ͻ�(��밡���� ����)
	apple->price = 500;
	strcpy_s(apple->name, sizeof(char) * 5, "���");
	apple->Print();

	/*
		* �ǽ�
		Product�� ������ ������ ��ü 3�� ����� ���� �ְ� ����غ���
	*/
	Product* grape = new Product();
	Product* orange = new Product();
	Product* banana = new Product();

	strcpy_s(grape->name, sizeof(char) * 5, "����");
	grape->price = 1000;

	strcpy_s(orange->name, sizeof(char) * 7, "������");
	orange->price = 2000;
	
	strcpy_s(banana->name, sizeof(char) * 7, "�ٳ���");
	banana->price = 1500;

	grape->Print();
	orange->Print();
	banana->Print();

}