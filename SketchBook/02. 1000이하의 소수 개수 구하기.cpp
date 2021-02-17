#include<stdio.h>

int main() {
	int prime[500] = { 0 };
	int index = 0;
	prime[index++] = 2;
	prime[index++] = 3;

	int cnt = 0; // °è»ê È½¼ö

	for (int i = 5; i <= 1000; i += 2) {
		int flag = 0;
		for (int j = 1; cnt++, prime[j] * prime[j] <= i; j++) {
			cnt++;
			if (i % prime[j] == 0) {
				flag = 1;
				break;
			}
		}
		if ( ! flag ) {
			prime[index++] = i;
		}
	}
	printf("%d", cnt);
	return 0;
}