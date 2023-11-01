#pragma once
#include <cstdio> //<stdio.h> �� ����
#include <cstdlib> //<stdlib.h> �� ����

// * �迭�� �̿��� int���� ����

// error �߻� �� ���� ���� ��� �� ���� ����
inline void error(const char* message)
{
	printf("%s\n", message);
	exit(1);
}

// ��� ���� ����
const int MAX_STACK_SIZE = 20;

class ArrayStack
{
	int top;
	// ũ�Ⱑ 20�� data �迭 ����
	int data[MAX_STACK_SIZE];
public:
	// top�� �ʱ� �� -1
	ArrayStack() { top = -1; }
	~ArrayStack() {}

	// top�� -1�̶�� true�� ��ȯ (����ִ��� Ȯ���ϴ� �뵵)
	bool isEmpty() { return top == -1; }

	// top�� MAX_STACK_SIZE��� true�� ��ȯ (���� ���ִ��� Ȯ���ϴ� �뵵)
	bool isFull() { return top == MAX_STACK_SIZE; }

	// ������ ��ȭ���¶�� ������ �Ұ��ϹǷ� �������� ��� �� ���� ����
	// ��ȭ���°� �ƴ϶�� ���� ��ġ�� +1�ϰ� �� ��ġ�� ������ �߰�
	void push(int e)
	{
		if (isFull())
		{
			error("stack is full");
		}
		data[++top] = e;
	}

	// ������ ����ִ� ���¶�� ������ �Ұ��ϹǷ� �������� ��� �� ��������
	// ����ִ� ���°� �ƴ϶�� ���� ��ġ�� ���� ��ȯ�ϰ� ���� ��ġ�� -1 �Ѵ�.
	int pop()
	{
		if (isEmpty())
		{
			error("stack is empty");
		}
		return data[top--];
	}

	// ������ ����ִ� ���¶�� ���� ���� �����̹Ƿ� �������� ��� �� ��������
	// ����ִ� ���°� �ƴ϶�� �ֻ�� ��ġ�� ���� ��ȯ
	int peek()
	{
		if (isEmpty())
		{
			error("stack is empty");
		}
		return data[top];
	}

	// top�� �ʱ� ���� -1�̹Ƿ� ��� �ÿ� +1�� ���� ���� ������ ����Ѵ�.
	// ���� ���� ��� �� �� �ڿ� ���� �����͸� ���
	void Print()
	{
		printf("���� ���� : %d ", top + 1);
		for (int i = 0; i <= top; i++)
		{
			printf(" <%d> ", data[i]);
		}
		printf("\n");
	}
};

void main()
{
	// class ����
	ArrayStack stack;

	// ���ÿ� 1 ~ 9�� ���� �߰��Ѵ�.
	for (int i = 1; i < 10; i++)
	{
		stack.push(i); // 1 2 3 4 5 6 7 8 9
	}

	// ���� ���
	stack.Print(); // 1 2 3 4 5 6 7 8 9

	// ���� �ֻ�� ���� ����
	stack.pop(); // 1 2 3 4 5 6 7 8

	// ���� �ֻ�� ���� ����
	stack.pop(); // 1 2 3 4 5 6 7

	// ���� �ֻ�� ���� ����
	stack.pop(); // 1 2 3 4 5 6

	// ���� ���
	stack.Print(); // 1 2 3 4 5 6
}