#include<stdio.h>

int main() {
	int N;
	int n;
	scanf("%d", &N);
	int sum[100000];
	int ans[100000];

	sum[0] = 0;
	sum[1] = 1;
	sum[2] = 2;
	sum[3] = 4;
	for (int i = 0;i < N;i++) {
		scanf("%d", &n);
		for (int j = 4;j <= n;j++) {
			sum[j] = sum[j - 1] + sum[j - 2] + sum[j - 3];
		}
		ans[i] = sum[n];

	}
	for (int k = 0;k < N;k++) {
		printf("%d\n", ans[k]);
	}


	return 0;
}
