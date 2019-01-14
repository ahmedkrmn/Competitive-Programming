#include <iostream>

using namespace std;

int main()
{
	int x ,cnt=0;
	cin >> x;
	while(x) {cnt++; x-=x&-x;}
	cout << cnt;
}