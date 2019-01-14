#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	if (n%2==0)
	{
		n/=2;
		cout << n << endl;
	}
	else
		{n/=2;
		cout <<"-"<<n+1<<endl;
}}