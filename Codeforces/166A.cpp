#include <iostream>
#include <vector>

using namespace std;


void sorter (std::vector<std::vector<int> > &v1)
{
	
	int size = v1.size();

	for (int i = 0; i < size; ++i)
	{
		for (int y = 0; y < size-1; ++y)
		{
			if(v1[y][0]<v1[y+1][0]||(v1[y][1]>v1[y+1][1] && v1[y][0]==v1[y+1][0])) swap(v1[y],v1[y+1]);
		}

	}


	return;


}



int main()
{
	int n, k;

	cin >> n >> k;

	vector < vector <int> > v;

	for (int i = 0; i < n; ++i)
	{
		std::vector<int> temp(2);
		cin >> temp[0] >> temp[1];

		v.push_back(temp);
	}

	sorter (v);

	int counter = 0;

	for (int i = k; i < n; ++i)
	{
		if(v[i]==v[k-1]) counter++;
		else 
			break;		
	}

	for (int i = k-1; i >= 0  ; --i)
	{
		if(v[i]==v[k-1]) counter++;
		else
			break;
	}

	cout << counter;


	

}