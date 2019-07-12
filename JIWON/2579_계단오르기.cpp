#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int StairNum;
	cin >> StairNum;

	int* stair = new int[StairNum + 1];		//계단 셋팅
	int* sum = new int[StairNum + 1];		//계단별 총점저장

	for (int i = 1; i <= StairNum; i++)
		cin >> stair[i];

	sum[0] = 0;
	sum[1] = stair[1];
	sum[2] = max(sum[1], sum[0]) + stair[2];

	for (int j = 3; j <= StairNum; j++)
	{
		sum[j] = max(sum[j - 2], sum[j - 3] + stair[j - 1]) + stair[j];
	}

	cout << sum[StairNum];

	delete[] stair;
	delete[] sum;

	return 0;
}

//reference: https://deliorange.tistory.com/84


