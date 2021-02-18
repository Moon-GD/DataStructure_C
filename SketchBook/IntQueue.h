#pragma once

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int* que;
}IntQueue;

// 큐 초기화
int Initialize(IntQueue* queue, int max);

// 인큐
int Inque(IntQueue* queue, int n);

// 디큐
int Deque(IntQueue* queue, int* n);

// 피크
int Peek(IntQueue* queue, int* n);

// 모든 데이터 삭제
void Clear(IntQueue* queue);

// 큐 최대 용량
int Capacity(const IntQueue* queue);

// 큐에 저장된 데이터 개수
int Size(const IntQueue* queue);

// 큐가 비어있는지 여부
int IsEmpty(const IntQueue* queue);

// 큐가 가득찼는지 여부
int IsFull(const IntQueue* queue);

// 큐에서 검색
int Search(const IntQueue* queue, int x);

// 모든 데이터 출력
void Print(IntQueue* queue);

// 큐 종료
void Terminate(IntQueue* queue);

// 연습 문제 4-4
int Search2(const IntQueue& q, int x);