#include<stdio.h>

int main() {
	int a = 0, b = 0;
	
	printf("a�� ����? "); scanf_s("%d", &a);
	do {
		printf("b�� ����? "); scanf_s("%d", &b);
		if (a > b) {
			printf("a���� ū ���� �Է��ϼ���.\n");
		}
	} while (a > b);

	printf("%d - %d = %d �Դϴ�.", b, a, b - a);

	return 0;
}