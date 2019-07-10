#include<stdio.h>
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int min = 1000001;
int arr[1000000];

int make1(int n) {

	if (n == 1) {
		arr[n] = 0;
		return;
	
	}
	for (int i = 2;i <= n;i++) {
		
		arr[i] = arr[i - 1] + 1;
		

		if (i >= 3 && i % 3 == 0) {

			arr[i] = MIN(arr[i], arr[i / 3] + 1);


		}

		if (i >= 2 && i % 2 == 0) {
			
			arr[i] = MIN(arr[i], arr[i / 2] + 1);

		}
	}



}

int main() {

	int number;
	scanf("%d", &number);
	make1(number);
	printf("%d",arr[number]);

	return 0;

}
