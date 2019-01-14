#include <iostream>

using namespace std;

int main()
{
	unsigned long long int a,b;
	cin >> a >> b;
	if(a==b) cout << 1; // 2!/2!=1
	else if((5-a%10)+a<=b && (5-int(a%10))>1 /*we used 1 instead of zero so that if the input is 5!/4! it gives 5 and not 0 */ || (10-a%10)+a<=b)  cout << 0 ; //any value that goes through 5 or 10 will return 0 ie. 10!/6! = 0 , 6!/4! = 0 because in the first case 10*... will always give 0 in the unit part and 6*5*.... will give 0 too
	else {
		int res=1;
		for (int i = (a%10)+1; i <= b%10; ++i)
		{
			res*=i;
		}
		cout << res%10;
	}
}