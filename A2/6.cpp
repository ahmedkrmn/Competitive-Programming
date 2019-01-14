#include <iostream>
using namespace std;

int main()
{
    int t,n,c1,c2;
    cin >> t;
    while(t--)
    {
        cin >> n >> c1 >> c2;
        int _1=1 , _2=2;
        int temp;

        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            if(i==0) {if(temp==c1) _1=0;}

            else if (i==n-1) {if(temp==c2) _2=0;}
        }

        if(_1+_2==0) cout << "BOTH" <<endl;
        else if(_1+_2==2) cout << "EASY" <<endl;
        else if(_1+_2==1) cout << "HARD" <<endl;
        else if(_1+_2==3) cout << "OKAY" <<endl;




    }


}   