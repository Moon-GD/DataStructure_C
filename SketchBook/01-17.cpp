#include<stdio.h>

void spira(int n) {
	
	for (int i = 1; i <= n; i++) {

		for (int l = 1; l <= n - i; l++) {
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}

		putchar('\n');
	}
}

int main() {
	int n = 0;
	printf("�Ƕ�̵��� ���̸� �Է����ֽʽÿ�. "); scanf_s("%d", &n);
	spira(n);

	return 0;
}