#include <iostream>

using namespace std;


int main()
{
	int problems,c=0,s=0,q;
	cin >> problems;
	for (int i = 0; i < problems; ++i)
	{
		c=0;

		for (int i = 0; i < 3; ++i)
		{
			cin >> q;
			c+=q;
		}

		if(c>1) s++;
		
	}

	cout << s;

}