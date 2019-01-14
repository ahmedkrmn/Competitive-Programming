#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int nosoldiers,diff,tempdiff=999999,first,second;
string answer;
cin >> nosoldiers;
int circle[nosoldiers+1];
for (int i = 0; i < nosoldiers; ++i)
{
	cin >> circle[i];
}
circle[nosoldiers]=circle[0];
for (int i = 0; i < nosoldiers; ++i)
{
	diff = abs(circle[i]-circle[i+1]);
	
	if (diff<tempdiff)
	{
		first = i+1;
		second = i+2;
		
		tempdiff=diff;
	}
	
}
if (second==nosoldiers+1)
{
	second = 1;
}
cout << first << " "<<second;
}