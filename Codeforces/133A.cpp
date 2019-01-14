#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char x[101];
	int c=0;
	cin >> x;
	for (int i = 0; i < strlen(x); ++i) //because if we said i<101 there might be H 9 or Q in the garbage
	{
		if (x[i]=='H' || x[i] =='Q' || x[i]=='9')
		{
			c++;
		}
	}
if (c!=0)
{
	cout <<"YES" <<endl;
}
else
cout <<"NO"<<endl;
}