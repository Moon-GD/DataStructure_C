#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "Member.h"

// 회원 번호 비교 함수
int MemberNoCmp(const Member* x, const Member* y) {
	return x->no > y->no ? 1 : x->no < y->no ? -1 : 0;
}

// 회원 이름 비교 함수
int MemberNameCmp(const Member* x, const Member* y) {
	return strcmp(x->name, y->name);
}

// 회원 데이터 출력 (줄 바꿈 없음)
void PrintMember(const Member* x) {
	printf("%d번 %s", x->no, x->name);
}

// 회원 데이터 출력 (줄 바꿈 있음)
void PrintLnMember(const Member* x) {
	PrintMember(x);
	putchar('\n');
}

// 회원 데이터를 읽어 들임
Member ScanMember(const char* message, int sw) {
	Member temp;
	printf("%s하는 데이터를 입력하세요.\n", message);
	if (sw & MEMBER_NO) { printf("번호 : "); scanf_s("%d", &temp.no); }
	if (sw & MEMBER_NAME) { printf("이름 : "); scanf_s("%s", temp.name, 20); }
	return temp;
}