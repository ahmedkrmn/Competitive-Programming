#include <iostream>
using namespace std;
int main()
{
	double a1,a2,a3,l,w,h,c=0;
	cin >> a1 >> a2 >> a3;
	for (l = 1; l <= 10000; l++)
	{

		for (w = 1; w <= 10000; w++)
		{
			if (a3==l*w && a1/a2==l/w)
			{
				c++;
				break;
				
			}
		}
		if (c)
			break;
	}
	h = a1/l;

	cout << l*4+w*4+h*4;

}