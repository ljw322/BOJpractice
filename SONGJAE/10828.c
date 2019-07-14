#include<stdio.h>
#include<string.h>

int count = 0;
int stack[10000];

struct Input {
	char input[10];
	int value;


};

int push(int value) {

	stack[count] = value;
	count++;

}

void pop() {

	if (count != 0) {
		--count;
		printf("%d\n", stack[count]);
	}
	else
		printf("%d\n", -1);
}

void size() {
	printf("%d\n", count);
}

void empty() {
	if (count == 0)
		printf("%d\n", 1);
	else
		printf("%d\n", 0);
}

void top() {
	if (count == 0)
		printf("%d\n", -1);
	else
		printf("%d\n", stack[count - 1]);

}


int main() {

	int repeat = 0;
	struct Input input[10000];

	scanf("%d", &repeat);

	for (int i = 0;i < repeat;i++) {

		scanf("%s", input[i].input);

		if (strcmp(input[i].input, "push") == 0)
			scanf("%d", &input[i].value);

		if (strcmp(input[i].input, "push") == 0)
			push(input[i].value);

		else if (strcmp(input[i].input, "pop") == 0) {
			pop();
		}

		else if (strcmp(input[i].input, "size") == 0)
			size();

		else if (strcmp(input[i].input, "empty") == 0)
			empty();

		else if (strcmp(input[i].input, "top") == 0)
			top();

	}

	

	
	return 0;
}
