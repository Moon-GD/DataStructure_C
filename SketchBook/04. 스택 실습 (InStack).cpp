#include<stdio.h>
#include "IntStack.h"

int main() {
	IntStack stack;
	if (Initialize(&stack, 64) == -1) {
		printf("���� ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int ans, x = 0;
		printf("���� ������ �� : %d/%d\n", Size(&stack), Capacity(&stack));
		printf("(1) Ǫ�� (2) �� (3) ��ũ (4) ��� (0) ���� : ");
		scanf_s("%d", &ans);
		if (ans == 0) { break; }

		switch (ans) {
			case 1 : 
				printf("Ǫ���� ������ : ");
				scanf_s("%d", &ans);
				if (Push(&stack, ans) == -1) {
					printf("Ǫ�ÿ� �����Ͽ����ϴ�.\n");
				}
				break;

			case 2:
				if (Pop(&stack, &x) == -1) {
					printf("�˿� �����Ͽ����ϴ�.\n");
				}
				else {
					printf("�� �����ʹ� %d�Դϴ�.\n", x);
				}
				break;

			case 3:
				if (Peek(&stack, &x) == -1) {
					printf("��ũ�� �����Ͽ����ϴ�.\n");
				}
				else {
					printf("��ũ �����ʹ� %d �Դϴ�.\n", x);
				}
				break;

			case 4:
				Print(&stack);
				break;

			default:
				printf("�ٽ� �Է����ּ���.\n");

		}
	}
	Terminate(&stack);

	return 0;
}