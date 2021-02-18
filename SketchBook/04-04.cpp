#include<stdio.h>
#include "IntQueue.h"

int main() {
	int max = 0;
	printf("최대 데이터의 수는? "); scanf_s("%d", &max);

	IntQueue queue;
	Initialize(&queue, max);
	
	while (1) {
		printf("현재 데이터 수 %d/%d\n", queue.num, queue.max);
		printf("(1) 인큐 (2) 디큐 (3) 피크 (4) 출력 (5) 실습 [검색] 문제 (0) 종료 ");
		
		int menu = 0, x = 0;
		scanf_s("%d", &menu);
		if (menu == 0) { break; }

		switch (menu) {
		case 1:
			printf("인큐할 데이터 : "); scanf_s("%d", &x);
			Inque(&queue, x);
			break;

		case 2:
			Deque(&queue, &x);
			printf("디큐한 데이터는 %d입니다.\n", x);
			break;

		case 3:
			Peek(&queue, &x);
			printf("피크한 데이터는 %d입니다.\n", x);
			break;

		case 4:
			Print(&queue);
			break;

		case 5:
			printf("검색할 데이터는? "); scanf_s("%d", &x);
			printf("%d는 %d번째에 있습니다.\n", x, Search2(queue, x));
		}
	}
	Terminate(&queue);

	return 0;
}