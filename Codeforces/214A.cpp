#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,n,m,c=0;
	cin >> n >>m;
	for (int a = 0; a <= 100; ++a)
	{
		for (int b = 0; b <= 100; ++b)
		{
			if (a*a+b==n && a+b*b==m)
			{
				c++;
			}
		}
	}
	cout << c;

}