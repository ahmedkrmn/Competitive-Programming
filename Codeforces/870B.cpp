#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,k;
	cin >> n >> k;

	long long int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	if(k>2) cout << *max_element(arr,arr+n) <<endl;

	else if(k==1) cout << *min_element(arr,arr+n) <<endl;

	else
		{
			long long ans=arr[0];

				ans = max( (*min_element(arr,arr+n-1) , arr[n-1]) , (*min_element(arr+1,arr+n) , arr[0])) ;


			cout << ans << endl;
		}

}