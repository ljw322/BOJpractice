#include<stdio.h>
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int goUp(int stair, int *score ) {
	
	int total[300];

	total[1] = score[1];
	if (stair >= 2) total[2] = total[1] + score[2];

	for (int i = 3;i <= stair;i++) {
		total[i] = MAX(total[i - 2] + score[i], total[i - 3] + score[i - 1] + score[i]);

	}

	printf("%d", total[stair]);

}

int main() {
	int stair; //계단 총 개수
	int score[310];
	int MAX;

	scanf("%d", &stair);
	for (int i = 1;i <= stair;i++) {
		scanf("%d", &score[i]);
	}
	goUp(stair, score);


	return 0;
}
