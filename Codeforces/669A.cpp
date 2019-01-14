#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	if (n==2)
	{
		cout << "1" << endl;
	}
	else if (n%3==0)
	{
		cout << n*2/3 << endl;
	}
	else
		cout << (n/3)*2+1 << endl;
}