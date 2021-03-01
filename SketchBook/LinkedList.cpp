#include<stdio.h>
#include<stdlib.h>
#include "Member.h"
#include "LinkedList.h"

// 노드 동적 생성
static Node* AllocNode() {
	return (Node*)calloc(1, sizeof(Node));
}

// 노드의 각 멤버에 값 설정
static void SetNode(Node* n, const Member* x, Node* next) {
	n->data = *x;
	n->next = next;
}


// 연결 리스트 초기화
void Initialize(List* list) {
	list->head = NULL;
	list->crnt = NULL;
}

// 함수 compare로 x와 같은 노드를 검색
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

// 머리에 노드를 삽입
void InsertFront(List* list, const Member* x) {
	Node* ptr = list->head;
	list->head = list->crnt = AllocNode();
	SetNode(list->head, x, ptr);
}

// 꼬리에 노드를 삽입
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

// 머리 노드를 삭제
void RemoveFront(List* list) {
	Node* ptr = list->head->next;
	free(list->head);
	list->head = list->crnt = ptr;
}

// 꼬리 노드를 삭제
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
		printf("삭제할 노드가 없습니다.\n");
	}
}

// 선택한 노드를 삭제
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

// 모든 노드를 삭제
void Clear(List* list) {
	while (list->head != NULL) {
		RemoveFront(list);
	}
	// list->crnt = NULL;
}

// 선택한 노드의 데이터를 출력
void PrintCurrent(const List* list) {
	if (list->crnt == NULL) {
		printf("출력할 데이터가 없습니다.\n");
	}
	else {
		PrintMember(&list->crnt->data);
	}
}

// 선택한 노드의 데이터를 출력 (줄 바꿈 문자 포함)
void PrintLnCurrent(const List* list) {
	PrintCurrent(list);
	putchar('\n');
}

// 모든 노드의 데이터를 리스트 순서대로 출력
void Print(const List* list) {
	if (list->head == NULL) {
		printf("출력할 노드가 없습니다.\n");
	}
	else {
		Node* ptr = list->head;
		while (ptr != NULL) {
			PrintLnMember(&ptr->data);
			ptr = ptr->next;
		}
	}
}

// 연결 리스트 종료
void Terminate(List* list) {
	Clear(list);
}