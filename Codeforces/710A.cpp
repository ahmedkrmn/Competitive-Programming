#include <iostream>
using namespace std;
int main()
{
	int r;char c;
	cin >> c>> r;
	if ((c=='a'|| c=='h')&& (r ==1 || r== 8))
	{
		cout << "3\n" ;
	}
	else if (r==1 || r==8 || c=='a' || c=='h')
	{
		cout << "5\n";
	}
	else
		cout <<"8\n";
}