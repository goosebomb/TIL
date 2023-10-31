#include <iostream>
#include <list> // list��� �� �ʿ�

using namespace std;

void main62()
{
	/*
		���Ḯ��Ʈ(LinkedList)
		����� ���� ������Ҹ� ����Ű�� �����͸� �Բ� ������ �ִ�.
		���̰� �������� �ʾ� �����Ӱ� ũ�⸦ ������ �� �ִ�.
		�߰��� �����͸� �����ϰ� ������ �� �ִ�.
		STL����Ʈ�� ����ũ�帮��Ʈ ���
	*/

	list<int> List; // STL����Ʈ ����
	
	// iterator(�ݺ���) : STL�� ���Ǵ� ������
	list<int> ::iterator pList = List.begin(); // ����Ʈ�� �������� �־���

	List.push_front(1); // �տ� 1 �߰�
	List.push_back(10); // �ڿ� 10 �߰�
	List.push_front(2); // �տ� 2 �߰�
	List.push_front(3); // �տ� 3 �߰�
	List.push_back(9);  // �ڿ� 9 �߰�

	List.pop_front();   // �տ� ��� ����

	pList = List.begin();
	pList++;
	pList++;
	List.insert(pList, 12); // �ι�° �ε����� 12 �߰�

	pList = List.end();
	--pList;
	--pList;
	List.erase(pList); // �ڿ��� ù��° �ε��� ����

	for (pList = List.begin(); pList != List.end(); pList++)
	{
		cout << "<" << *pList << ">";
	}
}