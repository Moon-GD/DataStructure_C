#include<stdio.h>
typedef struct {
	int y;
	int m;
	int d;
}Date;



int main() {
	Date date;

	printf("�� ���Դϱ�? "); scanf_s("%d", &date.y);
	printf("�� ���Դϱ�? "); scanf_s("%d", &date.m);
	printf("�� ���Դϱ�? "); scanf_s("%d", &date.d);
	printf("�Է��Ͻ� �ð��� %d�� %d2�� %2d�� �Դϴ�.", date.y, date.m, date.d);

	return 0;
}