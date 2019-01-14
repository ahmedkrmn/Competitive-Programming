#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x=0;
	cin >>n;
	char o1,o2,o3;
	while(n--)
	{
		cin >> o1 >> o2 >> o3;
		if (o2 == '+')
		{
			x++;
		}
		else if (o2 =='-')
		{
			x--;
		}
	}
	cout <<x;
	
}