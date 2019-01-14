#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,k,house=10000000;
	cin >> n >> m >> k;
	m--;
	int houseprices[n];
	for (int i = 0; i < n; ++i)
		{
			cin >> houseprices[i];
		}	
	for (int i = 0; i < n; ++i)
	{
		if (houseprices[i]!=0 && houseprices[i]<=k)
		{
			
			house = min(abs(m-i),house);
		}
	}
	cout << house*10 << endl;


}