#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string x;
    while(t--)
    {
        cin >> x;
        int size = x.size();
        int Markcounter=0,X=0,Y=0;
        for (int i = 0; i < size; ++i)
        {
            if(x[i]=='U') Y++;
            else if(x[i]=='L') X--;
            else if(x[i]=='D') Y--;
            else if(x[i]=='R') X++;
            else
                Markcounter++;
        }

        cout << X-Markcounter << " " << Y- Markcounter << " " << X + Markcounter<< " " << Y  + Markcounter<< endl;
 

    }



}