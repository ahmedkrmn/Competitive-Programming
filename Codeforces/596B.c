#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	scanf("%d",&n);
	long long int arr[n],sum=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld", &arr[i]);
		if (i==0)
		{
			sum+=abs(arr[i]);
		}
		else 
		{sum+=abs(arr[i]-arr[i-1]);}
	}
	printf("%lld\n", sum);
}