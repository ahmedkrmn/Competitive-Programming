#include <iostream>
using namespace std;
int main()
{
	long long int n,k,numodd,weare;
	
	cin >> n >> k;
	if (n%2==0)
	{
		numodd = n/2; //how many odd numbers in case n is even
		
	}
	else if (n%2!=0)
	{
		numodd = (n+1)/2; //how many odd numbers in case of n is odd
		
	}
	if (k>numodd)
	{
		k-=numodd;
		weare=2*k; // the k(th) even number
	}
	else if (k<=numodd)
	{
		weare=(2*k)-1; // the k(th) odd number
	}
	cout << weare ;
}