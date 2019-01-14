#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,a,b,esta,estb,est3=0;
	cin >> n >> a >> b;
	esta = a+1;


	for (esta ; esta <= n; ++esta)
	{
		if (n-esta<=b)
		{
		
			est3 +=1;

		}
	}
cout << est3 << endl;

	
}