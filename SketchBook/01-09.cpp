#include<stdio.h>

int Sumof(int a, int b) {
	int max = 0, min = 0;
	int sum = 0;

	if (a >= b) {
		max = a, min = b;
	}
	else {
		max = b, min = a;
	}

	for (int i = min; i <= max; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int a, b;
	printf("a의 값은? "); scanf_s("%d", &a);
	printf("b의 값은? "); scanf_s("%d", &b);

	printf("%d와 %d 사이의 모든 정수의 합은 %d 입니다.", a, b, Sumof(a, b));



	return 0;
}