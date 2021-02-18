#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int max;
	int num;
	int* que;
}ArrayIntQueue;

int InQue(ArrayIntQueue* queue, int n) {
	if (queue->num >= queue->max) {
		printf("��ť �� �� �����ϴ�.\n");
		return -1;
	}
	queue->que[queue->num++] = n;
	return 0;
}

int Deque(ArrayIntQueue* queue, int* n) {
	if (queue->num <= 0) {
		printf("��ť�� �� �����ϴ�.\n");
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
	
	//queue �ʱ�ȭ
	queue.max = 64;
	if ((queue.que = (int*)calloc(queue.max, sizeof(int))) == NULL) {
		printf("ť�� �ʱ�ȭ �� �� �����ϴ�.");
		return -1;
	}
	queue.num = 0;

	while (1) {
		printf("���� ������ : %d / %d\n", queue.num, queue.max);
		printf("(1) ��ť (2) ��ť (3) ��� (0) ���� ");
		int menu = 0, n = 0;
		scanf_s("%d", &menu);
		if (menu == 0) {
			break;
		}
		switch (menu) {
		case 1:
			printf("��ť�� ������ : "); scanf_s("%d", &n);
			InQue(&queue, n);
			break;

		case 2:
			Deque(&queue, &n);
			printf("��ť �����ʹ� %d �Դϴ�.\n", n);
			break;

		case 3:
			Print(queue);
			break;
		}
	}
	Terminate(queue);

	return 0;
}