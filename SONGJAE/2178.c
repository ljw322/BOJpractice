#include <stdio.h>
int i, j, N, M;

int map[501][501];
int visited[501][501];


typedef struct position {
	int x;
	int y;
}p;

p queue[10001];    
int front, rear, max;    


int X[4] = { 0,0,1,-1 };
int Y[4] = { 1,-1,0,0 };


p deque();
void enque(int, int);
int isEmpty();

void search()
{
	int x, y;
	while (isEmpty()) {
		p q = deque();
		for (i = 0;i < 4;i++) {
			x = q.x + X[i];
			y = q.y + Y[i];

			if (x >= 1 && x <= N && y >= 1 && y <= M) {

				if (map[x][y] == 1) {
					if (visited[x][y] == 0) {
						visited[x][y] = visited[q.x][q.y] + 1;
						enque(x, y);
					}
				}
			}

		}
	}
}
int main()
{
	scanf("%d %d", &M, &N);
	for (i = 1;i <= M;i++)
		for (j = 1; j <= N; j++)
			scanf("%1d", &map[j][i]);    

	visited[1][1] = 1;    
	enque(1, 1);        
	search();                
	printf("%d\n", visited[N][M]);    

}
void enque(int x, int y)
{
	p temp;
	temp.x = x; temp.y = y;
	queue[rear++] = temp;
}
p deque()
{
	p temp = queue[front++];
	return temp;
}

int isEmpty() {
	if (front == rear)
		return 0;
	else
		return 1;
}

