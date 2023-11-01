#include <iostream>
#include <map>
using namespace std;

void main66()
{
	/*
		��(Map)
		key�� value ������ �̷���� �����̳�
		key�� �ߺ��� ������� ����
		key�� �̿��Ͽ� value(��)�� �߰��� �� �ִ�.
		map�� �ڷḦ �����ϴ� ��� �ڵ����� �������� ����
	*/

	map<string, int> Map;
	Map.insert({ "���ݷ�", 111 });
	Map.insert({ "����", 30 });
	Map.insert({ "currentHp", 40 });

	Map.erase("currentHp");

	Map.insert({ "��", 11 });
	Map.insert({ "��ø", 4 });
	Map.insert({ "����", 7 });

	cout << "���� ������ : " << Map.find("���ݷ�")->second << endl;

	for (auto ptr = Map.begin(); ptr != Map.end(); ptr++)
	{
		cout << "key : " << ptr->first;
		cout << " / value : " << ptr->second << endl;
	}

	map<string, string> domain;

	domain.insert({ "���̹�", "www.naver.com" });
	domain.insert({ "����", "www.daum.net" });
	domain.insert({ "����", "www.google.com" });

	cout << domain.find("���̹�")->second << endl;

}