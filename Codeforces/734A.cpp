#include <iostream>

using namespace std;

int main()
{
	int n,a=0,d=0; char x;
	cin >> n;
	while(n--)
	{
		cin >> x;
		x == 'A' ? a++ : d++;
	}

		if (a==d) {cout << "Friendship" <<endl; }
		else if(a>d)  {cout << "Anton" <<endl; }
		else {cout << "Danik" <<endl; }


}