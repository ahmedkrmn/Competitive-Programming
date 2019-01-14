#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n,days,counter=0;
	long long int coins;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort (arr,arr+n);
	int min = arr[0];
	int max = arr[n-1];
	cin >> days;

	while(days--)
	{
		cin >> coins;
		if (coins<min)
	{
		cout << "0" << endl;
	}
	else if (coins>max)
	{
		cout << n << endl;
	}
	else
	{
		int index = upper_bound(arr,arr+n,coins)-arr-1;
		cout << index +1 << endl;	
}}}