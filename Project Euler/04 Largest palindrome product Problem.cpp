#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int tempx, tempy, i, _1digitfromleft, _1digitfromright, _2digitfromleft, _2digitfromright, _3digitfromleft, _3digitfromright, max=0;
	for (i = 100000; i <= 998001; ++i)   //998001 is the max number resulting from the product of two three digit numbers : 999*999
	{
		_1digitfromright = i;
		_2digitfromright = (i/10);
		_3digitfromright = (i/100);
		_3digitfromleft = (i/1000);
		_2digitfromleft = (i/10000);
		_1digitfromleft = (i/100000);	
		if (_1digitfromleft==_1digitfromright && _2digitfromleft==_2digitfromright && _3digitfromleft==_3digitfromright)
			for (int y = 100; y <= 999; ++y) //we will loop through all the values of three digit numbers
			{
				float x=float(i)/y;
				if (x==ceil(x) && x <=999) // check to find whether x is an integer or a float (ie: i is divisible by y) and another check to assign the max value of  x to 999 (ie: it should be a three digit number too)
				max=i; 
				tempy=y; //a temp variable to store the value of y at this moment
				tempx=int(x);  //a temp variable to store the value of y at this moment
			}

	}
	cout << max << " " << tempx << " "<< tempy <<endl;
}
