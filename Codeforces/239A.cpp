#include <bits/stdc++.h>
using namespace std;

int main()
{
	int y,k,n,bet;
	scanf("%d%d%d",&y,&k,&n);
	bool printed=false;
	for (int i = k; i <= n; i+=k)
	{
		i-y >0 ?  printf("%d ",i-y ) : bet=0 ;
		if (i-y > 0) printed=true;
	}
	if (!printed) {printf("-1");}
	cout << "\n";

}