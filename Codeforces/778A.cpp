#include <iostream>
#include <string>

using namespace std;

int main()
{
	string original,manipulated;

	cin >> original >> manipulated;

	int n= original.size();
	int n2=manipulated.size();

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int start = 0 , end = n-1 ;

	while(start!=end)
	{
		int mid = (start+end)/2;

		bool Barr[n]={0};


		for (int i = 0; i <= mid ; ++i)
		{
			Barr[arr[i]-1]=1;
		}

		int indexS = 0;

		for (int i = 0; i < n; ++i)
		{
			if(Barr[i]==0 && original[i]==manipulated[indexS]) indexS++;
			if (indexS==n2) break;
		}

		if(indexS==n2)
			{start = mid+1;}
		else
			end=mid;
	}
		cout << start;


}