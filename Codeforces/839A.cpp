#include <iostream>
using namespace std;

int main() {
	int n,k,Danaryes=0,candies,sum=0,days=0;
	cin >> n >> k;
	
	while(n--)
	{
	    cin >> candies;
	    candies+=Danaryes;
	    Danaryes=0;
	    if(candies>8) {Danaryes+=-8+candies; candies=8;}
	    sum+=candies;
	    days++;
	    if(sum>=k) {cout << days << endl; break;}
	}
	if(sum<k) cout << -1 << endl;
	
	return 0;
}