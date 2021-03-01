#pragma once
#include "Member.h"

typedef struct __node {
	Member data;
	__node* next;
}Node;

typedef struct {
	Node *head;
	Node *crnt;
}List;

// ���� ����Ʈ �ʱ�ȭ
void Initialize(List* list);

// �Լ� compare�� x�� ���� ��带 �˻�
Node* search(List* list, const Member* x, int compare(const Member* x, const Member* y));

// �Ӹ��� ��带 ����
void InsertFront(List* list, const Member* x);

// ������ ��带 ����
void InsertRear(List* list, const Member* x);

// �Ӹ� ��带 ����
void RemoveFront(List* list);

// ���� ��带 ����
void RemoveRear(List* list);

// ������ ��带 ����
void RemoveCurrent(List* list);

// ��� ��带 ����
void Clear(List* list);

// ������ ����� �����͸� ���
void PrintCurrent(const List* list);

// ������ ����� �����͸� ��� (�� �ٲ� ���� ����)
void PrintLnCurrent(const List* list);

// ��� ����� �����͸� ����Ʈ ������� ���
void Print(const List* list);

// ���� ����Ʈ ����
void Terminate(List* list);