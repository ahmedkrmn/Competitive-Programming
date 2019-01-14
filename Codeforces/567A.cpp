#include <iostream>
using namespace std;
int main()
{
    int numberofcities;
	cin >> numberofcities;
	long long int coordinate,city[numberofcities];
	for (int i = 0; i < numberofcities; ++i)
	{
		cin >> coordinate;
		city[i]=coordinate;
	}
	for (int i = 0; i < numberofcities; ++i)
	{
		if (i==0 )
		{cout << city[i+1]-city[i] << " " << city[numberofcities-1]-city[i] <<endl;}
		else if (i==numberofcities-1)
		{cout << city[i]-city[i-1] << " " << city[i]-city[0] <<endl;}
		else
		{cout << min(city[i]-city[i-1],city[i+1]-city[i]) << " " << max(city[i]-city[0],city[numberofcities-1]-city[i])<<endl;}
	}
}