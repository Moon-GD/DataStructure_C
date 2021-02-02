#include<stdio.h>

int main() {
	int i, j;
	printf("높이 : "); scanf_s("%d", &i);
	printf("너비 : "); scanf_s("%d", &j);

	for (int a = 1; a <= i; a++) {
		for (int b = 1; b <= j; b++) {
			printf("*");
		}
		putchar('\n');
	}
	return 0;
}