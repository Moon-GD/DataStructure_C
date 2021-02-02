#include<stdio.h>

void triangle(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		putchar('\n');
	}
}

int main() {
	int n = 0;
	printf("마지막 줄의 너비는? "); scanf_s("%d", &n);
	triangle(n);

	return 0;
}