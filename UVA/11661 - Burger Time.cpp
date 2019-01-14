#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

	int stringsize,maxRes,tempres;
	bool done ;
	char s,temp='.';
	
	while(scanf("%d",&stringsize) && stringsize)
		{
			int arr[2000000];
			done=false,temp='.',maxRes=2000000000,tempres=0;

			for (int i = 0; i < stringsize; ++i)
				{
					// scanf("%c",&s); will give errors
					scanf(" %c",&s);
					
					if(done) {continue;}
					if(s=='Z') {printf("0\n"); done = true;}
					if(s=='R') {

						if(temp=='D') {maxRes = min (maxRes , tempres) ;temp='R'; tempres=0;}
						else 
						{
							temp = 'R';
							tempres=0;
						}

					}
					if(s=='D')
					{

						if(temp=='R') {maxRes = min ( maxRes , tempres) ;temp='D';tempres=0;}
						else 
						{
						
							temp = 'D';
							tempres=0;
						}

					}

					tempres++;

				
				}	

				


				
				
if(!done)   printf("%d\n", maxRes);




		}

}
