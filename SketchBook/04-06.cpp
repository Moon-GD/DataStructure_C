#include<stdio.h>
#include "Deck.h"

int main() {
	Deck deck;
	int max = 0;

	printf("�������� �ִ� ũ��� ? "); scanf_s("%d", &max);
	Initialize(&deck, max);

	
	while (1) {
		int menu = 0, x = 0;
		printf("���� ������ �� : %d/%d\n", deck.num, deck.max);
		printf("(1) ���� ��ť (2) ������ ��ť (3) ���� ��ť (4)������ ��ť (5) ���� ��ũ (6) ������ ��ũ (7) ��� (0) ���� ");
		scanf_s("%d", &menu);
		if (menu == 0) { break; }

		switch (menu) {
		case 1:
			printf("���ʿ� ��ť�� �����ʹ� ? "); scanf_s("%d", &x);
			LeftEnque(&deck, x);
			break;

		case 2:
			printf("�����ʿ� ��ť�� �����ʹ� ? "); scanf_s("%d", &x);
			RightEnque(&deck, x);
			break;

		case 3:
			LeftDeque(&deck, &x);
			printf("���� ��ť �����ʹ� %d �Դϴ�.\n", x);
			break;

		case 4:
			RightDeque(&deck, &x);
			printf("������ ��ť �����ʹ� %d �Դϴ�.\n", x);
			break;

		case 5:
			LeftPeek(&deck, &x);
			printf("���� ��ũ �����ʹ� %d �Դϴ�.\n", x);
			break;

		case 6:
			RightPeek(&deck, &x);
			printf("������ ��ũ �����ʹ� %d �Դϴ�.\n", x);
			break;

		case 7:
			Print(&deck);
			break;
		}
	}
	Terminate(&deck);

	return 0;
}