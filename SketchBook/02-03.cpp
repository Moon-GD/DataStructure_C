#include<stdio.h>
#include<time.h> // time
#include<stdlib.h> // srand, rand, calloc

double aveof(const int a[], int n) {
	double ave = 0.0;
	for (int i = 0; i < n; i++) {
		ave += a[i];
	}
	return ave / n;
}

int main() {
	int n = 0;
	printf("학생의 수는 ? "); scanf_s("%d", &n);
	srand((unsigned int)time(NULL));
	int* array;
	array = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 100 + 100;
		printf("%d번째 학생의 키 : %d\n", i + 1, array[i]);
	}
	printf("\n모든 학생의 키의 평균은 %.2lf 입니다.", aveof(array, n));

	free(array);
	return 0;
}