#include<stdio.h>

int main() {
	int n = 0, cnt = 1;
	printf("양의 정수를 입력하여 주십시오. "); scanf_s("%d", &n);
	int temp = n;
	while (temp >= 10) {
		temp /= 10;
		cnt++;
	}

	printf("%d는 %d자리입니다.", n, cnt);

	return 0;
}