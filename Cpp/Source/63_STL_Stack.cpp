#include <iostream>
#include <stack>
using namespace std;

void main63()
{
	/*
		* ����
		���Լ���
		LIFO(Last In First Out)
		���� ���� ���� �����ʹ� �������� ������.
		�������� ���� �����ʹ� ù��°�� ������.

		* ���� Ȱ�� ����
		�� ������ �ڷΰ��� : �������� ���� ���������� �ڷΰ�
		Ctrl + Z = �������� ������ �������� �ǵ���
	*/


	stack<int> Stack;

	Stack.push(1); // ������ �߰�
	Stack.push(2);
	Stack.push(3);
	Stack.push(4);
	cout << "top : " << Stack.top() << endl;
	Stack.pop();
	cout << "top : " << Stack.top() << endl;
	Stack.pop();
	cout << "top : " << Stack.top() << endl;
}