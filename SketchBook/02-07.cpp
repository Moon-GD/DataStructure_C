#include<stdio.h>
#define swap(type, a, b) { type t = a; a = b; b = t;}

int card_conv(int x, int n, char d[]) {
	int temp = x;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int index = 0;
	do {
		d[index] = dchar[x % n];
		printf("%d | %d … %c\n", n, x, d[index]);
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
	printf("표현하고 싶은 수는? "); scanf_s("%d", &x);
	printf("몇 진법으로 표현할까요? "); scanf_s("%d", &n);

	char d[512] = "";
	int digit = card_conv(x, n, d);

	printf("%d를 %d진법으로 표현하면 ", x, n);
	
	for (int i = 0; i <= digit; i++) {
		printf("%c", d[i]);
	}

	printf("입니다.");

	return 0;
}