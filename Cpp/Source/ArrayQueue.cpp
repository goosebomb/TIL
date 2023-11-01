#pragma once
#include <cstdio>
#include <cstdlib>
#define MAX_QUEUE_SIZE 100

// * ���� ť
//- ó�� ���� �迭�� ���� �����ϸ� ���� �������� ó������ �ǵ��� ��
//- ó���� ���� ����Ǿ� �ִ� ����


// error�� �߻��ϸ� ���� ��� �� ��������
inline void error(const char* message)
{
	printf("%s\n", message);
	exit(1);
}

class CircularQueue
{
protected:
	int front;
	int rear;
	// ũ�Ⱑ 100�� data �迭 ����
	int data[MAX_QUEUE_SIZE];
public:
	CircularQueue()
	{
		// front�� rear�� �ʱ� �� 0
		front = rear = 0;
	}

	// front�� rear�� ���ٸ� true ��ȯ (����ִ��� Ȯ���ϴ� �뵵)
	bool isEmpty() { return front == rear; }

	// ũ�Ⱑ 100�� �迭���� ���� ��� front�� 1 rear�� 100�̸� ������ ���̹Ƿ�
	// rear + 1�� MAX_QUEUE_SIZE�� ���� �������� front�� ���ٸ� true ��ȯ
	bool isFull()
	{
		return (rear + 1) % MAX_QUEUE_SIZE == front;
	}

	// ���� ť�� ��ȭ���¶�� ���� ���� ��ȯ �� ���� ����
	// ���� ť�� ��ȭ���°� �ƴ϶�� rear + 1 ���� MAX_QUEUE_SIZE�� ���� ������ ��ġ�� ������ �߰�
	// ó���� ���� ����Ǿ� �ֱ� ������ �׻� MAX_QUEUE_SIZE�� �����־�� �Ѵ�.
	void enqueue(int val)
	{
		if (isFull())
		{
			error("queue is full");
		}
		else
		{
			rear = (rear + 1) % MAX_QUEUE_SIZE;
			data[rear] = val;
		}
	}

	// ���� ť�� ����ִ� ���¶�� �������� ��� �� ���� ����
	// ����ִ� ���°� �ƴ϶�� front + 1 ���� MAX_QUEUE_SIZE�� ���� ������ ��ġ�� �̵� �� �����͸� ��� �� ��ȯ�Ѵ�.
	// ó���� ���� ����Ǿ� �ֱ� ������ �׻� MAX_QUEUE_SIZE�� �����־�� �Ѵ�.
	int dequeue()
	{
		if (isEmpty())
		{
			error("queue is empty");
		}
		else
		{
			front = (front + 1) % MAX_QUEUE_SIZE;
			printf("dequeue : %d\n", data[front]);
			return data[front];
		}
	}
	int peek()
	{
		if (isEmpty())
		{
			error("queue is empty");
		}
		else
		{
			printf("peek : %d\n", data[(front + 1) % MAX_QUEUE_SIZE]);
			return data[(front + 1) % MAX_QUEUE_SIZE];
		}
	}
	void Print()
	{
		printf("ť ���� : ");
		int max = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
		for (int i = front + 1; i <= max; i++)
		{
			printf("[%2d]", data[i % MAX_QUEUE_SIZE]);
		}
		printf("\n");
	}
};

void main()
{


	CircularQueue que;
	for (int i = 1; i < 10; i++)
	{
		que.enqueue(i);
	}
	que.Print();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.peek();
	que.Print();

}