#include<stdio.h>
#include<time.h> // time
#include<stdlib.h> // srand, rand, calloc

int minof(const int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int main() {
	int n = 0;
	printf("�л��� ���� ? "); scanf_s("%d", &n);
	srand(time(NULL));
	int* array;
	array = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 100 + 100;
		printf("%d��° �л��� Ű : %d\n", i + 1, array[i]);
	}
	printf("\n���� Ű�� ���� �л��� Ű�� %d �Դϴ�.", minof(array, n));

	free(array);
	return 0;
}