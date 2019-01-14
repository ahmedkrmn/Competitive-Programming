/*input
5
5 3 2 7 9
1 7 4 2 4
5 3 2 4 6
1 3 4 5 1
1 4 5 6 3
1
1
0
*/
# include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int dimension,testcases=0;

	while(cin>>dimension)
	{

		int d = dimension/2;
	int c = (dimension-1)/2;
	int e = 1;
	
		if(dimension==0){break;}
	
	
	else
	{
		int square[dimension][dimension];
		for (int x = 0; x < dimension; ++x)
		{
			for (int y = 0; y < dimension; ++y)
			{
				cin >> square[x][y];
			}
		}
		int nofsquares = ceil(dimension/2.0);

		int tempnoifsquares=nofsquares;
		int nofsquarewithsum[nofsquares+1]={0},tempsum=0;
		while(tempnoifsquares--)
		{
			
		for (int i = (dimension-1)-d; i <= (dimension-1)-c ; ++i)
		{
			for (int j = (dimension-1)-d; j <= (dimension-1)-c ; ++j)
			{
				
				
				nofsquarewithsum[nofsquares-e]+=square[i][j];
				
			}
			
			
		}
		e++;
		d++;
		c--;

	}
		testcases++;
		cout <<"Case "<<testcases<<": ";
	for (int i = 0; i < nofsquares; ++i)
	{
		
		cout<< nofsquarewithsum[i]-nofsquarewithsum[i+1];
		if (i<nofsquares-1) //because this dumb ass bitch gave presentation error when there was a space before the new line
		{
			cout <<" ";
		}
	}
	cout <<"\n";
}

}
}
