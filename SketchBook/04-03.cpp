#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int max;
	int num;
	int* que;
}ArrayIntQueue;

int InQue(ArrayIntQueue* queue, int n) {
	if (queue->num >= queue->max) {
		printf("인큐 할 수 없습니다.\n");
		return -1;
	}
	queue->que[queue->num++] = n;
	return 0;
}

int Deque(ArrayIntQueue* queue, int* n) {
	if (queue->num <= 0) {
		printf("디큐할 수 없습니다.\n");
		return -1;
	}
	*n = queue->que[0];
	for(int i=0;i<queue->num;i++){
		queue->que[i] = queue->que[i + 1];
	}
	queue->num--;
	return 0;
}

void Print(ArrayIntQueue queue) {
	for (int i = 0; i < queue.num; i++) {
		printf("%d ", queue.que[i]);
	}
	putchar('\n');
}

void Terminate(ArrayIntQueue queue) {
	if (queue.que != NULL) {
		free(queue.que);
	}
	queue.max = queue.num = 0;
}

int main() {
	ArrayIntQueue queue;
	
	//queue 초기화
	queue.max = 64;
	if ((queue.que = (int*)calloc(queue.max, sizeof(int))) == NULL) {
		printf("큐를 초기화 할 수 없습니다.");
		return -1;
	}
	queue.num = 0;

	while (1) {
		printf("현재 데이터 : %d / %d\n", queue.num, queue.max);
		printf("(1) 인큐 (2) 디큐 (3) 출력 (0) 종료 ");
		int menu = 0, n = 0;
		scanf_s("%d", &menu);
		if (menu == 0) {
			break;
		}
		switch (menu) {
		case 1:
			printf("인큐할 데이터 : "); scanf_s("%d", &n);
			InQue(&queue, n);
			break;

		case 2:
			Deque(&queue, &n);
			printf("디큐 데이터는 %d 입니다.\n", n);
			break;

		case 3:
			Print(queue);
			break;
		}
	}
	Terminate(queue);

	return 0;
}