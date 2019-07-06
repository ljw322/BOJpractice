#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a, b, c;
	//cin >> a >> b >> c;
	scanf_s("%d %d %d", &a, &b, &c);

	/*cout << (a + b) % c << endl;
	cout << (a % c + b % c) % c << endl;
	cout << (a * b) % c << endl;
	cout << (a % c * b % c) % c << endl;*/

	printf("%d\n", (a + b) % c);
	printf("%d\n", (a % c + b % c) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", (a % c * b % c) % c);

	return 0;
}
