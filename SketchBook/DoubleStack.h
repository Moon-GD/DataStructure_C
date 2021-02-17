#pragma once

struct Double {
	int ptr1, ptr2;
	int max;
	int* stk;
};

// ���� �ʱ�ȭ
int Initialize(Double* array, int max);

// ���� ���� Ǫ��
int LeftPush(Double* array, int x);

// ���� ������ Ǫ��
int RightPush(Double* array, int x);

// ���� ���� ��
int LeftPop(Double* array, int* x);

// ���� ������ ��
int RightPop(Double* array, int* x);

// ���� ���� ��ũ
int LeftPeek(Double* array, int* x);

// ���� ������ ��ũ
int RightPeek(Double* array, int* x);

// ���� ���� ���
void LeftPrint(Double* array);

//���� ������ ���
void RightPrint(Double* array);

// ����
void Terminate(Double* array);