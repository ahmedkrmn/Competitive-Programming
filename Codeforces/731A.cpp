#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string x;
	int c=0;
	char start = 'a';

	cin >> x;

	for (int i = 0; i < x.size(); ++i)
	{
		abs(start-x[i]) <= 13 ? c+=abs(start-x[i]) : c+=26-abs(start-x[i]);
		start = x[i];
	}

	cout << c;
}