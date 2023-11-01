#include <stdio.h>
#define MAX_LIST_SIZE 100

class ArrayList
{
private:
	// ũ�Ⱑ 100�� data �迭 ����
	int data[MAX_LIST_SIZE];
	int lenght;
public:
	// lenght�� �ʱ� �� 0
	ArrayList() { lenght = 0; }

	// Error �߻� �� ���� ���
	void Error(const char* chr)
	{
		printf("%s", *chr);
	}

	// index��ġ�� ���� ��ȯ
	int GetEntry(int index) { return data[index]; }

	// lenght�� 0�̸� true�� ��ȯ (����ִ��� Ȯ���ϴ� �뵵)
	bool isEmpty() { return lenght == 0; }

	// lenght�� MAX_LIST_SIZE�� true�� ��ȯ (���� ���ִ��� Ȯ���ϴ� �뵵)
	bool isFull() { return lenght == MAX_LIST_SIZE; }

	// item�� ����Ʈ �ȿ� ������ true��ȯ, �ƴϸ� false ��ȯ
	bool Find(int item)
	{
		for (int i = 0; i < lenght; i++)
		{
			if (data[i] == item)
			{
				return true;
			}
		}
		return false;
	}

	// ����Ʈ index��° ���� item���� ��ü
	void Replace(int index, int item)
	{
		data[index] = item;
	}

	// ����Ʈ�� ��ȭ���°� �ƴϸ� index��ġ ���� �����ͺ��� �迭�� �� ���� �� ĭ�� �ڷ� �о �� index��ġ�� ���� �ְ� ���� +1
	// ����Ʈ�� ��ȭ���¶�� ������ �Ұ��ϹǷ� �������� ���
	void Insert(int index, int item)
	{
		if (!isFull() && index >= 0 && index <= lenght)
		{
			for (int i = lenght; i > index; i--)
			{
				data[i] = data[i - 1];
			}
			data[index] = item;
			lenght++;
		}
		else
		{
			Error("��ȭ or ������ġ ����");
		}
	}

	// ����Ʈ�� ������� �ʴٸ� index��ġ ���� �� ���� ���� �� ĭ�� �մ��� ���� -1
	// ����Ʈ�� ����ִٸ� ������ �Ұ��ϹǷ� �������� ���
	void Remove(int index)
	{
		if (!isEmpty() && 0 <= index && index < lenght)
		{
			for (int i = index + 1; i < lenght; i++)
			{
				data[i - 1] = data[i];

			}
			lenght--;
		}
		else
		{
			Error("������� or ���� ��ġ ����");
		}
	}

	// ���̸� 0���� �ʱ�ȭ�ϸ鼭 ����Ʈ �ʱ�ȭ
	void Clear()
	{
		lenght = 0;
	}

	// ����Ʈ�� �� ���̸� ��ȯ
	int size() { return lenght; }

	// ����Ʈ ������ ����Ʈ ���� �� �ڸ��� ���(�� �ڸ����� ũ�� �״�� ���, �� �ڸ����� ������ ������ ��)
	void Print()
	{
		printf("����Ʈ ���� : %2d", size());
		for (int i = 0; i < size(); i++)
		{
			printf("[%2d]", data[i]);
		}
		printf("\n");
	}
};


int main67()
{
	ArrayList list;

	// 0�� index�� 10 �߰�
	list.Insert(0, 10); // 10

	// 0�� index�� 20 �߰�
	list.Insert(0, 20); // 20 10

	// 1�� index�� 30 �߰�
	list.Insert(1, 30); // 20 30 10

	// ���� ����Ʈ ũ��(3) index�� 40 �߰�
	list.Insert(list.size(), 40); // 20 30 10 40

	// ���� ����Ʈ ũ��(4) index�� 50 �߰�
	list.Insert(list.size(), 50); // 20 30 10 40 50

	// ����Ʈ ���
	list.Print(); // 20 30 1 40 50

	// 2�� index �� ����
	list.Remove(2); // 20 30 40 50

	// ���� ����Ʈ ũ��(4) - 1 -> 3�� index �� ����
	list.Remove(list.size() - 1); // 20 30 50

	// 0�� index �� ����
	list.Remove(0); // 30 50

	// 1�� index ���� 90���� ��ü
	list.Replace(1, 90); // 30 90

	// ����Ʈ ���
	list.Print(); // 30 90

	// ����Ʈ �ʱ�ȭ
	list.Clear();

	// ����Ʈ ���
	list.Print(); // 

	return 0;
}