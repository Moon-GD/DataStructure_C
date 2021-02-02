#include<stdio.h>

int GaussianSum(int n) {
	return n * (n + 1) / 2;
}

int main() {
	int n = 0;
	printf("몇 까지 더할까요? ");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 합은 %d 입니다.", n, GaussianSum(n));

	return 0;
}