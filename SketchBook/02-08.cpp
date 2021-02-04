#include<stdio.h>
#include<time.h> // time
#include<stdlib.h> // srand, rand, calloc

void ary_copy(int a[], const int b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
}

int main() {
	int n, m;

	printf("복사할 배열의 크기는? "); scanf_s("%d", &n);
	do {
		printf("복사받을 배열의 크기는? "); scanf_s("%d", &m);
		if (n > m) {
			printf("복사받을 배열의 크기는 %d 이상이어야 합니다.\n", n);
		}
	} while (n  > m);

	int* b = (int*)calloc(n, sizeof(int));
	int* a = (int*)calloc(m, sizeof(int));
	
	printf("복사할 배열은\n");
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		if (b != NULL) {
			b[i] = rand() % 100;
			printf("%3d", b[i]);
		}
	}
	
	ary_copy(a, b, n);

	printf("\n복사 받은 배열은\n");
	for (int i = 0; i < n; i++) {
		if (a != NULL) {
			printf("%3d", a[i]);
		}
	}

	free(a), free(b);
	return 0;
}