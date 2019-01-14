#include <iostream>
using namespace std;
int main()
{
	string x,s="heidi";
	cin >>x ;
	int counter=0,c_=0;
	int sizee = x.size();
	for (int i = 0; i < sizee; ++i)
	{
		if(x[i]==s[counter]) {c_++; counter++;}
	}

	c_ == 5 ? cout << "YES" << endl : cout << "NO" << endl;
}