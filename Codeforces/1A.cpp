#include <iostream>
using namespace std;
int main()
{
	long long n,m,a,width,length;
	cin >> n >> m >>a;
	if (n%a==0)
	{
		width = n/a;
	}
	else if (n%a!=0)
	{
		width = n/a+1;
	}
	if (m%a==0)
	{
		length = m/a;
	}
	else if (m%a!=0)
	{
		length = m/a+1;
	}
	cout << length*width; 
}