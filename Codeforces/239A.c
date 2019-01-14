#include "stdio.h"
#include <stdbool.h>

int main()
{
	int y,k,n,bet;
	scanf("%d%d%d",&y,&k,&n);
	bool printed=false;
	for (int i = k; i <= n; i+=k)
	{
		if (i-y > 0) printf("%d ",i-y );
		else bet = 0;
		if (i-y > 0) printed=true;
	}
	if (!printed) printf("-1");
	printf("\n");

}