#include<stdio.h>
#include<stdlib.h>
#include "Member.h"
#include "LinkedList.h"

// ��� ���� ����
static Node* AllocNode() {
	return (Node*)calloc(1, sizeof(Node));
}

// ����� �� ����� �� ����
static void SetNode(Node* n, const Member* x, Node* next) {
	n->data = *x;
	n->next = next;
}


// ���� ����Ʈ �ʱ�ȭ
void Initialize(List* list) {
	list->head = NULL;
	list->crnt = NULL;
}

// �Լ� compare�� x�� ���� ��带 �˻�
Node* Search(List* list, const Member* x, int compare(const Member* x, const Member* y)) {
	Node* ptr = list->head;
	while (ptr != NULL) {
		if (compare(&ptr->data, x) == 0) {
			list->crnt = ptr;
			return ptr;
		}
		ptr = ptr->next;
	}
	return NULL;
}

// �Ӹ��� ��带 ����
void InsertFront(List* list, const Member* x) {
	Node* ptr = list->head;
	list->head = list->crnt = AllocNode();
	SetNode(list->head, x, ptr);
}

// ������ ��带 ����
void InsertRear(List* list, const Member* x) {
	if (list->head == NULL) {
		InsertFront(list, x);
	}
	else {
		Node* ptr = list->head;
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = list->crnt = AllocNode();
		SetNode(list->crnt, x, NULL);
	}
}

// �Ӹ� ��带 ����
void RemoveFront(List* list) {
	Node* ptr = list->head->next;
	free(list->head);
	list->head = list->crnt = ptr;
}

// ���� ��带 ����
void RemoveRear(List* list) {
	if (list->head != NULL) {
		if (list->head->next == NULL) {
			RemoveFront(list);
		}
		else {
			Node* ptr = list->head;
			Node* pre = NULL;
			while (ptr->next != NULL) {
				pre = ptr;
				ptr = ptr->next;
			}
			pre->next = NULL;
			free(ptr);
			list->crnt = pre;			
		}
	}
	else {
		printf("������ ��尡 �����ϴ�.\n");
	}
}

// ������ ��带 ����
void RemoveCurrent(List* list) {
	if (list->head != NULL) {
		if (list->crnt == list->head)
			RemoveFront(list);
		else {
			Node* ptr = list->head;
			while (ptr->next != list->crnt) {
				ptr = ptr->next;
			}
			ptr->next = list->crnt->next;
			free(list->crnt);
			list->crnt = ptr;
		}
	}
}

// ��� ��带 ����
void Clear(List* list) {
	while (list->head != NULL) {
		RemoveFront(list);
	}
	// list->crnt = NULL;
}

// ������ ����� �����͸� ���
void PrintCurrent(const List* list) {
	if (list->crnt == NULL) {
		printf("����� �����Ͱ� �����ϴ�.\n");
	}
	else {
		PrintMember(&list->crnt->data);
	}
}

// ������ ����� �����͸� ��� (�� �ٲ� ���� ����)
void PrintLnCurrent(const List* list) {
	PrintCurrent(list);
	putchar('\n');
}

// ��� ����� �����͸� ����Ʈ ������� ���
void Print(const List* list) {
	if (list->head == NULL) {
		printf("����� ��尡 �����ϴ�.\n");
	}
	else {
		Node* ptr = list->head;
		while (ptr != NULL) {
			PrintLnMember(&ptr->data);
			ptr = ptr->next;
		}
	}
}

// ���� ����Ʈ ����
void Terminate(List* list) {
	Clear(list);
}