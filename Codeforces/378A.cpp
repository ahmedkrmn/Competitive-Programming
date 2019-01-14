#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,wina=0,draw=0,winb=0,counter=1,diffa,diffb;
	cin >> a >> b ;
	while(1)
	{
		if (abs(counter-a)<abs(counter-b))
		{
			wina++;
		}
		else if (abs(counter-a)>abs(counter-b))
		{
			winb++;
		}
		else
			draw++;
		counter ++;

		if (counter==7)
		{
			break;
		}
		
	}
		cout << wina <<" "<< draw<< " " << winb ;
		return 0;
	
}