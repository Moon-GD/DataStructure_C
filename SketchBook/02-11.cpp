#include<stdio.h>

int day[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31} };
// 0 : ���, 1 : ����

int isleap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 1);
}

int dayofyear(int leap, int month, int d) {
	while (--month) {
		d += day[leap][month - 1];
	}
	return d;
}

int main() {
	int year, month, d;
	printf("�� : "); scanf_s("%d", &year);
	printf("�� : "); scanf_s("%d", &month);
	printf("�� : "); scanf_s("%d", &d);

	printf("%d���� %d��°�Դϴ�.", year, dayofyear(isleap(year), month, d));

	return 0;
}