#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int maxrank,currentrank,dreamrank,sum=0;
	cin >> maxrank;
	int years[maxrank-1];
	for (int i = 0; i < maxrank-1; ++i)
	{
		cin >> years[i];
	}
	cin >> currentrank >> dreamrank;
	for (int i = currentrank-1; i < dreamrank-1; ++i)
	{
		sum +=years[i];
	}
	cout << sum << endl;

}