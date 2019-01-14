#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n][2];
	int c = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int t = i+1; t < n; ++t)
		{
			c = (arr[i][0]==arr[t][1]) + (arr[i][1] == arr[t][0]) + c;
		}
	}

	cout << c;
}