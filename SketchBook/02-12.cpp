#include<stdio.h>

typedef struct {
	char name[20];
	double height;
	double eyesight;
}phsical_rearch;

double height_avg(phsical_rearch data[], int size) {
	
	double sum = 0;
	
	for (int i = 0; i < size; i++) {
		sum += data[i].height;
	}

	return sum / size;
}

void eyesight_distribution(phsical_rearch test[], int size, int array[]) {
	for (int i = 0; i < size; i++) {
		int index = (int)(test[i].eyesight / 0.1);
		array[index]++;
	}
	
	for (int i = 0; i < 22; i++) {
		printf("%.1lf~ : ", (double)i / 10);
		for (int j = 0; j < array[i]; j++) {
			printf("*");
		}
		putchar('\n');
	}
}


int main() {
	phsical_rearch test[] = {
		{"박현규", 162, 0.3},
		{"함진아", 173, 0.7},
		{"최윤미", 175, 2.0},
		{"홍연의", 171, 1.5},
		{"이수진", 168, 0.4},
		{"김영준", 174, 1.2},
		{"박용규", 169, 0.8}
	};
	int size = sizeof(test) / sizeof(test[0]);
	int array[23] = { 0 };
	printf("■□■ 신체검사 표 ■□■\n");
	printf("이름   키   시력\n");

	for (int i = 0; i < size; i++) {
		printf("%s %.1lf %.1lf\n", test[i].name, test[i].height, test[i].eyesight);
	}
	printf("평균 키 : %.1lfcm\n", height_avg(test, size));
	printf("시력분포\n");

	eyesight_distribution(test, size, array);


	return 0;
}