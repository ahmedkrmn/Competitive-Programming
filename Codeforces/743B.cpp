#include <iostream>

using namespace std;


unsigned long long int BinarySearch(unsigned long long int n , unsigned long long int k);

int main()
{
	unsigned long long int n,k;

	cin >> n >> k;

	cout << BinarySearch(n,k);

}

unsigned long long int BinarySearch( unsigned long long int n , unsigned long long int k)
{

	unsigned long long int start = 1 , end =  (1ull<<n)-1 , val = n;

	while(start != end)
	{
		unsigned long long int mid = start/2 + end/2 +1;
		if(mid==k)
			break;
		else if (mid<k)
			start=mid+1;
		else if (mid>k)
			end = mid-1;
		val--;
	}


	return val;



}