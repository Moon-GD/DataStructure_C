#include<stdio.h>

int main() {
	int n = 0, cnt = 1;
	printf("���� ������ �Է��Ͽ� �ֽʽÿ�. "); scanf_s("%d", &n);
	int temp = n;
	while (temp >= 10) {
		temp /= 10;
		cnt++;
	}

	printf("%d�� %d�ڸ��Դϴ�.", n, cnt);

	return 0;
}