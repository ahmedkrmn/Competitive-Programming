#include <iostream>

using namespace std;

int main()
{
	int k , n , res=1;
	cin>>k>>n;
	while(1)
	{
		if(res*k%10 == 0 || res*k%10 == n) break;
		res++;
	}

	cout << res;
}