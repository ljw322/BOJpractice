#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000001];
int main()
{
	int n;
	cin >> n;

	arr[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 1;
		//6같은경우 3먼저해야
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
		else if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
		
	}

	cout << arr[n];

	return 0;
}
