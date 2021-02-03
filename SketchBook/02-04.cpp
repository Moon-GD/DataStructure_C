#include<stdio.h>
#include<time.h> // time
#include<stdlib.h> // srand, rand, calloc

int maxof(const int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}

int main() {
	int n = 0;
	int* array;

	srand((unsigned int)time(NULL));
	n = rand() % 100 + 1;
	array = (int*)calloc(n, sizeof(int));

	printf("학생의 수는 %d 명입니다.\n", n);
	for (int i = 0; i < n; i++) {
		if (array != NULL) {
			array[i] = rand() % 100 + 100;
			// 역참조 경고 : array가 동적 할당을 받을 때 컴퓨터 상황에 따라 메모리가 여유치 않은 경우,
			// NULL값을 가질 수도 있기 때문에 경고를 주는 것이다.
			// calloc는 메모리가 여유치 않은 경우 메모리를 할당하지 않고 NULL값을 반환한다.

			printf("%d번째 학생의 키 : %d\n", i + 1, array[i]);
		}
	}
	printf("\n가장 키가 큰 학생의 키는 %d 입니다.", maxof(array, n));

	free(array);
	return 0;
}