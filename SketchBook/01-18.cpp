#include<stdio.h>

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int b = 1; b < i; b++) {
			printf(" ");
		}
		
		for (int j = 1; j <= (n - i + 1) * 2 - 1; j++) {
			printf("%d", i);
		}
		putchar('\n');
	}
}

int main() {
	int n = 0;
	printf("���� �Ƕ�̵��� ���̴�? "); scanf_s("%d", &n);
	spira(n);

	return 0;
}