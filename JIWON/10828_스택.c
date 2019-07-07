#include <stdio.h>
//#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 10000

typedef struct _stack {
	int arr[MAX_SIZE];
	int top;
}Stack;

void StackInit(Stack* sp) {
	sp->top = -1;
}

int IsEmpty(Stack* sp) {
	if (sp->top == -1) return TRUE;
	else return FALSE;
}

int IsFull(Stack* sp) {
	if (sp->top + 1 >= MAX_SIZE) return TRUE;
	else return FALSE;
}

int Size(Stack* sp) {
	return sp->top + 1;
}

void Push(Stack* sp, int data) {
	if (IsFull(sp) == TRUE) return;
	sp->arr[++(sp->top)] = data;		//배열에 넣으면서 top증가
}

int Pop(Stack* sp) {
	if (IsEmpty(sp) == TRUE) return -1;
	return sp->arr[(sp->top)--];			//우왕
}

int Top(Stack* sp) {
	if (IsEmpty(sp) == TRUE) return -1;
	return sp->arr[sp->top];
}

int main()
{
	int n, value;
	char str[6];
	Stack stack;

	scanf("%d", &n);
	fgetc(stdin);
	StackInit(&stack);

	while (n > 0)
	{
		scanf("%s", str);
		fgetc(stdin);

		if (!strcmp(str, "push")) {	//문자열 같으면 0반환
			int num;
			scanf("%d", &num);
			Push(&stack, num);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", Pop(&stack));
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", IsEmpty(&stack));
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", Size(&stack));
		}else {
			printf("%d\n", Top(&stack));
		}
		n--;
	}
	return 0;
}
