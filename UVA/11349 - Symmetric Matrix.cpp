#include <iostream>
using namespace std;

int main()
{
	int dimension,testcases;
	
	char n , equal;
	cin >> testcases;
	for (long long int x = 1; x <= testcases; ++x)
	{
		cin >> n >> equal >> dimension;
		long long int matrix[dimension][dimension];
		bool symmetric = true;
		for (long long int i = 0; i < dimension; ++i)
		{
			for (long long int j = 0; j < dimension; ++j)
			{
				cin >> matrix[i][j];
			}
		}

		for ( long long int i = 0; i < dimension; ++i)
		{
			for (long long int j = 0; j < dimension; ++j)
			{
				if (matrix[i][j]!=matrix[dimension-1-i][dimension-1-j] || matrix[i][j]<0)
				{
					symmetric = false;
					break;
				}
			}
		}
		if (symmetric) {cout << "Test #"<<x<<": Symmetric."<<endl;}
		else {cout <<"Test #"<<x<<": Non-symmetric." << endl;}
	
	}
}
