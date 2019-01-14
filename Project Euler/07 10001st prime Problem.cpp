#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int c,d=0,count=2;
	while (1)
	{
		c=0;
		for (int i = 2; i <= count; ++i)
		{
			if (count%i ==0)
			{
				c++;
			}
		}
		if (c==1)
			{
				d++;
				cout << "we are now at the " << d << "number" << endl;
			}

		if (d==10001)
		{
			break;
		}
		count ++;
	}
	cout << count;

}
