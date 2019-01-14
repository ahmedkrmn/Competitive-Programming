#include <iostream>
using namespace std;
int main()
{
	int n,k,tillnowtheyare;
	int digit,c=0;
	long long int a;
	cin >> n >> k;
	tillnowtheyare = n;
	for (int i = 1; i <= n; ++i)
	{
		cin >>a;
		c=0;
		while(1)
		{
			digit = a%10;
			if (digit==4 || digit ==7)
			{
				c++;
			}
			if (c>k)
			{
				tillnowtheyare--;
				break;
			}
			if (a==0)
			{	
				break;
			}
			a/=10;
		}
	}
	cout << tillnowtheyare << endl;

}