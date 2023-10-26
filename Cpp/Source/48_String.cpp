#include <stdio.h>
#include <string.h>
#include <string> // string ����� ���� �ʿ�
#include <iostream>

using std::string; // string ����� ���� �ʿ�
using namespace std;

void main48()
{
	/*
		* string
		���ڿ��� char�� �迭�� ����Ѵ�.
		string�� ���ڿ��� �ٷ�� Ŭ����
		string�� char*�� char[]�� �ٸ��� ���ڿ� ���� '\0'�� ����.
		���ڿ� ���� ������ �����ϴ�.
		�پ��� ����Լ��� �����Ѵ�.
	*/
	string str1 = "Hello";
	printf("str1 : %s\n", str1.c_str());
	// string�� C++�̰� printf�� C��� ��ɾ��̴�. 
	// printf�� string�� �����ϴ� ������ �����Ƿ� ������ �߻�
	// ����Լ� c_str�� ȣ���ϸ� string�� char*�� ��ȯ���ش�.

	string str2("World"); // Ŭ�����̹Ƿ� �����ڷ� �ʱ�ȭ�� �� �ִ�.

	string str3 = str1 + str2; // string�� "+"�����ڷ� ���ڿ��� ������ �� �ִ�.
	cout << str3 << endl;

	str3.append("!!!"); // append : ���ڿ� ����
	cout << str3 << endl;

	cout << str3.length() << endl; // length : ���ڿ� ���� ��ȯ
}