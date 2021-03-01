#pragma once

typedef struct {
	int max;
	int* que;
	int front;
	int rear;
	int num;
}Deck;

// �� �ʱ�ȭ
int Initialize(Deck* deck, int max);

// �� ���� ��ť
int LeftEnque(Deck* deck, int x);

// �� ������ ��ť
int RightEnque(Deck* deck, int x);

// �� ���� ��ť
int LeftDeque(Deck* deck, int* x);

// �� ������ ��ť
int RightDeque(Deck* deck, int* x);

// �� ���� ��ũ
int LeftPeek(Deck* deck, int* x);

// �� ������ ��ũ
int RightPeek(Deck* deck, int* x);

// �� ���
void Print(Deck* deck);

// �� ����
void Terminate(Deck* deck);