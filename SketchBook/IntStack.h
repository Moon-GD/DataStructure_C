#pragma once

typedef struct {
	int max;
	int ptr;
	int* stk;
} IntStack;

//스택 초기화
int Initialize(IntStack* s, int max);

// 스택에 데이터를 푸시
int Push(IntStack* s, int x);

// 스택에서 데이터를 팝
int Pop(IntStack* s, int* x);

//스택에서 데이터를 피크
int Peek(const IntStack* s, int* x);

//스택 비우기
void Clear(IntStack* s);

//스택 최대 용량
int Capacity(const IntStack* s);

// 스택의 데이터 개수
int Size(const IntStack* s);

// 스택이 비어 있는지 여부
int IsEmpty(const IntStack* s);

// 스택이 가득 찼는지 여부
int IsFull(const IntStack* s);

// 스택에서 인덱스 검색
int Search(const IntStack* s, int x);

// 모든 데이터 출력
void Print(const IntStack* s);

// 스택 종료
void Terminate(IntStack* s);