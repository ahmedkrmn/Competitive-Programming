#include <iostream>

using namespace std;
int main()
{
	string _1,_2;
	cin >> _1 >> _2;
	int res=0;
	for (int i = 0; i < _1.size(); ++i)
	{

		if(_1[i]<'a') _1[i]+=32;
		if (_2[i]<'a')	_2[i]+=32;

		if(_1[i]>_2[i]) {res = 1;break;}
		else if(_1[i]<_2[i]) {res = -1 ; break;}

	}

	cout << res;
}