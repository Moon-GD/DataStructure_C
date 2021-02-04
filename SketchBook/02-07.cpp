#include<stdio.h>
#define swap(type, a, b) { type t = a; a = b; b = t;}

int card_conv(int x, int n, char d[]) {
	int temp = x;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int index = 0;
	do {
		d[index] = dchar[x % n];
		printf("%d | %d �� %c\n", n, x, d[index]);
		x /= n, index++;
		printf(" +----------\n");
	} while (x);
	printf("    %d\n", x);

	for (int j = 0; j <= index / 2 - 1; j++) {
		swap(int, d[j], d[index - 1 - j]);
	}

	return index;
}

int main() {
	int x, n;
	printf("ǥ���ϰ� ���� ����? "); scanf_s("%d", &x);
	printf("�� �������� ǥ���ұ��? "); scanf_s("%d", &n);

	char d[512] = "";
	int digit = card_conv(x, n, d);

	printf("%d�� %d�������� ǥ���ϸ� ", x, n);
	
	for (int i = 0; i <= digit; i++) {
		printf("%c", d[i]);
	}

	printf("�Դϴ�.");

	return 0;
}