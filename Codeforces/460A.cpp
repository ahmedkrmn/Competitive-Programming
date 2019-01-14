#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c=0;
	cin >>a >>b;
	for (int i = 1; i <= a; ++i)
	
	
	{
		if (i%b==0)
		{
			a++;
		}
		c ++;
	}
	cout << c <<endl;
}