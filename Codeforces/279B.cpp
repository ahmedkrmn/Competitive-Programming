#include <iostream>
//TWO POINTERS PROBLEM
using namespace std;

int main()
{
	int n,k;

	cin >> n >> k;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int p1=0,p2=0,bookc=0,minutec=0,maxBook=0;

	for (; p2 < n; ++p2)
				
		{
			bookc++;

			minutec+=arr[p2];
			while(minutec>k)
			{
				bookc--;
				minutec-=arr[p1];
				p1++;
			}


			maxBook = max ( maxBook,bookc);
			
		}		

	cout << maxBook;


}