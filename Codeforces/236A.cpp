#include <iostream>

using namespace std;
int main()
{
	bool arr[128]={0};
	char x;
	int distinct=0;
	while(cin >> x)
	{

		if(arr[x]==0) {distinct++; arr[x]++;}
		
	}

	distinct&1 == 1 ? cout << "IGNORE HIM!" << endl : cout << "CHAT WITH HER!" <<endl;
}