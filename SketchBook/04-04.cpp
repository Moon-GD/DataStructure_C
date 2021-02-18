#include<stdio.h>
#include "IntQueue.h"

int main() {
	int max = 0;
	printf("�ִ� �������� ����? "); scanf_s("%d", &max);

	IntQueue queue;
	Initialize(&queue, max);
	
	while (1) {
		printf("���� ������ �� %d/%d\n", queue.num, queue.max);
		printf("(1) ��ť (2) ��ť (3) ��ũ (4) ��� (5) �ǽ� [�˻�] ���� (0) ���� ");
		
		int menu = 0, x = 0;
		scanf_s("%d", &menu);
		if (menu == 0) { break; }

		switch (menu) {
		case 1:
			printf("��ť�� ������ : "); scanf_s("%d", &x);
			Inque(&queue, x);
			break;

		case 2:
			Deque(&queue, &x);
			printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3:
			Peek(&queue, &x);
			printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4:
			Print(&queue);
			break;

		case 5:
			printf("�˻��� �����ʹ�? "); scanf_s("%d", &x);
			printf("%d�� %d��°�� �ֽ��ϴ�.\n", x, Search2(queue, x));
		}
	}
	Terminate(&queue);

	return 0;
}