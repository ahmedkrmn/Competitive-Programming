#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int l , w , r1 ,r2 ;

	const double PI = 3.14159265359;

	while((cin >> l >> w >> r1 >> r2 ) && !(l==w && w==r1 && r1==r2 && r2==0))
	{
			if(2*r1<=w && 2*r1 <= l && 2*r2<=w && 2*r2 <=l)
			{
				int deltax = l-r2-r1;
				int deltay = r2-w+r1;

				double dist = sqrt(deltax*deltax+deltay*deltay);
				if (dist >= r1 + r2) cout << "S" <<endl;
				else 
				cout << "N" <<endl;

			}
			else 
				cout << "N" <<endl;



	}
}