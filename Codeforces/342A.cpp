#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int numbers[n],partition[3],dublicate[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i];
	}
	int nopartitions = n/3;
	sort(numbers,numbers+n);

	int q =0,z=0,counter=0;
	bool check = true;
	for (int x = 0; x < nopartitions; ++x)
	{
		int qdash = q;
		for (int i = 0; i < 3; ++i)
		{
			
			partition[i]=numbers[qdash];
			qdash+=nopartitions;
		}
		for (int i = 0; i < 2; ++i)
		{
			if(partition[i+1]%partition[i]!=0 || partition[i]==partition[i+1])
				{check = false;
					
				break;}
		}
		if (!check)
		{
			break;
		}
		for (int i = 0; i < 3; ++i)
		{
			dublicate[z]=partition[i];
			z++;
		}
		q++;
	}
	if(!check) 
	{
		cout << "-1" << endl;
	}
	else 
	{
		for (int i = 0; i < n; ++i)
		{	
			if (counter%3==0 && counter!=0)
			{
				cout <<"\n";
			}
			cout << dublicate[i]<<" ";
			counter++;
		}
	}
}