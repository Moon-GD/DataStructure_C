#include<stdio.h>

int Sumof(int a, int b) {
	int max = 0, min = 0;
	int sum = 0;

	if (a >= b) {
		max = a, min = b;
	}
	else {
		max = b, min = a;
	}

	for (int i = min; i <= max; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int a, b;
	printf("a�� ����? "); scanf_s("%d", &a);
	printf("b�� ����? "); scanf_s("%d", &b);

	printf("%d�� %d ������ ��� ������ ���� %d �Դϴ�.", a, b, Sumof(a, b));



	return 0;
}