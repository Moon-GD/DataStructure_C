#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define swap(type, a, b) {type t = a; a = b; b = t;}

// ��ũ��
// ��ó�� ���� �߿� ġȯ�� ���ִ� ����
// ��ó�� ���� �߿� �Ͼ�Ƿ� �޸� �Ҵ��� ���� ȿ������ ����.

int main() {
	int n = 0;
	printf("����� ����? "); scanf_s("%d", &n);
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