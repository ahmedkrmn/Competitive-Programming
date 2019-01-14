#include <iostream>
using namespace std;
int main()
{
	int firstnumber,secondnumber,secondnumber1;
	cin >> firstnumber;
	for (int i = firstnumber+1; i < 50 ; ++i)
	{
		int c = 0;
		for (int y = 1; y <= i; ++y)
		{
			if(i%y==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			secondnumber = i;
			break;
		}
	}
	cin >>secondnumber1;
	if (secondnumber1!=secondnumber)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	
}