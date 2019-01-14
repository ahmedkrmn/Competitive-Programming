#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,k;

	scanf("%d%d", &n , &k);

	std::vector<std::vector<int> > arr;

	for (int i = 0; i < n; ++i)
	{
		int temp1,tem2;
		scanf("%d%d", &temp1 , &tem2);

		arr.push_back({temp1,tem2});
	}


	sort (arr.begin(), arr.end());
	unsigned long long int untilnow=0,now=0;

	if(n==1) now = arr[0][1];

	else
	{
		int p1=0,p2=0;
		unsigned long long int diff = 0;

	for (;p2 < n-1; ++p2)
	{
		diff += arr[p2+1][0]-arr[p2][0];
		if(diff<k)
		{
			untilnow+=arr[p2][1];
			if(p2==n-2) untilnow+=arr[p2+1][1];
		}
		else
		{
			untilnow+=arr[p2][1];
			now = max(untilnow,now);
			while(diff>=k)
			{
				untilnow-=arr[p1][1];
				diff-=arr[p1+1][0]-arr[p1][0];
				p1++;
			}
			if(p2==n-2) untilnow+=arr[p2+1][1];
			
		}

		now = max ( now , untilnow);
	}
}
	printf("%llu\n", now);

}