#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m1,m2,propab=0;
	cin >> m1 >> m2;
	int i = max(m1,m2);
	for (i; i <= 6; ++i)
	{
		propab++;
	}
	if (6%propab==0)
	{
		cout << "1/" << 6/propab << endl;
	}
	else if(propab==4)
		cout <<"2/3"<<endl;
	else
		cout <<propab<<"/6"<< endl;

}