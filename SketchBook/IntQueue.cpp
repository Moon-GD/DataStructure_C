#include<stdio.h>
#include<stdlib.h>
#include "IntQueue.h"

int Initialize(IntQueue* queue, int max) {
	if ((queue->que = (int*)calloc(max, sizeof(int))) == NULL) {
		printf("초기화 할 수 없습니다.\n");
		return -1;
	}
	queue->front = queue->rear = queue->num = 0;
	queue->max = max;
	return 0;
}

int Inque(IntQueue* queue, int n) {
	if (queue->num >= queue->max) {
		printf("인큐 할 수 없습니다.\n");
		return -1;
	}
	queue->num++;
	queue->que[queue->rear++] = n;
	queue->rear %= queue->max;
	return 0;
}

int Deque(IntQueue* queue, int* n) {
	if (queue->num <= 0) {
		printf("디큐할 수 없습니다.\n");
		return -1;
	}
	*n = queue->que[queue->front++];
	queue->num--;
	queue->front %= queue->max;
	return 0;
}

int Peek(IntQueue* queue, int* n) {
	if (queue->num <= 0) {
		printf("피크할 수 없습니다.\n");
		return -1;
	}
	*n = queue->que[queue->front];
	return 0;
}

void Clear(IntQueue* queue) {
	queue->num = queue->front = queue->rear = 0;
}

int Capacity(const IntQueue* queue) {
	return queue->max;
}

int Size(const IntQueue* queue) {
	return queue->num;
}

int IsEmpty(const IntQueue* queue) {
	return queue->num <= 0;
}

int IsFull(const IntQueue* queue) {
	return queue->num >= queue->max;
}

int Search(const IntQueue* queue, int x) {
	for (int i = queue->front; i != queue->rear; i++) {
		if (i >= queue->max) {
			i = i % queue->max;
		}
		if (queue->que[i] == x) {
			return i;
		}
	}
	printf("찾을 수 없습니다.\n");
	return -1;
}

void Print(IntQueue* queue) {
	for (int i = queue->front; i != queue->rear; i++) {
		if (i >= queue->max) {
			i = i % queue->max;
		}
		printf("%d  ", queue->que[i]);
	}
	putchar('\n');
}

void Terminate(IntQueue* queue) {
	if (queue->que != NULL) {
		free(queue->que);
	}
	queue->num = queue->max = queue->front = queue->rear = 0;
}

int Search2(const IntQueue& q, int x) {
	for (int i = q.front; i != q.rear; i++) {
		if (i >= q.max) {
			i = i % q.max;
		}
		if (q.que[i] == x) {
			return i - q.front;
		}
	}
	return -1;
}