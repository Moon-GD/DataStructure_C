#pragma once
#define MEMBER_NO 1
#define MEMBER_NAME 2

typedef struct {
	int no;
	char name[20];
}Member;

// 회원 번호 비교 함수
int MemberNoCmp(const Member* x, const Member* y);

// 회원 이름 비교 함수
int MemberNameCmp(const Member* x, const Member* y);

// 회원 데이터 출력 (줄 바꿈 없음)
void PrintMember(const Member* x);

// 회원 데이터 출력 (줄 바꿈 있음)
void PrintLnMember(const Member* x);

// 회원 데이터를 읽어 들임
Member ScanMember(const char* message, int sw);