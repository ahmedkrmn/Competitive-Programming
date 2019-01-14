#include <iostream>
using namespace std;
int main()
{
	
	long long int series[100];
	series[0]=0;
	series[1]=1;
	long long int number;
	cin >> number;
	if (number==0)
	{
		cout <<"0 0 0"<<endl;
	}
	else if (number==1)
	{
		cout <<"0 0 1"<<endl;
	}
	else if (number==2)
	{
		cout << "1 1 0"<<endl;
	}
	else 
		{for (long long int i = 2; i < 1000; ++i)
	{
		series[i]=series[i-1]+series[i-2];
		if (series[i]==number)
		{

			cout << series[i-1] <<" "<<series[i-3]<<" "<<series[i-4]<<endl;
			break;
		}
	}
	}
}