#include<stdio.h>
typedef struct {
	int y;
	int m;
	int d;
}Date;



int main() {
	Date date;

	printf("몇 년입니까? "); scanf_s("%d", &date.y);
	printf("몇 월입니까? "); scanf_s("%d", &date.m);
	printf("몇 일입니까? "); scanf_s("%d", &date.d);
	printf("입력하신 시각은 %d년 %d2월 %2d일 입니다.", date.y, date.m, date.d);

	return 0;
}