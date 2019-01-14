#include <iostream>
#include <cmath>
using namespace std;

bool valid (int mid , unsigned long long int a , unsigned long long int b)
{
	if(a*pow(3,mid)>b*pow(2,mid)) return true;
	else
		return false;
}

int main()
{
	unsigned long long int a,b;
	cin >> a >> b;
	int start = 1 , end = 80;
	int counter=0;
	while(start!=end)
	{
		counter++;
		int mid = (start+end)/2;
		if(valid(mid,a,b))
			end=mid;
		else
			start = mid +1;
	}

	cout << start << endl;

}