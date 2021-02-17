#pragma once

struct Double {
	int ptr1, ptr2;
	int max;
	int* stk;
};

// 스택 초기화
int Initialize(Double* array, int max);

// 스택 왼쪽 푸시
int LeftPush(Double* array, int x);

// 스택 오른쪽 푸시
int RightPush(Double* array, int x);

// 스택 왼쪽 팝
int LeftPop(Double* array, int* x);

// 스택 오른쪽 팝
int RightPop(Double* array, int* x);

// 스택 왼쪽 피크
int LeftPeek(Double* array, int* x);

// 스택 오른쪽 피크
int RightPeek(Double* array, int* x);

// 스택 왼쪽 출력
void LeftPrint(Double* array);

//스택 오른쪽 출력
void RightPrint(Double* array);

// 종료
void Terminate(Double* array);