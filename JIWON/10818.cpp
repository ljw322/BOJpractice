#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int n, value;
	string input;

	cin >> n;

	while ( n > 0 )
	{
		cin >> input;

		if (input == "push"){
			cin >> value;
			s.push(value);
		}
		else if (input == "pop") {
			if (s.empty() == 1) cout << "-1" << endl;
			else {
				cout << s.top()<<endl;
				s.pop();
			}
		}
		else if (input == "size") {
			cout << s.size() << endl;
		}
		else if (input == "empty") {
			cout << s.empty() << endl;
		}
		else{	//top
			if (s.empty() == 1) cout << "-1" << endl;
			else cout << s.top() << endl;
		}

		n--;
	}
	   	 
	return 0;
}

