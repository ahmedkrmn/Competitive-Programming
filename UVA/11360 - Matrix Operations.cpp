#include <iostream>
#include <string>
using namespace std;
int main()
{
	int testcases;
	cin >> testcases;
	int testcases1=0;
	while(testcases--)
	{
	    testcases1++;
		int n;
		cin >> n;
		int matrix[n][n];
		char digit;
		for (int i = 0; i < n; ++i)
		{
			for (int y = 0; y < n; ++y)
			{
				cin >> digit;
				int digitint = digit - '0';
				matrix[i][y]=digitint;
			}
		}
		int operations;
		cin >> operations;
		cin.ignore();
		
		while(operations--)
		{
			
			string operation;
			getline(cin,operation);
			if (operation=="transpose")
			{
				for (int i = 0; i < n; ++i)
				{
					for (int y = i + 1; y < n; ++y)
					{
						int temp = matrix[i][y];
						matrix[i][y] = matrix[y][i];
						matrix[y][i]=temp;
					}
				}
			}
			else if (operation=="inc")
			{
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < n; ++j)
					{
						matrix[i][j]+=1;
						if (matrix[i][j]==10)
						{
							matrix[i][j]=0;
						}
					}
				}
			}
			else if (operation=="dec")
			{
				for (int i = 0; i < n; ++i)
				{
					for (int y = 0; y < n; ++y)
					{
						matrix[i][y]-=1;
						if (matrix[i][y]==-1)
						{
							matrix[i][y]=9;
						}
					}
				}
			}
			else if (operation[0]=='r')
			{
				int row1= operation[4]-'0'-1;
				int row2= operation[6]-'0'-1;
				for (int i = 0; i < n; ++i)
				{
					int temp = matrix[row1][i];
					matrix[row1][i]=matrix[row2][i];
					matrix[row2][i]=temp;
				}
			}
			else if (operation[0]=='c')
			{
				int col1= operation[4]-'0'-1;
				int col2= operation[6]-'0'-1;
				for (int i = 0; i < n; ++i)
				{
					int temp = matrix[i][col1];
					matrix[i][col1]=matrix[i][col2];
					matrix[i][col2]=temp;
				}
			}
    
		}
		cout <<"Case #" << testcases1<<endl;
		for (int i = 0; i < n; ++i)
		{
		for (int y = 0; y < n; ++y)
		{
			cout<<matrix[i][y];
		}
		cout <<"\n";
		}
		cout <<"\n";
	}
}
