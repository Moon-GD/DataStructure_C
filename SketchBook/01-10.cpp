#include<stdio.h>

int main() {
	int a = 0, b = 0;
	
	printf("a의 값은? "); scanf_s("%d", &a);
	do {
		printf("b의 값은? "); scanf_s("%d", &b);
		if (a > b) {
			printf("a보다 큰 값을 입력하세요.\n");
		}
	} while (a > b);

	printf("%d - %d = %d 입니다.", b, a, b - a);

	return 0;
}