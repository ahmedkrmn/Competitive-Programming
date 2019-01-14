#include <iostream>

using namespace std;

int main()
{
	int n , noGroups = 0; 
	char prev = ' ' , x;
	cin >> n;
	while(n--)
	{
		cin >> x;
		cin.ignore();

		if(x!=prev) noGroups++;

		prev=x;
	}

	cout << noGroups;
}