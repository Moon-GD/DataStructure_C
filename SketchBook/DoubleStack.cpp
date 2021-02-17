#include<stdio.h>
#include<stdlib.h>
#include "DoubleStack.h"

int Initialize(Double* array, int max) {
	if ((array->stk = (int*)calloc(64, sizeof(int))) == NULL) {
		return -1;
	}
	array->max = max;
	array->ptr1 = 0;
	array->ptr2 = max - 1;

	return 0;
}

// ptr1�� �ִ��� �Ѿ�ų�, ptr1�� ũ�Ⱑ ptr2 ũ�⺸�� ũ�ų� �������� ���
int LeftPush(Double* array, int x) {
	if (array->ptr1 >= array->max || array->ptr1 >= array->ptr2 ) {
		printf("���ʿ� Ǫ���� �� �����ϴ�.\n");
		return -1;
	}
	array->stk[array->ptr1++] = x;
	return 0;
}

int RightPush(Double* array, int x) {
	if (array->ptr2 <= 0 || array->ptr2 <= array->ptr1) {
		printf("�����ʿ� Ǫ���� �� �����ϴ�.\n");
		return -1;
	}
	array->stk[array->ptr2--] = x;
	return 0;
}

int LeftPop(Double* array, int* x) {
	if (array->ptr1 <= 0) {
		printf("���ʿ� �� �� �� �����ϴ�.\n");
		return -1;
	}
	*x = array->stk[--array->ptr1];
	return 0;
}

int RightPop(Double* array, int* x) {
	if (array->ptr2 >= array->max) {
		printf("�����ʿ� �� �� �� �����ϴ�\n");
		return -1;
	}
	*x = array->stk[++array->ptr2];
	return 0;
}

int LeftPeek(Double* array, int* x) {
	if (array->ptr1 <= 0) {
		printf("���ʿ� ��ũ�� �� �����ϴ�.\n");
		return -1;
	}
	*x = array->stk[array->ptr1 - 1];
	return 0;
}

int RightPeek(Double* array, int* x) {
	if (array->ptr2 >= array->max) {
		printf("�����ʿ� ��ũ�� �� �����ϴ�.\n");
		return -1;
	}
	*x = array->stk[array->ptr2 + 1];
	return 0;
}

void LeftPrint(Double* array) {
	for (int i = 0; i < array->ptr1; i++) {
		printf("%d ", array->stk[i]);
	}
	putchar('\n');
}

void RightPrint(Double* array) {
	for (int i = array->ptr2 + 1; i < array->max; i++) {
		printf("%d ", array->stk[i]);
	}
	putchar('\n');
}

void Terminate(Double* array) {
	if (array->stk != NULL) {
		free(array->stk);
	}
	array->ptr1 = array->ptr2 = array->max = 0;
}