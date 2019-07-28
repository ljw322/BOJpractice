#include<stdio.h>

int main() {

	int a;
	int b[102];	
	int check = 0;
	int k = 0;

	scanf("%d", &a);
	for (int i = 0;i < a;i++) {
		scanf("%d", &b[i]);
	}

	for (int i = 0;i < a;i++) {
		for (int j = 2;j < b[i];j++) {
			if (b[i] % j == 0) {
				check++;
			}
		}
		if (b[i] == 2) {
			k++;
		}

		else if (check == 0&&b[i]!=1) {
			k++;
		}
		check = 0;
	}

	printf("%d", k);

	return 0;
}

