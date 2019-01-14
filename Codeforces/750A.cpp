#include <iostream>

using namespace std;

bool valid (int mid , int r)
{

	if (r>=5*mid*(mid+1)/2) return true;

	else
		return false;


}

int BinarySearch(int n, int r)
{
	int start = 0, end = n;
	while(start!=end)
	{
		int mid = start+end+1/2;
		if(valid(mid,r))
			start=mid;

		else 
			end=mid-1;
	}

	return start;



}

int main()

{
	int n,m,r;
	cin >>n >>  m;
	r=240-m;

	cout << BinarySearch(n,r);

}