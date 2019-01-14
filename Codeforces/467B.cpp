#include <iostream>

using namespace std;


int main()
{
	int n,m,k,cnt=0,cnt2;
	cin >> n >> m >> k;
	m++;
	int arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < m-1; ++i)
	{
		cnt2=0;
		int opAMP = arr[i]^arr[m-1];
		while(opAMP) {cnt2++; opAMP-=opAMP&-opAMP;}
		if(cnt2<=k) cnt++;
	}
	cout << cnt;
}