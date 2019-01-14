#include <iostream>
#include <limits.h>
using namespace std;

int absWITHOUTbranching (int n)
{
	int mask = n >> sizeof(int) * CHAR_BIT - 1; // n >> 31 (CHAR_BIT = NUMBER OF BITS IN ONE BYTE =8)
	return (mask+n)^mask;
}

int main()
{

	int n,standC=0;
	cin >> n;
	char arr[n+1];
	arr[n]='\0'; //You need to add a null terminator if we are taking the input in the form of a loop and printing int as cout << arr;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if(arr[i]=='X') standC++;
	}
	int index=0;

	int diff = standC-n/2;

	if(standC==n/2) cout << 0 << "\n" << arr << endl;

	else if(standC>n/2)
	{
		while(standC>n/2)
		{
			if(arr[index]=='X') {arr[index]= 'x'; standC--; }
			index++;
			
		}
		cout << absWITHOUTbranching(diff) << "\n" << arr << endl;
	}

	else
	{
		while(standC<n/2)
		{
			if(arr[index]=='x') {arr[index] = 'X' ; standC++; }
			index++;
		}

		cout << absWITHOUTbranching(diff) << "\n" << arr << endl;
	}

}