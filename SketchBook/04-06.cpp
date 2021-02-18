#include<stdio.h>
#include "Deck.h"

int main() {
	Deck deck;
	int max = 0;

	printf("데이터의 최대 크기는 ? "); scanf_s("%d", &max);
	Initialize(&deck, max);

	
	while (1) {
		int menu = 0, x = 0;
		printf("현재 데이터 수 : %d/%d\n", deck.num, deck.max);
		printf("(1) 왼쪽 인큐 (2) 오른쪽 인큐 (3) 왼쪽 디큐 (4)오른쪽 디큐 (5) 왼쪽 피크 (6) 오른쪽 피크 (7) 출력 (0) 종료 ");
		scanf_s("%d", &menu);
		if (menu == 0) { break; }

		switch (menu) {
		case 1:
			printf("왼쪽에 인큐할 데이터는 ? "); scanf_s("%d", &x);
			LeftEnque(&deck, x);
			break;

		case 2:
			printf("오른쪽에 인큐할 데이터는 ? "); scanf_s("%d", &x);
			RightEnque(&deck, x);
			break;

		case 3:
			LeftDeque(&deck, &x);
			printf("왼쪽 디큐 데이터는 %d 입니다.\n", x);
			break;

		case 4:
			RightDeque(&deck, &x);
			printf("오른쪽 디큐 데이터는 %d 입니다.\n", x);
			break;

		case 5:
			LeftPeek(&deck, &x);
			printf("왼쪽 피크 데이터는 %d 입니다.\n", x);
			break;

		case 6:
			RightPeek(&deck, &x);
			printf("오른쪽 피크 데이터는 %d 입니다.\n", x);
			break;

		case 7:
			Print(&deck);
			break;
		}
	}
	Terminate(&deck);

	return 0;
}