#include<stdio.h>
#define swap(type, a, b) do{type t = a; a = b; b = t;}while(0)

void ary_reverse(int array[], int n) {
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", array[j]);
		}
		swap(int, array[i], array[n - 1 - i]);
		putchar('\n');

		//���� �պκ�
		if (i == 2 || i == 4 || i == 5 || i == 9) {
			printf("a[%d]�� ", i);
		}
		else {
			printf("a[%d]�� ", i);
		}
		// ���� �޺κ�
		if (n - i - 1 == 2 || n - i - 1 == 4 || n - i - 1 == 5 || n - i - 1 == 9) {
			printf("a[%d]�� ��ȯ�մϴ�.\n", n - i - 1);
		}
		else {
			printf("a[%d]�� ��ȯ�մϴ�.\n", n - i - 1);
		}
	}
}

int main() {
	int array[6] = { 5, 10, 73,2,-5,42 };
	int n = sizeof(array) / sizeof(int);
	ary_reverse(array, n);

	for (int i = 0; i < n; i++) {
		printf("%3d", array[i]);
	}
	printf("\n���� ������ �����մϴ�.");

	return 0;
}