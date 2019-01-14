#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n==1||n==2)
	{
		cout << "-1" <<endl;
	}
	else 
		for (int i = 100; i >=1 ; --i)
		{
			
			if (n==0)
			{
				break;
			}
			cout << i << " " ;
			n--;
		}
}