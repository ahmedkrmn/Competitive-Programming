#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int numberofxdigits,baseofx,numberofydigits,baseofy,digit;
	long long int sumx=0,sumy=0;
	
	cin >> numberofxdigits >> baseofx;
	for (int i = numberofxdigits-1; i >=0 ; i--)
		{	
			cin >> digit;
			sumx+=(pow(baseofx,i))*digit;
		}
	cin >>numberofydigits>>baseofy;
	for (int i = numberofydigits-1; i >= 0; i--)
		{
			cin >> digit;
			sumy+=(pow(baseofy,i))*digit;
		}
	if (sumx>sumy) cout <<">"<<endl;
	if (sumx<sumy) cout <<"<"<<endl;
	if (sumx==sumy) cout <<"="<<endl;
}