#include<stdio.h>

int GaussianSum(int n) {
	return n * (n + 1) / 2;
}

int main() {
	int n = 0;
	printf("�� ���� ���ұ��? ");
	scanf_s("%d", &n);
	printf("1���� %d������ ���� %d �Դϴ�.", n, GaussianSum(n));

	return 0;
}