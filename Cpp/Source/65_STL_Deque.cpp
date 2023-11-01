#include <iostream>
#include <deque>
using namespace std;

void main65()
{
	/*
		��(Deque)
		Double Ended Queue�� ���Ӹ�
		ť�� ��(front)�� ��(rear)���� ���԰� ������ ������ ����
		�߰��� �����̳� ������ ������� ����
	*/

	deque<int> Deque;

	// �տ� �����͸� �߰�
	Deque.push_front(1); // 1
	Deque.push_front(2); // 2 1
	Deque.push_front(3); // 3 2 1
	Deque.push_front(4); // 4 3 2 1

	// �ڿ� �����͸� �߰�
	Deque.push_back(9); // 4 3 2 1 9
	Deque.push_back(8); // 4 3 2 1 9 8
	Deque.push_back(7); // 4 3 2 1 9 8 7
	Deque.push_back(6); // 4 3 2 1 9 8 7 6

	// ���� ������ ����
	Deque.pop_front(); // 3 2 1 9 8 7 6
	Deque.pop_front(); // 2 1 9 8 7 6

	// ���� ������ ����
	Deque.pop_back(); // 2 1 9 8 7
	Deque.pop_back(); // 2 1 9 8

	for (int i = 0; i < Deque.size(); i++)
	{
		cout << "<" << Deque[i] << ">";
	}
}