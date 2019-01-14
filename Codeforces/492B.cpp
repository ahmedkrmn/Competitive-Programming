#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
	int n,l;
	cin >> n>> l;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	sort(arr,arr+n);

	double minDist;

	if(arr[0]!=0) minDist=arr[0];
	if(arr[n-1]!=l) minDist > l-arr[n-1] ? minDist : minDist =  l-arr[n-1];

	for (int i = 0; i < n-1; ++i)
	{
		double dist = (arr[i+1]-arr[i])/2.0;

		minDist > (arr[i+1]-arr[i])/2.0  ? minDist : minDist = (arr[i+1]-arr[i])/2.0;


	}

	cout <<fixed << setprecision(10) << double(minDist) ;

}