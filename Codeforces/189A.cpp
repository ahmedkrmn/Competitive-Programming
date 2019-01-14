#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;

	// equation is xa+yb+zc=n 

	int maxi=0;

	for (int x = 0; x <= n; ++x)
	{
		for (int y = 0; y <= n; ++y)
		{
			float z = float(n-x*a-y*b)/c;
			if(floor(z)==z && z>=0) {maxi = max(maxi,x+y+int(z));} 
		}
	}

	cout << maxi;

}