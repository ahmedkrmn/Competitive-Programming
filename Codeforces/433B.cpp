#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{

	int size;
	scanf("%d",&size);
	long long int CSum[size]={},bS[size]={},CSumS[size]={};
	for (int i = 0; i < size; ++i)
	{
		scanf("%d",bS+i);
		CSum[i]=bS[i]+(i?CSum[i-1]:0);
	}
	sort (bS,bS+size);

	for (int i = 0; i < size; ++i)
	{
		CSumS[i]=bS[i]+(i?CSumS[i-1]:0);
	}

	int type,q,l,r;
	scanf("%d",&q);
	while(q--)
	{

		scanf("%d",&type);
		if(type==1)
		{
			scanf("%d%d",&l,&r);
			l!=1 ? printf("%lld\n",CSum[r-1]-CSum[l-2]) : printf("%lld\n",CSum[r-1]);



		}

		else
		{

            scanf("%d%d",&l,&r);
            l!=1 ? printf("%lld\n",CSumS[r-1]-CSumS[l-2]) : printf("%lld\n",CSumS[r-1]);


		}

	}

}