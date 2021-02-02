#include<stdio.h>

int main() {
	int i, j;

	for (i = 1; i <= 9; i++) {
		printf("%3d", i);
	}
	putchar('\n');
	printf("------------------------------\n");
	for (j = 1; j <= 9; j++) {
		printf("%d|", j);
		for (i = 1; i <= 9; i++) {
			printf("%3d", j * i);
		}
		putchar('\n');
	}


	return 0;
}