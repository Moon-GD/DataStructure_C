#include<stdio.h>
#include "DoubleStack.h"

int main() {
	Double stack;
	int max;
	printf("�������� �ִ� ũ��� ? ");
	scanf_s("%d", &max);
	Initialize(&stack, 64);

	while (1) {
		printf("\n���� ������ �� : %d (����)/ %d (������)/ %d (ũ��)\n\n", stack.ptr1, stack.max - stack.ptr2 - 1, max);
		
		int menu = 0;
		printf("(1) Ǫ�� (2) �� (3) ��ũ (4) ��� (0) ���� ");
		scanf_s("%d", &menu);
		
		if (menu == 0)
			break;
		
		int direction = 0, x = 0;
		printf("������ ? (1) ���� (2) ������ ");
		scanf_s("%d", &direction);

		switch (direction) {
		case 1 :
			switch (menu) {
			case 1:
				printf("���ʿ� Ǫ���� ����? "); scanf_s("%d", &x);
				LeftPush(&stack, x);
				break;

			case 2:
				LeftPop(&stack, &x);
				printf("���� �� �����ʹ� %d �Դϴ�.\n", x);
				break;

			case 3:
				LeftPeek(&stack, &x);
				printf("���� ��ũ �����ʹ� %d �Դϴ�.\n", x);
				break;

			case 4:
				LeftPrint(&stack);
			}
			break;

		case 2:
			switch (menu) {
			case 1: 
				printf("�����ʿ� Ǫ���� ����? "); scanf_s("%d", &x);
				RightPush(&stack, x);
				break;

			case 2:
				RightPop(&stack, &x);
				printf("������ �� �����ʹ� %d �Դϴ�.\n", x);
				break;

			case 3:
				RightPeek(&stack, &x);
				printf("������ ��ũ �����ʹ� %d �Դϴ�.\n", x);
				break;

			case 4:
				RightPrint(&stack);
				break;
			}
			break;
		}
	}
	Terminate(&stack);

	return 0;
}