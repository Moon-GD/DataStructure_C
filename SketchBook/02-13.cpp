#include<stdio.h>
typedef struct {
	int y;
	int m;
	int d;
}Date;

int month[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31} };

int isleap(int y) {
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

Date Dateof(int y, int m, int d) {
	Date dateof;
	dateof.d = d;
	dateof.m = m;
	dateof.y = y;
	return dateof;
}

Date After(Date x, int n) {
	x.d += n;
	while (x.d >= month[isleap(x.y)][x.m]) {
		x.d -= month[isleap(x.y)][x.m];
		if (++x.m > 12) {
			x.m = 1;
			x.y++;
		}
	}
	return x;
}

Date Before(Date x, int n) {
	x.d -= n;
	while (x.d < 1) {
		if (--x.m < 1) {
			x.m = 12;
			x.y--;
		}
		x.d += month[isleap(x.y)][x.m];
	}
	return x;
}

int main() {
	Date date;
	int n = 0;
	printf("몇 년입니까? "); scanf_s("%d", &date.y);
	printf("몇 월입니까? "); scanf_s("%d", &date.m);
	printf("몇 일입니까? "); scanf_s("%d", &date.d);
	/*
	printf("몇 일 후입니까? "); scanf_s("%d", &n);
	date = After(date, n);
	*/
	printf("몇 일 전입니까? "); scanf_s("%d", &n);
	date = Before(date, n);
	printf("%d년 %d월 %d일 입니다.", date.y, date.m, date.d);

	return 0;
}