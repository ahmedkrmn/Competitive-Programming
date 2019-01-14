#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n,k,number;
	bool nonzeronumber=true;
	cin >> n >> k;
	int arr[n+1];
	arr[0]=101;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		if (i==k)
		{
			number = arr[k];
			if (!number)
			{
				nonzeronumber=false;
			}
		}
		}	
	if (nonzeronumber){
	reverse (arr,arr+n+1);
	int position = lower_bound(arr,arr+n+1,number)-arr;
	cout << n-position << endl;
}
else
{
	reverse (arr,arr+n+1);
	int position = upper_bound(arr,arr+n+1,number)-arr;
	cout << n-position << endl;
}



	return 0;
}