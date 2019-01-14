#include <iostream>

using namespace std;

int main()
{
	int n , Unsolved =0 , Police = 0 , in;
	cin  >> n;
	while(n--)
	{
		cin >> in;
		if(in== -1 &&  Police==0) Unsolved++;
		else if(in == -1) Police--;
		else
			Police+=in;
	}

	cout << Unsolved;
}