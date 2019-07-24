#include<stdio.h>
#include<string.h>

int main() {

	
	char c[100];
	int alpha[26];
	int l = 0;
	scanf("%s", c);

	l = strlen(c);

	for (int i = 0;i < 26;i++) {
		alpha[i] = -1;
	}
	
	
	
	for (int i = 0;i < l;i++) {

		int Num = c[i] - 97;

		if (alpha[Num] == -1)
			alpha[Num] = i;

	
	}
	for (int i = 0;i < 26;i++) {
		printf("%d ", alpha[i]);
	}


	return 0;
}
