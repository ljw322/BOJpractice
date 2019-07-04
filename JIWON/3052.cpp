#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	vector<int> v, v2;
	int input;

	for (int i = 0; i < 10; i++) 
	{
		scanf_s("%d", &input);
		v.push_back(input % 42);
	}

	v2.push_back(v[0]);
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < v2.size(); j++)
		{
			if (v[i] == v2[j]) break;
			else if (v[i] != v2[j] && j == v2.size()-1)
				v2.push_back(v[i]);
			else
				continue;
		}
		
	}

	printf("%d\n", v2.size());

	return 0;
}
