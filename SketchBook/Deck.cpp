#include<stdio.h>
#include<stdlib.h>
#include "Deck.h"

int Initialize(Deck* deck, int max) {
	if ((deck->que = (int*)calloc(max, sizeof(int))) == NULL) {
		printf("덱을 초기화 할 수 없습니다.\n");
		return -1;
	}
	deck->max = max;
	deck->num = deck->front = deck->rear = 0;
	return 0;
}

int LeftEnque(Deck* deck, int x) {
	if (deck->num >= deck->max) {
		printf("덱 왼쪽에 인큐할 수 없습니다.\n");
		return -1;
	}

	deck->num++;
	if (deck->front <= 0) {
		deck->front += deck->max;
	}
	deck->que[--deck->front] = x;

	return 0;
}

int RightEnque(Deck* deck, int x) {
	if(deck->num >= deck->max) {
		printf("덱 오른쪽에 인큐할 수 없습니다.\n");
		return -2;
	}

	deck->que[deck->rear] = x;
	deck->num++, deck->rear++;
	if (deck->rear >= deck->max) {
		deck->rear %= deck->max;
	}

	return 0;
}

int LeftDeque(Deck* deck, int* x) {
	if (deck->num <= 0) {
		printf("왼쪽에 디큐할 수 없습니다.\n");
		return -1;
	}

	*x = deck->que[deck->front++];
	if (deck->front >= deck->max) {
		deck->front %= deck->max;
	}
	deck->num--;

	return 0;
}

int RightDeque(Deck* deck, int* x) {
	if (deck->num <= 0) {
		printf("오른쪽에 디큐할 수 없습니다\n");
		return -2;
	}

	if (--deck->rear <= 0) {
		deck->rear += deck->max;
	}

	*x = deck->que[deck->rear];
	deck->num--;

	return 0;
}

int LeftPeek(Deck* deck, int* x) {
	if (deck->num <= 0) {
		printf("왼쪽에 피크할 수 없습니다\n");
		return -1;
	}

	*x = deck->que[deck->front];
	return 0;
}

int RightPeek(Deck* deck, int* x) {
	if (deck->num <= 0) {
		printf("오른쪽에 피크할 수 없습니다\n");
		return -2;
	}
	*x = deck->que[deck->rear - 1];
	return 0;
}

void Print(Deck* deck) {
	for (int i = 0; i < deck->num; i++) {
		printf("%d ", deck->que[(i + deck->front) % deck->max]);
	}
	putchar('\n');
}

void Terminate(Deck* deck) {
	if (deck->que != NULL) {
		free(deck->que);
	}
	deck->max = deck->front = deck->rear = deck->num = 0;
}