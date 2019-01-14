#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int  n;
	cin >>n;
	int last,beforelast;
	if (n>=0)
	{
		cout << n << endl;
	}
	else
	{
		n=abs(n);
		last = n%10;
		beforelast=(n/10)%10;
		if (last>beforelast)
		{
			n/=10;
			cout << "-"<<n;
		}
		else
		{
			if(n<=99)
			{
				if (last==0)
				{
					cout <<"0";
				}
				else
				{ 
					cout<<"-"<<last;
				}
			}
			else if (last==beforelast)
			{
				cout <<"-"<<n/10;
			} 
			else 
			{
				cout<<"-"<<n/100<<last;
			}
		}	
	}	
}