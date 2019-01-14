#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	long int nocups,noholes,noswappings,x1,x2,ball;
	scanf("%ld%ld%ld\n",&nocups,&noholes,&noswappings);
	long int holesarray1[noholes];
	for (int i = 0; i < noholes; ++i)
		{
			scanf("%ld\n", &holesarray1[i]);
		}
	ball = 1;
	sort (holesarray1,holesarray1+noholes);
	while(noswappings--)
	{
		if (binary_search(holesarray1,holesarray1+noholes,ball))
		{
			break;
		}
		scanf("%ld%ld\n",&x1 ,&x2);
		if (ball==x1)
		{
			ball = x2;
		}
		else if (ball == x2)
		{
			ball = x1;
		}
	}
	printf("%ld\n", ball);

}