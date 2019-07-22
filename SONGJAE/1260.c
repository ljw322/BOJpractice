#include <stdio.h>
#include <stdlib.h>

int graph[1001][1001] = { 0 };
int DFSvisit[1001] = { 0 };
int BFSvisit[1001] = { 0 };

struct Node {
	int data;
	struct Node *next;
};

struct Queue {
	struct Node *front;
	struct Node *last;
	unsigned int size;
};

void init(struct Queue *q) {
	q->front = NULL;
	q->last = NULL;
	q->size = 0;
}

int front(struct Queue *q) {
	return q->front->data;
}

void pop(struct Queue *q) {
	q->size--;

	struct Node *tmp = q->front;
	q->front = q->front->next;
	free(tmp);
}

void push(struct Queue *q, int data) {
	q->size++;

	if (q->front == NULL) {
		q->front = (struct Node *) malloc(sizeof(struct Node));
		q->front->data = data;
		q->front->next = NULL;
		q->last = q->front;
	}
	else {
		q->last->next = (struct Node *) malloc(sizeof(struct Node));
		q->last->next->data = data;
		q->last->next->next = NULL;
		q->last = q->last->next;
	}
}



void DFS(int S, int N) {

	DFSvisit[S] = 1;
	printf("%d ", S);


	for (int i = 1;i <= N;i++) {
		if (graph[S][i] == 1 && DFSvisit[i] == 0)
			DFS(i, N);
	}
}

void BFS(int S, int N) {

	struct Queue q;
	init(&q);
	push(&q, S);
	BFSvisit[S] = 1;

	printf("%d ", S);

	int k;
	while (q.size != 0) {

		k = front(&q);
		pop(&q);
		for (int i = 1;i <= N;i++) {
			if (graph[k][i] == 1 && BFSvisit[i] == 0) {
				push(&q, i);
				BFSvisit[i] = 1;
				printf("%d ", i);
			}
		}
	}

}

int main(void)
{
	int N, M, S;
	int x, y;

	scanf("%d %d %d", &N, &M, &S);
	for (int i = 0;i < M;i++) {
		scanf("%d %d", &x, &y);
		graph[x][y] = 1;
		graph[y][x] = 1;

	}

	DFS(S, N);
	printf("\n");
	BFS(S, N);

	return 0;
}
