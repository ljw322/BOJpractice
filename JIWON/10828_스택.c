#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000

typedef struct _stack {
	int arr[MAX_SIZE];
	int top;
}Stack;

void StackInit(Stack* sp) {
	sp->top = -1;
}

int IsEmpty(Stack* sp) {
	if (sp->top == -1) return 1;
	else return 0;
}

int IsFull(Stack* sp) {
	if (sp->top + 1 >= MAX_SIZE) return 1;
	else return 0;
}

int Size(Stack* sp) {
	return sp->top+1;
}

void Push(Stack* sp, int data) {
	if (IsFull(sp) == 1) return;
	else sp->arr[++(sp->top)] = data;
}

int Pop(Stack* sp) {
	if (IsEmpty(sp) == 1) return -1;
	else return sp->arr[(sp->top)--];
}

int Top(Stack* sp) {
	if (IsEmpty(sp) == 1) return -1;
	return sp->arr[sp->top];
}

int main() {
	int n;
	char str[6];

	Stack s;
	StackInit(&s);

	scanf("%d", &n);
	fgetc(stdin);

	while (n > 0) {

		scanf("%s", str);
		fgetc(stdin);

		if (!strcmp(str, "push")) {
			int value;
			scanf("%d", &value);
			Push(&s, value);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", Pop(&s));
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", Size(&s));
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", IsEmpty(&s));
		}
		else {
			printf("%d\n", Top(&s));
		}

		n--;
	}


	return 0;
}
