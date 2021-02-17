#include<stdio.h>
#include "DoubleStack.h"

int main() {
	Double stack;
	int max;
	printf("데이터의 최대 크기는 ? ");
	scanf_s("%d", &max);
	Initialize(&stack, 64);

	while (1) {
		printf("\n현재 데이터 수 : %d (왼쪽)/ %d (오른쪽)/ %d (크기)\n\n", stack.ptr1, stack.max - stack.ptr2 - 1, max);
		
		int menu = 0;
		printf("(1) 푸시 (2) 팝 (3) 피크 (4) 출력 (0) 종료 ");
		scanf_s("%d", &menu);
		
		if (menu == 0)
			break;
		
		int direction = 0, x = 0;
		printf("방향은 ? (1) 왼쪽 (2) 오른쪽 ");
		scanf_s("%d", &direction);

		switch (direction) {
		case 1 :
			switch (menu) {
			case 1:
				printf("왼쪽에 푸시할 값은? "); scanf_s("%d", &x);
				LeftPush(&stack, x);
				break;

			case 2:
				LeftPop(&stack, &x);
				printf("왼쪽 팝 데이터는 %d 입니다.\n", x);
				break;

			case 3:
				LeftPeek(&stack, &x);
				printf("왼쪽 피크 데이터는 %d 입니다.\n", x);
				break;

			case 4:
				LeftPrint(&stack);
			}
			break;

		case 2:
			switch (menu) {
			case 1: 
				printf("오른쪽에 푸시할 값은? "); scanf_s("%d", &x);
				RightPush(&stack, x);
				break;

			case 2:
				RightPop(&stack, &x);
				printf("오른쪽 팝 데이터는 %d 입니다.\n", x);
				break;

			case 3:
				RightPeek(&stack, &x);
				printf("오른쪽 피크 데이터는 %d 입니다.\n", x);
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