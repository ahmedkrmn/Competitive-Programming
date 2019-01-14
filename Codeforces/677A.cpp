#include <iostream>

using namespace std;

int main()
{
	int n , h , q , c = 0;
	cin >> n >> h;

	while(n--)
	{
		cin >> q;
		if(q>h) c+=2;
		else 
			c++;
	}

	cout << c;

}