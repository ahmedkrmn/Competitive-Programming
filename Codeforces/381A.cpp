#include <iostream>

using namespace std;

int main()
{
	int n , p1=0 , s=0 , d=0;
	cin >> n;
	int arr[n] , p2 = n-1;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
        if(arr[p2]>arr[p1]) { if(i%2==0) s+=arr[p2]; else d+=arr[p2]; p2--;}
		else  {if(i%2==0) s+=arr[p1]; else d+=arr[p1]; p1++;}
	    
	}
	cout << s << " " << d;
}