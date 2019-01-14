#include <iostream>
#include <limits.h>
using namespace std;

long long int MaxSubArray (int arr[] , int size)
{
	long long int maxsum = arr[0];
	long long int currentMax=arr[0];

	for (int i = 1; i < size; ++i)
	{
		if(arr[i]+currentMax>arr[i]) currentMax = arr[i]+currentMax;
		else
			currentMax=arr[i];

		maxsum=max(currentMax,maxsum);
	}

	return maxsum;
}

int main()
{
	int size;

	while(cin >> size)
{
	
	int input[size][size];

	long long int Maxresult=INT_MIN;
	

	for (int i = 0; i < size; ++i)
		for (int y = 0 ; y <size ; y++)
		cin >> input[i][y];
	
	for (int start = 0; start < size; ++start)
	{
		int dynamicProg[size]={0};

		for (int end = start; end < size ; ++end)
		{
			for (int rows = 0; rows < size; ++rows)
			{
				dynamicProg[rows]+=input[rows][end];
			}

			Maxresult = max ( Maxresult , MaxSubArray(dynamicProg , size));

		}

	}

	cout << Maxresult<<endl;

}
}
