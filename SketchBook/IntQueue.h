#pragma once

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int* que;
}IntQueue;

// ť �ʱ�ȭ
int Initialize(IntQueue* queue, int max);

// ��ť
int Inque(IntQueue* queue, int n);

// ��ť
int Deque(IntQueue* queue, int* n);

// ��ũ
int Peek(IntQueue* queue, int* n);

// ��� ������ ����
void Clear(IntQueue* queue);

// ť �ִ� �뷮
int Capacity(const IntQueue* queue);

// ť�� ����� ������ ����
int Size(const IntQueue* queue);

// ť�� ����ִ��� ����
int IsEmpty(const IntQueue* queue);

// ť�� ����á���� ����
int IsFull(const IntQueue* queue);

// ť���� �˻�
int Search(const IntQueue* queue, int x);

// ��� ������ ���
void Print(IntQueue* queue);

// ť ����
void Terminate(IntQueue* queue);

// ���� ���� 4-4
int Search2(const IntQueue& q, int x);