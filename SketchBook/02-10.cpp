#include<stdio.h>
#include<time.h> // time
#include<stdlib.h> // srand, rand, calloc
#define swap(type, x, y) do{type t = x; x = y; y = t;}while(0)

void shuffle(int a[], int n) {
	srand((unsigned int)time(NULL));
	for (int i = n - 1; i >= 1; i--) {
		int j = rand() % i;
		swap(int, a[i], a[j]);
	}
}

int main() {
	int n; 
	printf("마구 섞을 배열의 크기는 ? "); scanf_s("%d", &n);
	int* a = (int*)calloc(n, sizeof(int*));
	if (a != NULL) {
		printf("원래의 배열\n");
		srand((unsigned int)time(NULL));
		for (int i = 0; i < n; i++) {
			a[i] = rand() % 100;
			printf("%3d", a[i]);
		}

		printf("\n마구 섞인 배열\n");
		shuffle(a, n);
		for (int i = 0; i < n; i++) {
			printf("%3d", a[i]);
		}
	}
	free(a);
	return 0;
}