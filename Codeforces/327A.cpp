#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n,sum,maxi=-1;
	bool isZero=false;
	cin >> n;
	int arr[n],arrcopy[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i]==0)
		{
			isZero=true;
		}
	}
	for (int q = 0; q < n; ++q)
				{
					arrcopy[q]=arr[q];
				}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{

			for (int z = i; z <= j; ++z)
				{

				arrcopy[z]=1-arr[z];
				}
				sort(arrcopy,arrcopy+n);
				
				sum = upper_bound(arrcopy,arrcopy+n,1)-lower_bound(arrcopy,arrcopy+n,1);
				
				maxi = max(maxi,sum);
				for (int q = 0; q < n; ++q)
				{
					arrcopy[q]=arr[q];
				}
		}

	}
	if (isZero)
	{
		cout << maxi << endl;
	}
	else
		{
			if ((maxi-1)<0)
			{
				cout << "0" << endl;
			}
			else  
				cout << maxi -1 << endl;
		}

}