#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{

	int piles,q;
	cin >> piles;
	int sum[piles];
	for (int i = 0; i < piles; ++i)
	{
		cin >> q;
		if(i==0) sum[i]=q;
		else
		{sum[i]=sum[i-1]+q;}

	}

	cin >> q;
	int worm;
	while(q--)
	{

		cin>> worm;
		cout << (lower_bound(sum,sum+piles,worm)-sum)+1<<endl;


	}

}