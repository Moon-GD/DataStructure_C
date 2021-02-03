#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define swap(type, a, b) {type t = a; a = b; b = t;}

// 매크로
// 전처리 과정 중에 치환을 해주는 역할
// 전처리 과정 중에 일어나므로 메모리 할당이 없어 효율성이 높다.

int main() {
	int n = 0;
	printf("사람의 수는? "); scanf_s("%d", &n);
	int *array;
	array = (int*) calloc(n, sizeof(int));
	srand(time(NULL));
	
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 100;
		printf("a[%d] = %d", i, array[i]);
		putchar('\n');
	}
	printf("\n------------------\n\n");
	for (int i = 0; i <= n / 2 - 1; i++) {
		swap(int, array[i], array[n - i - 1]);
	}

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d", i, array[i]);
		putchar('\n');
	}

	return 0;
}