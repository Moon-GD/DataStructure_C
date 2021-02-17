#include<stdio.h>
#include "IntStack.h"

int main() {
	IntStack stack;
	if (Initialize(&stack, 64) == -1) {
		printf("스택 생성에 실패하였습니다.");
		return 1;
	}

	while (1) {
		int ans, x = 0;
		printf("현재 데이터 수 : %d/%d\n", Size(&stack), Capacity(&stack));
		printf("(1) 푸시 (2) 팝 (3) 피크 (4) 출력 (0) 종료 : ");
		scanf_s("%d", &ans);
		if (ans == 0) { break; }

		switch (ans) {
			case 1 : 
				printf("푸시할 데이터 : ");
				scanf_s("%d", &ans);
				if (Push(&stack, ans) == -1) {
					printf("푸시에 실패하였습니다.\n");
				}
				break;

			case 2:
				if (Pop(&stack, &x) == -1) {
					printf("팝에 실패하였습니다.\n");
				}
				else {
					printf("팝 데이터는 %d입니다.\n", x);
				}
				break;

			case 3:
				if (Peek(&stack, &x) == -1) {
					printf("피크에 실패하였습니다.\n");
				}
				else {
					printf("피크 데이터는 %d 입니다.\n", x);
				}
				break;

			case 4:
				Print(&stack);
				break;

			default:
				printf("다시 입력해주세요.\n");

		}
	}
	Terminate(&stack);

	return 0;
}