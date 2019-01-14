#include <iostream>

using namespace std;

int main()
{
	int n,counter=0; char x , prev=' '; cin >> n;
	while(n--)
	{
		cin >> x;
		x == prev ? counter++ : counter ;
		prev = x;
	}

	cout << counter;
}