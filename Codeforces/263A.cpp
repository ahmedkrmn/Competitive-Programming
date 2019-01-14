#include <iostream>

using namespace std;

int absWITHOUTbranching (int x)
{
	int mov = x >> 31;
	return (mov+x)^mov;
}


int main()
{
	int x , locationinFlattened = 0;
	while(cin >> x)
	{
		
		if(x==1) break;
		locationinFlattened++;
	}

	int rowIndex = locationinFlattened/5;
	int coloumnIndex = locationinFlattened%5;

	// adding the two deltas : first delta is the rows delta the number of blocks between my location and the destination in terms of row blocks and second delta in terms of coloumn blocks

	cout << absWITHOUTbranching(rowIndex-2) + absWITHOUTbranching(coloumnIndex-2) << endl;

}