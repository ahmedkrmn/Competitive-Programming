#include <iostream>
using namespace std;
int main()
{
	int numberofboys,numberofgirls,k;
	cin >> numberofboys >> numberofgirls;
	k=(numberofgirls+numberofboys)-1;
	cout<< k <<endl;

    int i =1;
		for (int y = 1; y <= numberofgirls; ++y)
		{
			cout << i << " " << y << endl;

        }
    while(1)
    {
        if(i==numberofboys)
            break;
        else
             i+=1;
            cout<<i << " 1"<<endl;
    }
}