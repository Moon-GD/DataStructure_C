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

	printf("�л��� ���� %d ���Դϴ�.\n", n);
	for (int i = 0; i < n; i++) {
		if (array != NULL) {
			array[i] = rand() % 100 + 100;
			// ������ ��� : array�� ���� �Ҵ��� ���� �� ��ǻ�� ��Ȳ�� ���� �޸𸮰� ����ġ ���� ���,
			// NULL���� ���� ���� �ֱ� ������ ��� �ִ� ���̴�.
			// calloc�� �޸𸮰� ����ġ ���� ��� �޸𸮸� �Ҵ����� �ʰ� NULL���� ��ȯ�Ѵ�.

			printf("%d��° �л��� Ű : %d\n", i + 1, array[i]);
		}
	}
	printf("\n���� Ű�� ū �л��� Ű�� %d �Դϴ�.", maxof(array, n));

	free(array);
	return 0;
}