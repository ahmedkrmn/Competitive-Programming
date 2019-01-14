#include <iostream>

using namespace std;

int main()
{
	string x , xq;

	int c = 1 , xIndex=0;

	cin >> x >> xq;

	for (int i = 0; i < xq.size(); ++i)
	{
		if(xq[i]==x[xIndex]) { c++; xIndex++; }
	}

	cout << c ;
}